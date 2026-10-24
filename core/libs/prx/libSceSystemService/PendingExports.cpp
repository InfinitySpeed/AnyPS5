#include "prx/libc/include/General.hpp"

namespace {

constexpr int SystemServiceUnavailable = static_cast<int>(0x80A10002);
constexpr int SystemServiceRejected = static_cast<int>(0x80A10005);

}

struct ShellCoreErrorDialogParam {
    const char* message;
    const char* const* formatArgs;
    std::uint8_t flag;
};

static_assert(sizeof(ShellCoreErrorDialogParam) == 24);
static_assert(offsetof(ShellCoreErrorDialogParam, message) == 0);
static_assert(offsetof(ShellCoreErrorDialogParam, formatArgs) == 8);
static_assert(offsetof(ShellCoreErrorDialogParam, flag) == 16);

struct SystemServiceDaemonEvent;
struct SystemServiceLocalProcessStatus;
struct SystemServiceEvent;
struct SystemServicePSButtonEvent;
struct SystemServicePrivacyDefinitionData;
struct SystemServicePrivacyDefinitionVersion;
struct SystemServiceTitleWorkaroundInfo;
struct SystemServiceStoreParam {
    std::uint32_t size;
};

static_assert(sizeof(SystemServiceStoreParam) == 4);

struct SystemServiceCpuPstateParam;
struct SystemServiceLocalProcessParam;
struct SystemServiceJvmProcessParam;
struct SystemServicePs2ProcessParam;
struct SystemServiceAppInstallStatus;
struct SystemServiceAppStatus;
struct ShellCoreLaunchByUriParam {
    std::uint32_t option;
    std::int32_t userId;
};

static_assert(sizeof(ShellCoreLaunchByUriParam) == 8);
static_assert(offsetof(ShellCoreLaunchByUriParam, option) == 0);
static_assert(offsetof(ShellCoreLaunchByUriParam, userId) == 4);
struct ShellCoreTelemetryToken;
struct ShellCoreUmmStatus {
    std::int32_t state;
    std::int32_t inDeviceMuteState;
};

static_assert(sizeof(ShellCoreUmmStatus) == 8);
static_assert(offsetof(ShellCoreUmmStatus, state) == 0);
static_assert(offsetof(ShellCoreUmmStatus, inDeviceMuteState) == 4);
struct ShellCorePbtcUserInfoList;
struct ShellCorePrivacyEventData;
struct ShellCorePsnAccountInfoFirst;
struct ShellCorePsnAccountInfoSecond;
struct ShellCorePsnAccountInfoThird;
struct ShellCorePsnAccountInfoFourth;
struct ShellCorePsnAccountInfoFifth;
struct ShellCoreAppLaunchTypeInfo;
struct LncGpuCrashAppStatus {
    char titleId[16];
    std::int32_t appId;
    std::int32_t appLocalPid;
    char path[1024];
    std::int32_t appType;
    std::int32_t coredumpReason;
    char corefileName[256];
    std::uint32_t exceptionCode;
    std::uint32_t appCategoryType;
};

static_assert(sizeof(LncGpuCrashAppStatus) == 1320);
static_assert(offsetof(LncGpuCrashAppStatus, titleId) == 0);
static_assert(offsetof(LncGpuCrashAppStatus, appId) == 16);
static_assert(offsetof(LncGpuCrashAppStatus, appLocalPid) == 20);
static_assert(offsetof(LncGpuCrashAppStatus, path) == 24);
static_assert(offsetof(LncGpuCrashAppStatus, appType) == 1048);
static_assert(offsetof(LncGpuCrashAppStatus, coredumpReason) == 1052);
static_assert(offsetof(LncGpuCrashAppStatus, corefileName) == 1056);
static_assert(offsetof(LncGpuCrashAppStatus, exceptionCode) == 1312);
static_assert(offsetof(LncGpuCrashAppStatus, appCategoryType) == 1316);
struct LncLaunchParam {
    std::uint32_t size;
    std::int32_t userId;
    std::int32_t appAttr;
    std::int32_t enableCrashReport;
    std::uint64_t checkFlag;
    std::uint64_t contextId;
    bool isSpeculativeLaunch;
};

static_assert(sizeof(LncLaunchParam) == 40);
static_assert(offsetof(LncLaunchParam, size) == 0);
static_assert(offsetof(LncLaunchParam, userId) == 4);
static_assert(offsetof(LncLaunchParam, appAttr) == 8);
static_assert(offsetof(LncLaunchParam, enableCrashReport) == 12);
static_assert(offsetof(LncLaunchParam, checkFlag) == 16);
static_assert(offsetof(LncLaunchParam, contextId) == 24);
static_assert(offsetof(LncLaunchParam, isSpeculativeLaunch) == 32);
struct LncDaemonEvent;
struct LncShellUiEvent;
struct LncLocalProcessStatus {
    std::int32_t appLocalPid;
    std::uint8_t reserved[32];
};

static_assert(sizeof(LncLocalProcessStatus) == 36);
static_assert(offsetof(LncLocalProcessStatus, appLocalPid) == 0);
static_assert(offsetof(LncLocalProcessStatus, reserved) == 4);
struct LncCoredumpState {
    std::uint32_t progress;
    std::uint32_t isFinished;
    std::int32_t result;
};

static_assert(sizeof(LncCoredumpState) == 12);
static_assert(offsetof(LncCoredumpState, progress) == 0);
static_assert(offsetof(LncCoredumpState, isFinished) == 4);
static_assert(offsetof(LncCoredumpState, result) == 8);
struct LncVideoFinalizeState {
    std::uint32_t progress;
    std::int32_t result;
};

static_assert(sizeof(LncVideoFinalizeState) == 8);
static_assert(offsetof(LncVideoFinalizeState, progress) == 0);
static_assert(offsetof(LncVideoFinalizeState, result) == 4);
struct LncLocalProcessParam;
struct LncAppStatus {
    std::int32_t appId;
    std::int32_t launchRequestAppId;
    std::int32_t appType;
    std::int32_t appAttr;
    char titleId[16];
    std::uint32_t appCategoryType;
    std::int32_t appBootMode;
    std::int32_t appBootSubMode;
    char appVer[6];
    char contentVersion[11];
    bool isSystemExApp;
    bool isCdlgInitialized;
};

static_assert(sizeof(LncAppStatus) == 64);
static_assert(offsetof(LncAppStatus, appId) == 0);
static_assert(offsetof(LncAppStatus, launchRequestAppId) == 4);
static_assert(offsetof(LncAppStatus, appType) == 8);
static_assert(offsetof(LncAppStatus, appAttr) == 12);
static_assert(offsetof(LncAppStatus, titleId) == 16);
static_assert(offsetof(LncAppStatus, appCategoryType) == 32);
static_assert(offsetof(LncAppStatus, appBootMode) == 36);
static_assert(offsetof(LncAppStatus, appBootSubMode) == 40);
static_assert(offsetof(LncAppStatus, appVer) == 44);
static_assert(offsetof(LncAppStatus, contentVersion) == 50);
static_assert(offsetof(LncAppStatus, isSystemExApp) == 61);
static_assert(offsetof(LncAppStatus, isCdlgInitialized) == 62);
struct LncShellUiAppStatus {
    std::int32_t appId;
    std::int32_t appType;
    std::int32_t appAttr;
    std::int32_t launchRequestAppId;
    std::int32_t userId;
    std::int32_t isActiveCdlg;
    char path[1024];
    char sceSysDir[256];
    std::int32_t isCoredumped;
    std::int32_t isPrxModuleLoadFailed;
    std::int32_t appLocalPid;
    std::int32_t crashReportMode;
    char category[4];
    std::uint32_t appCategoryType;
    std::int32_t appBootMode;
    std::int32_t appBootSubMode;
};

static_assert(sizeof(LncShellUiAppStatus) == 1336);
static_assert(offsetof(LncShellUiAppStatus, appId) == 0);
static_assert(offsetof(LncShellUiAppStatus, appType) == 4);
static_assert(offsetof(LncShellUiAppStatus, appAttr) == 8);
static_assert(offsetof(LncShellUiAppStatus, launchRequestAppId) == 12);
static_assert(offsetof(LncShellUiAppStatus, userId) == 16);
static_assert(offsetof(LncShellUiAppStatus, isActiveCdlg) == 20);
static_assert(offsetof(LncShellUiAppStatus, path) == 24);
static_assert(offsetof(LncShellUiAppStatus, sceSysDir) == 1048);
static_assert(offsetof(LncShellUiAppStatus, isCoredumped) == 1304);
static_assert(offsetof(LncShellUiAppStatus, isPrxModuleLoadFailed) == 1308);
static_assert(offsetof(LncShellUiAppStatus, appLocalPid) == 1312);
static_assert(offsetof(LncShellUiAppStatus, crashReportMode) == 1316);
static_assert(offsetof(LncShellUiAppStatus, category) == 1320);
static_assert(offsetof(LncShellUiAppStatus, appCategoryType) == 1324);
static_assert(offsetof(LncShellUiAppStatus, appBootMode) == 1328);
static_assert(offsetof(LncShellUiAppStatus, appBootSubMode) == 1332);
struct AppMessagingMessage {
    std::int32_t sender;
    std::uint32_t messageType;
    std::uint8_t payload[8192];
    std::uint32_t payloadSize;
    std::uint64_t timestamp;
};

static_assert(sizeof(AppMessagingMessage) == 8216);
static_assert(offsetof(AppMessagingMessage, sender) == 0);
static_assert(offsetof(AppMessagingMessage, messageType) == 4);
static_assert(offsetof(AppMessagingMessage, payload) == 8);
static_assert(offsetof(AppMessagingMessage, payloadSize) == 8200);
static_assert(offsetof(AppMessagingMessage, timestamp) == 8208);

struct UsbStorageEvent;
struct UsbStorageDeviceInfo;
using UsbStorageCallback = void (APS5_VABI *)(const UsbStorageEvent* event, void* userData);

extern "C" {

int APS5_VABI sceAppMessagingClearEventFlag(std::int32_t appId, std::uint64_t flags) {
    return 0;
}

int APS5_VABI sceAppMessagingReceiveMsg(AppMessagingMessage* message) {
    return 0;
}

int APS5_VABI sceAppMessagingSendMsg(std::uint32_t appId, std::uint32_t messageId, const void* data, std::size_t size, std::uint32_t flags) {
    return 0;
}

int APS5_VABI sceAppMessagingSendMsgToShellCore(std::uint32_t messageId, const void* data, std::size_t size, std::uint32_t flags) {
    return 0;
}

int APS5_VABI sceAppMessagingSendMsgToShellUI(std::uint32_t messageId, const void* data, std::size_t size, std::uint32_t flags) {
    return 0;
}

int APS5_VABI sceAppMessagingSetEventFlag(std::int32_t appId, std::uint64_t flags) {
    return 0;
}

int APS5_VABI sceAppMessagingTryGetEventFlag(std::uint64_t mask, std::uint64_t* flags, std::uint8_t clear) {
    return 0;
}

int APS5_VABI sceAppMessagingTryReceiveMsg(AppMessagingMessage* message) {
    return 0;
}

int APS5_VABI sceLncUtilAcquireCpuBudgetOfExtraAudioDevices() {
    return 0;
}

int APS5_VABI sceLncUtilAcquireCpuBudgetOfImeForBigApp() {
    return 0;
}

int APS5_VABI sceLncUtilAcquireCpuBudgetOfInGameStore() {
    return 0;
}

int APS5_VABI sceLncUtilActivateCdlg() {
    return 0;
}

int APS5_VABI sceLncUtilAddLocalProcess(std::int32_t appId, const char* path, const char* const* argv, const LncLocalProcessParam* param) {
    return 0;
}

int APS5_VABI sceLncUtilBlockAppSuspend(const char* reason) {
    return 0;
}

int APS5_VABI sceLncUtilBlockingGetEventForDaemon(LncDaemonEvent* event, std::uint64_t receiveArgument) {
    return 0;
}

int APS5_VABI sceLncUtilContinueApp(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceLncUtilCrashSyscore() {
    return 0;
}

int APS5_VABI sceLncUtilDeactivateCdlg() {
    return 0;
}

int APS5_VABI sceLncUtilDeclareReadyForSuspend() {
    return 0;
}

int APS5_VABI sceLncUtilDisableSuspendNotification() {
    return 0;
}

int APS5_VABI sceLncUtilEnableSuspendNotification() {
    return 0;
}

int APS5_VABI sceLncUtilFinishSpecialResume() {
    return 0;
}

int APS5_VABI sceLncUtilForceKillApp(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceLncUtilForceKillLocalProcess(std::int32_t appId, std::int32_t processId) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppCategory(std::int32_t appId, char* category) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppCategoryType(std::int32_t appId, std::uint32_t* categoryType) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppFocusedAppStatus(LncAppStatus* status) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppId(const char* titleId) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppIdListOfBigApp(std::int32_t* appIds, std::uint32_t capacity, std::uint32_t* count) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppIdOfRunningBigApp() {
    return 0;
}

int APS5_VABI sceLncUtilGetAppLaunchedUser(std::int32_t appId, std::int32_t* userId) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppStatus(LncAppStatus* status) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppStatusList(LncAppStatus* statuses, std::uint32_t capacity, std::uint32_t* count) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppStatusListForShellUIReboot(LncShellUiAppStatus* statuses, std::uint32_t capacity, std::uint32_t* count) {
    return 0;
}

int APS5_VABI sceLncUtilGetAppType(std::int32_t appId, std::uint32_t* type) {
    return 0;
}

int APS5_VABI sceLncUtilGetCdlgExec(std::int32_t appId, bool* executing) {
    return 0;
}

int APS5_VABI sceLncUtilGetCdlgType(std::int32_t appId, std::uint32_t* type) {
    return 0;
}

int APS5_VABI sceLncUtilGetCoredumpState(std::int32_t appId, std::int32_t processId, LncCoredumpState* state) {
    return 0;
}

int APS5_VABI sceLncUtilGetDbgExecutablePath(char* path, std::uint64_t selector) {
    return 0;
}

int APS5_VABI sceLncUtilGetEventForDaemon(LncDaemonEvent* event) {
    return 0;
}

int APS5_VABI sceLncUtilGetEventForShellUI(LncShellUiEvent* event) {
    return 0;
}

int APS5_VABI sceLncUtilGetGpuCrashFullDumpAppStatus(LncGpuCrashAppStatus* status) {
    return 0;
}

int APS5_VABI sceLncUtilGetLocalProcessStatusList(LncLocalProcessStatus* statuses, std::uint32_t capacity, std::uint32_t* count) {
    return 0;
}

int APS5_VABI sceLncUtilGetParentSocket() {
    return 0;
}

int APS5_VABI sceLncUtilGetResultKillApp(std::uint32_t requestId) {
    return 0;
}

int APS5_VABI sceLncUtilGetResultLaunchAppByTitleId(std::uint32_t requestId) {
    return 0;
}

int APS5_VABI sceLncUtilGetVideoFinalizeState(std::int32_t appId, std::int32_t processId, LncVideoFinalizeState* state) {
    return 0;
}

int APS5_VABI sceLncUtilInitialize() {
    return 0;
}

int APS5_VABI sceLncUtilIsActiveCdlg(bool* active) {
    return 0;
}

int APS5_VABI sceLncUtilIsAppLaunched(const char* titleId, bool* launched) {
    return 0;
}

int APS5_VABI sceLncUtilIsAppSuspended(std::int32_t appId, bool* suspended) {
    return 0;
}

int APS5_VABI sceLncUtilIsCdlgActivated(std::uint8_t* activated) {
    return 0;
}

bool APS5_VABI sceLncUtilIsCpuBudgetOfExtraAudioDevicesAvailable() {
    return 0;
}

int APS5_VABI sceLncUtilIsHostBoot(std::int32_t appId, bool* hostBoot) {
    return 0;
}

int APS5_VABI sceLncUtilIsPs2Emu(bool* emulated) {
    return 0;
}

bool APS5_VABI sceLncUtilIsShellUiFgAndGameBgCpuMode() {
    return 0;
}

int APS5_VABI sceLncUtilIsSpeculativeLaunch(std::int32_t appId, bool* speculative) {
    return 0;
}

int APS5_VABI sceLncUtilKickCoredumpOnlyProcMem(std::int32_t appId, std::int32_t processId, const char* first, const char* second) {
    return 0;
}

int APS5_VABI sceLncUtilKillLocalProcess(std::int32_t appId, std::int32_t processId) {
    return 0;
}

int APS5_VABI sceLncUtilLaunchApp(const char* titleId, const char* const* argv, const LncLaunchParam* param) {
    return 0;
}

int APS5_VABI sceLncUtilLoadExec(const char* path, const char* const* argv) {
    return 0;
}

int APS5_VABI sceLncUtilNotifyCoredumpRequestEnd(std::int32_t appId, std::int32_t processId, std::int32_t result) {
    return 0;
}

int APS5_VABI sceLncUtilNotifyCoredumpRequestProgress(std::int32_t appId, std::int32_t processId, std::int32_t progress) {
    return 0;
}

int APS5_VABI sceLncUtilNotifyVshReady(std::uint32_t errorCode) {
    return 0;
}

int APS5_VABI sceLncUtilRaiseException(std::int32_t appId, std::uint64_t exception) {
    return 0;
}

int APS5_VABI sceLncUtilRaiseExceptionLocalProcess(std::int32_t appId, std::int32_t processId, std::uint64_t exception) {
    return 0;
}

int APS5_VABI sceLncUtilRegisterCdlgSharedMemoryName(const char* name) {
    return 0;
}

int APS5_VABI sceLncUtilRegisterDaemon() {
    return 0;
}

int APS5_VABI sceLncUtilRegisterShellUI() {
    return 0;
}

int APS5_VABI sceLncUtilReleaseCpuBudgetOfExtraAudioDevices() {
    return 0;
}

int APS5_VABI sceLncUtilReleaseCpuBudgetOfImeForBigApp() {
    return 0;
}

int APS5_VABI sceLncUtilReleaseCpuBudgetOfInGameStore() {
    return 0;
}

int APS5_VABI sceLncUtilResumeApp(std::int32_t appId, std::uint64_t flags) {
    return 0;
}

int APS5_VABI sceLncUtilResumeLocalProcess(std::int32_t processId) {
    return 0;
}

int APS5_VABI sceLncUtilSetAppFocus(std::int32_t appId, std::uint64_t flags, std::uint64_t contextId) {
    return 0;
}

int APS5_VABI sceLncUtilSetCdlgExec(std::int32_t appId, std::uint8_t executing) {
    return 0;
}

int APS5_VABI sceLncUtilSetControllerFocus(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceLncUtilSetControllerFocusPermission(std::uint8_t permission) {
    return 0;
}

int APS5_VABI sceLncUtilStartKillApp(std::int32_t appId, std::uint32_t* requestId) {
    return 0;
}

int APS5_VABI sceLncUtilStartLaunchAppByTitleId(const char* titleId, const char* const* argv, const LncLaunchParam* param, std::uint32_t* requestId) {
    return 0;
}

int APS5_VABI sceLncUtilSuspendApp(std::int32_t appId, std::uint64_t flags, std::int32_t reason) {
    return 0;
}

int APS5_VABI sceLncUtilSuspendBackgroundApp(std::int32_t first, std::int32_t second) {
    return 0;
}

int APS5_VABI sceLncUtilSuspendLocalProcess(std::int32_t processId) {
    return 0;
}

int APS5_VABI sceLncUtilTerminate() {
    return 0;
}

int APS5_VABI sceLncUtilTryBlockAppSuspend(const char* reason) {
    return 0;
}

int APS5_VABI sceLncUtilUnblockAppSuspend(const char* reason) {
    return 0;
}

int APS5_VABI sceLncUtilUnregisterCdlgSharedMemoryName(const char* name) {
    return 0;
}

int APS5_VABI sceLncUtilUnregisterDaemon() {
    return 0;
}

int APS5_VABI sceLncUtilUnregisterShellUI() {
    return 0;
}

int APS5_VABI sceShellCoreUtilAccessibilityZoomLock() {
    return 0;
}

int APS5_VABI sceShellCoreUtilAccessibilityZoomUnlock() {
    return 0;
}

int APS5_VABI sceShellCoreUtilAcquireBgmCpuBudget() {
    return 0;
}

int APS5_VABI sceShellCoreUtilAcquireRemotePlayCpuBudget() {
    return 0;
}

int APS5_VABI sceShellCoreUtilAcquireSharePlayCpuBudget() {
    return 0;
}

int APS5_VABI sceShellCoreUtilActivateAbort(std::intptr_t handle) {
    return 0;
}

int APS5_VABI sceShellCoreUtilActivateGetStatus(std::intptr_t handle, std::int32_t* status, std::int32_t* result) {
    return 0;
}

int APS5_VABI sceShellCoreUtilActivateInit(std::int32_t type, std::intptr_t* handle) {
    return 0;
}

int APS5_VABI sceShellCoreUtilActivateIsActivated(std::intptr_t handle, bool* activated) {
    return 0;
}

int APS5_VABI sceShellCoreUtilActivateRecordActivation() {
    return 0;
}

int APS5_VABI sceShellCoreUtilActivateStart(std::intptr_t handle) {
    return 0;
}

int APS5_VABI sceShellCoreUtilActivateStartAsync(std::intptr_t handle) {
    return 0;
}

int APS5_VABI sceShellCoreUtilActivateTerm(std::intptr_t handle) {
    return 0;
}

int APS5_VABI sceShellCoreUtilChangeRunLevel(std::int32_t runLevel) {
    return 0;
}

int APS5_VABI sceShellCoreUtilChangeToStaffModeForIDU() {
    return 0;
}

int APS5_VABI sceShellCoreUtilCheckerAbort() {
    return 0;
}

int APS5_VABI sceShellCoreUtilCleanupCrashReport() {
    return 0;
}

int APS5_VABI sceShellCoreUtilClearAppData() {
    return 0;
}

int APS5_VABI sceShellCoreUtilClearPs4AppCategoryDefaultsListUpdate() {
    return 0;
}

int APS5_VABI sceShellCoreUtilClearPsnAccountInfo() {
    return 0;
}

int APS5_VABI sceShellCoreUtilCrashReportRequestCancel() {
    return 0;
}

int APS5_VABI sceShellCoreUtilDeclareBeginOfExternalStorageAppMove() {
    return 0;
}

int APS5_VABI sceShellCoreUtilDeclareEndOfExternalStorageAppMove() {
    return 0;
}

int APS5_VABI sceShellCoreUtilDeleteDiscInstalledTitleWorkaroundFile() {
    return 0;
}

int APS5_VABI sceShellCoreUtilDeleteDownloadedHidConfigFile(std::int32_t configIndex) {
    return 0;
}

int APS5_VABI sceShellCoreUtilDeleteDownloadedNetEvConfigFile() {
    return 0;
}

int APS5_VABI sceShellCoreUtilDeleteDownloadedTitleWorkaroundFile() {
    return 0;
}

int APS5_VABI sceShellCoreUtilDoFsck(const char* path) {
    return 0;
}

int APS5_VABI sceShellCoreUtilDownloadHidConfigFileFromServer(std::int32_t configIndex) {
    return 0;
}

int APS5_VABI sceShellCoreUtilDownloadNetEvConfigFileFromServer() {
    return 0;
}

int APS5_VABI sceShellCoreUtilDownloadTitleWorkaroundFileFromServer() {
    return 0;
}

int APS5_VABI sceShellCoreUtilEndUmmDictation() {
    return 0;
}

int APS5_VABI sceShellCoreUtilEnterPowerLockSection() {
    return 0;
}

int APS5_VABI sceShellCoreUtilExecuteCrashReport() {
    return 0;
}

int APS5_VABI sceShellCoreUtilExfatFormatExternalHdd(const char* path) {
    return 0;
}

int APS5_VABI sceShellCoreUtilExitApp() {
    return 0;
}

int APS5_VABI sceShellCoreUtilExitMiniApp() {
    return 0;
}

int APS5_VABI sceShellCoreUtilExitMiniAppWithValue(const char* value) {
    return 0;
}

int APS5_VABI sceShellCoreUtilFormatExternalHdd(const char* path) {
    return 0;
}

int APS5_VABI sceShellCoreUtilFormatHddForRestore() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetAppData(const char* key, void* data, std::int32_t capacity, std::int32_t* size) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetAppEnableTTS(std::int32_t appId, bool* enabled) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetAppEnterButtonAssign(std::int32_t appId, std::int32_t* assignment) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetAppLaunchTypeInfo(std::int32_t appId, ShellCoreAppLaunchTypeInfo* info) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetAppLaunchedParamInt(std::int32_t appId, const char* key, std::int32_t* value) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetAppLaunchedParamIntByBudgetType(std::int32_t budgetType, const char* key, std::int32_t* value) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetAppLaunchedParamString(std::int32_t appId, const char* key, char* value, std::int32_t capacity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetAppLaunchedParamStringByBudgetType(std::int32_t budgetType, const char* key, char* value, std::int32_t capacity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetAutoPowerDownRemainingSeconds() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetBasicProductShape() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCheckerString(const char* key, char* value, std::size_t capacity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCheckerStringEx(const char* firstKey, const char* secondKey, char* value, std::size_t capacity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCloudClientStatus(std::uint32_t* status) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCrashReportCoreFileSetSize() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCrashReportFilterInfoStart() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCrashReportInfoForBoot() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCrashReportInfoForBootStart() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCrashReportInfoStart() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCrashReportResult() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCrashReportStatus() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetCrashReportUploadStatus() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetDeviceIndexBehavior(std::uint32_t* behavior, std::int32_t* userId, std::uint32_t* scene) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetDeviceIndexBehaviorWithTimeout(std::uint32_t* behavior, std::int32_t* userId, std::uint32_t* scene, std::uint8_t timeout) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetEffectiveTotalSizeOfUserPartition(std::uint64_t* size) {
    return 0;
}

std::uint64_t APS5_VABI sceShellCoreUtilGetFreeSizeOfAvContentsTmp() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetFreeSizeOfUserPartition(std::uint64_t* freeSize, std::uint64_t* totalSize) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetFsckProgress(const char* titleId, std::uint32_t* progress) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetGameLiveStreamingStatus(bool* active) {
    return 0;
}

bool APS5_VABI sceShellCoreUtilGetGnmCompositorOnScreenProfilerFlag() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetGpuLoadEmulationMode() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetGpuLoadEmulationModeByAppId(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetHidConfigFileInfoString(char* value, std::size_t capacity, std::int32_t configIndex) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetHidConfigFileString(char* value, std::size_t capacity, std::int32_t configIndex) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetHidConfigName(char* value, std::size_t capacity, std::int32_t configIndex) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetHidConfigNum(std::int32_t* configNum) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetIDUMode(std::uint8_t* mode) {
    return 0;
}

bool APS5_VABI sceShellCoreUtilGetImposeMenuFlagForPs2Emu(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetManifestFileStatus() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetNeedSizeOfAppContent(std::uint64_t* size) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetNetEvConfigFileInfoString(char* value, std::size_t capacity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetOutOfVrPlayZoneWarning() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetPapcGamePcl() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetPbtcUserInfoList(ShellCorePbtcUserInfoList* info) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetPlatformPrivacyDefinitionEventData(const char* firstKey, const char* secondKey, ShellCorePrivacyEventData* data) {
    return 0;
}

float APS5_VABI sceShellCoreUtilGetProgressOfFormatExternalHdd() {
    return 0;
}

float APS5_VABI sceShellCoreUtilGetProgressOfFsck() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetPs4AppCategoryDefaultsListId(void* data, std::size_t capacity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetPs4AppCategoryForTitleId(const char* titleId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetPsStoreIconLayout(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetPsStoreIconState(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetPsnAccountInfo(ShellCorePsnAccountInfoFirst* first, ShellCorePsnAccountInfoSecond* second, ShellCorePsnAccountInfoThird* third, ShellCorePsnAccountInfoFourth* fourth, ShellCorePsnAccountInfoFifth* fifth) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetRemotePlayStatus(bool* active) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetRunLevel() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetSharePlayStatus(bool* active) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetSocialScreenStatus(bool* active) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetSplashScreenState(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetSupportSiteURL(std::uint32_t first, std::uint32_t second, char* value, std::size_t capacity) {
    return 0;
}

bool APS5_VABI sceShellCoreUtilGetSuspendConfirmationDialogFlag(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetSystemBGState(std::int32_t appId, std::uint32_t* state) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetSystemBGWaveColor(std::int32_t appId, std::uint32_t* color) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetSystemBGWaveState(std::int32_t appId, std::uint32_t* state) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetTelemetryToken(ShellCoreTelemetryToken* token) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetTitleWorkaroundFileInfoString(char* value, std::size_t capacity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetTitleWorkaroundFileString(char* value, std::size_t capacity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetUIStatus(std::uint64_t* status) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetUmmStatus(std::int32_t userId, ShellCoreUmmStatus* status) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetUserFocus(std::int32_t appId, std::int32_t* userId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetUserIdOfMorpheusUser() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetVMStatsForTelemetry(char* value, std::size_t capacity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilGetVersionNumberOfCameraCalibrationData() {
    return 0;
}

int APS5_VABI sceShellCoreUtilGoBackToKratosCurrentSessionGame() {
    return 0;
}

int APS5_VABI sceShellCoreUtilHideBlocksFromUser(std::int64_t bytes, std::int32_t flags) {
    return 0;
}

int APS5_VABI sceShellCoreUtilIncrementVersionNumberOfCameraCalibrationData() {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsAccessibilityZoomLocked(std::int32_t appId) {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsBgmCpuBudgetAcquired() {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsBgmCpuBudgetAvailable() {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsExternalStorageAppMoveInProgress() {
    return 0;
}

int APS5_VABI sceShellCoreUtilIsEyeToEyeDistanceAdjusted(std::uint32_t userId, std::uint8_t* adjusted) {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsGameLiveStreamingOnAir() {
    return 0;
}

int APS5_VABI sceShellCoreUtilIsIDUState() {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsImposeScreenOverlaid() {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsInSystemSuspendBlackList(std::uint32_t appId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilIsInternalKratosUser() {
    return 0;
}

int APS5_VABI sceShellCoreUtilIsKilledOrSuspendedByLogout(std::int32_t first, std::int32_t second, std::uint8_t* result) {
    return 0;
}

int APS5_VABI sceShellCoreUtilIsNeededCrashReport() {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsPowerSaveAlertRequested() {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsRemotePlayCpuBudgetAcquired() {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsScreenSaverOn() {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsSharePlayCpuBudgetAcquired() {
    return 0;
}

int APS5_VABI sceShellCoreUtilIsShowCrashReport() {
    return 0;
}

int APS5_VABI sceShellCoreUtilIsTemperatureDanger() {
    return 0;
}

int APS5_VABI sceShellCoreUtilIsTitleWorkaroundEnabled(std::int32_t selector, const char* key) {
    return 0;
}

bool APS5_VABI sceShellCoreUtilIsUsbMassStorageMounted(std::uint32_t deviceIndex) {
    return 0;
}

int APS5_VABI sceShellCoreUtilLaunchByUri(const char* uri, const ShellCoreLaunchByUriParam* param) {
    return 0;
}

int APS5_VABI sceShellCoreUtilLeavePowerLockSection() {
    return 0;
}

int APS5_VABI sceShellCoreUtilMakeManifestFile() {
    return 0;
}

int APS5_VABI sceShellCoreUtilMountAppRight(const char* key) {
    return 0;
}

int APS5_VABI sceShellCoreUtilMountDownloadDataForShellUI(const char* key) {
    return 0;
}

int APS5_VABI sceShellCoreUtilMountHddForBackup() {
    return 0;
}

int APS5_VABI sceShellCoreUtilMountHddForRestore() {
    return 0;
}

int APS5_VABI sceShellCoreUtilNavigateToAnotherApp(std::uint32_t target) {
    return 0;
}

int APS5_VABI sceShellCoreUtilNavigateToGoHome(std::uint32_t target) {
    return 0;
}

int APS5_VABI sceShellCoreUtilNavigateToLaunchedApp(std::uint32_t target) {
    return 0;
}

int APS5_VABI sceShellCoreUtilNotificationCancelForIDU(std::int64_t notificationId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilNotificationRequestedForIDU(std::int64_t notificationId, const char* text, std::uint32_t type) {
    return 0;
}

int APS5_VABI sceShellCoreUtilNotifyBgmCoreTermination() {
    return 0;
}

int APS5_VABI sceShellCoreUtilNotifyFsReadError(std::int32_t first, std::int32_t second, std::int32_t third, const char* detail) {
    return 0;
}

int APS5_VABI sceShellCoreUtilNotifyImeStatusChanged(std::int32_t imeStatus, std::uint8_t isCalledFromGame) {
    return 0;
}

int APS5_VABI sceShellCoreUtilNotifyPsnAccountInfoReceived() {
    return 0;
}

int APS5_VABI sceShellCoreUtilNotifySystemSuspendTelemetryInfo(std::uint32_t info) {
    return 0;
}

int APS5_VABI sceShellCoreUtilPfAuthClientConsoleTokenClearCache() {
    return 0;
}

int APS5_VABI sceShellCoreUtilPostActivityForPsNow(std::int32_t type, const char* activity) {
    return 0;
}

int APS5_VABI sceShellCoreUtilPostErrorLog(const char* titleId, std::int32_t internalErrorCode, const char* shortError, const char* messageBuffer, std::int32_t suggestionType, const char* logReport) {
    return 0;
}

int APS5_VABI sceShellCoreUtilPostLaunchConfirmResult(std::uint32_t first, std::uint32_t second) {
    return 0;
}

int APS5_VABI sceShellCoreUtilPostPsmEventToShellUI(std::int32_t eventId, const char* data) {
    return 0;
}

int APS5_VABI sceShellCoreUtilPreNotifyOfGameLiveStreaming() {
    return 0;
}

int APS5_VABI sceShellCoreUtilPreNotifyOfRemotePlay() {
    return 0;
}

int APS5_VABI sceShellCoreUtilPreNotifyOfSharePlay() {
    return 0;
}

int APS5_VABI sceShellCoreUtilReleaseBgmCpuBudget() {
    return 0;
}

int APS5_VABI sceShellCoreUtilReleaseRemotePlayCpuBudget() {
    return 0;
}

int APS5_VABI sceShellCoreUtilReleaseSharePlayCpuBudget() {
    return 0;
}

int APS5_VABI sceShellCoreUtilReportSessionErrorToGaikaiController(std::int32_t error, const char* detail) {
    return 0;
}

int APS5_VABI sceShellCoreUtilReportUnexpectedFatalErrorToSystemTelemetry(std::int32_t error, const char* detail) {
    return 0;
}

int APS5_VABI sceShellCoreUtilRequestCameraCalibration() {
    return 0;
}

int APS5_VABI sceShellCoreUtilRequestEjectDevice(const char* path) {
    return 0;
}

int APS5_VABI sceShellCoreUtilRequestRebootApp(std::int32_t appId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilRequestShutdown(std::int32_t reason) {
    return 0;
}

int APS5_VABI sceShellCoreUtilResetAutoPowerDownTimer() {
    return 0;
}

int APS5_VABI sceShellCoreUtilResetBgdcConfig() {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetAppData(const char* key, const char* value) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetBgmProhibition(std::uint32_t value) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetDeviceIndexBehavior(std::uint32_t behavior, std::int32_t userId, std::uint8_t scene) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetGameLiveStreamingOnAirFlag(std::int32_t enabled) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetGameLiveStreamingStatus(std::int32_t active) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetGnmCompositorOnScreenProfilerFlag(std::int32_t enabled) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetGpuLoadEmulationMode(std::uint32_t mode) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetGpuLoadEmulationModeByAppId(std::int32_t appId, std::uint32_t mode) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetIDUMode(std::uint8_t mode) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetImposeStatusFlag(std::int32_t enabled) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetPsStoreIconLayout(std::uint32_t layout) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetPsStoreIconState(std::uint32_t state) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetRemotePlayStatus(std::int32_t active) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetSharePlayStatus(std::int32_t active) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetSkipUpdateCheck(std::uint8_t skip) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetSocialScreenStatus(std::int32_t active) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetSplashScreenState(std::uint32_t state) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetSystemBGState(std::uint32_t state) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetSystemBGWaveColor(std::uint32_t color) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetSystemBGWaveState(std::uint32_t state) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetUIStatus(std::uint64_t status, std::uint64_t mask) {
    return 0;
}

int APS5_VABI sceShellCoreUtilSetUserFocus(std::int32_t userId) {
    return 0;
}

int APS5_VABI sceShellCoreUtilShowCriticalErrorDialog(std::uint32_t error, const char* message) {
    return 0;
}

int APS5_VABI sceShellCoreUtilShowErrorDialog(std::uint32_t error, const char* message) {
    return 0;
}

int APS5_VABI sceShellCoreUtilShowErrorDialogWithFormatArgs(std::uint32_t error, const char* message, const char* const* formatArgs) {
    return 0;
}

int APS5_VABI sceShellCoreUtilShowErrorDialogWithParam(std::uint32_t error, const ShellCoreErrorDialogParam* param) {
    return 0;
}

int APS5_VABI sceShellCoreUtilShowPsUnderLockIndicator() {
    return 0;
}

int APS5_VABI sceShellCoreUtilSignalUserInput() {
    return 0;
}

int APS5_VABI sceShellCoreUtilStartPsNowGame(const char* data) {
    return 0;
}

int APS5_VABI sceShellCoreUtilStopPsNowGame(const char* data) {
    return 0;
}

int APS5_VABI sceShellCoreUtilTalkKeyEventReceived(std::int64_t deviceId, std::int32_t userId, std::int32_t keyEventType) {
    return 0;
}

int APS5_VABI sceShellCoreUtilTestBusTransferSpeed(const char* path, std::uint8_t* result) {
    return 0;
}

int APS5_VABI sceShellCoreUtilTickHeartBeat() {
    return 0;
}

int APS5_VABI sceShellCoreUtilTriggerPapcUpdate(std::uint32_t value) {
    return 0;
}

int APS5_VABI sceShellCoreUtilTurnOffScreenSaver() {
    return 0;
}

int APS5_VABI sceShellCoreUtilUnmountAppRight(const char* key) {
    return 0;
}

int APS5_VABI sceShellCoreUtilUnmountDownloadDataForShellUI(const char* key) {
    return 0;
}

int APS5_VABI sceShellCoreUtilUnmountHddForBackup() {
    return 0;
}

int APS5_VABI sceShellCoreUtilUnmountHddForRestore() {
    return 0;
}

int APS5_VABI sceShellCoreutilGetCrashReportProcessInformation() {
    return 0;
}

int APS5_VABI sceSystemModalDialogClose(std::uint32_t dialogId) {
    return 0;
}

int APS5_VABI sceSystemModalDialogOpen(const char* message) {
    return 0;
}

int APS5_VABI sceSystemServiceAcquireBgmCpuBudget() {
    return 0;
}

int APS5_VABI sceSystemServiceAcquireFb0() {
    return SystemServiceUnavailable;
}

int APS5_VABI sceSystemServiceActivateHevc() {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcAbort(std::uintptr_t handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcGetStatus(std::uintptr_t handle, std::uint32_t* status, std::int32_t* result) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcInit(std::uintptr_t* handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcIsActivated(std::uint8_t* activated) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcSoft() {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcSoftAbort(std::uintptr_t handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcSoftGetStatus(std::uintptr_t handle, std::uint32_t* status, std::int32_t* result) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcSoftInit(std::uintptr_t* handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcSoftIsActivated(std::uint8_t* activated) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcSoftStart(std::uintptr_t handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcSoftTerm(std::uintptr_t handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcStart(std::uintptr_t handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateHevcTerm(std::uintptr_t handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateMpeg2Abort(std::uintptr_t handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateMpeg2GetStatus(std::uintptr_t handle, std::uint32_t* status, std::int32_t* result) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateMpeg2Init(std::uintptr_t* handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateMpeg2IsActivated(std::uint8_t* activated) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateMpeg2Start(std::uintptr_t handle) {
    return 0;
}

int APS5_VABI sceSystemServiceActivateMpeg2Term(std::uintptr_t handle) {
    return 0;
}

int APS5_VABI sceSystemServiceAddLocalProcess(std::int32_t appId, const char* path, const char* const* argv, const SystemServiceLocalProcessParam* param) {
    return 0;
}

int APS5_VABI sceSystemServiceAddLocalProcessForJvm(const char* path, const char* const* argv, const SystemServiceJvmProcessParam* param) {
    return 0;
}

int APS5_VABI sceSystemServiceAddLocalProcessForPs2Emu(const char* path, const char* const* argv, const SystemServicePs2ProcessParam* param) {
    return 0;
}

int APS5_VABI sceSystemServiceAppGetAppInstallStatus(const char* titleId, SystemServiceAppInstallStatus* status) {
    return 0;
}

int APS5_VABI sceSystemServiceChangeAcpClock() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeClock(const char* clock, std::uint32_t value) {
    return 0;
}

int APS5_VABI sceSystemServiceChangeCpuClock() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeCpuPstate(const SystemServiceCpuPstateParam* param) {
    return 0;
}

int APS5_VABI sceSystemServiceChangeGpuClock() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeMemPstate(std::uint32_t state) {
    return 0;
}

int APS5_VABI sceSystemServiceChangeMemoryClock() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeMemoryClockToBaseMode() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeMemoryClockToDefault() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeMemoryClockToMultiMediaMode() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeNumberOfGpuCu() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeSamuClock() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeUvdClock() {
    return 0;
}

int APS5_VABI sceSystemServiceChangeVceClock() {
    return 0;
}

int APS5_VABI sceSystemServiceDeclareReadyForSuspend() {
    return 0;
}

int APS5_VABI sceSystemServiceDisablePartyVoice() {
    return SystemServiceUnavailable;
}

int APS5_VABI sceSystemServiceDisablePersonalEyeToEyeDistanceSetting() {
    return 0;
}

int APS5_VABI sceSystemServiceDisableSuspendConfirmationDialog() {
    return 0;
}

int APS5_VABI sceSystemServiceDisableSuspendNotification() {
    return 0;
}

int APS5_VABI sceSystemServiceDisableVoiceRecognition() {
    return SystemServiceUnavailable;
}

int APS5_VABI sceSystemServiceEnablePersonalEyeToEyeDistanceSetting() {
    return 0;
}

int APS5_VABI sceSystemServiceEnableSuspendConfirmationDialog() {
    return 0;
}

int APS5_VABI sceSystemServiceEnableSuspendNotification() {
    return 0;
}

int APS5_VABI sceSystemServiceGetAppCategoryType(std::int32_t appId, std::uint32_t* categoryType) {
    return 0;
}

int APS5_VABI sceSystemServiceGetAppFocusedAppStatus(SystemServiceAppStatus* status) {
    return 0;
}

int APS5_VABI sceSystemServiceGetAppIdListOfBigApp(std::int32_t* appIds, std::uint32_t capacity, std::uint32_t* count) {
    return 0;
}

int APS5_VABI sceSystemServiceGetAppLaunchedUser(std::int32_t appId, std::int32_t* userId) {
    return 0;
}

int APS5_VABI sceSystemServiceGetAppStatus(SystemServiceAppStatus* status) {
    return 0;
}

int APS5_VABI sceSystemServiceGetAppType(std::int32_t appId, std::int32_t* type) {
    return 0;
}

int APS5_VABI sceSystemServiceGetDbgExecutablePath(char* path, std::uint64_t selector) {
    return 0;
}

int APS5_VABI sceSystemServiceGetEventForDaemon(SystemServiceDaemonEvent* event) {
    return 0;
}

int APS5_VABI sceSystemServiceGetGpuLoadEmulationMode() {
    return 0;
}

int APS5_VABI sceSystemServiceGetLocalProcessStatusList(SystemServiceLocalProcessStatus* statuses, std::uint32_t capacity, std::uint32_t* count) {
    return 0;
}

int APS5_VABI sceSystemServiceGetMainAppTitleId() {
    return 0;
}

int APS5_VABI sceSystemServiceGetPSButtonEvent(const SystemServiceEvent* event, SystemServicePSButtonEvent* buttonEvent) {
    return 0;
}

int APS5_VABI sceSystemServiceGetParentSocket() {
    return 0;
}

int APS5_VABI sceSystemServiceGetParentSocketForJvm() {
    return 0;
}

int APS5_VABI sceSystemServiceGetParentSocketForPs2Emu() {
    return 0;
}

int APS5_VABI sceSystemServiceGetParentSocketForPsmKit() {
    return 0;
}

int APS5_VABI sceSystemServiceGetPlatformPrivacyDefinitionData(const char* key, SystemServicePrivacyDefinitionData* data) {
    return 0;
}

int APS5_VABI sceSystemServiceGetPlatformPrivacyDefinitionVersion(const char* key, SystemServicePrivacyDefinitionVersion* version) {
    return 0;
}

int APS5_VABI sceSystemServiceGetPlatformPrivacySetting(std::uint32_t* setting) {
    return 0;
}

int APS5_VABI sceSystemServiceGetRecentLotusPushedButton(std::uint32_t timeout, std::int32_t* deviceId, std::uint32_t* buttons) {
    return 0;
}

int APS5_VABI sceSystemServiceGetRemoteplayStatus(bool* active) {
    return 0;
}

int APS5_VABI sceSystemServiceGetRenderingMode() {
    return 0;
}

int APS5_VABI sceSystemServiceGetSubAppTitleId() {
    return 0;
}

int APS5_VABI sceSystemServiceGetSubAppTitleIdForSP() {
    return 0;
}

int APS5_VABI sceSystemServiceGetTitleWorkaroundInfo(SystemServiceTitleWorkaroundInfo* info) {
    return 0;
}

int APS5_VABI sceSystemServiceGetUIStatus(std::uint64_t* status) {
    return 0;
}

int APS5_VABI sceSystemServiceGetVersionNumberOfCameraCalibrationData() {
    return 0;
}

int APS5_VABI sceSystemServiceInitializeForShellCore() {
    return 0;
}

int APS5_VABI sceSystemServiceInvokeAppLaunchLink(const char* uri) {
    return 0;
}

int APS5_VABI sceSystemServiceIsAppSuspended(std::int32_t appId, bool* suspended) {
    return 0;
}

bool APS5_VABI sceSystemServiceIsBgmCpuBudgetAvailable() {
    return 0;
}

int APS5_VABI sceSystemServiceIsEyeToEyeDistanceAdjusted(std::uint32_t userId, std::uint8_t* adjusted) {
    return 0;
}

bool APS5_VABI sceSystemServiceIsGameLiveStreamingOnAir() {
    return 0;
}

bool APS5_VABI sceSystemServiceIsScreenSaverOn() {
    return 0;
}

bool APS5_VABI sceSystemServiceIsShellUiFgAndGameBgCpuMode() {
    return 0;
}

int APS5_VABI sceSystemServiceKillLocalProcess(std::int32_t appId, std::int32_t processId) {
    return 0;
}

int APS5_VABI sceSystemServiceKillLocalProcessForJvm(std::int32_t processId) {
    return 0;
}

int APS5_VABI sceSystemServiceKillLocalProcessForPs2Emu(std::int32_t processId) {
    return 0;
}

int APS5_VABI sceSystemServiceLaunchEventDetails(std::uint64_t unusedSlot, const char* eventId) {
    return 0;
}

int APS5_VABI sceSystemServiceLaunchStore(const char* uri, const SystemServiceStoreParam* param) {
    return 0;
}

int APS5_VABI sceSystemServiceLaunchTournamentList() {
    return 0;
}

int APS5_VABI sceSystemServiceLaunchTournamentsTeamProfile(std::uint64_t unusedSlot, const char* profile, const char* tournament, const char* context) {
    return 0;
}

int APS5_VABI sceSystemServiceLaunchUdsApp() {
    return SystemServiceRejected;
}

int APS5_VABI sceSystemServiceLaunchWebApp(const char* argument) {
    return 0;
}

int APS5_VABI sceSystemServiceLoadExecVideoServiceWebApp() {
    return SystemServiceUnavailable;
}

int APS5_VABI sceSystemServiceNavigateToAnotherApp(std::uint32_t target) {
    return 0;
}

int APS5_VABI sceSystemServiceNavigateToGoBack() {
    return 0;
}

int APS5_VABI sceSystemServiceNavigateToGoBackWithValue(const char* value) {
    return 0;
}

int APS5_VABI sceSystemServiceNavigateToGoHome(std::uint32_t target) {
    return 0;
}

int APS5_VABI sceSystemServiceNotifyBgmCoreTermination() {
    return 0;
}

int APS5_VABI sceSystemServiceRaiseExceptionLocalProcess(std::int32_t appId, std::int32_t processId, std::uint64_t exception) {
    return 0;
}

int APS5_VABI sceSystemServiceReenablePartyVoice() {
    return SystemServiceUnavailable;
}

int APS5_VABI sceSystemServiceReenableVoiceRecognition() {
    return SystemServiceUnavailable;
}

int APS5_VABI sceSystemServiceRegisterDaemon() {
    return 0;
}

int APS5_VABI sceSystemServiceReleaseBgmCpuBudget() {
    return 0;
}

int APS5_VABI sceSystemServiceReleaseFb0() {
    return SystemServiceUnavailable;
}

int APS5_VABI sceSystemServiceRequestCameraCalibration() {
    return 0;
}

int APS5_VABI sceSystemServiceRequestPowerOff() {
    return 0;
}

int APS5_VABI sceSystemServiceRequestReboot() {
    return 0;
}

int APS5_VABI sceSystemServiceRequestToChangeRenderingMode() {
    return SystemServiceRejected;
}

int APS5_VABI sceSystemServiceResumeLocalProcess(std::int32_t processId) {
    return 0;
}

int APS5_VABI sceSystemServiceSaveVideoToken(std::int32_t userId, const char* token) {
    return 0;
}

int APS5_VABI sceSystemServiceSetControllerFocusPermission(std::uint8_t permission) {
    return 0;
}

int APS5_VABI sceSystemServiceSetGpuLoadEmulationMode(std::uint32_t mode) {
    return 0;
}

int APS5_VABI sceSystemServiceSetOutOfVrPlayAreaFlag(std::uint8_t flag) {
    return 0;
}

int APS5_VABI sceSystemServiceSetOutOfVrPlayZoneWarning() {
    return 0;
}

int APS5_VABI sceSystemServiceSetPowerSaveLevel(std::uint32_t level) {
    return 0;
}

int APS5_VABI sceSystemServiceShowClosedCaptionAdvancedSettings() {
    return 0;
}

int APS5_VABI sceSystemServiceShowClosedCaptionSettings() {
    return 0;
}

int APS5_VABI sceSystemServiceShowErrorDialog(std::uint32_t error, const char* message) {
    return 0;
}

int APS5_VABI sceSystemServiceShowEyeToEyeDistanceSetting() {
    return 0;
}

int APS5_VABI sceSystemServiceShowImposeMenuForPs2Emu(std::uint8_t enabled, std::uint64_t reserved) {
    return 0;
}

int APS5_VABI sceSystemServiceSuspendBackgroundApp(std::int32_t first, std::int32_t second) {
    return 0;
}

int APS5_VABI sceSystemServiceSuspendLocalProcess(std::int32_t processId) {
    return 0;
}

int APS5_VABI sceSystemServiceTelemetrySetData(const char* key, const void* data, std::size_t size) {
    return 0;
}

int APS5_VABI sceSystemServiceTelemetrySetData2(const char* key, const char* data) {
    return 0;
}

int APS5_VABI sceSystemServiceTickVideoPlayback() {
    return 0;
}

int APS5_VABI sceSystemServiceTurnOffScreenSaver() {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageGetDeviceInfo(std::uint32_t device, UsbStorageDeviceInfo* info) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageGetDeviceList(std::uint32_t* devices, std::int32_t* count) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageGetdentsClose(std::int32_t fd) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageGetdentsOpen(std::uint32_t device, std::int32_t* fd, std::uint64_t* bufferSize) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageGetdentsRead(std::int32_t fd, void* buffer, std::uint64_t bufferSize, std::uint64_t* bytesRead) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageInit(void* attr) {
    return 0;
}

bool APS5_VABI sceSystemServiceUsbStorageIsExist(std::uint32_t device, const char* directory, std::uint8_t* exists) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageRegisterCallback(std::int32_t eventType, UsbStorageCallback callback, void* arg) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageRegisterCallbackForMapAvailable(std::uint32_t device, const char* directory, UsbStorageCallback callback, void* arg) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageRegisterCallbackForMapUnavailable(std::uint32_t device, const char* directory, UsbStorageCallback callback, void* arg) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageRequestMap(std::uint32_t device, const char* directory, std::int32_t flags, std::uint64_t volumeSize, char* mountPoint, std::uint64_t* mountId) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageRequestMapWSB(std::uint32_t device, const char* directory, std::int32_t flags, std::uint64_t volumeSize, char* mountPoint, std::uint64_t* mountId) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageRequestUnmap(std::uint32_t device, const char* directory) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageTerm() {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageUnregisterCallback(std::int32_t eventType, UsbStorageCallback callback) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageUnregisterCallbackForMapAvailable(std::uint32_t device, const char* directory, UsbStorageCallback callback) {
    return 0;
}

int APS5_VABI sceSystemServiceUsbStorageUnregisterCallbackForMapUnavailable(std::uint32_t device, const char* directory, UsbStorageCallback callback) {
    return 0;
}

int APS5_VABI sceSystemStateMgrCancelShutdownTimer() {
    return 0;
}

int APS5_VABI sceSystemStateMgrEnterMediaPlaybackMode() {
    return 0;
}

int APS5_VABI sceSystemStateMgrEnterStandby() {
    return 0;
}

int APS5_VABI sceSystemStateMgrExtendShutdownTimer() {
    return 0;
}

int APS5_VABI sceSystemStateMgrExtendShutdownTimerForPostAutoUpdateProcess() {
    return 0;
}

int APS5_VABI sceSystemStateMgrGetCurrentState() {
    return 0;
}

int APS5_VABI sceSystemStateMgrGetTriggerCode() {
    return 0;
}

bool APS5_VABI sceSystemStateMgrIsBdDriveReady() {
    return 0;
}

int APS5_VABI sceSystemStateMgrIsGpuPerformanceNormal() {
    return 0;
}

bool APS5_VABI sceSystemStateMgrIsShellUIShutdownInProgress() {
    return 0;
}

bool APS5_VABI sceSystemStateMgrIsStandbyModeEnabled() {
    return 0;
}

int APS5_VABI sceSystemStateMgrLeaveMediaPlaybackMode() {
    return 0;
}

int APS5_VABI sceSystemStateMgrNotifySystemSuspendResumeProgress(const char* progress) {
    return 0;
}

int APS5_VABI sceSystemStateMgrReboot() {
    return 0;
}

int APS5_VABI sceSystemStateMgrRequestToKeepMainOnStandby(const char* reason) {
    return 0;
}

int APS5_VABI sceSystemStateMgrSendCecOneTouchPlayCommand() {
    return 0;
}

int APS5_VABI sceSystemStateMgrStartRebootTimer(std::int32_t mode) {
    return 0;
}

int APS5_VABI sceSystemStateMgrStartShutdownTimer() {
    return 0;
}

int APS5_VABI sceSystemStateMgrStartStadbyTimer() {
    return 0;
}

int APS5_VABI sceSystemStateMgrStartVshAutoUpdateTimer() {
    return 0;
}

int APS5_VABI sceSystemStateMgrTickMusicPlayback() {
    return 0;
}

int APS5_VABI sceSystemStateMgrTickPartyChat() {
    return 0;
}

int APS5_VABI sceSystemStateMgrTurnOff() {
    return 0;
}

int APS5_VABI sceSystemStateMgrVshAutoUpdate() {
    return 0;
}

int APS5_VABI sceSystemStateMgrWaitVshAutoUpdateVerifyDone() {
    return 0;
}

int APS5_VABI sceSystemStateMgrWakeUp(std::uint16_t trigger) {
    return 0;
}

}
