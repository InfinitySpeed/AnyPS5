#include "prx/libc/include/general/VabiMacros.hpp"
#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include <span>

struct GameLiveStreamingStatus2 {
    std::int32_t userId;
    bool isOnAir;
    std::uint8_t align[3];
    std::uint32_t spectatorCounts;
    std::uint32_t textMessageCounts;
    std::uint32_t commandMessageCounts;
    std::uint32_t broadcastVideoResolution;
    std::uint8_t reserved[48];
};
static_assert(sizeof(GameLiveStreamingStatus2) == 72);

extern "C" {
int APS5_VABI sceGameLiveStreamingInitialize(std::size_t heap_size);
int APS5_VABI sceGameLiveStreamingTerminate(void);
int APS5_VABI sceGameLiveStreamingGetCurrentStatus2(GameLiveStreamingStatus2* status);
struct GameLiveStreamingProgramInfo;
int APS5_VABI sceGameLiveStreamingGetProgramInfo(GameLiveStreamingProgramInfo*);
int APS5_VABI sceGameLiveStreamingEnableLiveStreaming(bool isEnableLiveStreaming);
int APS5_VABI sceGameLiveStreamingScreenInitialize(void);
int APS5_VABI sceGameLiveStreamingScreenInitializeSeparateModeParameter(void);
int APS5_VABI sceGameLiveStreamingScreenTerminate(void);
int APS5_VABI sceGameLiveStreamingScreenCloseSeparateMode(void);
int APS5_VABI sceGameLiveStreamingScreenConfigureSeparateMode(void);
int APS5_VABI sceGameLiveStreamingScreenOpenSeparateMode(void);
int APS5_VABI sceGameLiveStreamingScreenSetMode(void);
int APS5_VABI sceGameLiveStreamingPermitLiveStreaming(void);
int APS5_VABI sceGameLiveStreamingSetMaxBitrate(void);
int APS5_VABI sceGameLiveStreamingGetCurrentStatus(void);
int APS5_VABI sceGameLiveStreamingEnableSocialFeedback(void);
int APS5_VABI sceGameLiveStreamingGetSocialFeedbackMessagesCount(void);
int APS5_VABI sceGameLiveStreamingGetSocialFeedbackMessages(void);
int APS5_VABI sceGameLiveStreamingPermitServerSideRecording(void);
int APS5_VABI sceGameLiveStreamingSetMetadata(void);
int APS5_VABI sceGameLiveStreamingSetSpoilerTag(void);
int APS5_VABI sceGameLiveStreamingClearSpoilerTag(void);
int APS5_VABI sceGameLiveStreamingSetPresetSocialFeedbackCommands(void);
int APS5_VABI sceGameLiveStreamingClearPresetSocialFeedbackCommands(void);
int APS5_VABI sceGameLiveStreamingSetPresetSocialFeedbackCommandsDescription(void);
int APS5_VABI sceGameLiveStreamingClearSocialFeedbackMessages(void);
int APS5_VABI sceGameLiveStreamingPostSocialMessage(void);
int APS5_VABI sceGameLiveStreamingSetCameraFrameSetting(void);
int APS5_VABI sceGameLiveStreamingSetServiceProviderPermission(void);
int APS5_VABI sceGameLiveStreamingSetDefaultServiceProviderPermission(void);
int APS5_VABI sceGameLiveStreamingSetInvitationSessionId(void);
int APS5_VABI sceGameLiveStreamingStartGenerateStandbyScreenResource(void);
int APS5_VABI sceGameLiveStreamingStopGenerateStandbyScreenResource(void);
int APS5_VABI sceGameLiveStreamingRegisterCallback(void);
int APS5_VABI sceGameLiveStreamingUnregisterCallback(void);
int APS5_VABI sceGameLiveStreamingCheckCallback(void);
int APS5_VABI sceGameLiveStreamingSetStandbyScreenResource(void);
int APS5_VABI sceGameLiveStreamingGetCurrentBroadcastScreenLayout(void);
int APS5_VABI sceGameLiveStreamingLaunchLiveViewer(void);
int APS5_VABI sceGameLiveStreamingLaunchLiveViewerA(void);
}

namespace {

void Require(bool value) { if (!value) std::abort(); }

constexpr std::int32_t kInvalidUserId = -1;

bool EnableThrowsNotInitialized(bool isEnableLiveStreaming) {
    try {
        sceGameLiveStreamingEnableLiveStreaming(isEnableLiveStreaming);
    } catch (const std::logic_error&) {
        return true;
    }
    return false;
}

}

int main() {
    constexpr int invalidArgument = static_cast<int>(0x80A00002);
    constexpr int alreadyInitialized = static_cast<int>(0x80A00003);
    constexpr int notInitialized = static_cast<int>(0x80A00004);
    Require(sceGameLiveStreamingTerminate() == notInitialized);
    Require(sceGameLiveStreamingGetCurrentStatus2(nullptr) == notInitialized);
    Require(EnableThrowsNotInitialized(true));
    for (const std::size_t size : {0u, 1u, 0x3fffu, 0x4001u, 0x100000u}) Require(sceGameLiveStreamingInitialize(size) == invalidArgument);
    Require(sceGameLiveStreamingInitialize(0x4000) == 0);
    Require(sceGameLiveStreamingEnableLiveStreaming(true) == 0);
    Require(sceGameLiveStreamingInitialize(0) == invalidArgument);
    Require(sceGameLiveStreamingInitialize(0x4000) == alreadyInitialized);
    Require(sceGameLiveStreamingGetCurrentStatus2(nullptr) == invalidArgument);

    GameLiveStreamingStatus2 status{};
    std::memset(&status, 0x7f, sizeof(status));
    Require(sceGameLiveStreamingGetCurrentStatus2(&status) == 0);
    Require(status.userId == kInvalidUserId);
    Require(!status.isOnAir);
    Require(status.spectatorCounts == 0);
    Require(status.textMessageCounts == 0);
    Require(status.commandMessageCounts == 0);
    Require(status.broadcastVideoResolution == 0);
    for (std::uint8_t byte : status.align) {
        Require(byte == 0);
    }
    for (std::uint8_t byte : status.reserved) {
        Require(byte == 0);
    }

    Require(sceGameLiveStreamingGetProgramInfo(nullptr) == static_cast<int>(0x80A00002));
    std::array<std::uint8_t, 0x134C + 16> programInfo{};
    programInfo.fill(0x7f);
    Require(sceGameLiveStreamingGetProgramInfo(reinterpret_cast<GameLiveStreamingProgramInfo*>(programInfo.data())) == 0);
    for (std::size_t i = 0; i < programInfo.size(); ++i) {
        Require(programInfo[i] == (i < 0x134C ? 0 : 0x7f));
    }

    Require(sceGameLiveStreamingEnableLiveStreaming(false) == 0);
    Require(sceGameLiveStreamingTerminate() == 0);
    Require(EnableThrowsNotInitialized(false));
    std::memset(&status, 0x7f, sizeof(status));
    Require(sceGameLiveStreamingGetCurrentStatus2(&status) == notInitialized);
    for (const auto value : std::as_bytes(std::span(&status, 1))) Require(value == std::byte{0x7f});
    programInfo.fill(0x7f);
    Require(sceGameLiveStreamingGetProgramInfo(reinterpret_cast<GameLiveStreamingProgramInfo*>(programInfo.data())) == notInitialized);
    for (const std::uint8_t byte : programInfo) Require(byte == 0x7f);
    Require(sceGameLiveStreamingTerminate() == notInitialized);
    Require(sceGameLiveStreamingScreenInitialize() == 0);
    Require(sceGameLiveStreamingScreenInitializeSeparateModeParameter() == 0);
    Require(sceGameLiveStreamingScreenTerminate() == 0);
    Require(sceGameLiveStreamingScreenCloseSeparateMode() == 0);
    Require(sceGameLiveStreamingScreenConfigureSeparateMode() == 0);
    Require(sceGameLiveStreamingScreenOpenSeparateMode() == 0);
    Require(sceGameLiveStreamingScreenSetMode() == 0);
    Require(sceGameLiveStreamingPermitLiveStreaming() == 0);
    Require(sceGameLiveStreamingSetMaxBitrate() == 0);
    Require(sceGameLiveStreamingGetCurrentStatus() == 0);
    Require(sceGameLiveStreamingEnableSocialFeedback() == 0);
    Require(sceGameLiveStreamingGetSocialFeedbackMessagesCount() == 0);
    Require(sceGameLiveStreamingGetSocialFeedbackMessages() == 0);
    Require(sceGameLiveStreamingPermitServerSideRecording() == 0);
    Require(sceGameLiveStreamingSetMetadata() == 0);
    Require(sceGameLiveStreamingSetSpoilerTag() == 0);
    Require(sceGameLiveStreamingClearSpoilerTag() == 0);
    Require(sceGameLiveStreamingSetPresetSocialFeedbackCommands() == 0);
    Require(sceGameLiveStreamingClearPresetSocialFeedbackCommands() == 0);
    Require(sceGameLiveStreamingSetPresetSocialFeedbackCommandsDescription() == 0);
    Require(sceGameLiveStreamingClearSocialFeedbackMessages() == 0);
    Require(sceGameLiveStreamingPostSocialMessage() == 0);
    Require(sceGameLiveStreamingSetCameraFrameSetting() == 0);
    Require(sceGameLiveStreamingSetServiceProviderPermission() == 0);
    Require(sceGameLiveStreamingSetDefaultServiceProviderPermission() == 0);
    Require(sceGameLiveStreamingSetInvitationSessionId() == 0);
    Require(sceGameLiveStreamingStartGenerateStandbyScreenResource() == 0);
    Require(sceGameLiveStreamingStopGenerateStandbyScreenResource() == 0);
    Require(sceGameLiveStreamingRegisterCallback() == 0);
    Require(sceGameLiveStreamingUnregisterCallback() == 0);
    Require(sceGameLiveStreamingCheckCallback() == 0);
    Require(sceGameLiveStreamingSetStandbyScreenResource() == 0);
    Require(sceGameLiveStreamingGetCurrentBroadcastScreenLayout() == 0);
    Require(sceGameLiveStreamingLaunchLiveViewer() == 0);
    Require(sceGameLiveStreamingLaunchLiveViewerA() == 0);
}
