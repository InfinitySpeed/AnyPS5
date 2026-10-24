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
int APS5_VABI sceRegMgrSetInitLevel();
int APS5_VABI sceRegMgrSrvCnvRegionInt();
int APS5_VABI sceRegMgrSrvCnvRegionStr();
int APS5_VABI sceRegMgrSrvGetMachineType();
int APS5_VABI sceRegMgrSrvGetQAFforReg();
int APS5_VABI sceRegMgrSrvGetRealMachineType();
int APS5_VABI sceRegMgrSrvGetRegion();
int APS5_VABI sceRegMgrSrvGetRegionStr();
int APS5_VABI sceRegMgrBackupNeedMem();
int APS5_VABI sceRegMgrBackupPullData();
int APS5_VABI sceRegMgrBackupPushData();
int APS5_VABI sceRegMgrBackupPullDataGkp();
int APS5_VABI sceRegMgrBackupPushDataGkp();
int APS5_VABI sceRegMgrCntlStart();
int APS5_VABI sceRegMgrCntlDeleteReg();
int APS5_VABI sceRegMgrCntlGetFilesCount();
int APS5_VABI sceRegMgrCntlGetFileName();
int APS5_VABI sceRegMgrCntSetInitReinst();
int APS5_VABI sceRegMgrIsInitOK();
int APS5_VABI sceRegMgrGetInitError();
int APS5_VABI sceRegMgrRecoverRegNvs();
int APS5_VABI sceRegMgrNonSysCheckError();
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
    Require(sceRegMgrSetInitLevel() == 0);
    Require(sceRegMgrSrvCnvRegionInt() == 0);
    Require(sceRegMgrSrvCnvRegionStr() == 0);
    Require(sceRegMgrSrvGetMachineType() == 0);
    Require(sceRegMgrSrvGetQAFforReg() == 0);
    Require(sceRegMgrSrvGetRealMachineType() == 0);
    Require(sceRegMgrSrvGetRegion() == 0);
    Require(sceRegMgrSrvGetRegionStr() == 0);
    Require(sceRegMgrBackupNeedMem() == 0);
    Require(sceRegMgrBackupPullData() == 0);
    Require(sceRegMgrBackupPushData() == 0);
    Require(sceRegMgrBackupPullDataGkp() == 0);
    Require(sceRegMgrBackupPushDataGkp() == 0);
    Require(sceRegMgrCntlStart() == 0);
    Require(sceRegMgrCntlDeleteReg() == 0);
    Require(sceRegMgrCntlGetFilesCount() == 0);
    Require(sceRegMgrCntlGetFileName() == 0);
    Require(sceRegMgrCntSetInitReinst() == 0);
    Require(sceRegMgrIsInitOK() == 0);
    Require(sceRegMgrGetInitError() == 0);
    Require(sceRegMgrRecoverRegNvs() == 0);
    Require(sceRegMgrNonSysCheckError() == 0);
}
