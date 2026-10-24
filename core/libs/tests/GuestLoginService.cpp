#include "prx/libc/include/general/VabiMacros.hpp"

#include <cstdio>
#include <cstdlib>
#include <stdexcept>
#include <string>

extern "C" {
int APS5_VABI sceLoginServiceInitialize(void);
int APS5_VABI sceLoginServiceTerminate(void);
int APS5_VABI sceLoginServiceRequestDevices(void* param);
}

static void Require(bool value) {
    if (!value) std::abort();
}

int main() {
    Require(sceLoginServiceRequestDevices(nullptr) == static_cast<int>(0x813a0003u));
    unsigned char buffer[0x80]{};
    Require(sceLoginServiceRequestDevices(buffer) == static_cast<int>(0x813a0001u));
    Require(sceLoginServiceInitialize() == 0);
    Require(sceLoginServiceRequestDevices(buffer) == 0);
    Require(sceLoginServiceTerminate() == 0);
    Require(sceLoginServiceRequestDevices(buffer) == static_cast<int>(0x813a0001u));
    return 0;
}
