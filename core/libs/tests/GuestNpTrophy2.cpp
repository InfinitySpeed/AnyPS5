#include "prx/libc/include/general/VabiMacros.hpp"
#include "prx/libSceNpTrophy2/include/NpTrophy2Constants.hpp"
#include "prx/libSceNpTrophy2/include/NpTrophy2Types.hpp"
#include <cstddef>
#include <cstdlib>
#include <stdexcept>

extern "C" {
int APS5_VABI sceNpTrophy2RegisterUnlockCallback(void*, void*);
int APS5_VABI sceNpTrophy2UnregisterUnlockCallback();
int APS5_VABI sceNpTrophy2GetGameInfo(int, int, NpTrophy2GameDetails*, NpTrophy2GameData*);
int APS5_VABI sceNpTrophy2GetGroupInfo(int, int, int, NpTrophy2GroupDetails*, NpTrophy2GroupData*);
int APS5_VABI sceNpTrophy2GetTrophyInfo(int, int, int, NpTrophy2Details*, NpTrophy2Data*);
int APS5_VABI sceNpTrophy2ShowTrophyList(int);
int APS5_VABI sceNpTrophy2SystemAbortHandle(void);
int APS5_VABI sceNpTrophy2SystemBuildGroupIconUri(void);
int APS5_VABI sceNpTrophy2SystemBuildRewardIconUri(void);
int APS5_VABI sceNpTrophy2SystemBuildTrophyIconUri(void);
int APS5_VABI sceNpTrophy2SystemCheckCallback(void);
int APS5_VABI sceNpTrophy2SystemCheckNetSyncTitles(void);
int APS5_VABI sceNpTrophy2SystemCreateContext(void);
int APS5_VABI sceNpTrophy2SystemCreateHandle(void);
int APS5_VABI sceNpTrophy2SystemDebugLockTrophy(void);
int APS5_VABI sceNpTrophy2SystemDebugUnlockTrophy(void);
int APS5_VABI sceNpTrophy2SystemDestroyContext(void);
int APS5_VABI sceNpTrophy2SystemGetTrophyDetails(void);
int APS5_VABI sceNpTrophy2SystemGetTrophyGroupConf(void);
int APS5_VABI sceNpTrophy2SystemGetTrophySetArray(void);
int APS5_VABI sceNpTrophy2SystemGetTrophyTitleConf(void);
int APS5_VABI sceNpTrophy2SystemGetTrophyTitleDetails(void);
int APS5_VABI sceNpTrophy2SystemGetTrpIconByUri(void);
int APS5_VABI sceNpTrophy2SystemIsServerAvailable(void);
int APS5_VABI sceNpTrophy2SystemRegisterTitleSyncedCallback(void);
int APS5_VABI sceNpTrophy2SystemRegisterTitleUpdateCallback(void);
int APS5_VABI sceNpTrophy2SystemRemoveAll(void);
int APS5_VABI sceNpTrophy2SystemRemoveTitleData(void);
int APS5_VABI sceNpTrophy2SystemRemoveUserData(void);
int APS5_VABI sceNpTrophy2GetRewardIcon(int, int, int, void*, std::size_t*);
}

static void Require(bool value) { if (!value) std::abort(); }

static void APS5_VABI OnUnlock(int, int, void*) {}

template <typename Call> static bool ThrowsInvalidArgument(Call call) {
    try {
        call();
    } catch (const std::invalid_argument&) {
        return true;
    }
    return false;
}

int main() {
    int userdata = 0;
    Require(sceNpTrophy2UnregisterUnlockCallback() == 0);
    Require(sceNpTrophy2RegisterUnlockCallback(reinterpret_cast<void*>(&OnUnlock), &userdata) == 0);
    Require(sceNpTrophy2UnregisterUnlockCallback() == 0);
    Require(sceNpTrophy2RegisterUnlockCallback(reinterpret_cast<void*>(&OnUnlock), &userdata) == 0);
    Require(sceNpTrophy2UnregisterUnlockCallback() == 0);

    Require(sceNpTrophy2ShowTrophyList(1) == 0);

    NpTrophy2GameDetails details{};
    NpTrophy2GameData data{};
    Require(sceNpTrophy2GetGameInfo(1, 1, &details, nullptr) == 0);
    Require(details.num_trophies != 0);
    Require(sceNpTrophy2GetGameInfo(1, 1, nullptr, &data) == 0);
    Require(ThrowsInvalidArgument([] { sceNpTrophy2GetGameInfo(1, 1, nullptr, nullptr); }));

    NpTrophy2GroupDetails groupDetails{};
    NpTrophy2GroupData groupData{};
    Require(sceNpTrophy2GetGroupInfo(1, 1, 2, &groupDetails, nullptr) == 0);
    Require(groupDetails.group_id == 2);
    Require(sceNpTrophy2GetGroupInfo(1, 1, 2, nullptr, &groupData) == 0);
    Require(groupData.group_id == 2);
    Require(ThrowsInvalidArgument([] { sceNpTrophy2GetGroupInfo(1, 1, 2, nullptr, nullptr); }));

    NpTrophy2Details trophyDetails{};
    NpTrophy2Data trophyData{};
    Require(sceNpTrophy2GetTrophyInfo(1, 1, 3, &trophyDetails, nullptr) == 0);
    Require(trophyDetails.trophy_id == 3);
    Require(sceNpTrophy2GetTrophyInfo(1, 1, 3, nullptr, &trophyData) == 0);
    Require(trophyData.trophy_id == 3);
    Require(ThrowsInvalidArgument([] { sceNpTrophy2GetTrophyInfo(1, 1, 3, nullptr, nullptr); }));
    Require(sceNpTrophy2SystemAbortHandle() == 0);
    Require(sceNpTrophy2SystemBuildGroupIconUri() == 0);
    Require(sceNpTrophy2SystemBuildRewardIconUri() == 0);
    Require(sceNpTrophy2SystemBuildTrophyIconUri() == 0);
    Require(sceNpTrophy2SystemCheckCallback() == 0);
    Require(sceNpTrophy2SystemCheckNetSyncTitles() == 0);
    Require(sceNpTrophy2SystemCreateContext() == 0);
    Require(sceNpTrophy2SystemCreateHandle() == 0);
    Require(sceNpTrophy2SystemDebugLockTrophy() == 0);
    Require(sceNpTrophy2SystemDebugUnlockTrophy() == 0);
    Require(sceNpTrophy2SystemDestroyContext() == 0);
    Require(sceNpTrophy2SystemGetTrophyDetails() == 0);
    Require(sceNpTrophy2SystemGetTrophyGroupConf() == 0);
    Require(sceNpTrophy2SystemGetTrophySetArray() == 0);
    Require(sceNpTrophy2SystemGetTrophyTitleConf() == 0);
    Require(sceNpTrophy2SystemGetTrophyTitleDetails() == 0);
    Require(sceNpTrophy2SystemGetTrpIconByUri() == 0);
    Require(sceNpTrophy2SystemIsServerAvailable() == 0);
    Require(sceNpTrophy2SystemRegisterTitleSyncedCallback() == 0);
    Require(sceNpTrophy2SystemRegisterTitleUpdateCallback() == 0);
    Require(sceNpTrophy2SystemRemoveAll() == 0);
    Require(sceNpTrophy2SystemRemoveTitleData() == 0);
    Require(sceNpTrophy2SystemRemoveUserData() == 0);
    std::size_t iconSize = 1234;
    Require(sceNpTrophy2GetRewardIcon(1, 1, 1, nullptr, &iconSize) == SCE_NP_TROPHY2_ERROR_ICON_FILE_NOT_FOUND);
    Require(iconSize == 0);
    Require(sceNpTrophy2GetRewardIcon(1, 1, 1, nullptr, nullptr) == SCE_NP_TROPHY2_ERROR_ICON_FILE_NOT_FOUND);
}
