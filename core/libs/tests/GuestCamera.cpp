#include "prx/libc/include/general/VabiMacros.hpp"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <stdexcept>
#include <string>

extern "C" {
int APS5_VABI sceCameraIsAttached(std::int32_t index);
int APS5_VABI sceCameraOpen(void);
int APS5_VABI sceCameraClose(void);
int APS5_VABI sceCameraStart(void);
int APS5_VABI sceCameraStop(void);
int APS5_VABI sceCameraGetConfig(void);
int APS5_VABI sceCameraSetConfig(void);
int APS5_VABI sceCameraSetAttribute(void);
int APS5_VABI sceCameraGetDeviceInfo(void);
int APS5_VABI sceCameraGetFrameData(void);
int APS5_VABI sceCameraIsValidFrameData(void);
int APS5_VABI sceCameraStopByHandle(void);
int APS5_VABI sceCameraGetDeviceIDWithoutOpen(void);
int APS5_VABI sceCameraGetAttribute(void);
int APS5_VABI sceCameraInitializeRegistryCalibData(void);
int APS5_VABI sceCamera2GetContrast(void);
int APS5_VABI sceCamera2Finalize(void);
int APS5_VABI sceCameraGetConnectedDeviceAndDriverMode(void);
int APS5_VABI sceCamera2IsAttached(void);
int APS5_VABI sceCamera2SetSharpness(void);
int APS5_VABI sceCameraSetTrackerMode(void);
int APS5_VABI sceCameraSetContrast(void);
int APS5_VABI sceCameraGetCalibDataForEve(void);
int APS5_VABI sceCameraGetCalibDataFromDevice(void);
int APS5_VABI sceCamera2SetContrast(void);
int APS5_VABI sceCameraIsConnectedForSystem(void);
int APS5_VABI sceCamera2SetExposureGain(void);
int APS5_VABI sceCameraSetRegister(void);
int APS5_VABI sceCameraSetVideoSyncInternal(void);
int APS5_VABI sceCameraSetConfigInternal(void);
int APS5_VABI sceCameraSetAttributeInternal(void);
int APS5_VABI sceCamera2SetWhiteBalance(void);
int APS5_VABI sceCameraGetMmapConnectedCount(void);
int APS5_VABI sceCamera2GetSaturation(void);
int APS5_VABI sceCameraGetDeviceConfig(void);
int APS5_VABI sceCameraAudioOpen(void);
int APS5_VABI sceCamera2GetAutoExposureGain(void);
int APS5_VABI sceCameraGetCalibDataFromDeviceForEve(void);
int APS5_VABI sceCameraGetWhiteBalance(void);
int APS5_VABI sceCameraGetVrCaptureInfo(void);
int APS5_VABI sceCameraSetCalibDataForEve(void);
int APS5_VABI sceCamera2GetAttribute(void);
int APS5_VABI sceCameraSetLensCorrection(void);
int APS5_VABI sceCameraSetCalibData(void);
int APS5_VABI sceCameraSetProcessFocusByHandle(void);
int APS5_VABI sceCamera2SetConfig(void);
int APS5_VABI sceCameraGetExposureGain(void);
int APS5_VABI sceCameraSetSharpness(void);
int APS5_VABI sceCamera2Initialize(void);
int APS5_VABI sceCameraSetHue(void);
int APS5_VABI sceCameraAccGetData(void);
int APS5_VABI sceCamera2SetAttribute(void);
int APS5_VABI sceCameraGetCalibrationData(void);
int APS5_VABI sceCameraGetSaturation(void);
int APS5_VABI sceCamera2GetHue(void);
int APS5_VABI sceCamera2Stop(void);
int APS5_VABI sceCamera2SetSaturation(void);
int APS5_VABI sceCamera2GetAutoWhiteBalance(void);
int APS5_VABI sceCameraAudioClose(void);
int APS5_VABI sceCameraGetProductInfo(void);
int APS5_VABI sceCameraGetGamma(void);
int APS5_VABI sceCameraGetLensCorrection(void);
int APS5_VABI sceCameraChangeAppModuleState(void);
int APS5_VABI sceCamera2GetFrameData(void);
int APS5_VABI sceCameraGetContrast(void);
int APS5_VABI sceCameraSetSaturation(void);
int APS5_VABI sceCameraGetSharpness(void);
int APS5_VABI sceCamera2GetExposureGain(void);
int APS5_VABI sceCameraStartByHandle(void);
int APS5_VABI sceCamera2Open(void);
int APS5_VABI sceCamera2Start(void);
int APS5_VABI sceCameraSetLensCorrectionInternal(void);
int APS5_VABI sceCameraOpenByModuleId(void);
int APS5_VABI sceCamera2GetCalibrationData(void);
int APS5_VABI sceCameraAudioGetData(void);
int APS5_VABI sceCamera2SetHue(void);
int APS5_VABI sceCamera2GetGamma(void);
int APS5_VABI sceCameraGetCalibData(void);
int APS5_VABI sceCameraWaitForEveReady(void);
int APS5_VABI sceCameraGetRegistryInfo(void);
int APS5_VABI sceCameraAudioGetData2(void);
int APS5_VABI sceCameraSetAppModuleFocus(void);
int APS5_VABI sceCameraSetDefectivePixelCancellation(void);
int APS5_VABI sceCameraGetDeviceID(void);
int APS5_VABI sceCameraSetForceActivate(void);
int APS5_VABI sceCameraSetWhiteBalance(void);
int APS5_VABI sceCamera2GetFieldOfView(void);
int APS5_VABI sceCamera2IsValidFrameData(void);
int APS5_VABI sceCameraSetProcessFocus(void);
int APS5_VABI sceCameraSetGamma(void);
int APS5_VABI sceCamera2GetConfig(void);
int APS5_VABI sceCamera2GetWhiteBalance(void);
int APS5_VABI sceCameraGetDeviceConfigWithoutHandle(void);
int APS5_VABI sceCameraDeviceOpen(void);
}

namespace {

constexpr int ErrorParam = static_cast<int>(0x802E0000u);

void Require(bool condition, const char* message) {
    if (!condition) {
        std::fprintf(stderr, "Camera: %s\n", message);
        std::abort();
    }
}

template <typename TCall>
void RequireNotImplemented(TCall call, const std::string& name) {
    try {
        call();
    } catch (const std::runtime_error& error) {
        Require(std::string(error.what()) == name + " not implemented", "a declared camera function threw another error");
        return;
    }
    Require(false, "a declared camera function returned");
}

}

int main() {
    Require(sceCameraIsAttached(0) == 0, "camera 0 must be reported as not attached");
    Require(sceCameraIsAttached(1) == ErrorParam, "camera index 1 must be rejected");
    Require(sceCameraIsAttached(-1) == ErrorParam, "a negative camera index must be rejected");
    RequireNotImplemented([] { sceCameraOpen(); }, "sceCameraOpen");
    RequireNotImplemented([] { sceCameraClose(); }, "sceCameraClose");
    RequireNotImplemented([] { sceCameraStart(); }, "sceCameraStart");
    RequireNotImplemented([] { sceCameraStop(); }, "sceCameraStop");
    RequireNotImplemented([] { sceCameraGetConfig(); }, "sceCameraGetConfig");
    RequireNotImplemented([] { sceCameraSetConfig(); }, "sceCameraSetConfig");
    RequireNotImplemented([] { sceCameraSetAttribute(); }, "sceCameraSetAttribute");
    RequireNotImplemented([] { sceCameraGetDeviceInfo(); }, "sceCameraGetDeviceInfo");
    RequireNotImplemented([] { sceCameraGetFrameData(); }, "sceCameraGetFrameData");
    RequireNotImplemented([] { sceCameraIsValidFrameData(); }, "sceCameraIsValidFrameData");
        Require(sceCameraStopByHandle() == 0, "sceCameraStopByHandle check");
        Require(sceCameraGetDeviceIDWithoutOpen() == 0, "sceCameraGetDeviceIDWithoutOpen check");
        Require(sceCameraGetAttribute() == 0, "sceCameraGetAttribute check");
        Require(sceCameraInitializeRegistryCalibData() == 0, "sceCameraInitializeRegistryCalibData check");
        Require(sceCamera2GetContrast() == 0, "sceCamera2GetContrast check");
        Require(sceCamera2Finalize() == 0, "sceCamera2Finalize check");
        Require(sceCameraGetConnectedDeviceAndDriverMode() == 0, "sceCameraGetConnectedDeviceAndDriverMode check");
        Require(sceCamera2IsAttached() == 0, "sceCamera2IsAttached check");
        Require(sceCamera2SetSharpness() == 0, "sceCamera2SetSharpness check");
        Require(sceCameraSetTrackerMode() == 0, "sceCameraSetTrackerMode check");
        Require(sceCameraSetContrast() == 0, "sceCameraSetContrast check");
        Require(sceCameraGetCalibDataForEve() == 0, "sceCameraGetCalibDataForEve check");
        Require(sceCameraGetCalibDataFromDevice() == 0, "sceCameraGetCalibDataFromDevice check");
        Require(sceCamera2SetContrast() == 0, "sceCamera2SetContrast check");
        Require(sceCameraIsConnectedForSystem() == 0, "sceCameraIsConnectedForSystem check");
        Require(sceCamera2SetExposureGain() == 0, "sceCamera2SetExposureGain check");
        Require(sceCameraSetRegister() == 0, "sceCameraSetRegister check");
        Require(sceCameraSetVideoSyncInternal() == 0, "sceCameraSetVideoSyncInternal check");
        Require(sceCameraSetConfigInternal() == 0, "sceCameraSetConfigInternal check");
        Require(sceCameraSetAttributeInternal() == 0, "sceCameraSetAttributeInternal check");
        Require(sceCamera2SetWhiteBalance() == 0, "sceCamera2SetWhiteBalance check");
        Require(sceCameraGetMmapConnectedCount() == 0, "sceCameraGetMmapConnectedCount check");
        Require(sceCamera2GetSaturation() == 0, "sceCamera2GetSaturation check");
        Require(sceCameraGetDeviceConfig() == 0, "sceCameraGetDeviceConfig check");
        Require(sceCameraAudioOpen() == 0, "sceCameraAudioOpen check");
        Require(sceCamera2GetAutoExposureGain() == 0, "sceCamera2GetAutoExposureGain check");
        Require(sceCameraGetCalibDataFromDeviceForEve() == 0, "sceCameraGetCalibDataFromDeviceForEve check");
        Require(sceCameraGetWhiteBalance() == 0, "sceCameraGetWhiteBalance check");
        Require(sceCameraGetVrCaptureInfo() == 0, "sceCameraGetVrCaptureInfo check");
        Require(sceCameraSetCalibDataForEve() == 0, "sceCameraSetCalibDataForEve check");
        Require(sceCamera2GetAttribute() == 0, "sceCamera2GetAttribute check");
        Require(sceCameraSetLensCorrection() == 0, "sceCameraSetLensCorrection check");
        Require(sceCameraSetCalibData() == 0, "sceCameraSetCalibData check");
        Require(sceCameraSetProcessFocusByHandle() == 0, "sceCameraSetProcessFocusByHandle check");
        Require(sceCamera2SetConfig() == 0, "sceCamera2SetConfig check");
        Require(sceCameraGetExposureGain() == 0, "sceCameraGetExposureGain check");
        Require(sceCameraSetSharpness() == 0, "sceCameraSetSharpness check");
        Require(sceCamera2Initialize() == 0, "sceCamera2Initialize check");
        Require(sceCameraSetHue() == 0, "sceCameraSetHue check");
        Require(sceCameraAccGetData() == 0, "sceCameraAccGetData check");
        Require(sceCamera2SetAttribute() == 0, "sceCamera2SetAttribute check");
        Require(sceCameraGetCalibrationData() == 0, "sceCameraGetCalibrationData check");
        Require(sceCameraGetSaturation() == 0, "sceCameraGetSaturation check");
        Require(sceCamera2GetHue() == 0, "sceCamera2GetHue check");
        Require(sceCamera2Stop() == 0, "sceCamera2Stop check");
        Require(sceCamera2SetSaturation() == 0, "sceCamera2SetSaturation check");
        Require(sceCamera2GetAutoWhiteBalance() == 0, "sceCamera2GetAutoWhiteBalance check");
        Require(sceCameraAudioClose() == 0, "sceCameraAudioClose check");
        Require(sceCameraGetProductInfo() == 0, "sceCameraGetProductInfo check");
        Require(sceCameraGetGamma() == 0, "sceCameraGetGamma check");
        Require(sceCameraGetLensCorrection() == 0, "sceCameraGetLensCorrection check");
        Require(sceCameraChangeAppModuleState() == 0, "sceCameraChangeAppModuleState check");
        Require(sceCamera2GetFrameData() == 0, "sceCamera2GetFrameData check");
        Require(sceCameraGetContrast() == 0, "sceCameraGetContrast check");
        Require(sceCameraSetSaturation() == 0, "sceCameraSetSaturation check");
        Require(sceCameraGetSharpness() == 0, "sceCameraGetSharpness check");
        Require(sceCamera2GetExposureGain() == 0, "sceCamera2GetExposureGain check");
        Require(sceCameraStartByHandle() == 0, "sceCameraStartByHandle check");
        Require(sceCamera2Open() == 0, "sceCamera2Open check");
        Require(sceCamera2Start() == 0, "sceCamera2Start check");
        Require(sceCameraSetLensCorrectionInternal() == 0, "sceCameraSetLensCorrectionInternal check");
        Require(sceCameraOpenByModuleId() == 0, "sceCameraOpenByModuleId check");
        Require(sceCamera2GetCalibrationData() == 0, "sceCamera2GetCalibrationData check");
        Require(sceCameraAudioGetData() == 0, "sceCameraAudioGetData check");
        Require(sceCamera2SetHue() == 0, "sceCamera2SetHue check");
        Require(sceCamera2GetGamma() == 0, "sceCamera2GetGamma check");
        Require(sceCameraGetCalibData() == 0, "sceCameraGetCalibData check");
        Require(sceCameraWaitForEveReady() == 0, "sceCameraWaitForEveReady check");
        Require(sceCameraGetRegistryInfo() == 0, "sceCameraGetRegistryInfo check");
        Require(sceCameraAudioGetData2() == 0, "sceCameraAudioGetData2 check");
        Require(sceCameraSetAppModuleFocus() == 0, "sceCameraSetAppModuleFocus check");
        Require(sceCameraSetDefectivePixelCancellation() == 0, "sceCameraSetDefectivePixelCancellation check");
        Require(sceCameraGetDeviceID() == 0, "sceCameraGetDeviceID check");
        Require(sceCameraSetForceActivate() == 0, "sceCameraSetForceActivate check");
        Require(sceCameraSetWhiteBalance() == 0, "sceCameraSetWhiteBalance check");
        Require(sceCamera2GetFieldOfView() == 0, "sceCamera2GetFieldOfView check");
        Require(sceCamera2IsValidFrameData() == 0, "sceCamera2IsValidFrameData check");
        Require(sceCameraSetProcessFocus() == 0, "sceCameraSetProcessFocus check");
        Require(sceCameraSetGamma() == 0, "sceCameraSetGamma check");
        Require(sceCamera2GetConfig() == 0, "sceCamera2GetConfig check");
        Require(sceCamera2GetWhiteBalance() == 0, "sceCamera2GetWhiteBalance check");
        Require(sceCameraGetDeviceConfigWithoutHandle() == 0, "sceCameraGetDeviceConfigWithoutHandle check");
        Require(sceCameraDeviceOpen() == 0, "sceCameraDeviceOpen check");
    return 0;
}
