#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceAgcAcquireMemSetEngine(std::uint32_t* packet, std::uint8_t engine) {
 return 0;
}

std::uint32_t* APS5_VABI sceAgcCbMemsetExclusive(CommandBuffer* buffer, void* destination, const void* pattern, std::uint64_t size) {
 return 0;
}

int APS5_VABI sceAgcAcbInitializeDefaultHardwareState() {
    return 0;
}

}
