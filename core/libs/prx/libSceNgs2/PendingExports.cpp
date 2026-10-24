#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceNgs2FftInit() {
    return 0;
}
int APS5_VABI sceNgs2FftProcess() {
    return 0;
}
int APS5_VABI sceNgs2FftQuerySize() {
    return 0;
}
int APS5_VABI sceNgs2ParseWaveformUser(std::uintptr_t handler, std::uintptr_t userData, void* outInfo) {
    return 0;
}
int APS5_VABI sceNgs2SystemEnumHandles(std::uintptr_t* outHandles, std::uint32_t maxHandles) {
    return 0;
}
int APS5_VABI sceNgs2SystemEnumRackHandles(std::uintptr_t systemHandle, std::uintptr_t* outHandles, std::uint32_t maxHandles) {
    return 0;
}

}
