#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceSystemTtsCancel() {
    return 0;
}

int APS5_VABI sceSystemTtsIsAccessibilityAvailable() {
    return 0;
}

int APS5_VABI sceSystemTtsRegisterCallback() {
    return 0;
}

int APS5_VABI sceSystemTtsSpeakRequest() {
    return 0;
}

int APS5_VABI sceSystemTtsUnregisterCallback() {
    return 0;
}

}
