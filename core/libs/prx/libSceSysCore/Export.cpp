#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

struct ApplicationInfo {
    std::byte data[152];
};

static_assert(sizeof(ApplicationInfo) == 152);

extern "C" {

int APS5_VABI sceApplicationGetAppInfoByAppId(std::uint32_t applicationId, ApplicationInfo* info) {
    return 0;
}

int APS5_VABI _sceApplicationGetAppId() {
    return 0;
}
int APS5_VABI sceApplicationAddProcess2() {
    return 0;
}
int APS5_VABI sceApplicationBeginSclkChange() {
    return 0;
}
int APS5_VABI sceApplicationBlockingKill2() {
    return 0;
}
int APS5_VABI sceApplicationBlockingKill3() {
    return 0;
}
int APS5_VABI sceApplicationContinue() {
    return 0;
}
int APS5_VABI sceApplicationCrashSyscore() {
    return 0;
}
int APS5_VABI sceApplicationCrashSystemProcess() {
    return 0;
}
int APS5_VABI sceApplicationEndSclkChange() {
    return 0;
}
int APS5_VABI sceApplicationExitSpawn() {
    return 0;
}
int APS5_VABI sceApplicationExitSpawn2() {
    return 0;
}
int APS5_VABI sceApplicationFinalize() {
    return 0;
}
int APS5_VABI sceApplicationGetAppPackageInfoForCoredump() {
    return 0;
}
int APS5_VABI sceApplicationGetCompiledSdkVersionByAppId() {
    return 0;
}
int APS5_VABI sceApplicationGetCoredumpDirAndFileName() {
    return 0;
}
int APS5_VABI sceApplicationGetCoredumpState() {
    return 0;
}
int APS5_VABI sceApplicationGetCpuUsage() {
    return 0;
}
int APS5_VABI sceApplicationGetCpuUsage2() {
    return 0;
}
int APS5_VABI sceApplicationGetDbgExecutablePath() {
    return 0;
}
int APS5_VABI sceApplicationGetMode() {
    return 0;
}
int APS5_VABI sceApplicationGetProcs() {
    return 0;
}
int APS5_VABI sceApplicationGetShellCoreAppId() {
    return 0;
}
int APS5_VABI sceApplicationGetStateForDebugger() {
    return 0;
}
int APS5_VABI sceApplicationInitialize() {
    return 0;
}
int APS5_VABI sceApplicationInitializeForShellCore() {
    return 0;
}
int APS5_VABI sceApplicationIsCrashReportBeingProcessed() {
    return 0;
}
int APS5_VABI sceApplicationIsPrimaryProcess() {
    return 0;
}
int APS5_VABI sceApplicationIsResumable() {
    return 0;
}
int APS5_VABI sceApplicationIsSuspendable() {
    return 0;
}
int APS5_VABI sceApplicationKickCoredump() {
    return 0;
}
int APS5_VABI sceApplicationKickCoredump2() {
    return 0;
}
int APS5_VABI sceApplicationKill() {
    return 0;
}
int APS5_VABI sceApplicationLocalProcessKill() {
    return 0;
}
int APS5_VABI sceApplicationLocalProcessKill2() {
    return 0;
}
int APS5_VABI sceApplicationLocalProcessResume() {
    return 0;
}
int APS5_VABI sceApplicationLocalProcessSuspend() {
    return 0;
}
int APS5_VABI sceApplicationNotifyCoredumpRequestEnd() {
    return 0;
}
int APS5_VABI sceApplicationNotifyCoredumpRequestProgress() {
    return 0;
}
int APS5_VABI sceApplicationNotifyVshMainOnStandby() {
    return 0;
}
int APS5_VABI sceApplicationNotifyVshReady() {
    return 0;
}
int APS5_VABI sceApplicationOnAllResourceReleased() {
    return 0;
}
int APS5_VABI sceApplicationRaiseException() {
    return 0;
}
int APS5_VABI sceApplicationRaiseExceptionToLocalPid() {
    return 0;
}
int APS5_VABI sceApplicationRaiseExceptionToPid() {
    return 0;
}
int APS5_VABI sceApplicationRequestToChangeRenderingMode() {
    return 0;
}
int APS5_VABI sceApplicationRestore() {
    return 0;
}
int APS5_VABI sceApplicationResume() {
    return 0;
}
int APS5_VABI sceApplicationSave() {
    return 0;
}
int APS5_VABI sceApplicationSendDebugSpawnResult2() {
    return 0;
}
int APS5_VABI sceApplicationSendResultOfDebuggerKillRequest() {
    return 0;
}
int APS5_VABI sceApplicationSendResultOfDebuggerResumeRequest() {
    return 0;
}
int APS5_VABI sceApplicationSendResultOfDebuggerSuspendRequest() {
    return 0;
}
int APS5_VABI sceApplicationSendResultOfDebuggerTitleIdLaunchRequest() {
    return 0;
}
int APS5_VABI sceApplicationSetApplicationFocus() {
    return 0;
}
int APS5_VABI sceApplicationSetControllerFocus() {
    return 0;
}
int APS5_VABI sceApplicationSetControllerFocusPermissionToSubProcess() {
    return 0;
}
int APS5_VABI sceApplicationSetMemoryPstate() {
    return 0;
}
int APS5_VABI sceApplicationSignalShellCoreHeartBeat() {
    return 0;
}
int APS5_VABI sceApplicationSpawn2() {
    return 0;
}
int APS5_VABI sceApplicationSuspend() {
    return 0;
}
int APS5_VABI sceApplicationSuspendSystemForDebugger() {
    return 0;
}
int APS5_VABI sceApplicationSwitchToBaseMode() {
    return 0;
}
int APS5_VABI sceApplicationSwitchToNeoMode() {
    return 0;
}
int APS5_VABI sceApplicationSwitchToNeoMode2() {
    return 0;
}
int APS5_VABI sceApplicationSystemReboot() {
    return 0;
}
int APS5_VABI sceApplicationSystemShutdown2() {
    return 0;
}
int APS5_VABI sceApplicationSystemSuspend() {
    return 0;
}
int APS5_VABI sceApplicationSystemSuspend2() {
    return 0;
}
int APS5_VABI sceApplictionGetStateForDebugger() {
    return 0;
}
int APS5_VABI sceSysCoreGetEventCount() {
    return 0;
}
int APS5_VABI sceSysCoreReceiveEvent() {
    return 0;
}
}
