#include <cstdint>
#include <cstddef>
#include <stdexcept>
#include <string>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

constexpr int REMOTEPLAY_CONNECTION_STATUS_DISCONNECT = 0;

extern "C" {

int APS5_VABI sceRemoteplayGetConnectionStatus(int user_id, int* status) {
 (void)user_id;
 if (!status) APS5_INVALID_ARG_EX;
 *status = REMOTEPLAY_CONNECTION_STATUS_DISCONNECT;
 return 0;
}

int APS5_VABI sceRemoteplayInitialize(void* heap, size_t heap_size) {
 if (!heap || heap_size == 0) APS5_INVALID_ARG_EX;
 return 0;
}

int APS5_VABI sceRemoteplayTerminate(void) {
 return 0;
}

int APS5_VABI sceRemoteplayApprove(void) {
    return 0;
}

int APS5_VABI sceRemoteplayClearAllRegistData(void) {
    return 0;
}

int APS5_VABI sceRemoteplayClearConnectHistory(void) {
    return 0;
}

int APS5_VABI sceRemoteplayConfirmDeviceRegist(void) {
    return 0;
}

int APS5_VABI sceRemoteplayDisconnect(void) {
    return 0;
}

int APS5_VABI sceRemoteplayGeneratePinCode(void) {
    return 0;
}

int APS5_VABI sceRemoteplayGetApMode(void) {
    return 0;
}

int APS5_VABI sceRemoteplayGetConnectHistory(void) {
    return 0;
}

int APS5_VABI sceRemoteplayGetConnectUserId(void) {
    return 0;
}

int APS5_VABI sceRemoteplayGetMbusDeviceInfo(void) {
    return 0;
}

int APS5_VABI sceRemoteplayGetOperationStatus(void) {
    return 0;
}

int APS5_VABI sceRemoteplayGetPrimaryUserId(void) {
    return 0;
}

int APS5_VABI sceRemoteplayGetRemoteplayStatus(void) {
    return 0;
}

int APS5_VABI sceRemoteplayGetRpMode(void) {
    return 0;
}

int APS5_VABI sceRemoteplayImeClose(void) {
    return 0;
}

int APS5_VABI sceRemoteplayImeFilterResult(void) {
    return 0;
}

int APS5_VABI sceRemoteplayImeGetEvent(void) {
    return 0;
}

int APS5_VABI sceRemoteplayImeNotify(void) {
    return 0;
}

int APS5_VABI sceRemoteplayImeNotifyEventResult(void) {
    return 0;
}

int APS5_VABI sceRemoteplayImeOpen(void) {
    return 0;
}

int APS5_VABI sceRemoteplayImeSetCaret(void) {
    return 0;
}

int APS5_VABI sceRemoteplayImeSetText(void) {
    return 0;
}

int APS5_VABI sceRemoteplayIsRemoteOskReady(void) {
    return 0;
}

int APS5_VABI sceRemoteplayIsRemotePlaying(void) {
    return 0;
}

int APS5_VABI sceRemoteplayNotifyMbusDeviceRegistComplete(void) {
    return 0;
}

int APS5_VABI sceRemoteplayNotifyNpPushWakeup(void) {
    return 0;
}

int APS5_VABI sceRemoteplayNotifyPinCodeError(void) {
    return 0;
}

int APS5_VABI sceRemoteplayNotifySubmitCode(void) {
    return 0;
}

int APS5_VABI sceRemoteplayNotifyUserDelete(void) {
    return 0;
}

int APS5_VABI sceRemoteplayPrintAllRegistData(void) {
    return 0;
}

int APS5_VABI sceRemoteplayProhibit(void) {
    return 0;
}

int APS5_VABI sceRemoteplayProhibitStreaming(void) {
    return 0;
}

int APS5_VABI sceRemoteplayServerLock(void) {
    return 0;
}

int APS5_VABI sceRemoteplayServerUnLock(void) {
    return 0;
}

int APS5_VABI sceRemoteplaySetApMode(void) {
    return 0;
}

int APS5_VABI sceRemoteplaySetLogLevel(void) {
    return 0;
}

int APS5_VABI sceRemoteplaySetProhibition(void) {
    return 0;
}

int APS5_VABI sceRemoteplaySetProhibitionForVsh(void) {
    return 0;
}

int APS5_VABI sceRemoteplaySetRpMode(void) {
    return 0;
}

}
