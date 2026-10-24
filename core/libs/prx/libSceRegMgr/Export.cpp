#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceRegMgrGetBin(std::uint32_t optionId, void* data, std::size_t size) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceRegMgrGetInt(int32_t optionId, int32_t* outInt) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceRegMgrGetStr(int32_t optionId, char* outString, std::size_t stringLength) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceRegMgrSetBin(std::uint32_t optionId, const void* data, std::size_t size) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceRegMgrSetInt(int32_t optionId, int32_t inInt) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI sceRegMgrSetStr(int32_t optionId, const char* inStirng, std::size_t stringLength) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
std::int32_t APS5_VABI sceRegMgrNonSysGetInt(std::int64_t key, std::int32_t unk, std::int32_t* data) {
    (void)key;
    (void)unk;
    (void)data;
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRegMgrCheckError(void) {
    return 0;
}

int APS5_VABI sceRegMgrCheckIntVal(void) {
    return 0;
}

int APS5_VABI sceRegMgrGetBinInitVal(void) {
    return 0;
}

int APS5_VABI sceRegMgrGetIntInitVal(void) {
    return 0;
}

int APS5_VABI sceRegMgrGetStrInitVal(void) {
    return 0;
}

int APS5_VABI sceRegMgrGetVersion(void) {
    return 0;
}

int APS5_VABI sceRegMgrIsChange(void) {
    return 0;
}

int APS5_VABI sceRegMgrEvtGetCnt(void) {
    return 0;
}

int APS5_VABI sceRegMgrEvtGetRegId(void) {
    return 0;
}

int APS5_VABI sceRegMgrResetVal(void) {
    return 0;
}

int APS5_VABI sceRegMgrSetInitLevel(void) {
    return 0;
}

int APS5_VABI sceRegMgrSrvCnvRegionInt(void) {
    return 0;
}

int APS5_VABI sceRegMgrSrvCnvRegionStr(void) {
    return 0;
}

int APS5_VABI sceRegMgrSrvGetMachineType(void) {
    return 0;
}

int APS5_VABI sceRegMgrSrvGetQAFforReg(void) {
    return 0;
}

int APS5_VABI sceRegMgrSrvGetRealMachineType(void) {
    return 0;
}

int APS5_VABI sceRegMgrSrvGetRegion(void) {
    return 0;
}

int APS5_VABI sceRegMgrSrvGetRegionStr(void) {
    return 0;
}

int APS5_VABI sceRegMgrBackupNeedMem(void) {
    return 0;
}

int APS5_VABI sceRegMgrBackupPullData(void) {
    return 0;
}

int APS5_VABI sceRegMgrBackupPushData(void) {
    return 0;
}

int APS5_VABI sceRegMgrBackupPullDataGkp(void) {
    return 0;
}

int APS5_VABI sceRegMgrBackupPushDataGkp(void) {
    return 0;
}

int APS5_VABI sceRegMgrCntlStart(void) {
    return 0;
}

int APS5_VABI sceRegMgrCntlDeleteReg(void) {
    return 0;
}

int APS5_VABI sceRegMgrCntlGetFilesCount(void) {
    return 0;
}

int APS5_VABI sceRegMgrCntlGetFileName(void) {
    return 0;
}

int APS5_VABI sceRegMgrCntSetInitReinst(void) {
    return 0;
}

int APS5_VABI sceRegMgrIsInitOK(void) {
    return 0;
}

int APS5_VABI sceRegMgrGetInitError(void) {
    return 0;
}

int APS5_VABI sceRegMgrRecoverRegNvs(void) {
    return 0;
}

int APS5_VABI sceRegMgrNonSysCheckError(void) {
    return 0;
}

int APS5_VABI sceRegMgrNonSysGetBin(void) {
    return 0;
}

int APS5_VABI sceRegMgrNonSysGetStr(void) {
    return 0;
}

int APS5_VABI sceRegMgrNonSysSetBin(void) {
    return 0;
}

int APS5_VABI sceRegMgrNonSysSetInt(void) {
    return 0;
}

int APS5_VABI sceRegMgrNonSysSetStr(void) {
    return 0;
}

int APS5_VABI sceRegMgrGetVersionForPS4(void) {
    return 0;
}

int APS5_VABI sceRegMgrBackupNeedMemForPS4(void) {
    return 0;
}

int APS5_VABI sceRegMgrBackupPullDataForPS4(void) {
    return 0;
}

int APS5_VABI sceRegMgrBackupPushDataForPS4(void) {
    return 0;
}

int APS5_VABI sceRegMgrEvtGetCntForPS4(void) {
    return 0;
}

int APS5_VABI sceRegMgrEvtGetRegIdForPS4(void) {
    return 0;
}

int APS5_VABI sceRegMgrStrncpy(void) {
    return 0;
}

int APS5_VABI sceRegMgrMemset(void) {
    return 0;
}

int APS5_VABI sceRegMgrSetbin(void) {
    return 0;
}

int APS5_VABI sceRegMgrToolGetUpdateCnt(void) {
    return 0;
}

int APS5_VABI sceRegMgrToolGetEntryCnt(void) {
    return 0;
}

int APS5_VABI sceRegMgrToolDataCheckGet(void) {
    return 0;
}

int APS5_VABI sceRegMgrDrvGetUpdateCnt(void) {
    return 0;
}

int APS5_VABI sceRegMgrDrvGetEntCnt(void) {
    return 0;
}

int APS5_VABI sceRegMgrDrvDataOpen(void) {
    return 0;
}

int APS5_VABI sceRegMgrDrvDataCheckGet(void) {
    return 0;
}

int APS5_VABI sceRegMgrDrvDataClose(void) {
    return 0;
}

int APS5_VABI sceRegMgrToolGetInfo(void) {
    return 0;
}

int APS5_VABI sceRegMgrLogPull(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRegMgrCntlStopHdd(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceRegMgrPrintInfo(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
