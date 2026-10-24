#include "prx/libc/include/general/VabiMacros.hpp"
#include <cstdint>
#include <cstdlib>
#include <stdexcept>
#include <string>

extern "C" {
std::int32_t APS5_VABI sceRegMgrNonSysGetInt(std::int64_t key, std::int32_t unk, std::int32_t* data);
int APS5_VABI sceRegMgrCheckError();
int APS5_VABI sceRegMgrCheckIntVal();
int APS5_VABI sceRegMgrGetBinInitVal();
int APS5_VABI sceRegMgrGetIntInitVal();
int APS5_VABI sceRegMgrGetStrInitVal();
int APS5_VABI sceRegMgrGetVersion();
int APS5_VABI sceRegMgrIsChange();
int APS5_VABI sceRegMgrEvtGetCnt();
int APS5_VABI sceRegMgrEvtGetRegId();
int APS5_VABI sceRegMgrResetVal();
}

static void Require(bool value) { if (!value) std::abort(); }

template <typename TCall>
static bool ReportsNotImplemented(const char* name, TCall call) {
    try {
        call();
    } catch (const std::runtime_error& error) {
        return std::string(error.what()) == std::string(name) + " not implemented";
    }
    return false;
}

int main() {
    std::int32_t value = 0;
    Require(ReportsNotImplemented("sceRegMgrNonSysGetInt", [&] { sceRegMgrNonSysGetInt(0, 0, &value); }));
    Require(ReportsNotImplemented("sceRegMgrNonSysGetInt", [&] { sceRegMgrNonSysGetInt(-1, 1, nullptr); }));
    Require(sceRegMgrCheckError() == 0);
    Require(sceRegMgrCheckIntVal() == 0);
    Require(sceRegMgrGetBinInitVal() == 0);
    Require(sceRegMgrGetIntInitVal() == 0);
    Require(sceRegMgrGetStrInitVal() == 0);
    Require(sceRegMgrGetVersion() == 0);
    Require(sceRegMgrIsChange() == 0);
    Require(sceRegMgrEvtGetCnt() == 0);
    Require(sceRegMgrEvtGetRegId() == 0);
    Require(sceRegMgrResetVal() == 0);
}
