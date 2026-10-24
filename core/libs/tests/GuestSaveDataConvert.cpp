#include "prx/libc/include/general/VabiMacros.hpp"
#include "SceTypes.hpp"
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <random>
#include <string>
#include <system_error>
#include <vector>

extern "C" {
int APS5_VABI sceSaveDataConvert(const SaveDataConvert*);
int APS5_VABI sceSaveDataGetConvertProgress(float*);
int APS5_VABI sceSaveDataInitialize3(const void*);
int APS5_VABI sceSaveDataTerminate();
int APS5_VABI sceSaveDataGetEventResult(const void*, SaveDataEvent*);
int APS5_VABI sceSaveDataBindPsnAccount(void);
int APS5_VABI sceSaveDataBindPsnAccountForSystemBackup(void);
int APS5_VABI sceSaveDataChangeDatabase(void);
int APS5_VABI sceSaveDataChangeInternal(void);
int APS5_VABI sceSaveDataCheckBackupData(void);
int APS5_VABI sceSaveDataCheckBackupDataForCdlg(void);
int APS5_VABI sceSaveDataCheckBackupDataInternal(void);
int APS5_VABI sceSaveDataCheckBackupDataLight(void);
int APS5_VABI sceSaveDataCheckCloudData(void);
int APS5_VABI sceSaveDataCheckSaveDataBroken(void);
int APS5_VABI sceSaveDataCheckSaveDataVersion(void);
int APS5_VABI sceSaveDataCheckSaveDataVersionLatest(void);
int APS5_VABI sceSaveDataCreateUploadData(void);
int APS5_VABI sceSaveDataDebugGetThreadId(void);
int APS5_VABI sceSaveDataDeleteAllUser(void);
int APS5_VABI sceSaveDataDeleteBackupData(void);
int APS5_VABI sceSaveDataDeleteCloudData(void);
int APS5_VABI sceSaveDataDeleteProspero(void);
int APS5_VABI sceSaveDataDeleteTitle(void);
int APS5_VABI sceSaveDataDeleteUser(void);
int APS5_VABI sceSaveDataDirNameSearchInternal(void);
int APS5_VABI sceSaveDataDownload(void);
int APS5_VABI sceSaveDataGetAppLaunchedUser(void);
int APS5_VABI sceSaveDataGetAutoUploadConditions(void);
int APS5_VABI sceSaveDataGetAutoUploadRequestInfo(void);
int APS5_VABI sceSaveDataGetAutoUploadSetting(void);
int APS5_VABI sceSaveDataGetBoundPsnAccountCount(void);
int APS5_VABI sceSaveDataGetClientThreadPriority(void);
int APS5_VABI sceSaveDataGetCloudQuotaInfo(void);
int APS5_VABI sceSaveDataGetSaveDataRootDir(void);
int APS5_VABI sceSaveDataGetSaveDataRootPath(void);
int APS5_VABI sceSaveDataGetSaveDataRootUsbPath(void);
int APS5_VABI sceSaveDataGetSavePoint(void);
int APS5_VABI sceSaveDataGetUpdatedDataCount(void);
int APS5_VABI sceSaveDataInitializeForCdlg(void);
int APS5_VABI sceSaveDataIsDeletingUsbDb(void);
int APS5_VABI sceSaveDataManualDelete(void);
int APS5_VABI sceSaveDataManualDownload(void);
int APS5_VABI sceSaveDataManualUpload(void);
int APS5_VABI sceSaveDataMountInternal(void);
int APS5_VABI sceSaveDataMountSys(void);
int APS5_VABI sceSaveDataRebuildDatabase(void);
}

namespace {

constexpr int SaveDataErrorParameter = -2137063424;
constexpr int SaveDataErrorNotInitialized = -2137063423;
constexpr int SaveDataErrorNotFound = -2137063416;

int failures = 0;

void Check(bool condition, const std::string& what) {
    if (condition) return;
    std::fprintf(stderr, "savedata convert check failed: %s\n", what.c_str());
    ++failures;
}

int Convert(const char* data, std::size_t size) {
    SceSaveDataDirName name{};
    std::memcpy(name.data, data, size);
    SaveDataConvert convert{};
    convert.user_id = 0x10000000;
    convert.dir_name = &name;
    return sceSaveDataConvert(&convert);
}

std::vector<char> Read(const std::filesystem::path& path) {
    std::ifstream stream(path, std::ios::binary);
    return {std::istreambuf_iterator<char>(stream), std::istreambuf_iterator<char>()};
}

}

int main() {
    const auto root = std::filesystem::temp_directory_path() / ("anyps5-savedata-convert-" + std::to_string(std::random_device{}()));
    const auto work = root / "work";
    const auto kept = work / "_sd" / "kept" / "data.bin";
    std::filesystem::create_directories(kept.parent_path());
    std::ofstream(kept) << "data";
    const auto previous = std::filesystem::current_path();
    std::filesystem::current_path(work);

    float progress = 0.0f;
    Check(sceSaveDataGetConvertProgress(&progress) == SaveDataErrorNotInitialized, "query before initialize fails with not initialized");
    Check(sceSaveDataInitialize3(nullptr) == 0, "SaveData initializes");
    Check(sceSaveDataGetConvertProgress(&progress) == 0, "get convert progress succeeds");
    Check(progress == 0.0f, "convert progress reports 0.0f initially");
    Check(sceSaveDataGetConvertProgress(nullptr) == SaveDataErrorParameter, "null progress pointer is rejected");
    Check(Convert("missing", sizeof("missing")) == SaveDataErrorNotFound, "a missing save is not found");
    Check(sceSaveDataGetConvertProgress(&progress) == 0, "get convert progress succeeds after failed convert");
    Check(progress < 1.0f, "convert progress is below 1.0f after failed convert");
    Check(progress == 0.0f, "convert progress reports 0.0f after failed convert");
    Check(Convert("kept", sizeof("kept")) == 0, "an existing save converts");
    SaveDataEvent event{};
    Check(sceSaveDataGetEventResult(nullptr, &event) == 0, "successful conversion queues completion");
    Check(event.type == 5 && event.error_code == 0, "conversion event reports successful conversion");
    Check(event.user_id == 0x10000000 && std::strcmp(event.dir_name.data, "kept") == 0, "conversion event identifies the user and save");
    Check(sceSaveDataGetEventResult(nullptr, &event) == SaveDataErrorNotFound, "conversion event is delivered once");
    Check(Read(kept) == std::vector<char>{'d', 'a', 't', 'a'}, "the converted save keeps its files");
    Check(sceSaveDataGetConvertProgress(&progress) == 0, "get convert progress succeeds after successful convert");
    Check(progress == 1.0f, "convert progress reports 1.0f after successful convert");
    Check(Convert("missing", sizeof("missing")) == SaveDataErrorNotFound, "a missing save is not found");
    Check(sceSaveDataGetConvertProgress(&progress) == 0, "get convert progress succeeds after subsequent failed convert");
    Check(progress < 1.0f, "convert progress drops below 1.0f after subsequent failed convert");
    Check(progress == 0.0f, "convert progress reports 0.0f after subsequent failed convert");
    for (const char* invalid : {"../kept", "", ".", "..", "a\\b", "c:d"}) {
        Check(Convert(invalid, std::strlen(invalid) + 1) == SaveDataErrorParameter, std::string("\"") + invalid + "\" is rejected");
    }
    char unterminated[sizeof(SceSaveDataDirName::data)];
    std::memset(unterminated, 'a', sizeof(unterminated));
    Check(Convert(unterminated, sizeof(unterminated)) == SaveDataErrorParameter, "an unterminated name is rejected");
    Check(sceSaveDataTerminate() == 0, "SaveData terminates");
    Check(sceSaveDataGetConvertProgress(&progress) == SaveDataErrorNotInitialized, "query after terminate fails with not initialized");

    std::filesystem::current_path(previous);
    std::error_code error;
    std::filesystem::remove_all(root, error);
        Check(sceSaveDataBindPsnAccount() == 0, "sceSaveDataBindPsnAccount check");
        Check(sceSaveDataBindPsnAccountForSystemBackup() == 0, "sceSaveDataBindPsnAccountForSystemBackup check");
        Check(sceSaveDataChangeDatabase() == 0, "sceSaveDataChangeDatabase check");
        Check(sceSaveDataChangeInternal() == 0, "sceSaveDataChangeInternal check");
        Check(sceSaveDataCheckBackupData() == 0, "sceSaveDataCheckBackupData check");
        Check(sceSaveDataCheckBackupDataForCdlg() == 0, "sceSaveDataCheckBackupDataForCdlg check");
        Check(sceSaveDataCheckBackupDataInternal() == 0, "sceSaveDataCheckBackupDataInternal check");
        Check(sceSaveDataCheckBackupDataLight() == 0, "sceSaveDataCheckBackupDataLight check");
        Check(sceSaveDataCheckCloudData() == 0, "sceSaveDataCheckCloudData check");
        Check(sceSaveDataCheckSaveDataBroken() == 0, "sceSaveDataCheckSaveDataBroken check");
        Check(sceSaveDataCheckSaveDataVersion() == 0, "sceSaveDataCheckSaveDataVersion check");
        Check(sceSaveDataCheckSaveDataVersionLatest() == 0, "sceSaveDataCheckSaveDataVersionLatest check");
        Check(sceSaveDataCreateUploadData() == 0, "sceSaveDataCreateUploadData check");
        Check(sceSaveDataDebugGetThreadId() == 0, "sceSaveDataDebugGetThreadId check");
        Check(sceSaveDataDeleteAllUser() == 0, "sceSaveDataDeleteAllUser check");
        Check(sceSaveDataDeleteBackupData() == 0, "sceSaveDataDeleteBackupData check");
        Check(sceSaveDataDeleteCloudData() == 0, "sceSaveDataDeleteCloudData check");
        Check(sceSaveDataDeleteProspero() == 0, "sceSaveDataDeleteProspero check");
        Check(sceSaveDataDeleteTitle() == 0, "sceSaveDataDeleteTitle check");
        Check(sceSaveDataDeleteUser() == 0, "sceSaveDataDeleteUser check");
        Check(sceSaveDataDirNameSearchInternal() == 0, "sceSaveDataDirNameSearchInternal check");
        Check(sceSaveDataDownload() == 0, "sceSaveDataDownload check");
        Check(sceSaveDataGetAppLaunchedUser() == 0, "sceSaveDataGetAppLaunchedUser check");
        Check(sceSaveDataGetAutoUploadConditions() == 0, "sceSaveDataGetAutoUploadConditions check");
        Check(sceSaveDataGetAutoUploadRequestInfo() == 0, "sceSaveDataGetAutoUploadRequestInfo check");
        Check(sceSaveDataGetAutoUploadSetting() == 0, "sceSaveDataGetAutoUploadSetting check");
        Check(sceSaveDataGetBoundPsnAccountCount() == 0, "sceSaveDataGetBoundPsnAccountCount check");
        Check(sceSaveDataGetClientThreadPriority() == 0, "sceSaveDataGetClientThreadPriority check");
        Check(sceSaveDataGetCloudQuotaInfo() == 0, "sceSaveDataGetCloudQuotaInfo check");
        Check(sceSaveDataGetSaveDataRootDir() == 0, "sceSaveDataGetSaveDataRootDir check");
        Check(sceSaveDataGetSaveDataRootPath() == 0, "sceSaveDataGetSaveDataRootPath check");
        Check(sceSaveDataGetSaveDataRootUsbPath() == 0, "sceSaveDataGetSaveDataRootUsbPath check");
        Check(sceSaveDataGetSavePoint() == 0, "sceSaveDataGetSavePoint check");
        Check(sceSaveDataGetUpdatedDataCount() == 0, "sceSaveDataGetUpdatedDataCount check");
        Check(sceSaveDataInitializeForCdlg() == 0, "sceSaveDataInitializeForCdlg check");
        Check(sceSaveDataIsDeletingUsbDb() == 0, "sceSaveDataIsDeletingUsbDb check");
        Check(sceSaveDataManualDelete() == 0, "sceSaveDataManualDelete check");
        Check(sceSaveDataManualDownload() == 0, "sceSaveDataManualDownload check");
        Check(sceSaveDataManualUpload() == 0, "sceSaveDataManualUpload check");
        Check(sceSaveDataMountInternal() == 0, "sceSaveDataMountInternal check");
        Check(sceSaveDataMountSys() == 0, "sceSaveDataMountSys check");
        Check(sceSaveDataRebuildDatabase() == 0, "sceSaveDataRebuildDatabase check");
    if (failures != 0) return 1;
    std::printf("savedata convert tests passed\n");
    return 0;
}
