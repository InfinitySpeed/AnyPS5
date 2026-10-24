#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceAudioOut2UserCreateEx(void) {
    return 0;
}

int APS5_VABI sceAudioOutOpenEx(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetSystemDebugState(void) {
    return 0;
}

int APS5_VABI sceAudioOutGetHandleStatusInfo(void) {
    return 0;
}

int APS5_VABI sceAudioOutGetSimulatedHandleStatusInfo2(void) {
    return 0;
}

int APS5_VABI sceAudioOutChangeAppModuleState(void) {
    return 0;
}

int APS5_VABI sceAudioOutGetSimulatedHandleStatusInfo(void) {
    return static_cast<int>(0x809B00FF);
}

int APS5_VABI sceAudioOutGetSimulatedBusUsableStatusByBusType(void) {
    return 0;
}

int APS5_VABI sceAudioOutAttachToApplicationByPid(void) {
    return 0;
}

int APS5_VABI sceAudioOutDetachFromApplicationByPid(void) {
    return 0;
}

int APS5_VABI sceAudioOutPtOpen(void) {
    return 0;
}

int APS5_VABI sceAudioOutPtClose(void) {
    return 0;
}

int APS5_VABI sceAudioOutPtGetLastOutputTime(void) {
    return 0;
}

int APS5_VABI sceAudioOutExPtOpen(void) {
    return 0;
}

int APS5_VABI sceAudioOutExPtClose(void) {
    return 0;
}

int APS5_VABI sceAudioOutExPtGetLastOutputTime(void) {
    return 0;
}

int APS5_VABI sceAudioOutExGetLastOutputTime(void) {
    return 0;
}

int APS5_VABI sceAudioOutGetInfoOpenNum(void) {
    return 0;
}

int APS5_VABI sceAudioOutGetInfo(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetPadSpkVolume(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetPadJackVolume(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetUsbVolume(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetCaesarVolume(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetHeadphoneOutMode(void) {
    return 0;
}

int APS5_VABI sceAudioOutGetFocusEnablePid(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetMainOutput(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetVolumeDown(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetChatBalance(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetRecMode(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetAllMute(void) {
    return 0;
}

int APS5_VABI sceAudioOutSetSparkEQ(void) {
    return 0;
}

int APS5_VABI sceAudioOutArbitrationInitialize(void) {
    return 0;
}

int APS5_VABI sceAudioOut2ArbitrationInitialize(void) {
    return 0;
}

int APS5_VABI sceAudioOutEnable3DAudioByArbitration(void) {
    return 0;
}

int APS5_VABI sceAudioOutAssignHRTF(void) {
    return 0;
}

int APS5_VABI sceAudioOutEnable3DAudioForUser(void) {
    return 0;
}

int APS5_VABI sceAudioOutEnableMonoHpOutput(void) {
    return 0;
}

int APS5_VABI sceAudioOutEnableTVVirtual(void) {
    return 0;
}

int APS5_VABI sceAudioOutEnableTVCorrection(void) {
    return 0;
}

int APS5_VABI sceAudioOutEnableVrControllerLowPowerMode(void) {
    return 0;
}

int APS5_VABI sceAudioOutEnableCinematicVrRotation(void) {
    return 0;
}

int APS5_VABI sceAudioOutCustomHrtfIsExist(void) {
    return 0;
}

int APS5_VABI sceAudioOutExConfigureOutputMode(void) {
    return 0;
}

int APS5_VABI sceAudioOutExSystemInfoIsSupportedAudioOutExMode(void) {
    return 0;
}

int APS5_VABI sceAudioOutExGetSystemInfo(void) {
    return 0;
}

int APS5_VABI sceAudioOutExGetOutputInfo(void) {
    return 0;
}

int APS5_VABI sceAudioOutSysConfigureOutputMode(void) {
    return 0;
}

int APS5_VABI sceAudioOutSysGetMonitorInfo(void) {
    return 0;
}

int APS5_VABI sceAudioOutSysHdmiMonitorInfoIsSupportedAudioOutMode(void) {
    return 0;
}

int APS5_VABI sceAudioOutSysGetSystemInfo(void) {
    return 0;
}

int APS5_VABI sceAudioOutSysGetOutputInfo(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusInit(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusSetPortConnections(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusSetConnections(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusSetPortStatuses(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusSetHeadphoneOutMode(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusUserLoginFor3DAudio(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusSetDeviceConnections(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusSetMorpheusParam(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusSetCaesarParam(void) {
    return 0;
}

int APS5_VABI sceAudioOut2MbusSetSparkParam(void) {
    return 0;
}

int APS5_VABI sceAudioOut2AllAudioMainToHeadphoneForDiag(void) {
    return 0;
}

int APS5_VABI sceAudioOut2LoPortGetStateEx(void) {
    return 0;
}

int APS5_VABI sceAudioOut2ReportRegisterHandler(void) {
    return 0;
}

int APS5_VABI sceAudioOut2ReportUnregisterHandler(void) {
    return 0;
}

int APS5_VABI sceAudioOut2GetTvCorrectionInfo(void) {
    return 0;
}

int APS5_VABI sceAudioOut2GetIpcHandle(void) {
    return 0;
}

int APS5_VABI sceAudioOut2GetSystemStateEx(void) {
    return 0;
}

int APS5_VABI sceAudioOut2SetDebugHeadphoneMode(void) {
    return 0;
}

int APS5_VABI sceAudioOut2DebugStateCtrl(void) {
    return 0;
}

int APS5_VABI sceAudioOut2ContextBedWrite(void) {
    return 0;
}

int APS5_VABI sceAudioOut2PortCreateEx(void) {
    return 0;
}

int APS5_VABI sceAudioOut2Terminate(void) {
    return 0;
}

int APS5_VABI sceAudioOut2PortRegister(void) {
    return 0;
}

int APS5_VABI sceAudioOut2PortUnregister(void) {
    return 0;
}

int APS5_VABI sceAudioOut2GetAmbisonicsEncodeCoefficients(void) {
    return 0;
}

int APS5_VABI sceAudioOut2GetHrtfIdForCronos(void) {
    return 0;
}

}
