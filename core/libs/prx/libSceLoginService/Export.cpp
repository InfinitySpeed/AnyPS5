#include <cstdint>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

struct LoginServiceDeviceRequest;

extern "C" {

int APS5_VABI sceLoginServiceInitialize(void) {
    g_loginInitialized = true;
    return 0;
}

int APS5_VABI sceLoginServiceTerminate(void) {
    g_loginInitialized = false;
    return 0;
}

static bool g_loginInitialized = false;

int APS5_VABI sceLoginServiceRequestDevices(const LoginServiceDeviceRequest* param) {
    if (param == nullptr) return static_cast<int>(0x813a0003u);
    if (!g_loginInitialized) return static_cast<int>(0x813a0001u);
    return 0;
}

}
