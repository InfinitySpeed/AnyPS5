#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

struct BgftInitParam {
    void* heap;
    uint64_t heapSize;
};

struct BgftProgress;
struct BgftStorageTaskParam {
    std::uint32_t value0;
    std::uint32_t value4;
    const char* contentId;
    const char* text16;
    std::byte unused24[8];
    const char* text32;
    const char* text40;
    const char* text48;
    std::uint32_t value56;
    std::byte padding60[4];
    const char* text64;
    const char* text72;
    const char* text80;
    const char* text88;
    std::uint64_t value96;
    std::uint32_t value104;
};

static_assert(sizeof(BgftStorageTaskParam) == 112);
static_assert(offsetof(BgftStorageTaskParam, contentId) == 8);
static_assert(offsetof(BgftStorageTaskParam, text32) == 32);
static_assert(offsetof(BgftStorageTaskParam, value56) == 56);
static_assert(offsetof(BgftStorageTaskParam, text64) == 64);
static_assert(offsetof(BgftStorageTaskParam, value96) == 96);
static_assert(offsetof(BgftStorageTaskParam, value104) == 104);

static_assert(sizeof(BgftInitParam) == 16);
static_assert(offsetof(BgftInitParam, heapSize) == 8);

extern "C" {

int APS5_VABI sceBgftServiceInit(const BgftInitParam* params) {
    return 0;
}
int APS5_VABI sceBgftServiceTerm(void) {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadPauseTaskAll() {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadResumeTaskAll() {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadStartTaskAll() {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadStopTaskAll() {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadFindActivePatchTask(const char* contentId, int32_t* taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadFindActivePupTask(int32_t* taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadFindTaskByContentId(const char* contentId, int32_t subType, int32_t* taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadGetProgress(int32_t taskId, BgftProgress* progress) {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadPauseTask(int32_t taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadResumeTask(int32_t taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadStartTask(int32_t taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadStopTask(int32_t taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadFindActiveGameAndGameAcTask(const char* contentId, int32_t* taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadFindActiveTask(const char* contentId, int32_t subType, int32_t* taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadGetGameAndGameAcProgress(const char* contentId, BgftProgress* progress) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadGetPatchProgress() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadGetPlayGoProgress(const char* contentId, BgftProgress* progress) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadGetProgress(int32_t taskId, BgftProgress* progress) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadGetTaskInfo() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadPauseTask(int32_t taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadRegisterTaskByStorageEx(const BgftStorageTaskParam* params, int32_t* taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadResumeTask(int32_t taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadStopTask(int32_t taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadStartTask(int32_t taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadUnregisterTask(int32_t taskId) {
    return 0;
}
int APS5_VABI sceBgftServiceIntInit(const BgftInitParam* params) {
    return 0;
}
int APS5_VABI sceBgftServiceDownloadQueryTask(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugDownloadCorruptPkg(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugDownloadRequest(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugPlayGoGetPlayGoStatusString(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugPlayGoIsPaused(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugPlayGoResume(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugPlayGoRevertToFullState(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugPlayGoRevertToInitialState(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugPlayGoRevertToSnapshot(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugPlayGoSnapshotByTitleId(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugPlayGoSuspend(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadDebugDeleteBgftEnvFile(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadDebugDownloadBgftEnvFile(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadDebugGetBgftEnvInfoString(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadDebugGetStat(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadGetExtUsbUserStorageSize(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadGetUserStorageSize(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadPauseTaskAll(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadQueryTask(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadRegisterTaskByStorage(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadRestartTask(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadResumeTaskAll(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadStartTaskAll(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadStopTaskAll(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDownloadUnregisterTaskAll(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntExtUsbCheckActiveDownloadTasks(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntGetTaskInfoValueInt(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntGetTaskInfoValueString(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntGetTaskInfoValueStringIndex(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntPlayGoFindTaskId(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntPlayGoGetDiscIniChunksInstallProgress(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntPlayGoIsPaused(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntPlayGoResume(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntTerm(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadGetProgress(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadQueryTask(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadRegisterTask(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadRestartTask(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadStartTask(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadStartTaskAll(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadStopTask(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadStopTaskAll(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadUnregisterTask(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntUploadUnregisterTaskAll(void) {
    return 0;
}

int APS5_VABI sceBgftServiceIntDebugPlayGoClearSetFreeZone() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDebugPlayGoIsSetFreeZone() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadCheckPatchUpdateState() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadClearStats() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadGetApplicationDataSize() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadGetPatchGoProgress() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadHideTask() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadSetResumeState() {
    return 0;
}
int APS5_VABI sceBgftServiceIntDownloadSetStartState() {
    return 0;
}
int APS5_VABI sceBgftServiceIntPlayGoCheckDiscIniChunksInstall() {
    return 0;
}
int APS5_VABI sceBgftServiceIntPlayGoStartDataDiscInstall() {
    return 0;
}
int APS5_VABI sceBgftServiceIntSetTaskVisible() {
    return 0;
}
int APS5_VABI sceBgftServiceIntUploadGetAvailableTaskCount() {
    return 0;
}
int APS5_VABI sceBgftServiceIntUploadGetTaskInfo() {
    return 0;
}
int APS5_VABI sceBgftServiceIntUploadHideTask() {
    return 0;
}
int APS5_VABI sceBgftServiceIntUploadSetStartState() {
    return 0;
}
int APS5_VABI sceBgftServiceIntUploadSetUploadError() {
    return 0;
}

}
