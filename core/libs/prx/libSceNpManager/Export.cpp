#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"
#include "prx/libSceUserService/UserService.hpp"
#include <array>
#include <atomic>
#include <mutex>
#include <unordered_set>

// PSN is not emulated: the user is reported as signed out and online queries fail.
static constexpr int SCE_NP_ERROR_INVALID_ARGUMENT = static_cast<int>(0x80550003);
static constexpr int SCE_NP_ERROR_SIGNED_OUT = static_cast<int>(0x80550006);
static constexpr int SCE_NP_ERROR_USER_NOT_FOUND = static_cast<int>(0x80550007);
static constexpr int SCE_NP_ERROR_CALLBACK_ALREADY_REGISTERED = static_cast<int>(0x80550008);
static constexpr int SCE_NP_ERROR_CALLBACK_NOT_REGISTERED = static_cast<int>(0x80550009);
static constexpr int SCE_NP_ERROR_INVALID_SIZE = static_cast<int>(0x80550011);
static constexpr int SCE_NP_ERROR_REQUEST_NOT_FOUND = static_cast<int>(0x80550014);
static constexpr int SCE_NP_ERROR_CALLBACK_MAX = static_cast<int>(0x8055001D);
static constexpr uint32_t NP_STATE_SIGNED_OUT = 1;
static constexpr int NP_POLL_ASYNC_FINISHED = 0;
static constexpr uint32_t NP_REACHABILITY_STATE_UNAVAILABLE = 0;
static constexpr uint32_t NP_GAME_PRESENCE_STATUS_OFFLINE = 0;

static std::atomic<int> g_nextRequest{1};

namespace {
std::mutex reachabilityMutex;
void* reachabilityCallback = nullptr;
void* reachabilityUserdata = nullptr;
std::mutex requestMutex;
std::unordered_set<int> liveRequests;

int AddRequest() {
    const int reqId = g_nextRequest.fetch_add(1, std::memory_order_relaxed);
    std::lock_guard lock(requestMutex);
    liveRequests.insert(reqId);
    return reqId;
}

int SignedOutRequest(int reqId) {
    if (reqId == 0) return SCE_NP_ERROR_INVALID_ARGUMENT;
    std::lock_guard lock(requestMutex);
    return liveRequests.count(reqId) ? SCE_NP_ERROR_SIGNED_OUT : SCE_NP_ERROR_REQUEST_NOT_FOUND;
}

using NpStateCallbackA = void (APS5_VABI *)(int userId, uint32_t state, void* userdata);
using NpStateCallback = void (APS5_VABI *)(int userId, uint32_t state, NpId* npId, void* userdata);

constexpr int NP_STATE_CALLBACK_MAX = 8;

struct StateCallbackA {
    NpStateCallbackA callback = nullptr;
    void* userdata = nullptr;
    bool pending = false;
};

struct StateCallback {
    NpStateCallback callback = nullptr;
    void* userdata = nullptr;
    bool pending = false;
};

std::mutex stateMutex;
std::array<StateCallbackA, NP_STATE_CALLBACK_MAX> stateCallbacksA;
StateCallback stateCallback;
}

extern "C" {

int APS5_VABI sceNpAsmAbort(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientAbortRequest(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientClearNpTitleToken(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientClearNpTitleTokenA(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientCreateRequest2(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientCreateResourceContext(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientCreateResourceContext2(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientDeleteRequest(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientDeleteResourceContext(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientDeleteResourceContext2(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetAppId(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetCacheControlMaxAge(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetGameNpTitleInfo(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetGameNpTitleToken(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetGameTitleBanInfo(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetNpComInfo2(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetNpComInfo2A(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetNpComInfo3(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetNpComInfo4(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetNpTitleId(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetNpTitleToken(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetNpTitleToken2(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetNpTitleTokenA(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetRelatedGameNpTitleIds(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetRelatedGameNpTitleIdsA(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetRelatedGameNpTitleIdsResult(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetServiceBaseUrl(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetServiceBaseUrlA(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetServiceBaseUrlWithNpTitleId(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetServiceBaseUrlWithNpTitleIdA(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetServiceIdInfo(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientGetServiceIdInfoA(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientInitialize(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientSetNpTitleId(void) {
    return 0;
}
int APS5_VABI sceNpAsmClientTerminate(void) {
    return 0;
}
int APS5_VABI sceNpAsmCreateConnection(void) {
    return 0;
}
int APS5_VABI sceNpAsmCreateRequest(void) {
    return 0;
}
int APS5_VABI sceNpAsmDeleteConnection(void) {
    return 0;
}
int APS5_VABI sceNpAsmDeleteRequest(void) {
    return 0;
}
int APS5_VABI sceNpAsmGenerateNpTitleToken(void) {
    return 0;
}
int APS5_VABI sceNpAsmGenerateNpTitleToken2(void) {
    return 0;
}
int APS5_VABI sceNpAsmGetNpCommInfo(void) {
    return 0;
}
int APS5_VABI sceNpAsmGetNpCommInfo2(void) {
    return 0;
}
int APS5_VABI sceNpAsmGetRelatedGameNpTitleIds(void) {
    return 0;
}
int APS5_VABI sceNpAsmGetServiceBaseUrl(void) {
    return 0;
}
int APS5_VABI sceNpAsmGetServiceIdInfo(void) {
    return 0;
}
int APS5_VABI sceNpAsmInitialize(void) {
    return 0;
}
int APS5_VABI sceNpAsmTerminate(void) {
    return 0;
}
int APS5_VABI sceNpCheckNpAvailabilityA(int reqId, int userId) {
    if (userId == USER_SERVICE_USER_ID_INVALID) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SignedOutRequest(reqId);
}
int APS5_VABI sceNpGetAccountDateOfBirthA(int userId, void* dateOfBirth) {
    if (!dateOfBirth || userId == USER_SERVICE_USER_ID_INVALID) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_SIGNED_OUT;
}
int APS5_VABI sceNpGetAccountLanguageA(int reqId, int userId, void* language) {
    if (!language || userId == USER_SERVICE_USER_ID_INVALID) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SignedOutRequest(reqId);
}
int APS5_VABI sceNpGetGamePresenceStatus(const NpOnlineId* onlineId, uint32_t* status) {
    if (!onlineId || !status) return SCE_NP_ERROR_INVALID_ARGUMENT;
    *status = NP_GAME_PRESENCE_STATUS_OFFLINE;
    return 0;
}
int APS5_VABI sceNpGetGamePresenceStatusA(int userId, uint32_t* status) {
    if (!status || userId == USER_SERVICE_USER_ID_INVALID) return SCE_NP_ERROR_INVALID_ARGUMENT;
    *status = NP_GAME_PRESENCE_STATUS_OFFLINE;
    return 0;
}
int APS5_VABI sceNpGetParentalControlInfoA(int reqId, int userId, int8_t* age, void* info) {
    if (!age || !info || userId == USER_SERVICE_USER_ID_INVALID) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SignedOutRequest(reqId);
}
int APS5_VABI sceNpIdMapperAbortRequest(void) {
    return 0;
}
int APS5_VABI sceNpIdMapperAccountIdToNpId(void) {
    return 0;
}
int APS5_VABI sceNpIdMapperAccountIdToOnlineId(void) {
    return 0;
}
int APS5_VABI sceNpIdMapperCreateRequest(void) {
    return 0;
}
int APS5_VABI sceNpIdMapperDeleteRequest(void) {
    return 0;
}
int APS5_VABI sceNpIdMapperNpIdToAccountId(void) {
    return 0;
}
int APS5_VABI sceNpIdMapperOnlineIdToAccountId(void) {
    return 0;
}
int APS5_VABI sceNpInGameMessageAbortHandle(void) {
    return 0;
}
int APS5_VABI sceNpInGameMessageCheckCallback(void) {
    return 0;
}
int APS5_VABI sceNpInGameMessageGetMemoryPoolStatistics(void) {
    return 0;
}
int APS5_VABI sceNpInGameMessagePrepareA(void) {
    return 0;
}
int APS5_VABI sceNpInGameMessageSendDataA(void) {
    return 0;
}
int APS5_VABI sceNpIntGetAppType(void) {
    return 0;
}
int APS5_VABI sceNpIntGetGamePresenceStatus(void) {
    return 0;
}
int APS5_VABI sceNpIntGetNpTitleId(void) {
    return 0;
}
int APS5_VABI sceNpIntGetNpTitleIdSecret(void) {
    return 0;
}
int APS5_VABI sceNpIntRegisterCheckCallback(void) {
    return 0;
}
int APS5_VABI sceNpIntRegisterGamePresenceCallback(void) {
    return 0;
}
int APS5_VABI sceNpIsPlusMember(int, bool* isMember) {
    if (!isMember) return SCE_NP_ERROR_INVALID_ARGUMENT;
    *isMember = false;
    return 0;
}
int APS5_VABI sceNpManagerIntAbortRequest(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntAddActiveSigninStateCallback(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntAddOnlineIdChangeCallback(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntAddPlusMemberTypeCallback(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntAddSigninStateCallback(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntAuthGetAuthorizationCode(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntAuthGetIdToken(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntCheckNpAvailability(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntCheckNpAvailabilityByPid(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntCheckNpState(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntCheckNpStateA(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntClearGameAccessToken(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntClearOnlineIdChangeFlag(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntClearTicket(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntClearUsedFlag(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntClearVshAccessToken(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntCreateAuthenticationTicket(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntCreateLoginContext(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntCreateLoginRequest(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntCreateRequest(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntDeleteLoginContext(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntDeleteRequest(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccessTokenViaImplicitFlow(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountAge(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountCountry(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountCountryA(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountCountrySdk(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountDateOfBirthSdk(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountId(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountIdSdk(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountLanguage(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountLanguageA(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountNpEnv(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAccountType(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetActiveSigninState(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAuthServerErrorFlag(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAuthorizationCode(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetAuthorizationCodeWithPsnoUri(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetClientCredentialAccessToken(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetCommunicationRestrictionStatus(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetGameAccessToken(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetIssuerId(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetNpEnv(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetNpId(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetNpIdByOnlineId(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetNpIdSdk(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetOfflineAccountId(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetOnlineId(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetOnlineIdChangeFlag(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetOnlineIdSdk(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetParentalControlFlag(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetParentalControlInfo(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetPlusMemberType(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetPlusMemberTypeNB(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetServerError(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetSigninState(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetSigninTelemetryInfo(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetTicket(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetTicketA(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetTitleToken(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetTitleTokenWithCheck(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetUserIdByAccountId(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetUserIdByNpId(void) {
    return 0;
}
int APS5_VABI sceNpManagerIntGetUserIdByOnlineId(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntGetUserIdByOnlineIdSdk(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntGetUserList(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntGetUserNum(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntGetVshAccessToken(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntGetVshAccessTokenWithCheck(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntGetVshClientId(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntIsSubAccount(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntIsTemporarySignout(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntIsUnregisteredClientError(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntLoginAuthenticate(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntLoginBind(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntLoginCreateAuthenticationTicket(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceNpManagerIntLoginGetAccessToken(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpAbortRequest(int req_id) {
    std::lock_guard lock(requestMutex);
    return liveRequests.count(req_id) ? 0 : SCE_NP_ERROR_REQUEST_NOT_FOUND;
}

int APS5_VABI sceNpCheckCallback(void) {
    std::array<StateCallbackA, NP_STATE_CALLBACK_MAX> callbacksA;
    StateCallback legacy;
    {
        std::lock_guard lock(stateMutex);
        callbacksA = stateCallbacksA;
        legacy = stateCallback;
        for (auto& entry : stateCallbacksA) entry.pending = false;
        stateCallback.pending = false;
    }
    if (legacy.pending) legacy.callback(USER_SERVICE_INITIAL_USER_ID, NP_STATE_SIGNED_OUT, nullptr, legacy.userdata);
    for (const auto& entry : callbacksA) {
        if (entry.pending) entry.callback(USER_SERVICE_INITIAL_USER_ID, NP_STATE_SIGNED_OUT, entry.userdata);
    }
    return 0;
}

int APS5_VABI sceNpCheckNpAvailability(std::int32_t requestId, const NpOnlineId* onlineId, std::uint8_t* available) {
 if (requestId == 0 || onlineId == nullptr) return SCE_NP_ERROR_INVALID_ARGUMENT;
 if (available != nullptr) *available = 0;
 return SCE_NP_ERROR_USER_NOT_FOUND;
}

int APS5_VABI sceNpCheckNpReachability(int req_id, int user_id) {
 (void)req_id;
 (void)user_id;
 return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpCheckPremium(int req_id, const NpCheckPremiumParameter* param, NpCheckPremiumResult* result) {
    (void)req_id;
    (void)param;
    (void)result;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpCreateAsyncRequest(const NpCreateAsyncRequestParameter* param) {
    (void)param;
    return AddRequest();
}

int APS5_VABI sceNpCreateRequest(void) {
    return AddRequest();
}

int APS5_VABI sceNpDeleteRequest(int req_id) {
    std::lock_guard lock(requestMutex);
    if (!liveRequests.count(req_id)) return SCE_NP_ERROR_REQUEST_NOT_FOUND;
    liveRequests.erase(req_id);
    return 0;
}

int APS5_VABI sceNpGetAccountAge(int req_id, int user_id, uint8_t* age) {
 (void)req_id;
 (void)user_id;
 if (!age) return SCE_NP_ERROR_INVALID_ARGUMENT;
 return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpGetAccountCountry(const NpOnlineId* online_id, void* country_code) {
    if (!online_id || !country_code) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_USER_NOT_FOUND;
}

int APS5_VABI sceNpGetAccountDateOfBirth(const NpOnlineId* online_id, void* date_of_birth) {
    if (!online_id || !date_of_birth) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_USER_NOT_FOUND;
}

int APS5_VABI sceNpGetAccountLanguage(int req_id, const NpOnlineId* online_id, void* language) {
    (void)req_id;
    if (!online_id || !language) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_USER_NOT_FOUND;
}

int APS5_VABI sceNpGetParentalControlInfo(int req_id, const NpOnlineId* online_id, int8_t* age, void* info) {
    (void)req_id;
    if (!online_id || !age || !info) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_USER_NOT_FOUND;
}

int APS5_VABI sceNpGetUserIdByOnlineId(const NpOnlineId* online_id, int* user_id) {
    if (!online_id || !user_id) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpCheckPlus(int req_id, const void* param, void* result) {
    if (req_id == 0 || !param || !result) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpNotifyPlusFeature(const void* param) {
    (void)param;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpGetAccountId(const NpOnlineId* online_id, uint64_t* account_id) {
    if (!online_id || !account_id) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpSetGamePresenceOnline(int req_id, const NpOnlineId* online_id, uint32_t presence) {
    (void)presence;
    if (req_id == 0 || !online_id) return SCE_NP_ERROR_INVALID_ARGUMENT;
    {
        std::lock_guard lock(requestMutex);
        if (!liveRequests.count(req_id)) return SCE_NP_ERROR_REQUEST_NOT_FOUND;
    }
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpGetAccountCountryA(int user_id, void* country_code) {
    (void)user_id;
    if (!country_code) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpGetAccountIdA(int user_id, uint64_t* account_id) {
    (void)user_id;
    (void)account_id;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpGetNpId(int user_id, NpId* np_id) {
    (void)user_id;
    if (!np_id) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpGetNpReachabilityState(int user_id, uint32_t* state) {
    (void)user_id;
    if (!state) return SCE_NP_ERROR_INVALID_ARGUMENT;
    *state = NP_REACHABILITY_STATE_UNAVAILABLE;
    return 0;
}

int APS5_VABI sceNpGetOnlineId(int user_id, NpOnlineId* online_id) {
    (void)user_id;
    if (!online_id) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpGetState(int user_id, uint32_t* state) {
    (void)user_id;
    if (!state) return SCE_NP_ERROR_INVALID_ARGUMENT;
    *state = NP_STATE_SIGNED_OUT;
    return 0;
}

int APS5_VABI sceNpHasSignedUp(int user_id, bool* has_signed_up) {
    (void)user_id;
    if (!has_signed_up) return SCE_NP_ERROR_INVALID_ARGUMENT;
    *has_signed_up = false;
    return 0;
}

int APS5_VABI sceNpPollAsync(int req_id, int* result) {
    if (!result) return SCE_NP_ERROR_INVALID_ARGUMENT;
    std::lock_guard lock(requestMutex);
    if (!liveRequests.count(req_id)) return SCE_NP_ERROR_REQUEST_NOT_FOUND;
    *result = SCE_NP_ERROR_SIGNED_OUT;
    return NP_POLL_ASYNC_FINISHED;
}

void APS5_VABI sceNpRegisterGamePresenceCallback(void* callback, void* userdata) {
    (void)callback;
    (void)userdata;
}

int APS5_VABI sceNpRegisterNpReachabilityStateCallback(void* callback, void* userdata) {
    if (!callback) return SCE_NP_ERROR_INVALID_ARGUMENT;
    std::lock_guard lock(reachabilityMutex);
    if (reachabilityCallback) return SCE_NP_ERROR_CALLBACK_ALREADY_REGISTERED;
    reachabilityCallback = callback;
    reachabilityUserdata = userdata;
    return 0;
}

int APS5_VABI sceNpUnregisterNpReachabilityStateCallback(void) {
    std::lock_guard lock(reachabilityMutex);
    if (!reachabilityCallback) return SCE_NP_ERROR_CALLBACK_NOT_REGISTERED;
    reachabilityCallback = nullptr;
    reachabilityUserdata = nullptr;
    return 0;
}

int APS5_VABI sceNpRegisterPlusEventCallback(void* callback, void* userdata) {
    (void)userdata;
    if (!callback) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return 0;
}

int APS5_VABI sceNpRegisterPremiumEventCallback(void* callback, void* userdata) {
    (void)userdata;
    if (!callback) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return 0;
}

int APS5_VABI sceNpRegisterStateCallback(NpStateCallback callback, void* userdata) {
    if (!callback) return SCE_NP_ERROR_INVALID_ARGUMENT;
    std::lock_guard lock(stateMutex);
    if (stateCallback.callback) return SCE_NP_ERROR_CALLBACK_ALREADY_REGISTERED;
    stateCallback = {callback, userdata, true};
    return 0;
}

int APS5_VABI sceNpSetContentRestriction(const NpContentRestriction* restriction) {
    struct Fields {
        std::uint64_t size;
        std::int8_t defaultAgeRestriction;
        std::uint8_t padding[3];
        std::int32_t ageRestrictionCount;
        const void* ageRestrictions;
    };
    if (!restriction) return SCE_NP_ERROR_INVALID_ARGUMENT;
    const auto* fields = reinterpret_cast<const Fields*>(restriction);
    if (fields->size != sizeof(Fields)) return SCE_NP_ERROR_INVALID_SIZE;
    if (fields->defaultAgeRestriction < 0 || fields->ageRestrictionCount > 0x100) return SCE_NP_ERROR_INVALID_ARGUMENT;
    if (fields->ageRestrictionCount > 0 && !fields->ageRestrictions) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return 0;
}

int APS5_VABI sceNpSetNpTitleId(const NpTitleId* title_id, const NpTitleSecret* title_secret) {
    (void)title_id;
    (void)title_secret;
    return 0;
}

int APS5_VABI sceNpSetTimeout(int reqId, int32_t resolveRetry, uint32_t resolveTimeout, uint32_t connTimeout,
    uint32_t sendTimeout, uint32_t recvTimeout) {
    constexpr uint32_t minResolveTimeout = 1000000;
    constexpr uint32_t minTransferTimeout = 10000000;
    auto belowMinimum = [](uint32_t timeout, uint32_t minimum) { return timeout != 0 && timeout < minimum; };
    if (reqId <= 0 || resolveRetry < 0) return SCE_NP_ERROR_INVALID_ARGUMENT;
    if (resolveRetry == 0 && resolveTimeout == 0 && connTimeout == 0 && sendTimeout == 0 && recvTimeout == 0) {
        return SCE_NP_ERROR_INVALID_ARGUMENT;
    }
    if (belowMinimum(resolveTimeout, minResolveTimeout) || belowMinimum(connTimeout, minTransferTimeout) ||
        belowMinimum(sendTimeout, minTransferTimeout) || belowMinimum(recvTimeout, minTransferTimeout)) {
        return SCE_NP_ERROR_INVALID_ARGUMENT;
    }
    std::lock_guard lock(requestMutex);
    return liveRequests.count(reqId) ? 0 : SCE_NP_ERROR_REQUEST_NOT_FOUND;
}

int APS5_VABI sceNpUnregisterStateCallback(void) {
    std::lock_guard lock(stateMutex);
    if (!stateCallback.callback) return SCE_NP_ERROR_CALLBACK_NOT_REGISTERED;
    stateCallback = {};
    return 0;
}

int APS5_VABI sceNpGetAccountLanguage2(int req_id, int user_id, void* language) {
    (void)req_id;
    (void)user_id;
    (void)language;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpNotifyPremiumFeature(const void* param) {
    (void)param;
    return 0;
}

int APS5_VABI sceNpRegisterStateCallbackA(NpStateCallbackA callback, void* userdata) {
    if (!callback) return SCE_NP_ERROR_INVALID_ARGUMENT;
    std::lock_guard lock(stateMutex);
    for (const auto& entry : stateCallbacksA) {
        if (entry.callback == callback) return SCE_NP_ERROR_CALLBACK_ALREADY_REGISTERED;
    }
    for (int index = 0; index < NP_STATE_CALLBACK_MAX; ++index) {
        if (stateCallbacksA[index].callback) continue;
        stateCallbacksA[index] = {callback, userdata, true};
        return index + 1;
    }
    return SCE_NP_ERROR_CALLBACK_MAX;
}

int APS5_VABI sceNpUnregisterStateCallbackA(int callbackId) {
    if (callbackId < 1 || callbackId > NP_STATE_CALLBACK_MAX) return SCE_NP_ERROR_INVALID_ARGUMENT;
    std::lock_guard lock(stateMutex);
    auto& entry = stateCallbacksA[callbackId - 1];
    if (!entry.callback) return SCE_NP_ERROR_CALLBACK_NOT_REGISTERED;
    entry = {};
    return 0;
}

int APS5_VABI sceNpUnregisterPremiumEventCallback(void) {
    return 0;
}

int APS5_VABI sceNpUnregisterPlusEventCallback(void) {
    return 0;
}

int APS5_VABI sceNpGetUserIdByAccountId(uint64_t account_id, int* user_id) {
    if (account_id == 0 || !user_id) return SCE_NP_ERROR_INVALID_ARGUMENT;
    return SCE_NP_ERROR_SIGNED_OUT;
}

int APS5_VABI sceNpGetSandboxInfo(void* sandbox_info) {
    (void)sandbox_info;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

APS5_EXPORT("8weiQyIdI3A", sceNpUnknown_8weiQyIdI3A);
int APS5_VABI sceNpUnknown_8weiQyIdI3A(int userId, const NpOnlineId* buffer) {
    (void)userId;
    (void)buffer;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

APS5_EXPORT("WxLcN76q19o", sceNpUnknown_WxLcN76q19o);
int APS5_VABI sceNpUnknown_WxLcN76q19o(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}


int APS5_VABI sceNpCheckCallbackForLib() {
    return sceNpCheckCallback();
}

}

extern "C" {

int APS5_VABI sceNpInGameMessageCreateHandle() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpInGameMessageDeleteHandle() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpInGameMessageInitialize() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpInGameMessagePrepare() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpInGameMessageSendData() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpInGameMessageTerminate() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpSnsFacebookCreateRequest() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpSnsFacebookDeleteRequest() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceNpSnsFacebookGetAccessToken() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
