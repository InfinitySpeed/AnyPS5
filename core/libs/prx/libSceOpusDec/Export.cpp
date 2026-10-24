#include "prx/libc/include/general/VabiMacros.hpp"
#include "prx/libSceOpusDec/include/OpusDecoder.hpp"
#include <cstdint>
#include "prx/libc/include/General.hpp"

namespace {

OpusDecoderLibrary library("OpusDec", false);

} // namespace

extern "C" {

int APS5_VABI sceOpusDecInitialize(std::uint32_t* context) { return library.Initialize(context); }

int APS5_VABI sceOpusDecTerminate(const std::uint32_t* context) { return library.Terminate(context); }

int APS5_VABI sceOpusDecGetSize(int channels) { return library.GetSize(channels); }

int APS5_VABI sceOpusDecCreateEx(const std::uint32_t* context, void* state, int sampleRate, int channels) {
    return library.CreateEx(context, state, sampleRate, channels);
}

int APS5_VABI sceOpusDecDecode(void* state, const std::uint8_t* data, int bytes, std::int16_t* pcm, int capacity) {
    return library.Decode(state, data, bytes, pcm, capacity);
}

int APS5_VABI sceOpusDecDestroy(void* state) { return library.Destroy(state); }

int APS5_VABI sceOpusDecCancel() {
    return 0;
}

int APS5_VABI sceOpusDecCreate() {
    return 0;
}

int APS5_VABI sceOpusDecCtl() {
    return 0;
}

int APS5_VABI sceOpusDecDecodeFloat() {
    return 0;
}

int APS5_VABI sceOpusDecDecodeFloatWithPriority() {
    return 0;
}

int APS5_VABI sceOpusDecDecodeFloatWithPriorityAndTimeout() {
    return 0;
}

int APS5_VABI sceOpusDecDecodeWithPriority() {
    return 0;
}

int APS5_VABI sceOpusDecDecodeWithPriorityAndTimeout() {
    return 0;
}

}
