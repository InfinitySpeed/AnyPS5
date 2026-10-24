#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

std::uint32_t* APS5_VABI sceAgcAcbPushMarkerSpan(CommandBuffer* buffer, const char* text, std::uint32_t length, std::uint32_t color) {
 return buffer ? buffer->current : nullptr;
}

std::uint32_t* APS5_VABI sceAgcAcbSetMarkerSpan(CommandBuffer* buffer, const char* text, std::uint32_t length, std::uint32_t color) {
 return buffer ? buffer->current : nullptr;
}

int APS5_VABI sceAgcAcquireMemSetEngine(std::uint32_t* packet, std::uint8_t engine) {
 return 0;
}

std::uint32_t* APS5_VABI sceAgcDcbPushMarkerSpan(CommandBuffer* buffer, const char* text, std::uint32_t length, std::uint32_t color) {
 return buffer ? buffer->current : nullptr;
}

std::uint32_t* APS5_VABI sceAgcDcbSetMarkerSpan(CommandBuffer* buffer, const char* text, std::uint32_t length, std::uint32_t color) {
 return buffer ? buffer->current : nullptr;
}

int APS5_VABI sceAgcSetSemaphoreMemory(void* memory, std::uint64_t size) {
 return 0;
}

std::uint32_t* APS5_VABI sceAgcCbMemsetExclusive(CommandBuffer* buffer, void* destination, const void* pattern, std::uint64_t size) {
 if (destination && pattern && size > 0) std::memset(destination, *static_cast<const int*>(pattern), size);
 return buffer ? buffer->current : nullptr;
}

}
