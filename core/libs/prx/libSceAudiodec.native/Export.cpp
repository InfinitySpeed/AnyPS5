#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceAudiodecClearContextEx(void) {
    return 0;
}

int APS5_VABI sceAudiodecCreateDecoderEx(void) {
    return 0;
}

int APS5_VABI sceAudiodecDecode2(void) {
    return 0;
}

int APS5_VABI sceAudiodecDecode2Ex(void) {
    return 0;
}

int APS5_VABI sceAudiodecDecode2WithPriority(void) {
    return 0;
}

int APS5_VABI sceAudiodecDecode2WithPriorityEx(void) {
    return 0;
}

int APS5_VABI sceAudiodecDecodeEx(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudiodecDecodeWithPriority(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudiodecDecodeWithPriorityEx(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudiodecDeleteDecoderEx(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudiodecGetContext(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudiodecInitialize(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudiodecRegisterCodec(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceAudiodecTerminate(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
