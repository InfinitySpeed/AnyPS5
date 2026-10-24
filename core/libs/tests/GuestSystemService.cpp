#include "SceTypes.hpp"
#include "prx/libSceSystemService/SystemService.hpp"
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <string>
#include <initializer_list>
#include <stdexcept>

extern "C" int APS5_VABI sceSystemServiceGetHdrToneMapLuminance(SystemServiceHdrToneMapLuminance* luminance);
extern "C" int APS5_VABI sceSystemServiceParamGetString(int paramId, char* buf, std::size_t bufSize);
extern "C" int APS5_VABI sceSystemServiceLaunchApp(const char* titleId, const char* const* arguments, const void* param);
extern "C" int APS5_VABI sceSystemServiceAddLocalProcessForPsmKit(const char* path, const char* const* arguments, const void* param);
extern "C" int APS5_VABI sceSystemServiceKillLocalProcessForPsmKit(int handle);

extern "C" int APS5_VABI sceSystemServiceLaunchSystemDeeplink(void);
extern "C" int APS5_VABI sceShellCoreUtilLaunchByUriParamInit(void);
extern "C" int APS5_VABI sceSystemStateMgrTickVideoPlayback(void);
extern "C" int APS5_VABI sceSystemServiceTelemetrySetData2WithUserId(void);
extern "C" int APS5_VABI sceShellCoreUtilStartUmmDictation(void);
extern "C" int APS5_VABI sceSystemServiceGetSpotifyTitleId(void);
extern "C" int APS5_VABI sceSystemServiceGetAppStatusListContainsDaemon(void);
extern "C" int APS5_VABI sceSystemServiceSwitchToVRApp(void);
extern "C" int APS5_VABI sceSystemServiceSwitchToNonVRApp(void);
extern "C" int APS5_VABI sceLncUtilGetSpmemAllocatorConfigValue(void);
extern "C" int APS5_VABI sceCsbMgrInitialize(void);
extern "C" int APS5_VABI sceCsbMgrTerminate(void);
extern "C" int APS5_VABI sceCsbMgrCreateLocalSandbox(void);
extern "C" int APS5_VABI sceCsbMgrDestroyLocalSandbox(void);
extern "C" int APS5_VABI sceCsbMgrSwitchLocalSandbox(void);
extern "C" int APS5_VABI sceCsbMgrGetCurrentLocalSandboxId(void);
extern "C" int APS5_VABI sceCsbMgrGetLocalSandboxIdList(void);
extern "C" int APS5_VABI sceCsbMgrGetLocalSandboxInfo(void);
extern "C" int APS5_VABI sceCsbMgrSetLocalSandboxInfo(void);
extern "C" int APS5_VABI sceCsbMgrIssueStreamingSandboxInfo(void);
extern "C" int APS5_VABI sceReportSequenceHandlerRequestReport(void);
extern "C" int APS5_VABI sceReportSequenceHandlerCancelReport(void);
extern "C" int APS5_VABI sceReportSequenceHandlerExistsEvent(void);
extern "C" int APS5_VABI sceReportSequenceHandlerUpdateEventCache(void);
extern "C" int APS5_VABI sceReportSequenceHandlerGetEventCache(void);
extern "C" int APS5_VABI sceLncUtilRegisterCallEntries(void);
extern "C" int APS5_VABI sceLncUtilGetSpmemConfigJson(void);
extern "C" int APS5_VABI sceLncUtilExportSpmemConfigJson(void);
extern "C" int APS5_VABI sceLncUtilImportSpmemConfigJson(void);
extern "C" int APS5_VABI sceShellCoreUtilExitAppWithValue(void);
extern "C" int APS5_VABI sceShellCoreUtilNpDebugSpecialNotification(void);
extern "C" int APS5_VABI sceShellCoreUtilIsDddTemperatureDanger(void);
extern "C" int APS5_VABI sceShellCoreUtilIsM2StorageTemperatureDanger(void);
extern "C" int APS5_VABI sceShellCoreUtilGetAvailableSizeM2(void);
extern "C" int APS5_VABI sceShellCoreUtilNotifyConnectAccountStatusChanged(void);
extern "C" int APS5_VABI sceShellCoreUtilIsInternalCronosUser(void);
extern "C" int APS5_VABI sceShellCoreUtilChangePbtcMode(void);
extern "C" int APS5_VABI sceShellCoreUtilTelemetryCacheData(void);
extern "C" int APS5_VABI sceShellCoreUtilMicMuteKeyPressed(void);
extern "C" int APS5_VABI sceShellCoreUtilSwitchMicMute(void);
extern "C" int APS5_VABI sceShellCoreUtilNotifyStartEventToUniversalMicMute(void);
extern "C" int APS5_VABI sceShellCoreUtilIsLotusMicActivated(void);
extern "C" int APS5_VABI sceShellCoreUtilResetAllNoticeScreenSkipFlag(void);
extern "C" int APS5_VABI sceShellCoreUtilResetNoticeScreenSkipFlag(void);
extern "C" int APS5_VABI sceShellCoreUtilGetNoticeScreenSkipFlagByAppId(void);
extern "C" int APS5_VABI sceShellCoreUtilGetPasscodeInputType(void);
extern "C" int APS5_VABI sceShellCoreUtilGetPasscodeDisplayInfo(void);
extern "C" int APS5_VABI sceShellCoreUtilNotifySystemResumeTelemetryInfo(void);
extern "C" int APS5_VABI sceShellCoreUtilUpdateTelemetryToken(void);
extern "C" int APS5_VABI sceShellCoreUtilGetVRBaseMatRectangles(void);
extern "C" int APS5_VABI sceShellCoreUtilSetVRBaseMatRectangles(void);
extern "C" int APS5_VABI sceShellCoreUtilIsLaunchBlockDialog(void);
extern "C" int APS5_VABI sceShellCoreUtilGetConsoleToken(void);
extern "C" int APS5_VABI sceShellCoreUtilGetDeviceIdByDeviceUniqueId(void);
extern "C" int APS5_VABI sceShellCoreUtilGetDeviceUniqueIdByDeviceId(void);
extern "C" int APS5_VABI sceShellCoreUtilGetStreamingClientInfo(void);
extern "C" int APS5_VABI sceShellCoreUtilRequestCffUpdate(void);
extern "C" int APS5_VABI sceShellCoreUtilGetCffConfig(void);
extern "C" int APS5_VABI sceShellCoreUtilRemoveCffConfigFile(void);
extern "C" int APS5_VABI sceShellCoreUtilDebugGetNumberOfCffItems(void);
extern "C" int APS5_VABI sceShellCoreUtilDebugGetCffInfo(void);
extern "C" int APS5_VABI sceShellCoreUtilDebugSetCffStatus(void);
extern "C" int APS5_VABI sceShellCoreUtilGetPeripheralConnectionSessionId(void);
extern "C" int APS5_VABI sceShellCoreUtilGetCdlgEnabledFreezeRendering(void);
extern "C" int APS5_VABI sceShellCoreUtilGetNpTitleId(void);
extern "C" int APS5_VABI sceShellCoreUtilIsCronosInGameCommerceEnabled(void);
extern "C" int APS5_VABI sceShellCoreUtilLemSettingGet(void);
namespace {

constexpr int browserUnavailable = static_cast<int>(0x8002002Du);

void Require(bool value) { if (!value) std::abort(); }

template<typename TCall>
bool Throws(TCall call) {
    try {
        static_cast<void>(call());
    } catch (const std::runtime_error&) {
        return true;
    }
    return false;
}

bool LaunchAppThrows(const char* titleId, const char* const* arguments, const void* param) {
    try {
        static_cast<void>(sceSystemServiceLaunchApp(titleId, arguments, param));
    } catch (const std::runtime_error&) {
        return true;
    }
    return false;
}

}

extern "C" int APS5_VABI sceSystemServicePowerTick(void);
extern "C" int APS5_VABI sceSystemServiceIsBgmPlaying(void);
extern "C" int APS5_VABI sceShellCoreUtilIsBgmPlaying(void);
extern "C" int APS5_VABI sceSystemServiceReportAbnormalTermination(const void* info);
extern "C" int APS5_VABI sceSystemServiceDisableMusicPlayer(void);
extern "C" int APS5_VABI sceSystemServiceReenableMusicPlayer(void);
extern "C" int APS5_VABI sceSystemServiceDisableMediaPlay(void);
extern "C" int APS5_VABI sceSystemServiceReenableMediaPlay(void);
extern "C" int APS5_VABI sceSystemServiceLaunchWebBrowser(const char* uri);
extern "C" int APS5_VABI sceSystemServiceShowControllerSettings(void);
extern "C" int APS5_VABI sceSystemServiceShowDisplaySafeAreaSettings(void);
extern "C" int APS5_VABI sceSystemServiceOpenChallengeActivity(void);
extern "C" int APS5_VABI sceSystemServiceGetStatus(SystemServiceStatus* status);
extern "C" int APS5_VABI sceSystemServiceGetDisplaySafeAreaInfo(SystemServiceDisplaySafeAreaInfo* info);
extern "C" int APS5_VABI sceSystemServiceGetNoticeScreenSkipFlag(bool* value);
extern "C" int APS5_VABI sceSystemServiceSetNoticeScreenSkipFlag(void);
extern "C" int APS5_VABI sceSystemServiceDisableNoticeScreenSkipFlagAutoSet(void);
extern "C" int APS5_VABI sceSystemServiceHideSplashScreen(void);
extern "C" int APS5_VABI sceSystemServiceReceiveEvent(SystemServiceEvent* event);
extern "C" void APS5_VABI sceSystemServiceInitializePlayerDialogParam(SystemServicePlayerDialogParam* param);

namespace {

void TestPlayerDialogParam() {
    alignas(8) unsigned char buffer[0x100];
    std::memset(buffer, 0xab, sizeof(buffer));
    sceSystemServiceInitializePlayerDialogParam(reinterpret_cast<SystemServicePlayerDialogParam*>(buffer));
    unsigned char expected[0x40] = {0x40};
    std::memset(expected + 0xc, 0xff, 4);
    Require(std::memcmp(buffer, expected, sizeof(expected)) == 0);
    for (std::size_t i = sizeof(expected); i < sizeof(buffer); ++i) Require(buffer[i] == 0xab);
    bool threw = false;
    try {
        sceSystemServiceInitializePlayerDialogParam(nullptr);
    } catch (const std::invalid_argument&) {
        threw = true;
    }
    Require(threw);
}

}

int main() {
    Require(sceSystemServicePowerTick() == SYSTEM_SERVICE_OK);
    Require(sceSystemServicePowerTick() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceReportAbnormalTermination(nullptr) == SYSTEM_SERVICE_OK);
    int info = 0;
    Require(sceSystemServiceReportAbnormalTermination(&info) == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceDisableMusicPlayer() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceDisableMusicPlayer() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceReenableMusicPlayer() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceIsBgmPlaying() == 0 && sceShellCoreUtilIsBgmPlaying() == 0);
    Require(sceSystemServiceReenableMusicPlayer() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceDisableMediaPlay() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceDisableMediaPlay() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceReenableMediaPlay() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceReenableMediaPlay() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceShowControllerSettings() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceShowDisplaySafeAreaSettings() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceOpenChallengeActivity() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceLaunchWebBrowser("http:") == browserUnavailable);
    Require(sceSystemServiceLaunchWebBrowser("https:") == browserUnavailable);
    Require(sceSystemServiceLaunchWebBrowser("psno:") == browserUnavailable);
    Require(sceSystemServiceLaunchWebBrowser("") == static_cast<int>(0x80a10008));
    Require(sceSystemServiceLaunchWebBrowser("HTTP:") == static_cast<int>(0x80a10008));
    Require(sceSystemServiceLaunchWebBrowser(nullptr) == static_cast<int>(0x80a10003));
    std::string browserUri = "http:" + std::string(6010, 'a');
    Require(sceSystemServiceLaunchWebBrowser(browserUri.c_str()) == browserUnavailable);
    browserUri += 'a';
    Require(sceSystemServiceLaunchWebBrowser(browserUri.c_str()) == static_cast<int>(0x80a10007));
    Require(LaunchAppThrows("PPSA99109", nullptr, nullptr));
    Require(LaunchAppThrows(nullptr, nullptr, nullptr));
    const char* launchArguments[] = {"--backup", nullptr};
    unsigned char launchParam[0x20];
    std::memset(launchParam, 0x5a, sizeof(launchParam));
    Require(LaunchAppThrows("PPSA99110", launchArguments, launchParam));
    for (unsigned char byte : launchParam) Require(byte == 0x5a);
    Require(std::strcmp(launchArguments[0], "--backup") == 0 && launchArguments[1] == nullptr);
    const char* childArguments[] = {"/app0/child.bin", nullptr};
    unsigned char processParam[0x90];
    std::memset(processParam, 0x5a, sizeof(processParam));
    Require(Throws([&] { return sceSystemServiceAddLocalProcessForPsmKit("/app0/child.bin", childArguments, processParam); }));
    for (unsigned char byte : processParam) Require(byte == 0x5a);
    Require(Throws([] { return sceSystemServiceAddLocalProcessForPsmKit(nullptr, nullptr, nullptr); }));
    Require(Throws([] { return sceSystemServiceKillLocalProcessForPsmKit(1); }));
    Require(sceSystemServiceGetHdrToneMapLuminance(nullptr) == SYSTEM_SERVICE_ERROR_PARAMETER);
    SystemServiceHdrToneMapLuminance luminance{-1.0f, -1.0f, -1.0f};
    Require(sceSystemServiceGetHdrToneMapLuminance(&luminance) == SYSTEM_SERVICE_OK);
    Require(luminance.max_full_frame_tone_map_luminance == 100.0f);
    Require(luminance.max_tone_map_luminance == 100.0f);
    Require(luminance.min_tone_map_luminance == 0.0f);

    char name[SYSTEM_SERVICE_MAX_SYSTEM_NAME_LENGTH * 2];
    const auto untouched = [&name] {
        for (const char byte : name) {
            if (byte != 'x') return false;
        }
        return true;
    };
    std::memset(name, 'x', sizeof(name));
    Require(sceSystemServiceParamGetString(SYSTEM_SERVICE_PARAM_ID_SYSTEM_NAME, nullptr, SYSTEM_SERVICE_MAX_SYSTEM_NAME_LENGTH) == SYSTEM_SERVICE_ERROR_PARAMETER);
    for (std::size_t size = 0; size < SYSTEM_SERVICE_MAX_SYSTEM_NAME_LENGTH; ++size) {
        Require(sceSystemServiceParamGetString(SYSTEM_SERVICE_PARAM_ID_SYSTEM_NAME, name, size) == SYSTEM_SERVICE_ERROR_PARAMETER);
    }
    for (const int paramId : {-1, 0, 1, 5, 7, 40, 100, 1000, 0x7fffffff}) {
        Require(sceSystemServiceParamGetString(paramId, name, sizeof(name)) == SYSTEM_SERVICE_ERROR_PARAMETER);
    }
    Require(sceSystemServiceParamGetString(SYSTEM_SERVICE_PARAM_ID_LANG, name, sizeof(name)) == SYSTEM_SERVICE_ERROR_PARAMETER);
    Require(untouched());
    Require(sceSystemServiceParamGetString(SYSTEM_SERVICE_PARAM_ID_SYSTEM_NAME, name, SYSTEM_SERVICE_MAX_SYSTEM_NAME_LENGTH + 3) == SYSTEM_SERVICE_OK);
    Require(std::strcmp(name, "PS5") == 0);
    for (std::size_t index = 4; index < SYSTEM_SERVICE_MAX_SYSTEM_NAME_LENGTH + 3; ++index) Require(name[index] == '\0');
    for (std::size_t index = SYSTEM_SERVICE_MAX_SYSTEM_NAME_LENGTH + 3; index < sizeof(name); ++index) Require(name[index] == 'x');

    Require(sceSystemServiceGetStatus(nullptr) == SYSTEM_SERVICE_ERROR_PARAMETER);
    SystemServiceStatus status;
    std::memset(&status, 0x5a, sizeof(status));
    Require(sceSystemServiceGetStatus(&status) == SYSTEM_SERVICE_OK);
    Require(status.event_num == 0 && !status.is_system_ui_overlaid && !status.is_in_background_execution && !status.is_vr_play_area_overlaid);
    for (unsigned char byte : status.reserved) Require(byte == 0);
    Require(sceSystemServiceGetDisplaySafeAreaInfo(nullptr) == SYSTEM_SERVICE_ERROR_PARAMETER);
    SystemServiceDisplaySafeAreaInfo safeArea;
    std::memset(&safeArea, 0x5a, sizeof(safeArea));
    Require(sceSystemServiceGetDisplaySafeAreaInfo(&safeArea) == SYSTEM_SERVICE_OK);
    Require(safeArea.ratio == 1.0f);
    for (unsigned char byte : safeArea.reserved) Require(byte == 0);
    Require(sceSystemServiceGetNoticeScreenSkipFlag(nullptr) == SYSTEM_SERVICE_ERROR_PARAMETER);
    bool skip = true;
    Require(sceSystemServiceGetNoticeScreenSkipFlag(&skip) == SYSTEM_SERVICE_OK && !skip);
    Require(sceSystemServiceSetNoticeScreenSkipFlag() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceDisableNoticeScreenSkipFlagAutoSet() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceHideSplashScreen() == SYSTEM_SERVICE_OK);
    Require(sceSystemServiceReceiveEvent(nullptr) == SYSTEM_SERVICE_ERROR_PARAMETER);
    SystemServiceEvent event;
    event.event_type = 7;
    Require(sceSystemServiceReceiveEvent(&event) == SYSTEM_SERVICE_ERROR_NO_EVENT);
    TestPlayerDialogParam();
    Require(sceSystemServiceLaunchSystemDeeplink() == 0);
    Require(sceShellCoreUtilLaunchByUriParamInit() == 0);
    Require(sceSystemStateMgrTickVideoPlayback() == 0);
    Require(sceSystemServiceTelemetrySetData2WithUserId() == 0);
    Require(sceShellCoreUtilStartUmmDictation() == 0);
    Require(sceSystemServiceGetSpotifyTitleId() == 0);
    Require(sceSystemServiceGetAppStatusListContainsDaemon() == 0);
    Require(sceSystemServiceSwitchToVRApp() == 0);
    Require(sceSystemServiceSwitchToNonVRApp() == 0);
    Require(sceLncUtilGetSpmemAllocatorConfigValue() == 0);
    Require(sceCsbMgrInitialize() == 0);
    Require(sceCsbMgrTerminate() == 0);
    Require(sceCsbMgrCreateLocalSandbox() == 0);
    Require(sceCsbMgrDestroyLocalSandbox() == 0);
    Require(sceCsbMgrSwitchLocalSandbox() == 0);
    Require(sceCsbMgrGetCurrentLocalSandboxId() == 0);
    Require(sceCsbMgrGetLocalSandboxIdList() == 0);
    Require(sceCsbMgrGetLocalSandboxInfo() == 0);
    Require(sceCsbMgrSetLocalSandboxInfo() == 0);
    Require(sceCsbMgrIssueStreamingSandboxInfo() == 0);
    Require(sceReportSequenceHandlerRequestReport() == 0);
    Require(sceReportSequenceHandlerCancelReport() == 0);
    Require(sceReportSequenceHandlerExistsEvent() == 0);
    Require(sceReportSequenceHandlerUpdateEventCache() == 0);
    Require(sceReportSequenceHandlerGetEventCache() == 0);
    Require(sceLncUtilRegisterCallEntries() == 0);
    Require(sceLncUtilGetSpmemConfigJson() == 0);
    Require(sceLncUtilExportSpmemConfigJson() == 0);
    Require(sceLncUtilImportSpmemConfigJson() == 0);
    Require(sceShellCoreUtilExitAppWithValue() == 0);
    Require(sceShellCoreUtilNpDebugSpecialNotification() == 0);
    Require(sceShellCoreUtilIsDddTemperatureDanger() == 0);
    Require(sceShellCoreUtilIsM2StorageTemperatureDanger() == 0);
    Require(sceShellCoreUtilGetAvailableSizeM2() == 0);
    Require(sceShellCoreUtilNotifyConnectAccountStatusChanged() == 0);
    Require(sceShellCoreUtilIsInternalCronosUser() == 0);
    Require(sceShellCoreUtilChangePbtcMode() == 0);
    Require(sceShellCoreUtilTelemetryCacheData() == 0);
    Require(sceShellCoreUtilMicMuteKeyPressed() == 0);
    Require(sceShellCoreUtilSwitchMicMute() == 0);
    Require(sceShellCoreUtilNotifyStartEventToUniversalMicMute() == 0);
    Require(sceShellCoreUtilIsLotusMicActivated() == 0);
    Require(sceShellCoreUtilResetAllNoticeScreenSkipFlag() == 0);
    Require(sceShellCoreUtilResetNoticeScreenSkipFlag() == 0);
    Require(sceShellCoreUtilGetNoticeScreenSkipFlagByAppId() == 0);
    Require(sceShellCoreUtilGetPasscodeInputType() == 0);
    Require(sceShellCoreUtilGetPasscodeDisplayInfo() == 0);
    Require(sceShellCoreUtilNotifySystemResumeTelemetryInfo() == 0);
    Require(sceShellCoreUtilUpdateTelemetryToken() == 0);
    Require(sceShellCoreUtilGetVRBaseMatRectangles() == 0);
    Require(sceShellCoreUtilSetVRBaseMatRectangles() == 0);
    Require(sceShellCoreUtilIsLaunchBlockDialog() == 0);
    Require(sceShellCoreUtilGetConsoleToken() == 0);
    Require(sceShellCoreUtilGetDeviceIdByDeviceUniqueId() == 0);
    Require(sceShellCoreUtilGetDeviceUniqueIdByDeviceId() == 0);
    Require(sceShellCoreUtilGetStreamingClientInfo() == 0);
    Require(sceShellCoreUtilRequestCffUpdate() == 0);
    Require(sceShellCoreUtilGetCffConfig() == 0);
    Require(sceShellCoreUtilRemoveCffConfigFile() == 0);
    Require(sceShellCoreUtilDebugGetNumberOfCffItems() == 0);
    Require(sceShellCoreUtilDebugGetCffInfo() == 0);
    Require(sceShellCoreUtilDebugSetCffStatus() == 0);
    Require(sceShellCoreUtilGetPeripheralConnectionSessionId() == 0);
    Require(sceShellCoreUtilGetCdlgEnabledFreezeRendering() == 0);
    Require(sceShellCoreUtilGetNpTitleId() == 0);
    Require(sceShellCoreUtilIsCronosInGameCommerceEnabled() == 0);
    Require(sceShellCoreUtilLemSettingGet() == 0);
}
