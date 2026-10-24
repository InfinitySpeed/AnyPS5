#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

struct ShellUIUtilLaunchParameter;

extern "C" {

int APS5_VABI sceShellUIUtilCreateTaskToken() {
    return 0;
}

int APS5_VABI sceShellUIUtilGetAppUrl(const char* application, const char* parameter, char* output, std::uint32_t capacity, std::uint32_t* outputSize) {
    return 0;
}

int APS5_VABI sceShellUIUtilInitialize() {
    return 0;
}

int APS5_VABI sceShellUIUtilLaunchByUri(const char* uri, const ShellUIUtilLaunchParameter* parameter) {
    return 0;
}

int APS5_VABI sceShellUIUtilLaunchTask(std::int32_t taskToken, const char* uri, char* output, std::uint32_t capacity) {
    return 0;
}

int APS5_VABI sceShellUIUtilTerminate() {
    return 0;
}

}
