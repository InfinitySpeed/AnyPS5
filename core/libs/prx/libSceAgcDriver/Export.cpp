#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceAgcDriverAcquireRazorACQ(void) {
    return 0;
}

int APS5_VABI sceAgcDriverCreateQueue(void) {
    return 0;
}

int APS5_VABI sceAgcDriverCwsrResumeAcq(void) {
    return 0;
}

int APS5_VABI sceAgcDriverCwsrSuspendAcq(void) {
    return 0;
}

int APS5_VABI sceAgcDriverDebugHardwareStatus(void) {
    return 0;
}

int APS5_VABI sceAgcDriverDestroyQueue(void) {
    return 0;
}

int APS5_VABI sceAgcDriverGetPaDebugInterfaceVersion(void) {
    return 0;
}

int APS5_VABI sceAgcDriverGetRegShadowInfo(void) {
    return 0;
}

int APS5_VABI sceAgcDriverGetRegShadowInfoAgr(void) {
    return 0;
}

int APS5_VABI sceAgcDriverGetReservedDmemForAgc(void) {
    return 0;
}

int APS5_VABI sceAgcDriverGetWorkloadStreamInfo(void) {
    return 0;
}

int APS5_VABI sceAgcDriverIDHSSubmit(void) {
    return 0;
}

int APS5_VABI sceAgcDriverModuleRegistration(void) {
    return 0;
}

int APS5_VABI sceAgcDriverNotifyDefaultStates(void) {
    return 0;
}

int APS5_VABI sceAgcDriverPassInfoDownward(void) {
    return 0;
}

int APS5_VABI sceAgcDriverPatchClearState(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSetFlip(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSetHsOffchipParamDirect(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSetWorkloadComplete(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSetWorkloadsActive(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSetupAsyncGraphics(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSetupRegisterShadow(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSubmitMultiCommandBuffersDirect(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSubmitToHDRScopesACQ(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSubmitToRazorACQ(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSuspendPointSubmit(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSuspendPointSubmitDirect(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSysEnableSubmitDone45Exception(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSysGetClientNumber(void) {
    return 0;
}

int APS5_VABI sceAgcDriverSysIsGameClosed(void) {
    return 0;
}

int APS5_VABI sceAgcDriverTmpInitIdhs(void) {
    return 0;
}

int APS5_VABI sceAgcDriverUserDataWritePacket(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAgcDriverUserDataWritePopMarker(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAgcDriverUserDataWritePushMarker(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAgcDriverUserDataWriteSetMarker(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
