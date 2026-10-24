#include <cstdint>
#include <cstddef>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

struct MoveTrackerCameraFrame;
struct MoveTrackerControllerInput;
struct MoveTrackerState;
struct MoveTrackerPlaybackInfo;

extern "C" {

int APS5_VABI sceMoveTrackerCalibrateReset() {
    return 0;
}

int APS5_VABI sceMoveTrackerCalibrateYaw(std::int32_t handle, const float* direction) {
    return 0;
}

int APS5_VABI sceMoveTrackerCameraUpdate(const MoveTrackerCameraFrame* frames) {
    return 0;
}

int APS5_VABI sceMoveTrackerCaptureInit(void* imageMemory, std::int32_t capacity, std::int32_t interval, const char* path, std::int32_t mode) {
    return 0;
}

int APS5_VABI sceMoveTrackerCaptureTerm() {
    return 0;
}

int APS5_VABI sceMoveTrackerControllersUpdate(const MoveTrackerControllerInput* controllers) {
    return 0;
}

int APS5_VABI sceMoveTrackerGetState(std::int32_t handle, std::uint64_t timestamp, MoveTrackerState* state) {
    return 0;
}

int APS5_VABI sceMoveTrackerGetVersion() {
    return 2;
}

int APS5_VABI sceMoveTrackerGetWorkingMemorySize(std::uint32_t* totalSize, std::uint32_t* processingSize) {
    return 0;
}

int APS5_VABI sceMoveTrackerInit(void* workMemory, std::uint64_t requiredArgument, std::uint32_t pipeId, std::uint32_t queueId) {
    return 0;
}

int APS5_VABI sceMoveTrackerPlayGetImages(MoveTrackerCameraFrame* frames) {
    return 0;
}

int APS5_VABI sceMoveTrackerPlayGetStates(MoveTrackerPlaybackInfo* info, MoveTrackerState* states) {
    return 0;
}

int APS5_VABI sceMoveTrackerPlayStart() {
    return 0;
}

int APS5_VABI sceMoveTrackerPlayStep() {
    return 0;
}

int APS5_VABI sceMoveTrackerRecordSave() {
    return 0;
}

int APS5_VABI sceMoveTrackerRecordStart() {
    return 0;
}

int APS5_VABI sceMoveTrackerRecordStop() {
    return 0;
}

int APS5_VABI sceMoveTrackerTerm() {
    return 0;
}

}
