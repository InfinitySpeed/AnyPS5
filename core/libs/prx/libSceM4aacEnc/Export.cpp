#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"


extern "C" {

int32_t APS5_VABI sceM4aacEncClearContext(int32_t m4aacEncHandle) {
    return 0;
}

int APS5_VABI sceM4aacEncClearContextEx() {
    return 0;
}

int32_t APS5_VABI sceM4aacEncCreateEncoder(int32_t channels, int32_t samplingRate, int32_t bitRate, int32_t inputFormat, int32_t outputFormat, int32_t *pInternalError) {
    return 0;
}

int APS5_VABI sceM4aacEncCreateEncoderEx() {
    return 0;
}

int32_t APS5_VABI sceM4aacEncDeleteEncoder(int32_t m4aacEncHandle, int32_t *pInternalError) {
    return 0;
}

int APS5_VABI sceM4aacEncDeleteEncoderEx() {
    return 0;
}

int32_t APS5_VABI sceM4aacEncEncode(int32_t m4aacEncHandle, void *pInput, uint32_t inputByte, void *pOutput, uint32_t *pOutputByte, int32_t *pInternalError) {
    return 0;
}

int APS5_VABI sceM4aacEncEncodeEx() {
    return 0;
}

int APS5_VABI sceM4aacEncEncodeWithPriority() {
    return 0;
}

int APS5_VABI sceM4aacEncEncodeWithPriorityEx() {
    return 0;
}

int32_t APS5_VABI sceM4aacEncFlush(int32_t m4aacEncHandle, void *pOutput, uint32_t *pOutputByte, int32_t *pInternalError) {
    return 0;
}

int APS5_VABI sceM4aacEncFlushEx() {
    return 0;
}

int APS5_VABI sceM4aacEncFlushWithPriority() {
    return 0;
}

int APS5_VABI sceM4aacEncFlushWithPriorityEx() {
    return 0;
}

int APS5_VABI sceM4aacEncGetContext() {
    return 0;
}

int APS5_VABI sceM4aacEncInitialize() {
    return 0;
}

int APS5_VABI sceM4aacEncTerminate() {
    return 0;
}

}
