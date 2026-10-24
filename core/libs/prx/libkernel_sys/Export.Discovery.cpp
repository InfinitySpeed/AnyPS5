#include "SceTypes.hpp"
#include "prx/libkernel/File/include/File.hpp"
#include "prx/libc/include/General.hpp"
#include "prx/libkernel/KernelErrors.hpp"
#include <cstddef>

extern "C" {
int* APS5_VABI __error_nid_postfix();
int APS5_VABI pthread_barrier_init_nid_postfix(void** barrier, void* const* attr, unsigned count);
int APS5_VABI pthread_barrier_wait_nid_postfix(void** barrier);
int APS5_VABI pthread_barrier_destroy_nid_postfix(void** barrier);
int APS5_VABI pthread_barrierattr_init_nid_postfix(void** attr);
int APS5_VABI pthread_barrierattr_destroy_nid_postfix(void** attr);
int APS5_VABI pthread_barrierattr_getpshared_nid_postfix(void* const* attr, int* pshared);
int APS5_VABI pthread_barrierattr_setpshared_nid_postfix(void** attr, int pshared);
int APS5_VABI pthread_getcpuclockid_nid_postfix(void* thread, int* clockId);
int APS5_VABI pthread_getconcurrency_nid_postfix();
int APS5_VABI pthread_setconcurrency_nid_postfix(int level);
int APS5_VABI pthread_attr_getscope_nid_postfix(void* const* attr, int* scope);
int APS5_VABI pthread_attr_setscope_nid_postfix(void** attr, int scope);
int APS5_VABI pthread_atfork_nid_postfix(void (APS5_VABI* prepare)(), void (APS5_VABI* parent)(), void (APS5_VABI* child)());
int APS5_VABI msync_nid_postfix(void* address, std::size_t length, int flags);
}

namespace {

int SceResult(int error) {
    return error == 0 ? 0 : SceKernelError(error);
}

}

extern "C" {

int APS5_VABI amd64_set_fsbase_nid_postfix(void) {
    return 0;
}

int APS5_VABI blockpool_batch_nid_postfix(void) {
    return 0;
}

int APS5_VABI blockpool_map_nid_postfix(void) {
    return 0;
}

int APS5_VABI blockpool_open_nid_postfix(void) {
    return 0;
}

int APS5_VABI blockpool_unmap_nid_postfix(void) {
    return 0;
}

int APS5_VABI cpuset_nid_postfix(void) {
    return 0;
}

int APS5_VABI cpuset_getid_nid_postfix(void) {
    return 0;
}

int APS5_VABI cpuset_setid_nid_postfix(void) {
    return 0;
}

int APS5_VABI dynlib_get_obj_member_nid_postfix(void) {
    return 0;
}

int APS5_VABI futimesat_nid_postfix(int directory, const char* path, const KernelTimeval* times) {
    return PosixUtimesAt_nid_no_patch(directory, path, times);
}

int APS5_VABI get_authinfo_nid_postfix(void) {
    return 0;
}

int APS5_VABI get_module_info_list_nid_postfix(void) {
    return 0;
}

int APS5_VABI get_page_table_stats_nid_postfix(void) {
    return 0;
}

int APS5_VABI get_sdk_compiled_version_nid_postfix(void) {
    return 0;
}

int APS5_VABI get_self_auth_info_nid_postfix(void) {
    return 0;
}

int APS5_VABI get_vm_map_timestamp_nid_postfix(void) {
    return 0;
}

int APS5_VABI getfsstat_nid_postfix(void) {
    return 0;
}

int APS5_VABI ipmimgr_call_nid_postfix(void) {
    return 0;
}

int APS5_VABI is_in_sandbox_nid_postfix(void) {
    return 0;
}

int APS5_VABI kenv_nid_postfix(void) {
    return 0;
}

int APS5_VABI kldfind_nid_postfix(void) {
    return 0;
}

int APS5_VABI kldfirstmod_nid_postfix(void) {
    return 0;
}

int APS5_VABI kldload_nid_postfix(void) {
    return 0;
}

int APS5_VABI kldnext_nid_postfix(void) {
    return 0;
}

int APS5_VABI kldstat_nid_postfix(void) {
    return 0;
}

int APS5_VABI kldsym_nid_postfix(void) {
    return 0;
}

int APS5_VABI kldunload_nid_postfix(void) {
    return 0;
}

int APS5_VABI kmq_notify_nid_postfix(void) {
    return 0;
}

int APS5_VABI kmq_open_nid_postfix(void) {
    return 0;
}

int APS5_VABI kmq_setattr_nid_postfix(void) {
    return 0;
}

int APS5_VABI kmq_timedreceive_nid_postfix(void) {
    return 0;
}

int APS5_VABI kmq_timedsend_nid_postfix(void) {
    return 0;
}

int APS5_VABI kmq_unlink_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_close_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_destroy_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_getvalue_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_init_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_open_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_post_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_timedwait_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_trywait_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_unlink_nid_postfix(void) {
    return 0;
}

int APS5_VABI ksem_wait_nid_postfix(void) {
    return 0;
}

int APS5_VABI ktrace_nid_postfix(void) {
    return 0;
}

int APS5_VABI lchflags_nid_postfix(void) {
    return 0;
}

int APS5_VABI mdbg_call_nid_postfix(void) {
    return 0;
}

int APS5_VABI mdbg_service_nid_postfix(void) {
    return 0;
}

int APS5_VABI mount_nid_postfix(void) {
    return 0;
}

int APS5_VABI openintr_nid_postfix(void) {
    return 0;
}

int APS5_VABI profil_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_attr_setcreatesuspend_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_barrier_setname_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_cond_setname_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_get_specificarray_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_get_user_context_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_getstack_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_main_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_multi_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_mutex_getprioceiling_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_mutex_init_for_mono_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_mutex_setname_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_mutex_setprioceiling_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_mutexattr_getgen_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_mutexattr_setgen_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_resume_all_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_resume_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_resume_user_context_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_rwlock_setname_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_rwlockattr_settype_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_set_user_context_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_single_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_suspend_all_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_suspend_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_suspend_user_context_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_switch_add_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI pthread_switch_delete_np_nid_postfix(void) {
    return 0;
}

int APS5_VABI ptrace_nid_postfix(void) {
    return 0;
}

int APS5_VABI reboot_nid_postfix(void) {
    return 0;
}

int APS5_VABI revoke_nid_postfix(void) {
    return 0;
}

int APS5_VABI rfork_thread_nid_postfix(void) {
    return 0;
}

int APS5_VABI rtld_printf_nid_postfix(void) {
    return 0;
}

int APS5_VABI sceCoredumpDebugForceCoredumpOnAppClose(void) {
    return 0;
}

int APS5_VABI sceCoredumpDebugTriggerCoredump(void) {
    return 0;
}

int APS5_VABI sceCoredumpGetStopInfoGpu(void) {
    return 0;
}

int APS5_VABI sceCoredumpInternalGetThreadContextInfo(void) {
    return 0;
}

int APS5_VABI sceKernelAddACInfo(void) {
    return 0;
}

int APS5_VABI sceKernelAddCpumodeEvent(void) {
    return 0;
}

int APS5_VABI sceKernelAddGpuExceptionEvent(void) {
    return 0;
}

int APS5_VABI sceKernelAddProcessToCanvasMap(void) {
    return 0;
}

int APS5_VABI sceKernelAddResource(void) {
    return 0;
}

int APS5_VABI sceKernelAllocateDirectMemory2(void) {
    return 0;
}

int APS5_VABI sceKernelAllocateDirectMemoryForApp(void) {
    return 0;
}

int APS5_VABI sceKernelAllocateDirectMemoryForMiniApp(void) {
    return 0;
}

int APS5_VABI sceKernelAllocateToolMemory(void) {
    return 0;
}

int APS5_VABI sceKernelAllocateTraceDirectMemory(void) {
    return 0;
}

int APS5_VABI sceKernelAprCtrl(void) {
    return 0;
}

int APS5_VABI sceKernelAprSubmitCommandBufferAndGetResult_TEST(void) {
    return 0;
}

int APS5_VABI sceKernelAprSubmitCommandBuffer_TEST(void) {
    return 0;
}

int APS5_VABI sceKernelAvailableToolMemorySize(void) {
    return 0;
}

int APS5_VABI sceKernelBacktraceSelf(void) {
    return 0;
}

int APS5_VABI sceKernelBeginAppMount(void) {
    return 0;
}

int APS5_VABI sceKernelBeginAppMount2(void) {
    return 0;
}

int APS5_VABI sceKernelCallIndirectBuffer(void) {
    return 0;
}

int APS5_VABI sceKernelCallIndirectBuffer2(void) {
    return 0;
}

int APS5_VABI sceKernelClearBootReqNotifyCount(void) {
    return 0;
}

int APS5_VABI sceKernelClearGameDirectMemory(void) {
    return 0;
}

int APS5_VABI sceKernelCloseEport(void) {
    return 0;
}

int APS5_VABI sceKernelCloseSema(void) {
    return 0;
}

int APS5_VABI sceKernelCreateBudget(void) {
    return 0;
}

int APS5_VABI sceKernelCreateEport(void) {
    return 0;
}

int APS5_VABI sceKernelDebugAcquireAndUpdateDebugRegister(void) {
    return 0;
}

int APS5_VABI sceKernelDebugGetAppStatus(void) {
    return 0;
}

int APS5_VABI sceKernelDebugGetPauseCount(void) {
    return 0;
}

int APS5_VABI sceKernelDebugGetPrivateLogText(void) {
    return 0;
}

int APS5_VABI sceKernelDebugGetSchedLockMode(void) {
    return 0;
}

int APS5_VABI sceKernelDebugGetSdkLogText(void) {
    return 0;
}

int APS5_VABI sceKernelDebugGpuPaDebugIsInProgress(void) {
    return 0;
}

int APS5_VABI sceKernelDebugInjectProcessEvent(void) {
    return 0;
}

int APS5_VABI sceKernelDebugPackageCorrupted(void) {
    return 0;
}

int APS5_VABI sceKernelDebugRaiseExceptionWithContext(void) {
    return 0;
}

int APS5_VABI sceKernelDebugRaiseExceptionWithInfo(void) {
    return 0;
}

int APS5_VABI sceKernelDebugReleaseDebugContext(void) {
    return 0;
}

int APS5_VABI sceKernelDeleteACInfo(void) {
    return 0;
}

int APS5_VABI sceKernelDeleteBudget(void) {
    return 0;
}

int APS5_VABI sceKernelDeleteCpumodeEvent(void) {
    return 0;
}

int APS5_VABI sceKernelDeleteEport(void) {
    return 0;
}

int APS5_VABI sceKernelDeleteGpuExceptionEvent(void) {
    return 0;
}

int APS5_VABI sceKernelDeleteProcessFromCanvasMap(void) {
    return 0;
}

int APS5_VABI sceKernelDeleteSavedApp(void) {
    return 0;
}

int APS5_VABI sceKernelDirectMemoryQueryForId(void) {
    return 0;
}

int APS5_VABI sceKernelEnableDmemAliasing2(void) {
    return 0;
}

int APS5_VABI sceKernelEnablePthreadObjectCheck(void) {
    return 0;
}

int APS5_VABI sceKernelEndAppMount(void) {
    return 0;
}

int APS5_VABI sceKernelEndAppMount2(void) {
    return 0;
}

int APS5_VABI sceKernelEventLogInit(void) {
    return 0;
}

int APS5_VABI sceKernelEventLogPread(void) {
    return 0;
}

int APS5_VABI sceKernelEventLogRead(void) {
    return 0;
}

int APS5_VABI sceKernelEventLogWrite(void) {
    return 0;
}

int APS5_VABI sceKernelExpectedHddFormat(void) {
    return 0;
}

int APS5_VABI sceKernelFlock(void) {
    return 0;
}

int APS5_VABI sceKernelGetACInfoAllForCoredump(void) {
    return 0;
}

int APS5_VABI sceKernelGetAppCategoryType(void) {
    return 0;
}

int APS5_VABI sceKernelGetAppInfoByAppId(void) {
    return 0;
}

int APS5_VABI sceKernelGetAppState(void) {
    return 0;
}

int APS5_VABI sceKernelGetAslrStatus(void) {
    return 0;
}

int APS5_VABI sceKernelGetAutoUpdateVersion(void) {
    return 0;
}

int APS5_VABI sceKernelGetBackupRestoreMode(void) {
    return 0;
}

int APS5_VABI sceKernelGetBackupRestoreModeOfNextBoot(void) {
    return 0;
}

int APS5_VABI sceKernelGetBasicProductShape(void) {
    return 0;
}

int APS5_VABI sceKernelGetBetaUpdateTestForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetBioUsageAll(void) {
    return 0;
}

int APS5_VABI sceKernelGetBootReqNotifyCount(void) {
    return 0;
}

int APS5_VABI sceKernelGetBudget(void) {
    return 0;
}

int APS5_VABI sceKernelGetBuildNumber(void) {
    return 0;
}

int APS5_VABI sceKernelGetCallRecord(void) {
    return 0;
}

int APS5_VABI sceKernelGetChildApp(void) {
    return 0;
}

int APS5_VABI sceKernelGetCompiledSdkVersionByPath(void) {
    return 0;
}

int APS5_VABI sceKernelGetCompiledSdkVersionByPid(void) {
    return 0;
}

int APS5_VABI sceKernelGetCoredumpAppInfo(void) {
    return 0;
}

int APS5_VABI sceKernelGetCpuUsage(void) {
    return 0;
}

int APS5_VABI sceKernelGetCpuUsageAll(void) {
    return 0;
}

int APS5_VABI sceKernelGetCpuUsageProc(void) {
    return 0;
}

int APS5_VABI sceKernelGetCpuUsageProc2(void) {
    return 0;
}

int APS5_VABI sceKernelGetCpuUsageThread(void) {
    return 0;
}

int APS5_VABI sceKernelGetCpumodeGame(void) {
    return 0;
}

int APS5_VABI sceKernelGetCurrentFanDuty(void) {
    return 0;
}

int APS5_VABI sceKernelGetDataTransferMode(void) {
    return 0;
}

int APS5_VABI sceKernelGetDebugMenuMiniModeForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetDebugMenuModeForPsmForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetDebugMenuModeForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetDefaultToolMemorySize(void) {
    return 0;
}

int APS5_VABI sceKernelGetEmergencyErrorLog(void) {
    return 0;
}

int APS5_VABI sceKernelGetExecutableModuleHandle(void) {
    return 0;
}

int APS5_VABI sceKernelGetExtLibcHandle(void) {
    return 0;
}

int APS5_VABI sceKernelGetFakeFinalizeMenuForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetFirstImageAddr(void) {
    return 0;
}

int APS5_VABI sceKernelGetFlagedUpdaterForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetForceUpdateModeForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetGPO(void) {
    return 0;
}

int APS5_VABI sceKernelGetHwFeatureInfoForDecid(void) {
    return 0;
}

int APS5_VABI sceKernelGetHwModelName(void) {
    return 0;
}

int APS5_VABI sceKernelGetHwSerialNumber(void) {
    return 0;
}

int APS5_VABI sceKernelGetIdPs(void) {
    return 0;
}

int APS5_VABI sceKernelGetIdTableCurrentCount(void) {
    return 0;
}

int APS5_VABI sceKernelGetIoreq(void) {
    return 0;
}

int APS5_VABI sceKernelGetIpcPath(void) {
    return 0;
}

int APS5_VABI sceKernelGetKnobs(void) {
    return 0;
}

int APS5_VABI sceKernelGetKqueueFromEqueue(void) {
    return 0;
}

int APS5_VABI sceKernelGetMemoryPstate(void) {
    return 0;
}

int APS5_VABI sceKernelGetOpenPsIdForSystem(void) {
    return 0;
}

int APS5_VABI sceKernelGetPagingStatsOfAllObjects(void) {
    return 0;
}

int APS5_VABI sceKernelGetPagingStatsOfAllThreads(void) {
    return 0;
}

int APS5_VABI sceKernelGetParentApp(void) {
    return 0;
}

int APS5_VABI sceKernelGetPhysPageSize(void) {
    return 0;
}

int APS5_VABI sceKernelGetProcessName(void) {
    return 0;
}

int APS5_VABI sceKernelGetProcessTypeOfBudget(void) {
    return 0;
}

int APS5_VABI sceKernelGetProductCode(void) {
    return 0;
}

int APS5_VABI sceKernelGetProductStr(void) {
    return 0;
}

int APS5_VABI sceKernelGetPs4SystemSwVersion(void) {
    return 0;
}

int APS5_VABI sceKernelGetPsmIntdevModeForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetPsnAccessTraceLogForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetQafExpirationTimeNotafterForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetQafExpirationTimeNotbeforeForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetQafGenerationForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetQafNameForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetRenderingMode(void) {
    return 0;
}

int APS5_VABI sceKernelGetResidentCount(void) {
    return 0;
}

int APS5_VABI sceKernelGetResidentFmemCount(void) {
    return 0;
}

int APS5_VABI sceKernelGetResource(void) {
    return 0;
}

int APS5_VABI sceKernelGetResourceLimit(void) {
    return 0;
}

int APS5_VABI sceKernelGetResourceOne(void) {
    return 0;
}

int APS5_VABI sceKernelGetSafemode(void) {
    return 0;
}

int APS5_VABI sceKernelGetSanitizerMallocReplace(void) {
    return 0;
}

int APS5_VABI sceKernelGetSanitizerNewReplace(void) {
    return 0;
}

int APS5_VABI sceKernelGetSocClock(void) {
    return 0;
}

int APS5_VABI sceKernelGetSpecialIForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetSubsysId(void) {
    return 0;
}

int APS5_VABI sceKernelGetSubsysSubId(void) {
    return 0;
}

int APS5_VABI sceKernelGetSystemLevelDebuggerModeForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetSystemSwBeta(void) {
    return 0;
}

int APS5_VABI sceKernelGetThreadName(void) {
    return 0;
}

int APS5_VABI sceKernelGetUniversalMode(void) {
    return 0;
}

int APS5_VABI sceKernelGetUpdVersion(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenDataExecutionForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenExpirationTimeNotafterForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenExpirationTimeNotbeforeForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenFakeSharefactoryForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenFlagedUpdaterForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenNpEnvSwitchingForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenSaveDataRepairForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenStoreModeForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenUseSoftwagnerForAcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenUseSoftwagnerForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetUtokenWeakenedPortRestrictionForRcmgr(void) {
    return 0;
}

int APS5_VABI sceKernelGetVrCaptureSize(void) {
    return 0;
}

int APS5_VABI sceKernelGiveDirectMemoryToMapper(void) {
    return 0;
}

int APS5_VABI sceKernelHasNeoMode(void) {
    return 0;
}

int APS5_VABI sceKernelHwGetBdDriveInfo(void) {
    return 0;
}

int APS5_VABI sceKernelHwHasOpticalOut(void) {
    return 0;
}

int APS5_VABI sceKernelHwHasWlanBt(void) {
    return 0;
}

int APS5_VABI sceKernelIccControlBDPowerState(void) {
    return 0;
}

int APS5_VABI sceKernelIccControlUSBPowerState(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetBDPowerState(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetBootTimestamp(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetCPMode(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetCountTime(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetCpuInfoBit(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetErrLog(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetHwInfo(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetPowerNumberOfBootShutdown(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetPowerOperatingTime(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetPowerUpCause(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetSysEventLog(void) {
    return 0;
}

int APS5_VABI sceKernelIccGetUSBPowerState(void) {
    return 0;
}

int APS5_VABI sceKernelIccIndicatorBootDone(void) {
    return 0;
}

int APS5_VABI sceKernelIccIndicatorShutdown(void) {
    return 0;
}

int APS5_VABI sceKernelIccIndicatorStandby(void) {
    return 0;
}

int APS5_VABI sceKernelIccIndicatorStandbyBoot(void) {
    return 0;
}

int APS5_VABI sceKernelIccIndicatorStandbyShutdown(void) {
    return 0;
}

int APS5_VABI sceKernelIccNotifyBootStatus(void) {
    return 0;
}

int APS5_VABI sceKernelIccNvsFlush(void) {
    return 0;
}

int APS5_VABI sceKernelIccReadPowerBootMessage(void) {
    return 0;
}

int APS5_VABI sceKernelIccSetBuzzer(void) {
    return 0;
}

int APS5_VABI sceKernelIccSetCPMode(void) {
    return 0;
}

int APS5_VABI sceKernelIccSetCpuInfoBit(void) {
    return 0;
}

int APS5_VABI sceKernelIccSetDownloadMode(void) {
    return 0;
}

int APS5_VABI sceKernelInternalGetKmemStatistics(void) {
    return 0;
}

int APS5_VABI sceKernelInternalGetMapStatistics(void) {
    return 0;
}

int APS5_VABI sceKernelInternalHeapPrintBacktraceWithModuleInfo(void) {
    return 0;
}

int APS5_VABI sceKernelInternalMapDirectMemory(void) {
    return 0;
}

int APS5_VABI sceKernelInternalMapNamedDirectMemory(void) {
    return 0;
}

int APS5_VABI sceKernelInternalResumeDirectMemoryRelease(void) {
    return 0;
}

int APS5_VABI sceKernelInternalSuspendDirectMemoryRelease(void) {
    return 0;
}

int APS5_VABI sceKernelIsAllowedToSelectDvdRegion(void) {
    return 0;
}

int APS5_VABI sceKernelIsAuthenticNeo(void) {
    return 0;
}

int APS5_VABI sceKernelIsCEX(void) {
    return 0;
}

int APS5_VABI sceKernelIsDebuggerAttached(void) {
    return 0;
}

int APS5_VABI sceKernelIsDevKit(void) {
    return 0;
}

int APS5_VABI sceKernelIsExperimentalBeta(void) {
    return 0;
}

int APS5_VABI sceKernelIsGenuineCEX(void) {
    return 0;
}

int APS5_VABI sceKernelIsGenuineDevKit(void) {
    return 0;
}

int APS5_VABI sceKernelIsGenuineKratosCex(void) {
    return 0;
}

int APS5_VABI sceKernelIsGenuineN(void) {
    return 0;
}

int APS5_VABI sceKernelIsGenuineTestKit(void) {
    return 0;
}

int APS5_VABI sceKernelIsInSandbox(void) {
    return 0;
}

int APS5_VABI sceKernelIsKratos(void) {
    return 0;
}

int APS5_VABI sceKernelIsM2DeviceAttached(void) {
    return 0;
}

int APS5_VABI sceKernelIsMainOnStanbyMode(void) {
    return 0;
}

int APS5_VABI sceKernelIsMainOnStandbyMode(void) {
    return 0;
}

int APS5_VABI sceKernelIsModuleLoaded(void) {
    return 0;
}

int APS5_VABI sceKernelIsNeoMode(void) {
    return 0;
}

int APS5_VABI sceKernelIsProspero(void) {
    return 0;
}

int APS5_VABI sceKernelIsPs4Process(void) {
    return 0;
}

int APS5_VABI sceKernelIsTestKit(void) {
    return 0;
}

int APS5_VABI sceKernelJitGetSharedMemoryInfo(void) {
    return 0;
}

int APS5_VABI sceKernelKernelHeapUsage(void) {
    return 0;
}

int APS5_VABI sceKernelLoadStartModuleForSysmodule(void) {
    return 0;
}

int APS5_VABI sceKernelLoadStartModuleInternalForMono(void) {
    return 0;
}

int APS5_VABI sceKernelLwfsAllocateBlock(void) {
    return 0;
}

int APS5_VABI sceKernelLwfsLseek(void) {
    return 0;
}

int APS5_VABI sceKernelLwfsSetAttribute(void) {
    return 0;
}

int APS5_VABI sceKernelLwfsTrimBlock(void) {
    return 0;
}

int APS5_VABI sceKernelLwfsWrite(void) {
    return 0;
}

int APS5_VABI sceKernelMapNamedSystemFlexibleMemory(void) {
    return 0;
}

int APS5_VABI sceKernelMapSanitizerShadowMemory(void) {
    return 0;
}

int APS5_VABI sceKernelMapToolMemory(void) {
    return 0;
}

int APS5_VABI sceKernelMapTraceMemory(void) {
    return 0;
}

int APS5_VABI sceKernelMapperGetParam(void) {
    return 0;
}

int APS5_VABI sceKernelMemoryPoolMove(void) {
    return 0;
}

int APS5_VABI sceKernelMlockall(void) {
    return 0;
}

int APS5_VABI sceKernelMsync(void* address, std::size_t length, int flags) {
    return msync_nid_postfix(address, length, flags) == 0 ? 0 : SceKernelError(*__error_nid_postfix());
}

int APS5_VABI sceKernelNormalizePath(void) {
    return 0;
}

int APS5_VABI sceKernelNotifyAppEvent(void) {
    return 0;
}

int APS5_VABI sceKernelNotifyAppStateChanged(void) {
    return 0;
}

int APS5_VABI sceKernelNotifySystemSuspendResumeProgress(void) {
    return 0;
}

int APS5_VABI sceKernelNotifySystemSuspendStart(void) {
    return 0;
}

int APS5_VABI sceKernelOpenEport(void) {
    return 0;
}

int APS5_VABI sceKernelOpenInternal(void) {
    return 0;
}

int APS5_VABI sceKernelOpenSema(void) {
    return 0;
}

int APS5_VABI sceKernelPrepareDirectMemorySwap(void) {
    return 0;
}

int APS5_VABI sceKernelPrepareToResumeProcess(void) {
    return 0;
}

int APS5_VABI sceKernelPrepareToSuspendProcess(void) {
    return 0;
}

int APS5_VABI sceKernelProtectDirectMemory(void) {
    return 0;
}

int APS5_VABI sceKernelProtectDirectMemoryForPID(void) {
    return 0;
}

int APS5_VABI sceKernelQueryToolMemory(void) {
    return 0;
}

int APS5_VABI sceKernelQueryTraceMemory(void) {
    return 0;
}

int APS5_VABI sceKernelRandomizedPath(void) {
    return 0;
}

int APS5_VABI sceKernelRdup(void) {
    return 0;
}

int APS5_VABI sceKernelReboot(void) {
    return 0;
}

int APS5_VABI sceKernelReleaseToolMemory(void) {
    return 0;
}

int APS5_VABI sceKernelReleaseTraceDirectMemory(void) {
    return 0;
}

int APS5_VABI sceKernelReportUnpatchedFunctionCall(void) {
    return 0;
}

int APS5_VABI sceKernelReserve2mbPage(void) {
    return 0;
}

int APS5_VABI sceKernelReserveSystemDirectMemory(void) {
    return 0;
}

int APS5_VABI sceKernelRestoreApp(void) {
    return 0;
}

int APS5_VABI sceKernelResumeDirectMemoryRelease(void) {
    return 0;
}

int APS5_VABI sceKernelResumeProcess(void) {
    return 0;
}

int APS5_VABI sceKernelRtldControl(void) {
    return 0;
}

int APS5_VABI sceKernelSandboxPath(void) {
    return 0;
}

int APS5_VABI sceKernelSaveApp(void) {
    return 0;
}

int APS5_VABI sceKernelSetAppInfo(void) {
    return 0;
}

int APS5_VABI sceKernelSetAppState(void) {
    return 0;
}

int APS5_VABI sceKernelSetBackupRestoreMode(void) {
    return 0;
}

int APS5_VABI sceKernelSetBaseModeClock(void) {
    return 0;
}

int APS5_VABI sceKernelSetBesteffort(void) {
    return 0;
}

int APS5_VABI sceKernelSetBootReqNotify(void) {
    return 0;
}

int APS5_VABI sceKernelSetBudget(void) {
    return 0;
}

int APS5_VABI sceKernelSetCallRecord(void) {
    return 0;
}

int APS5_VABI sceKernelSetCompressionAttribute(void) {
    return 0;
}

int APS5_VABI sceKernelSetCoredumpAppInfo(void) {
    return 0;
}

int APS5_VABI sceKernelSetCpumodeGame(void) {
    return 0;
}

int APS5_VABI sceKernelSetDataTransferMode(void) {
    return 0;
}

int APS5_VABI sceKernelSetEmergencyErrorLog(void) {
    return 0;
}

int APS5_VABI sceKernelSetFsstParam(void) {
    return 0;
}

int APS5_VABI sceKernelSetGPI(void) {
    return 0;
}

int APS5_VABI sceKernelSetGameDirectMemoryLimit(void) {
    return 0;
}

int APS5_VABI sceKernelSetGpuCu(void) {
    return 0;
}

int APS5_VABI sceKernelSetIoreq(void) {
    return 0;
}

int APS5_VABI sceKernelSetKnobs(void) {
    return 0;
}

int APS5_VABI sceKernelSetMemoryPstate(void) {
    return 0;
}

int APS5_VABI sceKernelSetNeoModeClock(void) {
    return 0;
}

int APS5_VABI sceKernelSetPackageInfo(void) {
    return 0;
}

int APS5_VABI sceKernelSetPhysFmemLimit(void) {
    return 0;
}

int APS5_VABI sceKernelSetProcessName(void) {
    return 0;
}

int APS5_VABI sceKernelSetProcessProperty(void) {
    return 0;
}

int APS5_VABI sceKernelSetProcessPropertyString(void) {
    return 0;
}

int APS5_VABI sceKernelSetSafemode(void) {
    return 0;
}

int APS5_VABI sceKernelSetSafemodeDirect(void) {
    return 0;
}

int APS5_VABI sceKernelSetSuspendState(void) {
    return 0;
}

int APS5_VABI sceKernelSetTimezoneInfo(void) {
    return 0;
}

int APS5_VABI sceKernelSetUpdatemode(void) {
    return 0;
}

int APS5_VABI sceKernelSetVmContainer(void) {
    return 0;
}

int APS5_VABI sceKernelSettimeofday(void) {
    return 0;
}

int APS5_VABI sceKernelSflashGetWritePrio(void) {
    return 0;
}

int APS5_VABI sceKernelSflashSetWritePrio(void) {
    return 0;
}

int APS5_VABI sceKernelSlvNotifyError(void) {
    return 0;
}

int APS5_VABI sceKernelSpawn(void) {
    return 0;
}

int APS5_VABI sceKernelStreamWriteActivate(void) {
    return 0;
}

int APS5_VABI sceKernelStreamWriteCreate(void) {
    return 0;
}

int APS5_VABI sceKernelStreamWriteDeactivate(void) {
    return 0;
}

int APS5_VABI sceKernelStreamWriteDelete(void) {
    return 0;
}

int APS5_VABI sceKernelStreamWriteRead(void) {
    return 0;
}

int APS5_VABI sceKernelStreamWriteStat(void) {
    return 0;
}

int APS5_VABI sceKernelStreamWriteWrite(void) {
    return 0;
}

int APS5_VABI sceKernelSuspendDirectMemoryRelease(void) {
    return 0;
}

int APS5_VABI sceKernelSuspendProcess(void) {
    return 0;
}

int APS5_VABI sceKernelSuspendSystem(void) {
    return 0;
}

int APS5_VABI sceKernelSwitchToBaseMode(void) {
    return 0;
}

int APS5_VABI sceKernelSwitchToNativeMode(void) {
    return 0;
}

int APS5_VABI sceKernelSwitchToNeoMode(void) {
    return 0;
}

int APS5_VABI sceKernelTerminateProcess(void) {
    return 0;
}

int APS5_VABI sceKernelTerminateSysCore(void) {
    return 0;
}

int APS5_VABI sceKernelTitleWorkdaroundIsEnabled(void) {
    return 0;
}

int APS5_VABI sceKernelTraceMemoryTypeProtect(void) {
    return 0;
}

int APS5_VABI sceKernelTriggerEport(void) {
    return 0;
}

int APS5_VABI sceKernelVirtualQueryAll(void) {
    return 0;
}

int APS5_VABI sceKernelWaitCommandBufferCompletion(void) {
    return 0;
}

int APS5_VABI sceKernelWriteEventQueueOnCompletionCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteMapCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteMapCommand2(void) {
    return 0;
}

int APS5_VABI sceKernelWriteMapDirectCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteMapDirectWithGpuMaskIdCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteMapWithGpuMaskIdCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteModifyMtypeProtectWithGpuMaskIdCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteModifyProtectCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteModifyProtectWithGpuMaskIdCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteMultiMapCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteMultiMapWithGpuMaskIdCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteRemapCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteRemapWithGpuMaskIdCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteSdkEventLog(void) {
    return 0;
}

int APS5_VABI sceKernelWriteSdkEventLogV(void) {
    return 0;
}

int APS5_VABI sceKernelWriteUnmapCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteWaitOnAddressCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteWaitOnCounterCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteWriteAddressCommand(void) {
    return 0;
}

int APS5_VABI sceKernelWriteWriteCounterCommand(void) {
    return 0;
}

int APS5_VABI sceKernelYieldCpumode(void) {
    return 0;
}

int APS5_VABI sceLibcMspaceCreateForMonoMutex(void) {
    return 0;
}

int APS5_VABI scePthreadAtfork(void (APS5_VABI* prepare)(), void (APS5_VABI* parent)(), void (APS5_VABI* child)()) {
    return SceResult(pthread_atfork_nid_postfix(prepare, parent, child));
}

int APS5_VABI scePthreadAttrGetscope(void* const* attr, int* scope) {
    return SceResult(pthread_attr_getscope_nid_postfix(attr, scope));
}

int APS5_VABI scePthreadAttrSetcreatesuspend(void) {
    return 0;
}

int APS5_VABI scePthreadAttrSetscope(void** attr, int scope) {
    return SceResult(pthread_attr_setscope_nid_postfix(attr, scope));
}

int APS5_VABI scePthreadBarrierDestroy(void** barrier) {
    return SceResult(pthread_barrier_destroy_nid_postfix(barrier));
}

int APS5_VABI scePthreadBarrierInit(void** barrier, void* const* attr, unsigned count, const char* name) {
    (void)name;
    return SceResult(pthread_barrier_init_nid_postfix(barrier, attr, count));
}

int APS5_VABI scePthreadBarrierWait(void** barrier) {
    const int result = pthread_barrier_wait_nid_postfix(barrier);
    return result > 0 ? SceKernelError(result) : result;
}

int APS5_VABI scePthreadBarrierattrDestroy(void** attr) {
    return SceResult(pthread_barrierattr_destroy_nid_postfix(attr));
}

int APS5_VABI scePthreadBarrierattrGetpshared(void* const* attr, int* pshared) {
    return SceResult(pthread_barrierattr_getpshared_nid_postfix(attr, pshared));
}

int APS5_VABI scePthreadBarrierattrInit(void** attr) {
    return SceResult(pthread_barrierattr_init_nid_postfix(attr));
}

int APS5_VABI scePthreadBarrierattrSetpshared(void** attr, int pshared) {
    return SceResult(pthread_barrierattr_setpshared_nid_postfix(attr, pshared));
}

int APS5_VABI scePthreadGetconcurrency(void) {
    return pthread_getconcurrency_nid_postfix();
}

int APS5_VABI scePthreadGetcpuclockid(void* thread, int* clockId) {
    return SceResult(pthread_getcpuclockid_nid_postfix(thread, clockId));
}

int APS5_VABI scePthreadMain(void) {
    return 0;
}

int APS5_VABI scePthreadMulti(void) {
    return 0;
}

int APS5_VABI scePthreadMutexGetprioceiling(void) {
    return 0;
}

int APS5_VABI scePthreadMutexInitForInternalLibc(void) {
    return 0;
}

int APS5_VABI scePthreadMutexIsowned(void) {
    return 0;
}

int APS5_VABI scePthreadMutexSetprioceiling(void) {
    return 0;
}

int APS5_VABI scePthreadMutexattrGetgen(void) {
    return 0;
}

int APS5_VABI scePthreadMutexattrGetkind(void) {
    return 0;
}

int APS5_VABI scePthreadMutexattrInitForInternalLibc(void) {
    return 0;
}

int APS5_VABI scePthreadMutexattrSetgen(void) {
    return 0;
}

int APS5_VABI scePthreadMutexattrSetkind(void) {
    return 0;
}

int APS5_VABI scePthreadResume(void) {
    return 0;
}

int APS5_VABI scePthreadResumeAll(void) {
    return 0;
}

int APS5_VABI scePthreadSetBesteffort(void) {
    return 0;
}

int APS5_VABI scePthreadSetconcurrency(int level) {
    return SceResult(pthread_setconcurrency_nid_postfix(level));
}

int APS5_VABI scePthreadSingle(void) {
    return 0;
}

int APS5_VABI scePthreadSuspend(void) {
    return 0;
}

int APS5_VABI scePthreadSuspendAll(void) {
    return 0;
}

int APS5_VABI scePthreadTimedjoin(void) {
    return 0;
}

int APS5_VABI sched_getparam_nid_postfix(void) {
    return 0;
}

int APS5_VABI sched_getscheduler_nid_postfix(void) {
    return 0;
}

int APS5_VABI sched_setparam_nid_postfix(void) {
    return 0;
}

int APS5_VABI sched_setscheduler_nid_postfix(void) {
    return 0;
}

int APS5_VABI sem_setname_nid_postfix(void) {
    return 0;
}

int APS5_VABI set_phys_fmem_limit_nid_postfix(void) {
    return 0;
}

int APS5_VABI setlogin_nid_postfix(void) {
    return 0;
}

int APS5_VABI settimeofday_nid_postfix(void) {
    return 0;
}

int APS5_VABI sigqueue_nid_postfix(void) {
    return 0;
}

int APS5_VABI sigreturn_nid_postfix(void) {
    return 0;
}

int APS5_VABI statfs_nid_postfix(const char* path, KernelStatfs* result) {
    return PosixStatfs_nid_no_patch(path, result);
}

int APS5_VABI swapcontext_nid_postfix(void) {
    return 0;
}

int APS5_VABI swapon_nid_postfix(void) {
    return 0;
}

int APS5_VABI sysKernelGetIntdevModeForInternalLibc_nid_postfix(void) {
    return 0;
}

int APS5_VABI sysKernelGetIntdevModeForRcmgr_nid_postfix(void) {
    return 0;
}

int APS5_VABI sysKernelGetManufacturingMode_nid_postfix(void) {
    return 0;
}

int APS5_VABI sysKernelGetUpdVersion_nid_postfix(void) {
    return 0;
}

int APS5_VABI sysc_e00_nid_postfix(void) {
    return 0;
}

int APS5_VABI sysc_m00_nid_postfix(void) {
    return 0;
}

int APS5_VABI sysc_s00_nid_postfix(void) {
    return 0;
}

int APS5_VABI tcgetsid_nid_postfix(void) {
    return 0;
}

int APS5_VABI tcsetsid_nid_postfix(void) {
    return 0;
}

int APS5_VABI unmount_nid_postfix(void) {
    return 0;
}

int APS5_VABI utrace_nid_postfix(void) {
    return 0;
}

int APS5_VABI vfork_nid_postfix(void) {
    return 0;
}

int APS5_VABI wait3_nid_postfix(void) {
    return 0;
}

int APS5_VABI wait4_nid_postfix(void) {
    return 0;
}

}
