#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceBdSchedCancelBackgroundCopyRequest() {
    return 0;
}

int APS5_VABI sceBdSchedCancelPrioritizedBackgroundCopyRequest() {
    return 0;
}

int APS5_VABI sceBdSchedConfigure() {
    return 0;
}

int APS5_VABI sceBdSchedConfigure2() {
    return 0;
}

int APS5_VABI sceBdSchedDeconfigure() {
    return 0;
}

int APS5_VABI sceBdSchedGetBackgroundCopyRequest() {
    return 0;
}

int APS5_VABI sceBdSchedGetExtentMap() {
    return 0;
}

int APS5_VABI sceBdSchedGetPrioritizedBackgroundCopyRequest() {
    return 0;
}

int APS5_VABI sceBdSchedGetState() {
    return 0;
}

int APS5_VABI sceBdSchedSetBackgroundCopyRequest() {
    return 0;
}

int APS5_VABI sceBdSchedSetDiscIdentity() {
    return 0;
}

int APS5_VABI sceBdSchedSetPrioritizedBackgroundCopyRequest() {
    return 0;
}

int APS5_VABI sceBdSchedStartGame() {
    return 0;
}

int APS5_VABI sceBdSchedStartRipping() {
    return 0;
}

int APS5_VABI sceBdSchedStopScheduling() {
    return 0;
}

int APS5_VABI sceFsBfsCheckCleanFlag() {
    return 0;
}

int APS5_VABI sceFsBindApplication() {
    return 0;
}

int APS5_VABI sceFsBindPackages() {
    return 0;
}

int APS5_VABI sceFsCheckFormat() {
    return 0;
}

int APS5_VABI sceFsCheckSingleUser() {
    return 0;
}

int APS5_VABI sceFsCreateExfatPartition() {
    return 0;
}

int APS5_VABI sceFsCreatePfsSaveDataImage() {
    return 0;
}

int APS5_VABI sceFsCreatePfsTrophyDataImage() {
    return 0;
}

int APS5_VABI sceFsCreatePprPfsTrophyDataImage() {
    return 0;
}

int APS5_VABI sceFsDeviceAlignedPread() {
    return 0;
}

int APS5_VABI sceFsDeviceAlignedPwrite() {
    return 0;
}

int APS5_VABI sceFsDevpfsA53IocGetBuildMetadataStatus() {
    return 0;
}

int APS5_VABI sceFsDevpfsCancelWaitEvent() {
    return 0;
}

int APS5_VABI sceFsDevpfsCreateForVSH() {
    return 0;
}

int APS5_VABI sceFsDevpfsDeleteForVSH() {
    return 0;
}

int APS5_VABI sceFsDevpfsDeregisterEvent() {
    return 0;
}

int APS5_VABI sceFsDevpfsEventComplete() {
    return 0;
}

int APS5_VABI sceFsDevpfsEventResponseComplete() {
    return 0;
}

int APS5_VABI sceFsDevpfsFetchMetaEntry() {
    return 0;
}

int APS5_VABI sceFsDevpfsFsck() {
    return 0;
}

int APS5_VABI sceFsDevpfsInitFetchMetaEntryCtx() {
    return 0;
}

int APS5_VABI sceFsDevpfsMountForFSMP() {
    return 0;
}

int APS5_VABI sceFsDevpfsRegisterEvent() {
    return 0;
}

int APS5_VABI sceFsDevpfsWaitEvent() {
    return 0;
}

int APS5_VABI sceFsDrfsRegisterSocket() {
    return 0;
}

int APS5_VABI sceFsDrfsResumeSocket() {
    return 0;
}

int APS5_VABI sceFsErriCtl() {
    return 0;
}

int APS5_VABI sceFsErriGetState() {
    return 0;
}

int APS5_VABI sceFsExfatMkfsExternalHdd() {
    return 0;
}

int APS5_VABI sceFsExfatfsMkfs() {
    return 0;
}

int APS5_VABI sceFsExtUSBSchedDestroy() {
    return 0;
}

int APS5_VABI sceFsExtUSBSchedInsert() {
    return 0;
}

int APS5_VABI sceFsExtUSBSchedInsertForHDD() {
    return 0;
}

int APS5_VABI sceFsExternalStorageDeconfigure() {
    return 0;
}

int APS5_VABI sceFsExternalStorageGetRawDevice() {
    return 0;
}

int APS5_VABI sceFsExternalStorageInitialize() {
    return 0;
}

int APS5_VABI sceFsExternalStorageVerifyMetadata() {
    return 0;
}

int APS5_VABI sceFsGetAttribute() {
    return 0;
}

int APS5_VABI sceFsGetClusterStatistics() {
    return 0;
}

int APS5_VABI sceFsGetDeviceSectorsize() {
    return 0;
}

int APS5_VABI sceFsGetFsMetadata() {
    return 0;
}

int APS5_VABI sceFsGetFsMetadataWithProgress() {
    return 0;
}

int APS5_VABI sceFsGetSmrInfo() {
    return 0;
}

int APS5_VABI sceFsGschedCtl() {
    return 0;
}

int APS5_VABI sceFsISSchedConfigCurrentThread() {
    return 0;
}

int APS5_VABI sceFsISSchedConfigDescriptor() {
    return 0;
}

int APS5_VABI sceFsISSchedConfigThread() {
    return 0;
}

int APS5_VABI sceFsISSchedMapStat() {
    return 0;
}

int APS5_VABI sceFsISSchedResultToPriority() {
    return 0;
}

int APS5_VABI sceFsISSchedResultToSlot() {
    return 0;
}

int APS5_VABI sceFsISSchedStatCurrentThread() {
    return 0;
}

int APS5_VABI sceFsISSchedStatDescriptor() {
    return 0;
}

int APS5_VABI sceFsISSchedStatThread() {
    return 0;
}

int APS5_VABI sceFsISSchedUnmapStat() {
    return 0;
}

int APS5_VABI sceFsInitCreatePfsSaveDataOpt() {
    return 0;
}

int APS5_VABI sceFsInitCreatePfsTrophyDataOpt() {
    return 0;
}

int APS5_VABI sceFsInitMountDownloadDataOpt() {
    return 0;
}

int APS5_VABI sceFsInitMountGamePkgOpt() {
    return 0;
}

int APS5_VABI sceFsInitMountLwfsCompatOpt() {
    return 0;
}

int APS5_VABI sceFsInitMountLwfsOpt() {
    return 0;
}

int APS5_VABI sceFsInitMountPprPkgOpt() {
    return 0;
}

int APS5_VABI sceFsInitMountSaveDataOpt() {
    return 0;
}

int APS5_VABI sceFsInitMountTrophyDataOpt() {
    return 0;
}

int APS5_VABI sceFsInitUmountDownloadDataOpt() {
    return 0;
}

int APS5_VABI sceFsInitUmountGamePkgOpt() {
    return 0;
}

int APS5_VABI sceFsInitUmountLwfsCompatOpt() {
    return 0;
}

int APS5_VABI sceFsInitUmountLwfsOpt() {
    return 0;
}

int APS5_VABI sceFsInitUmountPprPkgOpt() {
    return 0;
}

int APS5_VABI sceFsInitUmountSaveDataOpt() {
    return 0;
}

int APS5_VABI sceFsInitUmountTrophyDataOpt() {
    return 0;
}

int APS5_VABI sceFsInitWorkspaceFileMetadataParam() {
    return 0;
}

int APS5_VABI sceFsLvdAttach() {
    return 0;
}

int APS5_VABI sceFsLvdAttach2() {
    return 0;
}

int APS5_VABI sceFsLvdAttachPartiallyCryptedDownloadData() {
    return 0;
}

int APS5_VABI sceFsLvdAttachSingleDefaultImage() {
    return 0;
}

int APS5_VABI sceFsLvdAttachSingleImage() {
    return 0;
}

int APS5_VABI sceFsLvdDetach() {
    return 0;
}

int APS5_VABI sceFsLvdDisableLayer() {
    return 0;
}

int APS5_VABI sceFsLvdEnableLayer() {
    return 0;
}

int APS5_VABI sceFsLvdSetDiscIdentity() {
    return 0;
}

int APS5_VABI sceFsLvdWaitResumed() {
    return 0;
}

int APS5_VABI sceFsMlfsMount() {
    return 0;
}

int APS5_VABI sceFsMlfsMountWithFlags() {
    return 0;
}

int APS5_VABI sceFsMlfsUmount() {
    return 0;
}

int APS5_VABI sceFsMountDownloadData() {
    return 0;
}

int APS5_VABI sceFsMountGamePkg() {
    return 0;
}

int APS5_VABI sceFsMountLwfs() {
    return 0;
}

int APS5_VABI sceFsMountLwfsCompat() {
    return 0;
}

int APS5_VABI sceFsMountPartiallyCryptedDownloadData() {
    return 0;
}

int APS5_VABI sceFsMountPprPkg() {
    return 0;
}

int APS5_VABI sceFsMountSaveData() {
    return 0;
}

int APS5_VABI sceFsMountTrophyData() {
    return 0;
}

int APS5_VABI sceFsNsfsAddOverlayToNamespace() {
    return 0;
}

int APS5_VABI sceFsNsfsMountWithFlags() {
    return 0;
}

int APS5_VABI sceFsNsfsSetGlobalExclude() {
    return 0;
}

int APS5_VABI sceFsNsfsUmount() {
    return 0;
}

int APS5_VABI sceFsPartitionTrim() {
    return 0;
}

int APS5_VABI sceFsReserveCluster() {
    return 0;
}

int APS5_VABI sceFsSetAttribute() {
    return 0;
}

int APS5_VABI sceFsSetClusterCacheSize() {
    return 0;
}

int APS5_VABI sceFsSetFileReservedTotal() {
    return 0;
}

int APS5_VABI sceFsSetSystemReserveSize() {
    return 0;
}

int APS5_VABI sceFsSetWorkspaceFileHash() {
    return 0;
}

int APS5_VABI sceFsStatWorkspace() {
    return 0;
}

int APS5_VABI sceFsSysStorageGetStatus() {
    return 0;
}

int APS5_VABI sceFsTransactionCancel() {
    return 0;
}

int APS5_VABI sceFsTransactionSaveDataInitMountOpt() {
    return 0;
}

int APS5_VABI sceFsTransactionSaveDataMount() {
    return 0;
}

int APS5_VABI sceFsTransactionStart() {
    return 0;
}

int APS5_VABI sceFsTrophyImageError() {
    return 0;
}

int APS5_VABI sceFsUfsAllocateAdditionalContents() {
    return 0;
}

int APS5_VABI sceFsUfsAllocateAligned() {
    return 0;
}

int APS5_VABI sceFsUfsAllocateDownloadData() {
    return 0;
}

int APS5_VABI sceFsUfsAllocateGameImage() {
    return 0;
}

int APS5_VABI sceFsUfsAllocatePatchImage() {
    return 0;
}

int APS5_VABI sceFsUfsAllocateSaveData() {
    return 0;
}

int APS5_VABI sceFsUfsAllocateTrophyData() {
    return 0;
}

int APS5_VABI sceFsUfsCheckCleanFlag() {
    return 0;
}

int APS5_VABI sceFsUfsCheckFixedCylinderGroupSize() {
    return 0;
}

int APS5_VABI sceFsUfsCollectTelemetry() {
    return 0;
}

int APS5_VABI sceFsUfsCollectTelemetry2() {
    return 0;
}

int APS5_VABI sceFsUfsDirectWrite() {
    return 0;
}

int APS5_VABI sceFsUfsEstimateZoneCapacityForUser() {
    return 0;
}

int APS5_VABI sceFsUfsExtendFile() {
    return 0;
}

int APS5_VABI sceFsUfsFsck() {
    return 0;
}

int APS5_VABI sceFsUfsFsckWithMM() {
    return 0;
}

int APS5_VABI sceFsUfsGetExtentMap() {
    return 0;
}

int APS5_VABI sceFsUfsGrowLwfs() {
    return 0;
}

int APS5_VABI sceFsUfsGrowfs() {
    return 0;
}

int APS5_VABI sceFsUfsHideBlocksFromUser() {
    return 0;
}

int APS5_VABI sceFsUfsInitalizeSparseFile() {
    return 0;
}

int APS5_VABI sceFsUfsLargewriteFsck() {
    return 0;
}

int APS5_VABI sceFsUfsLargewriteFsckWithMM() {
    return 0;
}

int APS5_VABI sceFsUfsMkLwfs() {
    return 0;
}

int APS5_VABI sceFsUfsMkfs() {
    return 0;
}

int APS5_VABI sceFsUfsMkfsForExternalHDD() {
    return 0;
}

int APS5_VABI sceFsUfsMkfsForSystem() {
    return 0;
}

int APS5_VABI sceFsUfsMkfsWithFixedCylinderGroupSize() {
    return 0;
}

int APS5_VABI sceFsUfsReallocateSparseFile() {
    return 0;
}

int APS5_VABI sceFsUfsRecryptBlocks() {
    return 0;
}

int APS5_VABI sceFsUfsRecryptGetState() {
    return 0;
}

int APS5_VABI sceFsUfsRecryptIsUnfinished() {
    return 0;
}

int APS5_VABI sceFsUfsRecryptSyncMetadata() {
    return 0;
}

int APS5_VABI sceFsUfsSeekHoleInFile() {
    return 0;
}

int APS5_VABI sceFsUfsStopOperation() {
    return 0;
}

int APS5_VABI sceFsUmountDownloadData() {
    return 0;
}

int APS5_VABI sceFsUmountGamePkg() {
    return 0;
}

int APS5_VABI sceFsUmountLwfs() {
    return 0;
}

int APS5_VABI sceFsUmountLwfsCompat() {
    return 0;
}

int APS5_VABI sceFsUmountSaveData() {
    return 0;
}

int APS5_VABI sceFsUmountTrophyData() {
    return 0;
}

int APS5_VABI sceFsUmountWorkspace() {
    return 0;
}

int APS5_VABI sceFsUnbindApplication() {
    return 0;
}

int APS5_VABI sceFsUnbindPackages() {
    return 0;
}

int APS5_VABI sceFsWsCreate() {
    return 0;
}

int APS5_VABI sceFsWsDelete() {
    return 0;
}

int APS5_VABI sceFsWsFetchFileMetadata() {
    return 0;
}

int APS5_VABI sceFsWsFsck() {
    return 0;
}

int APS5_VABI sceFsWsGetStatus() {
    return 0;
}

int APS5_VABI sceFsWsMount() {
    return 0;
}

int APS5_VABI sceFsWsUmount() {
    return 0;
}

}
