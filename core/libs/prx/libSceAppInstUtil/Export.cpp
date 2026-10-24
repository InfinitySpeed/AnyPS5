#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

struct AppInstallProgressInfo;

extern "C" {

int APS5_VABI sceAppInstUtilInitialize(void) {
    return 0;
}
int APS5_VABI sceAppInstUtilTerminate(void) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppInstallAll(void* reserved) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppInstallTitleDir(const char* titleId, const char* titleDir, void* reserved) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppIsInInstalling(int32_t* installing) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppIsInUpdating(const char* titleId, bool* updating) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppExists(const char* titleId, int32_t* exists) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppGetSize(const char* titleId, std::uint64_t* size) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppInstallPkg(const char* packagePath, std::uint64_t serviceArgument) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppPrepareOverwritePkg() {
    return 0;
}
int APS5_VABI sceAppInstUtilAppRecoverApp() {
    return 0;
}
int APS5_VABI sceAppInstUtilAppUnInstall(const char* titleId) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppUnInstallAddcont(const char* titleId, const char* contentLabel) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppUnInstallPat(const char* titleId) {
    return 0;
}
int APS5_VABI sceAppInstUtilAppUnInstallTheme() {
    return 0;
}
int APS5_VABI sceAppInstUtilAppUnInstallTypes(const char* titleId, std::uint32_t types) {
    return 0;
}
int APS5_VABI sceAppInstUtilGetInstallProgressInfo(const char* titleId, AppInstallProgressInfo* info) {
    return 0;
}
int APS5_VABI sceAppInstUtilGetInstallProgress(const char* titleId, void* progress) {
    return 0;
}
int APS5_VABI sceAppInstUtilGetPrimaryAppSlot(const char* titleId, void* slot) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetAppInstallStatusByAppInfo(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppUnInstall2(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppUnInstallForRemote(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppUnInstallForRemote2(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetAddcontListTotalSize(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetAddcontInfo(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetAddcontInfoByContentId(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetAddcontInstalledStatus(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetInsertedDiscTitleId(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppUpdateStartTime(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppInstallSharePlayLink(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppInstallSharePlayLinkByUser(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetAddcontNum(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppCancelUnInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppDestroyMetadata(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilCheckAppSystemVer(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppConvertAppDownloadToDisc(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetMainAppTitleIdForSP(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetSubAppTitleIdForSP(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetMainAppTitleId(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetSubAppTitleId(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetAppInstallStatus(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppDestroyPkg(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilJson(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetInsertedDiscRoleType(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilRequestInstallDiscGame(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilRequestDataDiscCopy(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilCancelDataDiscCopy(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetDataDiscCopyProgress(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilSetPrimaryAppSlot(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetAppSlotInfoList(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetAppEmptySlot(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppInstallGetLinkState(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppUnInstallForMultiInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppInstallPs4CloudGame(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppStoreCompilationDiscInfo(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetCompilationDiscInfo(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetStoreCompilationDiscInfo(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetInsertedDiscTitleIdList(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppInstallRequestCompilationDiscApp(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetNoRelatedAddcontTitleList(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetIrremovableAppList(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppRequestMoveApps(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppProhibitDownloadInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppAllowDownloadInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetAppMoveProgressInfo(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppCancelMoveApps(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetMoveErrorAppList(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetAllAppSize(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppCancelGetAllAppSize(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetInsertedDiscMasterDataId(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetAppOtherSize(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppCancelGetAppOtherSize(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetInsertedDiscTotal(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppSetRemasterInstallType(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetInstallProgressInfoForMultiDisc(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilMountBdEmu(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilUnmountBdEmu(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetInstallStatus(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilResumeInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilPauseInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilRegisterDownload(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilStartInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilInstallPatch(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetPatchInstallStatus(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilResumePatchInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilPausePatchInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilCancelInstallPatch(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilCancelInstallAddcont(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilCancelInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilCancelForMultiInstall(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilInstallByPackage(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilIsRestoreState(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetRestoreState(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetAddons(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetInstallOptions(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetContentSize(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilCancelGetInformation(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetWorkspaceStatus(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilDeleteWorkspace(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetParentalControlLevel(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilCheckLatestPatch(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilCancelCheckPatch(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppInstallPsNowIcon(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetAddcontInfoList2(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetAddcontInfoList3(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilClearAddcontInfoCache(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetContentSize2(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppInstallContentPush(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetAvailableStorage(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilSwitchInstallLocation(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetConfigList(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilSwitchConfig(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilRestoreDataSource(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilGetNeededStorageSize(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilAppGetStorageDestType(void) {
    return 0;
}

int APS5_VABI sceAppInstUtilInstallAddons(void) {
    return 0;
}

}
