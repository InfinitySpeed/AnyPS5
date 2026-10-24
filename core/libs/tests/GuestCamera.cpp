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
    return 0;
}
