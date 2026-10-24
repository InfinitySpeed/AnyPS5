#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

APS5_DUMMY_FUN
int APS5_VABI sceIpmiMgrGetIpcBlockerPid(void) {
    return 0;
}

int APS5_VABI sceIpmiMgrGetIpcBlockerPidByAppId(void) {
    return 0;
}

int APS5_VABI sceIpmiMgrPauseDump(void) {
    return 0;
}

int APS5_VABI sceIpmiMgrRaiseExceptionToPid(void) {
    return 0;
}

int APS5_VABI sceIpmiMgrStartDump(void) {
    return 0;
}

}
