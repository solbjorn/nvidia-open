#define NVOC_SUBDEVICE_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_subdevice_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0x4b01b3 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Subdevice;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_GpuResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_INotifier;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Notifier;

void __nvoc_init_Subdevice(Subdevice*, RmHalspecOwner* );
void __nvoc_init_funcTable_Subdevice(Subdevice*, RmHalspecOwner* );
NV_STATUS __nvoc_ctor_Subdevice(Subdevice*, RmHalspecOwner* , struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams);
void __nvoc_init_dataField_Subdevice(Subdevice*, RmHalspecOwner* );
void __nvoc_dtor_Subdevice(Subdevice*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_Subdevice;

#define __NVOC_CB_TYPE Subdevice
NVOC_BUILD_CTOR_DTOR(__nvoc_objCreateDynamic_Subdevice, __nvoc_dtor_Subdevice);

static const struct NVOC_RTTI __nvoc_rtti_Subdevice_Subdevice = {
    /*pClassDef=*/          &__nvoc_class_def_Subdevice,
    /*dtor=*/               __nvoc_dtor_Subdevice_dtor,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_Subdevice_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_Subdevice_RsResource = {
    /*pClassDef=*/          &__nvoc_class_def_RsResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource),
};

static const struct NVOC_RTTI __nvoc_rtti_Subdevice_RmResourceCommon = {
    /*pClassDef=*/          &__nvoc_class_def_RmResourceCommon,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
};

static const struct NVOC_RTTI __nvoc_rtti_Subdevice_RmResource = {
    /*pClassDef=*/          &__nvoc_class_def_RmResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource.__nvoc_base_RmResource),
};

static const struct NVOC_RTTI __nvoc_rtti_Subdevice_GpuResource = {
    /*pClassDef=*/          &__nvoc_class_def_GpuResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Subdevice, __nvoc_base_GpuResource),
};

static const struct NVOC_RTTI __nvoc_rtti_Subdevice_INotifier = {
    /*pClassDef=*/          &__nvoc_class_def_INotifier,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Subdevice, __nvoc_base_Notifier.__nvoc_base_INotifier),
};

static const struct NVOC_RTTI __nvoc_rtti_Subdevice_Notifier = {
    /*pClassDef=*/          &__nvoc_class_def_Notifier,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Subdevice, __nvoc_base_Notifier),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_Subdevice = {
    /*numRelatives=*/       8,
    /*relatives=*/ {
        &__nvoc_rtti_Subdevice_Subdevice,
        &__nvoc_rtti_Subdevice_Notifier,
        &__nvoc_rtti_Subdevice_INotifier,
        &__nvoc_rtti_Subdevice_GpuResource,
        &__nvoc_rtti_Subdevice_RmResource,
        &__nvoc_rtti_Subdevice_RmResourceCommon,
        &__nvoc_rtti_Subdevice_RsResource,
        &__nvoc_rtti_Subdevice_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_Subdevice =
{
    /*classInfo=*/ {
        /*size=*/               sizeof(Subdevice),
        /*classId=*/            classId(Subdevice),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "Subdevice",
#endif
    },
    /*objCreatefn=*/        __nvoc_objCreateDynamic_Subdevice_ctor,
    /*pCastInfo=*/          &__nvoc_castinfo_Subdevice,
    /*pExportInfo=*/        &__nvoc_export_info_Subdevice
};

static void __nvoc_thunk_Subdevice_resPreDestruct(struct RsResource *pResource) {
    subdevicePreDestruct((struct Subdevice *)(((unsigned char *)pResource) - __nvoc_rtti_Subdevice_RsResource.offset));
}

static NV_STATUS __nvoc_thunk_Subdevice_gpuresInternalControlForward(struct GpuResource *pSubdevice, NvU32 command, void *pParams, NvU32 size) {
    return subdeviceInternalControlForward((struct Subdevice *)(((unsigned char *)pSubdevice) - __nvoc_rtti_Subdevice_GpuResource.offset), command, pParams, size);
}

static NV_STATUS __nvoc_thunk_Subdevice_resControlFilter(struct RsResource *pSubdevice, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return subdeviceControlFilter((struct Subdevice *)(((unsigned char *)pSubdevice) - __nvoc_rtti_Subdevice_RsResource.offset), pCallContext, pParams);
}

static NvBool __nvoc_thunk_GpuResource_subdeviceShareCallback(struct Subdevice *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return gpuresShareCallback((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Subdevice_GpuResource.offset), pInvokingClient, pParentRef, pSharePolicy);
}

static NV_STATUS __nvoc_thunk_RsResource_subdeviceMapTo(struct Subdevice *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Subdevice_RsResource.offset), pParams);
}

static NV_STATUS __nvoc_thunk_Notifier_subdeviceGetOrAllocNotifShare(struct Subdevice *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare) {
    return notifyGetOrAllocNotifShare((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_Subdevice_Notifier.offset), hNotifierClient, hNotifierResource, ppNotifShare);
}

static NV_STATUS __nvoc_thunk_RmResource_subdeviceCheckMemInterUnmap(struct Subdevice *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *)pRmResource) + __nvoc_rtti_Subdevice_RmResource.offset), bSubdeviceHandleProvided);
}

static NV_STATUS __nvoc_thunk_GpuResource_subdeviceGetMapAddrSpace(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace) {
    return gpuresGetMapAddrSpace((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Subdevice_GpuResource.offset), pCallContext, mapFlags, pAddrSpace);
}

static void __nvoc_thunk_Notifier_subdeviceSetNotificationShare(struct Subdevice *pNotifier, struct NotifShare *pNotifShare) {
    notifySetNotificationShare((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_Subdevice_Notifier.offset), pNotifShare);
}

static NvU32 __nvoc_thunk_RsResource_subdeviceGetRefCount(struct Subdevice *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Subdevice_RsResource.offset));
}

static void __nvoc_thunk_RsResource_subdeviceAddAdditionalDependants(struct RsClient *pClient, struct Subdevice *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Subdevice_RsResource.offset), pReference);
}

static NV_STATUS __nvoc_thunk_RmResource_subdeviceControl_Prologue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControl_Prologue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_Subdevice_RmResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_GpuResource_subdeviceGetRegBaseOffsetAndSize(struct Subdevice *pGpuResource, struct OBJGPU *pGpu, NvU32 *pOffset, NvU32 *pSize) {
    return gpuresGetRegBaseOffsetAndSize((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Subdevice_GpuResource.offset), pGpu, pOffset, pSize);
}

static NV_STATUS __nvoc_thunk_RsResource_subdeviceUnmapFrom(struct Subdevice *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Subdevice_RsResource.offset), pParams);
}

static void __nvoc_thunk_RmResource_subdeviceControl_Epilogue(struct Subdevice *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControl_Epilogue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_Subdevice_RmResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_RsResource_subdeviceControlLookup(struct Subdevice *pResource, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams, const struct NVOC_EXPORTED_METHOD_DEF **ppEntry) {
    return resControlLookup((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Subdevice_RsResource.offset), pParams, ppEntry);
}

static NvHandle __nvoc_thunk_GpuResource_subdeviceGetInternalObjectHandle(struct Subdevice *pGpuResource) {
    return gpuresGetInternalObjectHandle((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Subdevice_GpuResource.offset));
}

static NV_STATUS __nvoc_thunk_GpuResource_subdeviceControl(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return gpuresControl((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Subdevice_GpuResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_GpuResource_subdeviceUnmap(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping) {
    return gpuresUnmap((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Subdevice_GpuResource.offset), pCallContext, pCpuMapping);
}

static NV_STATUS __nvoc_thunk_RmResource_subdeviceGetMemInterMapParams(struct Subdevice *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *)pRmResource) + __nvoc_rtti_Subdevice_RmResource.offset), pParams);
}

static NV_STATUS __nvoc_thunk_RmResource_subdeviceGetMemoryMappingDescriptor(struct Subdevice *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *)pRmResource) + __nvoc_rtti_Subdevice_RmResource.offset), ppMemDesc);
}

static NV_STATUS __nvoc_thunk_Notifier_subdeviceUnregisterEvent(struct Subdevice *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent) {
    return notifyUnregisterEvent((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_Subdevice_Notifier.offset), hNotifierClient, hNotifierResource, hEventClient, hEvent);
}

static NvBool __nvoc_thunk_RsResource_subdeviceCanCopy(struct Subdevice *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Subdevice_RsResource.offset));
}

static PEVENTNOTIFICATION *__nvoc_thunk_Notifier_subdeviceGetNotificationListPtr(struct Subdevice *pNotifier) {
    return notifyGetNotificationListPtr((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_Subdevice_Notifier.offset));
}

static struct NotifShare *__nvoc_thunk_Notifier_subdeviceGetNotificationShare(struct Subdevice *pNotifier) {
    return notifyGetNotificationShare((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_Subdevice_Notifier.offset));
}

static NV_STATUS __nvoc_thunk_GpuResource_subdeviceMap(struct Subdevice *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping) {
    return gpuresMap((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Subdevice_GpuResource.offset), pCallContext, pParams, pCpuMapping);
}

static NvBool __nvoc_thunk_RmResource_subdeviceAccessCallback(struct Subdevice *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_Subdevice_RmResource.offset), pInvokingClient, pAllocParams, accessRight);
}

NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetInfoV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetNameString_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetShortNameString_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetPower_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetSdm_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetSimulationInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetSdm_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuExecRegOps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetEngines_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetEngineClasslist_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetEngineFaultInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuQueryMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuPromoteCtx_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuEvictCtx_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuInitializeCtx_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuQueryEccStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetComputeModeRules_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuQueryComputeModeRules_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuQueryEccConfiguration_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetEccConfiguration_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuResetEccErrorStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetFermiGpcInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetFermiTpcInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetFermiZcullInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetOEMBoardInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetId_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdGpuAcquireComputeModeReservation_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdGpuReleaseComputeModeReservation_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetEnginePartnerList_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetGidInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetInforomObjectVersion_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetOptimusInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetIpVersion_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuQueryIllumSupport_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetIllum_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetIllum_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetInforomImageVersion_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdGpuQueryInforomEccSupport_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetPhysicalBridgeVersionInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetAllBridgesUpstreamOfGpu_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuQueryScrubberStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetVprCaps_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdGpuHandleGpuSR_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetPesInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetOEMInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetVprInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetEncoderCapacity_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetNvencSwSessionStats_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetNvencSwSessionInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetFabricAddr_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetEnginesV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuQueryFunctionStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetPartitions_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetPartitions_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuReportNonReplayableFault_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetEngineRunlistPriBase_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetHwEngineId_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetNvfbcSwSessionStats_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetNvfbcSwSessionInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetPartitionCapacity_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetCachedInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetPartitioningMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuDescribePartitions_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetMaxSupportedPageSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetActivePartitionIds_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetPids_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetPidInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuSetComputePolicyConfig_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetComputePolicyConfig_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdValidateMemMapRequest_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetEngineLoadTimes_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGpuGetComputeProfiles_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdEventSetNotification_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdEventSetTrigger_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdEventSetMemoryNotifies_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdEventSetSemaphoreMemory_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdEventSetSemaMemValidation_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdEventSetTriggerFifo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdTimerSchedule_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdTimerCancel_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdTimerGetTime_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdTimerGetRegisterOffset_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdTimerGetGpuCpuTimeCorrelationInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdTimerSetGrTickFreq_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdI2cReadBuffer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdI2cWriteBuffer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdI2cReadReg_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdI2cWriteReg_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBiosGetSKUInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBiosGetPostTime_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBiosGetUefiSupport_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBiosGetInfoV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdDisplayGetStaticInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMemSysGetStaticConfig_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalUvmRegisterAccessCntrBuffer_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalUvmUnregisterAccessCntrBuffer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetCaps_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalUvmServiceAccessCntrBuffer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetGlobalSmOrder_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMsencGetCaps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetFloorsweepingMasks_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetCtxBufferPtes_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalUvmGetAccessCntrBufferSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetZcullInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetRopInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetPpcMasks_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetContextBuffersInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifier_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalGetChipInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetFecsRecordSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetFecsTraceDefines_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalGetDeviceInfoTable_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalGetUserRegisterAccessMap_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalGetConstructedFalconInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrInternalStaticGetPdbProperties_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdDisplayWriteInstMem_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalRecoverAllComputeContexts_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdDisplayGetIpVersion_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalGetSmcMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdDisplaySetupRgLineIntr_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMemSysSetPartitionableMem_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalFifoPromoteRunlistBuffers_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdDisplaySetImportedImpData_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalBusBindLocalGfidForP2p_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalBusBindRemoteGfidForP2p_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdDisplaySetChannelPushbuffer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGmmuGetStaticInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetHeapReservationSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdIntrGetKernelTable_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdDisplayGetDisplayMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalFifoGetNumChannels_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalStaticKMIGmgrGetProfiles_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalStaticKMIGmgrGetPartitionableEngines_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalStaticKMIGmgrGetSwizzIdFbMemPageRanges_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKMemSysGetMIGMemoryConfig_133e5e);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbSetZbcReferenced_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalRcWatchdogTimeout_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMemSysL2InvalidateEvict_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdMemSysFlushL2AllRamsAndCaches_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdMemSysDisableNvlinkPeers_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMemSysProgramRawCompressionMode_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalBusFlushWithSysmembar_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalBusSetupP2pMailboxLocal_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalBusSetupP2pMailboxRemote_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalBusDestroyP2pMailbox_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalBusCreateC2cPeerMapping_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalBusRemoveC2cPeerMapping_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalPerfCudaLimitDisable_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalPerfOptpCliClear_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalPerfGpuBoostSyncSetControl_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalPerfSyncGpuBoostSetLimits_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalPerfGpuBoostSyncGetInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdHshubPeerConnConfig_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdHshubFirstLinkPeerId_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdHshubGetHshubIdForLinks_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdHshubGetNumUnits_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdHshubNextHshubId_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalPerfPerfmonClientReservationCheck_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalPerfPerfmonClientReservationSet_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalPerfBoostSet_2x_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalGmmuRegisterFaultBuffer_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalGmmuUnregisterFaultBuffer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalGmmuRegisterClientShadowFaultBuffer_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalGmmuUnregisterClientShadowFaultBuffer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalPerfBoostSet_3x_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalPerfBoostClear_3x_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalKMIGmgrExportGPUInstance_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalKMIGmgrImportGPUInstance_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBifGetStaticInfo_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdInternalNvlinkEnableComputePeerAddr_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalNvlinkGetSetNvswitchFabricAddr_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBifGetAspmL1Flags_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalPerfCfControllerSetMaxVGpuVMCount_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCcuMap_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdCcuUnmap_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalGetPcieP2pCaps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBifSetPcieRo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalStaticKMIGmgrGetComputeInstanceProfiles_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalNvlinkGetNumActiveLinksPerIoctrl_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalNvlinkGetTotalNumLinksPerIoctrl_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdInternalGetCoherentFbApertureSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdSetGpfifo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoBindEngines_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdSetOperationalProperties_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGetPhysicalChannelCount_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoGetInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoDisableChannels_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoGetChannelMemInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoGetUserdLocation_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoGetDeviceInfoTable_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoClearFaultedBit_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoRunlistSetSchedPolicy_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoUpdateChannelInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFifoDisableUsermodeChannels_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrCtxswZcullMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetZcullInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrCtxswPmMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrCtxswZcullBind_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrCtxswPmBind_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrSetGpcTileMap_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrCtxswSmpcMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetSmToGpcTpcMappings_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrSetCtxswPreemptionMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrCtxswPreemptionBind_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrPcSamplingMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetROPInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetCtxswStats_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetCtxBufferSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetCtxBufferInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetGlobalSmOrder_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetCurrentResidentChannel_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetVatAlarmData_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetAttributeBufferSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGfxPoolQuerySize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGfxPoolInitialize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGfxPoolAddSlots_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGfxPoolRemoveSlots_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetCapsV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetInfoV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetGpcMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetTpcMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrSetTpcPartitionMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetEngineContextProperties_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetSmIssueRateModifier_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrFecsBindEvtbufForUid_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetPhysGpcMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetPpcMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetNumTpcsForGpc_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetCtxswModes_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetGpcTileMap_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetZcullMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrFecsBindEvtbufForUidV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKGrGetGfxGpcAndTpcInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetInfoV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetCarveoutAddressInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetCalibrationLockFailed_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbFlushGpuCache_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbSetGpuCacheAllocPolicy_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetBar1Offset_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetGpuCacheAllocPolicy_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbIsKind_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetGpuCacheInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbSetGpuCacheAllocPolicyV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetGpuCacheAllocPolicyV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetFBRegionInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetOfflinedPages_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetLTCInfoForFBP_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbCBCOp_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetCtagsForCbcEviction_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbSetupVprRegion_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetCliManagedOfflinedPages_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetCompBitCopyConstructInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbSetRrd_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbSetReadLimit_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbSetWriteLimit_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbPatchPbrForMining_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetMemAlignment_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetRemappedRows_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetFsInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetRowRemapperHistogram_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetDynamicOfflinedPages_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbUpdateNumaStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFbGetNumaInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMcGetArchInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMcServiceInterrupts_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMcGetManufacturer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMcQueryHostclkSlowdownStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMcSetHostclkSlowdownStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdMcChangeReplayableFaultOwnership_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetPciInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetPciBarInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusSetPcieLinkWidth_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusSetPcieSpeed_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusSetHwbcUpstreamPcieSpeed_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetHwbcUpstreamPcieSpeed_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusHWBCGetUpstreamBAR0_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusServiceGpuMultifunctionState_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetPexCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusClearPexCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusFreezePexCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetPexLaneCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetPcieLtrLatency_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusSetPcieLtrLatency_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetPexUtilCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusClearPexUtilCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetBFD_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetAspmDisableFlags_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetInfoV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusControlPublicAspmBits_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetNvlinkPeerIdMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusSetEomParameters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetUphyDlnCfgSpace_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetEomStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetPcieReqAtomicsCaps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetC2CInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusSysmemAccess_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetC2CErrorInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdKPerfBoost_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdPerfRatedTdpGetControl_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdPerfRatedTdpSetControl_a2e9a2);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdPerfReservePerfmonHw_3f0664);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdRcReadVirtualMem_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdRcGetErrorCount_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdRcSetCleanErrorHistory_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdRcGetWatchdogInfo_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdRcDisableWatchdog_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdRcEnableWatchdog_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdRcReleaseWatchdogRequests_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdSetRcRecovery_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGetRcRecovery_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdRcSoftDisableWatchdog_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdSetRcInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGetRcInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdRcGetErrorV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvdGetDumpSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvdGetDump_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvdGetNocatJournalRpt_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvdSetNocatJournalData_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdDmaInvalidateTLB_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdDmaGetInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeGetCaps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeGetCePceMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeGetCapsV2_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeUpdatePceLceMappings_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeUpdateClassDB_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeGetPhysicalCaps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeGetFaultMethodBufferSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeGetHubPceMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeGetAllCaps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdCeGetAllPhysicalCaps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetNvlinkCaps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdBusGetNvlinkStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGetNvlinkCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdClearNvlinkCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetLinkFatalErrorCounts_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkSetupEom_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetPowerState_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkReadTpCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkEnableNvlinkPeer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetLpCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkCoreCallback_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetAliEnabled_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkUpdateRemoteLocalSid_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkUpdateHshubMux_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkPreSetupNvlinkPeer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkPostSetupNvlinkPeer_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkRemoveNvlinkMapping_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkSaveRestoreHshubState_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkProgramBufferready_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkUpdateCurrentConfig_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkSetLoopbackMode_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkUpdatePeerLinkMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkUpdateLinkConnection_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkEnableLinksPostTopology_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkPreLinkTrainAli_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetRefreshCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkClearRefreshCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetLinkMaskPostRxDet_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkLinkTrainAli_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetNvlinkDeviceInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetIoctrlDeviceInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkProgramLinkSpeed_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkAreLinksTrained_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkResetLinks_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkDisableDlInterrupts_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetLinkAndClockInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkSetupNvlinkSysmem_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkProcessForcedConfigs_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkSyncLaneShutdownProps_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkEnableSysmemNvlinkAts_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkHshubGetSysmemNvlinkMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkGetSetNvswitchFlaAddr_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkSyncLinkMasksAndVbiosInfo_IMPL);
NVOC_BUILD_CALLBACK_1(subdeviceCtrlCmdNvlinkEnableLinks_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkProcessInitDisabledLinks_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdNvlinkEomControl_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlcnGetDmemUsage_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlcnGetEngineArch_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlcnUstreamerQueueInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlcnUstreamerControlGet_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlcnUstreamerControlSet_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlcnGetCtxBufferInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlcnGetCtxBufferSize_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdEccGetClientExposedCounters_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlaRange_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlaSetupInstanceMemBlock_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlaGetRange_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdFlaGetFabricMemStats_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGspGetFeatures_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGrmgrGetGrFsInfo_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdOsUnixGc6BlockerRefCnt_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdOsUnixAllowDisallowGcoff_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdOsUnixAudioDynamicPower_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdOsUnixVidmemPersistenceStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdOsUnixUpdateTgpStatus_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdGetAvailableHshubMask_IMPL);
NVOC_BUILD_CALLBACK(subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamples_IMPL);

#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_Subdevice[] =
{
    {               /*  [0] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetInfoV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800102u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetInfoV2"
#endif
    },
    {               /*  [1] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetNameString_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa10u)
        /*flags=*/      0xa10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800110u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_NAME_STRING_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetNameString"
#endif
    },
    {               /*  [2] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4a10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetShortNameString_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4a10u)
        /*flags=*/      0x4a10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800111u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_SHORT_NAME_STRING_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetShortNameString"
#endif
    },
    {               /*  [3] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetPower_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800112u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_SET_POWER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetPower"
#endif
    },
    {               /*  [4] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetSdm_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800118u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_SDM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetSdm"
#endif
    },
    {               /*  [5] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetSimulationInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800119u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_SIMULATION_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetSimulationInfo"
#endif
    },
    {               /*  [6] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetSdm_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
        /*flags=*/      0x5u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800120u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_SET_SDM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetSdm"
#endif
    },
    {               /*  [7] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuExecRegOps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800122u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_EXEC_REG_OPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuExecRegOps"
#endif
    },
    {               /*  [8] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetEngines_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800123u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ENGINES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetEngines"
#endif
    },
    {               /*  [9] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetEngineClasslist_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800124u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ENGINE_CLASSLIST_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetEngineClasslist"
#endif
    },
    {               /*  [10] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetEngineFaultInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800125u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ENGINE_FAULT_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetEngineFaultInfo"
#endif
    },
    {               /*  [11] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuQueryMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800128u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_QUERY_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuQueryMode"
#endif
    },
    {               /*  [12] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuPromoteCtx_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*flags=*/      0x2204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080012bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_PROMOTE_CTX_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuPromoteCtx"
#endif
    },
    {               /*  [13] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuEvictCtx_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*flags=*/      0x2200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080012cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_EVICT_CTX_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuEvictCtx"
#endif
    },
    {               /*  [14] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuInitializeCtx_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*flags=*/      0x2204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080012du,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_INITIALIZE_CTX_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuInitializeCtx"
#endif
    },
    {               /*  [15] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuQueryEccStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
        /*flags=*/      0xa50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080012fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_QUERY_ECC_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuQueryEccStatus"
#endif
    },
    {               /*  [16] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x844u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetComputeModeRules_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x844u)
        /*flags=*/      0x844u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800130u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_SET_COMPUTE_MODE_RULES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetComputeModeRules"
#endif
    },
    {               /*  [17] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuQueryComputeModeRules_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800131u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_QUERY_COMPUTE_MODE_RULES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuQueryComputeModeRules"
#endif
    },
    {               /*  [18] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuQueryEccConfiguration_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800133u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_QUERY_ECC_CONFIGURATION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuQueryEccConfiguration"
#endif
    },
    {               /*  [19] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetEccConfiguration_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800134u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_SET_ECC_CONFIGURATION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetEccConfiguration"
#endif
    },
    {               /*  [20] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuResetEccErrorStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800136u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_RESET_ECC_ERROR_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuResetEccErrorStatus"
#endif
    },
    {               /*  [21] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetFermiGpcInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800137u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_FERMI_GPC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetFermiGpcInfo"
#endif
    },
    {               /*  [22] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetFermiTpcInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800138u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_FERMI_TPC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetFermiTpcInfo"
#endif
    },
    {               /*  [23] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetFermiZcullInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800139u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_FERMI_ZCULL_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetFermiZcullInfo"
#endif
    },
    {               /*  [24] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetOEMBoardInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4210u)
        /*flags=*/      0x4210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080013fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_OEM_BOARD_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetOEMBoardInfo"
#endif
    },
    {               /*  [25] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetId_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*flags=*/      0x812u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800142u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetId"
#endif
    },
    {               /*  [26] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuAcquireComputeModeReservation_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800145u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuAcquireComputeModeReservation"
#endif
    },
    {               /*  [27] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuReleaseComputeModeReservation_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800146u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuReleaseComputeModeReservation"
#endif
    },
    {               /*  [28] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetEnginePartnerList_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800147u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ENGINE_PARTNERLIST_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetEnginePartnerList"
#endif
    },
    {               /*  [29] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetGidInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
        /*flags=*/      0xa50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080014au,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_GID_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetGidInfo"
#endif
    },
    {               /*  [30] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetInforomObjectVersion_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080014bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_INFOROM_OBJECT_VERSION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetInforomObjectVersion"
#endif
    },
    {               /*  [31] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetOptimusInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080014cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_OPTIMUS_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetOptimusInfo"
#endif
    },
    {               /*  [32] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetIpVersion_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080014du,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_IP_VERSION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetIpVersion"
#endif
    },
    {               /*  [33] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuQueryIllumSupport_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800153u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_GPU_QUERY_ILLUM_SUPPORT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuQueryIllumSupport"
#endif
    },
    {               /*  [34] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetIllum_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800154u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_GPU_ILLUM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetIllum"
#endif
    },
    {               /*  [35] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetIllum_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800155u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_GPU_ILLUM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetIllum"
#endif
    },
    {               /*  [36] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetInforomImageVersion_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4210u)
        /*flags=*/      0x4210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800156u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_INFOROM_IMAGE_VERSION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetInforomImageVersion"
#endif
    },
    {               /*  [37] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuQueryInforomEccSupport_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800157u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuQueryInforomEccSupport"
#endif
    },
    {               /*  [38] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetPhysicalBridgeVersionInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080015au,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_PHYSICAL_BRIDGE_VERSION_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetPhysicalBridgeVersionInfo"
#endif
    },
    {               /*  [39] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetAllBridgesUpstreamOfGpu_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080015bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ALL_BRIDGES_UPSTREAM_OF_GPU_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetAllBridgesUpstreamOfGpu"
#endif
    },
    {               /*  [40] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuQueryScrubberStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080015fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_QUERY_SCRUBBER_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuQueryScrubberStatus"
#endif
    },
    {               /*  [41] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetVprCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800160u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_VPR_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetVprCaps"
#endif
    },
    {               /*  [42] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuHandleGpuSR_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*flags=*/      0x13u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800167u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuHandleGpuSR"
#endif
    },
    {               /*  [43] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetPesInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800168u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_PES_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetPesInfo"
#endif
    },
    {               /*  [44] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetOEMInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4210u)
        /*flags=*/      0x4210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800169u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_OEM_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetOEMInfo"
#endif
    },
    {               /*  [45] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetVprInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080016bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_VPR_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetVprInfo"
#endif
    },
    {               /*  [46] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetEncoderCapacity_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080016cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ENCODER_CAPACITY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetEncoderCapacity"
#endif
    },
    {               /*  [47] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetNvencSwSessionStats_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080016du,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_NVENC_SW_SESSION_STATS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetNvencSwSessionStats"
#endif
    },
    {               /*  [48] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetNvencSwSessionInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080016eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_NVENC_SW_SESSION_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetNvencSwSessionInfo"
#endif
    },
    {               /*  [49] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetFabricAddr_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080016fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_SET_FABRIC_BASE_ADDR_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetFabricAddr"
#endif
    },
    {               /*  [50] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetEnginesV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800170u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ENGINES_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetEnginesV2"
#endif
    },
    {               /*  [51] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuQueryFunctionStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800173u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_GPU_QUERY_FUNCTION_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuQueryFunctionStatus"
#endif
    },
    {               /*  [52] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetPartitions_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800174u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_SET_PARTITIONS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetPartitions"
#endif
    },
    {               /*  [53] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetPartitions_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800175u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_PARTITIONS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetPartitions"
#endif
    },
    {               /*  [54] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuReportNonReplayableFault_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800177u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_REPORT_NON_REPLAYABLE_FAULT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuReportNonReplayableFault"
#endif
    },
    {               /*  [55] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetEngineRunlistPriBase_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800179u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ENGINE_RUNLIST_PRI_BASE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetEngineRunlistPriBase"
#endif
    },
    {               /*  [56] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetHwEngineId_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080017au,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_HW_ENGINE_ID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetHwEngineId"
#endif
    },
    {               /*  [57] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetNvfbcSwSessionStats_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080017bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_NVFBC_SW_SESSION_STATS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetNvfbcSwSessionStats"
#endif
    },
    {               /*  [58] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetNvfbcSwSessionInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080017cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_NVFBC_SW_SESSION_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetNvfbcSwSessionInfo"
#endif
    },
    {               /*  [59] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetPartitionCapacity_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800181u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_PARTITION_CAPACITY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetPartitionCapacity"
#endif
    },
    {               /*  [60] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetCachedInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800182u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetCachedInfo"
#endif
    },
    {               /*  [61] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetPartitioningMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800183u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_SET_PARTITIONING_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetPartitioningMode"
#endif
    },
    {               /*  [62] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuDescribePartitions_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800185u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_DESCRIBE_PARTITIONS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuDescribePartitions"
#endif
    },
    {               /*  [63] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetMaxSupportedPageSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*flags=*/      0x50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800188u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_MAX_SUPPORTED_PAGE_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetMaxSupportedPageSize"
#endif
    },
    {               /*  [64] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetActivePartitionIds_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080018bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ACTIVE_PARTITION_IDS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetActivePartitionIds"
#endif
    },
    {               /*  [65] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetPids_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080018du,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_PIDS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetPids"
#endif
    },
    {               /*  [66] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetPidInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080018eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_PID_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetPidInfo"
#endif
    },
    {               /*  [67] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuSetComputePolicyConfig_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800194u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_SET_COMPUTE_POLICY_CONFIG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuSetComputePolicyConfig"
#endif
    },
    {               /*  [68] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetComputePolicyConfig_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800195u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_COMPUTE_POLICY_CONFIG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetComputePolicyConfig"
#endif
    },
    {               /*  [69] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdValidateMemMapRequest_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800198u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_VALIDATE_MEM_MAP_REQUEST_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdValidateMemMapRequest"
#endif
    },
    {               /*  [70] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x12u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetEngineLoadTimes_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x12u)
        /*flags=*/      0x12u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080019bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_ENGINE_LOAD_TIMES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetEngineLoadTimes"
#endif
    },
    {               /*  [71] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGpuGetComputeProfiles_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x208001a2u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GPU_GET_COMPUTE_PROFILES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGpuGetComputeProfiles"
#endif
    },
    {               /*  [72] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdEventSetNotification_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800301u,
        /*paramSize=*/  sizeof(NV2080_CTRL_EVENT_SET_NOTIFICATION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdEventSetNotification"
#endif
    },
    {               /*  [73] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdEventSetTrigger_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800302u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdEventSetTrigger"
#endif
    },
    {               /*  [74] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdEventSetMemoryNotifies_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800303u,
        /*paramSize=*/  sizeof(NV2080_CTRL_EVENT_SET_MEMORY_NOTIFIES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdEventSetMemoryNotifies"
#endif
    },
    {               /*  [75] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdEventSetSemaphoreMemory_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800304u,
        /*paramSize=*/  sizeof(NV2080_CTRL_EVENT_SET_SEMAPHORE_MEMORY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdEventSetSemaphoreMemory"
#endif
    },
    {               /*  [76] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdEventSetSemaMemValidation_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800306u,
        /*paramSize=*/  sizeof(NV2080_CTRL_EVENT_SET_SEMA_MEM_VALIDATION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdEventSetSemaMemValidation"
#endif
    },
    {               /*  [77] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdEventSetTriggerFifo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800308u,
        /*paramSize=*/  sizeof(NV2080_CTRL_EVENT_SET_TRIGGER_FIFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdEventSetTriggerFifo"
#endif
    },
    {               /*  [78] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdTimerSchedule_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800401u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_TIMER_SCHEDULE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdTimerSchedule"
#endif
    },
    {               /*  [79] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdTimerCancel_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800402u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdTimerCancel"
#endif
    },
    {               /*  [80] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdTimerGetTime_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800403u,
        /*paramSize=*/  sizeof(NV2080_CTRL_TIMER_GET_TIME_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdTimerGetTime"
#endif
    },
    {               /*  [81] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdTimerGetRegisterOffset_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800404u,
        /*paramSize=*/  sizeof(NV2080_CTRL_TIMER_GET_REGISTER_OFFSET_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdTimerGetRegisterOffset"
#endif
    },
    {               /*  [82] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdTimerGetGpuCpuTimeCorrelationInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800406u,
        /*paramSize=*/  sizeof(NV2080_CTRL_TIMER_GET_GPU_CPU_TIME_CORRELATION_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdTimerGetGpuCpuTimeCorrelationInfo"
#endif
    },
    {               /*  [83] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2010u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdTimerSetGrTickFreq_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2010u)
        /*flags=*/      0x2010u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800407u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_TIMER_SET_GR_TICK_FREQ_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdTimerSetGrTickFreq"
#endif
    },
    {               /*  [84] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdI2cReadBuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800601u,
        /*paramSize=*/  sizeof(NV2080_CTRL_I2C_READ_BUFFER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdI2cReadBuffer"
#endif
    },
    {               /*  [85] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdI2cWriteBuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800602u,
        /*paramSize=*/  sizeof(NV2080_CTRL_I2C_WRITE_BUFFER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdI2cWriteBuffer"
#endif
    },
    {               /*  [86] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdI2cReadReg_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800603u,
        /*paramSize=*/  sizeof(NV2080_CTRL_I2C_RW_REG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdI2cReadReg"
#endif
    },
    {               /*  [87] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdI2cWriteReg_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800604u,
        /*paramSize=*/  sizeof(NV2080_CTRL_I2C_RW_REG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdI2cWriteReg"
#endif
    },
    {               /*  [88] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBiosGetSKUInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800808u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BIOS_GET_SKU_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBiosGetSKUInfo"
#endif
    },
    {               /*  [89] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBiosGetPostTime_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800809u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BIOS_GET_POST_TIME_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBiosGetPostTime"
#endif
    },
    {               /*  [90] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBiosGetUefiSupport_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080080bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_BIOS_GET_UEFI_SUPPORT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBiosGetUefiSupport"
#endif
    },
    {               /*  [91] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBiosGetInfoV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800810u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BIOS_GET_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBiosGetInfoV2"
#endif
    },
    {               /*  [92] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdDisplayGetStaticInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a01u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_GET_STATIC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplayGetStaticInfo"
#endif
    },
    {               /*  [93] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMemSysGetStaticConfig_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a1cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MEMSYS_GET_STATIC_CONFIG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMemSysGetStaticConfig"
#endif
    },
    {               /*  [94] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalUvmRegisterAccessCntrBuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a1du,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_UVM_REGISTER_ACCESS_CNTR_BUFFER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalUvmRegisterAccessCntrBuffer"
#endif
    },
    {               /*  [95] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalUvmUnregisterAccessCntrBuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a1eu,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalUvmUnregisterAccessCntrBuffer"
#endif
    },
    {               /*  [96] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a1fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetCaps"
#endif
    },
    {               /*  [97] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalUvmServiceAccessCntrBuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a21u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalUvmServiceAccessCntrBuffer"
#endif
    },
    {               /*  [98] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetGlobalSmOrder_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a22u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_GLOBAL_SM_ORDER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetGlobalSmOrder"
#endif
    },
    {               /*  [99] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMsencGetCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*flags=*/      0x4600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a25u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MSENC_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMsencGetCaps"
#endif
    },
    {               /*  [100] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetFloorsweepingMasks_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a26u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_FLOORSWEEPING_MASKS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetFloorsweepingMasks"
#endif
    },
    {               /*  [101] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetCtxBufferPtes_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a28u,
        /*paramSize=*/  sizeof(NV2080_CTRL_KGR_GET_CTX_BUFFER_PTES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetCtxBufferPtes"
#endif
    },
    {               /*  [102] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalUvmGetAccessCntrBufferSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a29u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_UVM_GET_ACCESS_CNTR_BUFFER_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalUvmGetAccessCntrBufferSize"
#endif
    },
    {               /*  [103] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a2au,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetInfo"
#endif
    },
    {               /*  [104] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetZcullInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a2cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_ZCULL_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetZcullInfo"
#endif
    },
    {               /*  [105] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetRopInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a2eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_ROP_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetRopInfo"
#endif
    },
    {               /*  [106] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetPpcMasks_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a30u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_PPC_MASKS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetPpcMasks"
#endif
    },
    {               /*  [107] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetContextBuffersInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a32u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_CONTEXT_BUFFERS_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetContextBuffersInfo"
#endif
    },
    {               /*  [108] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifier_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a34u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_SM_ISSUE_RATE_MODIFIER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifier"
#endif
    },
    {               /*  [109] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGetChipInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*flags=*/      0x4600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a36u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GPU_GET_CHIP_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetChipInfo"
#endif
    },
    {               /*  [110] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetFecsRecordSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a3du,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_FECS_RECORD_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetFecsRecordSize"
#endif
    },
    {               /*  [111] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetFecsTraceDefines_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a3fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_FECS_TRACE_DEFINES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetFecsTraceDefines"
#endif
    },
    {               /*  [112] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGetDeviceInfoTable_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*flags=*/      0x4600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a40u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GET_DEVICE_INFO_TABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetDeviceInfoTable"
#endif
    },
    {               /*  [113] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGetUserRegisterAccessMap_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*flags=*/      0x4600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a41u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GPU_GET_USER_REGISTER_ACCESS_MAP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetUserRegisterAccessMap"
#endif
    },
    {               /*  [114] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGetConstructedFalconInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a42u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GET_CONSTRUCTED_FALCON_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetConstructedFalconInfo"
#endif
    },
    {               /*  [115] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrInternalStaticGetPdbProperties_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a48u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_GR_GET_PDB_PROPERTIES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrInternalStaticGetPdbProperties"
#endif
    },
    {               /*  [116] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdDisplayWriteInstMem_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a49u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_WRITE_INST_MEM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplayWriteInstMem"
#endif
    },
    {               /*  [117] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalRecoverAllComputeContexts_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a4au,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalRecoverAllComputeContexts"
#endif
    },
    {               /*  [118] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdDisplayGetIpVersion_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a4bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_GET_IP_VERSION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplayGetIpVersion"
#endif
    },
    {               /*  [119] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGetSmcMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a4cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GPU_GET_SMC_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetSmcMode"
#endif
    },
    {               /*  [120] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdDisplaySetupRgLineIntr_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a4du,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_SETUP_RG_LINE_INTR_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplaySetupRgLineIntr"
#endif
    },
    {               /*  [121] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMemSysSetPartitionableMem_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a51u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MEMSYS_SET_PARTITIONABLE_MEM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMemSysSetPartitionableMem"
#endif
    },
    {               /*  [122] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalFifoPromoteRunlistBuffers_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a53u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_FIFO_PROMOTE_RUNLIST_BUFFERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalFifoPromoteRunlistBuffers"
#endif
    },
    {               /*  [123] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdDisplaySetImportedImpData_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a54u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_SET_IMP_INIT_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplaySetImportedImpData"
#endif
    },
    {               /*  [124] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalBusBindLocalGfidForP2p_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a55u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_BUS_BIND_LOCAL_GFID_FOR_P2P_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalBusBindLocalGfidForP2p"
#endif
    },
    {               /*  [125] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalBusBindRemoteGfidForP2p_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a56u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_BUS_BIND_REMOTE_GFID_FOR_P2P_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalBusBindRemoteGfidForP2p"
#endif
    },
    {               /*  [126] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdDisplaySetChannelPushbuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a58u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_CHANNEL_PUSHBUFFER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplaySetChannelPushbuffer"
#endif
    },
    {               /*  [127] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGmmuGetStaticInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a59u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GMMU_GET_STATIC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGmmuGetStaticInfo"
#endif
    },
    {               /*  [128] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetHeapReservationSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a5bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_FB_GET_HEAP_RESERVATION_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetHeapReservationSize"
#endif
    },
    {               /*  [129] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdIntrGetKernelTable_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a5cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_INTR_GET_KERNEL_TABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdIntrGetKernelTable"
#endif
    },
    {               /*  [130] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdDisplayGetDisplayMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a5du,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_DISPLAY_GET_ACTIVE_DISPLAY_DEVICES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDisplayGetDisplayMask"
#endif
    },
    {               /*  [131] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2610u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalFifoGetNumChannels_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2610u)
        /*flags=*/      0x2610u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a61u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_FIFO_GET_NUM_CHANNELS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalFifoGetNumChannels"
#endif
    },
    {               /*  [132] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalStaticKMIGmgrGetProfiles_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a63u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_MIGMGR_GET_PROFILES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalStaticKMIGmgrGetProfiles"
#endif
    },
    {               /*  [133] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalStaticKMIGmgrGetPartitionableEngines_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a65u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_MIGMGR_GET_PARTITIONABLE_ENGINES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalStaticKMIGmgrGetPartitionableEngines"
#endif
    },
    {               /*  [134] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalStaticKMIGmgrGetSwizzIdFbMemPageRanges_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a66u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_MIGMGR_GET_SWIZZ_ID_FB_MEM_PAGE_RANGES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalStaticKMIGmgrGetSwizzIdFbMemPageRanges"
#endif
    },
    {               /*  [135] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKMemSysGetMIGMemoryConfig_133e5e_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a67u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MEMSYS_GET_MIG_MEMORY_CONFIG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKMemSysGetMIGMemoryConfig"
#endif
    },
    {               /*  [136] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbSetZbcReferenced_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a69u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MEMSYS_SET_ZBC_REFERENCED_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbSetZbcReferenced"
#endif
    },
    {               /*  [137] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalRcWatchdogTimeout_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a6au,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalRcWatchdogTimeout"
#endif
    },
    {               /*  [138] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a6bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MEMSYS_GET_MIG_MEMORY_PARTITION_TABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable"
#endif
    },
    {               /*  [139] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMemSysL2InvalidateEvict_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a6cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MEMSYS_L2_INVALIDATE_EVICT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMemSysL2InvalidateEvict"
#endif
    },
    {               /*  [140] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMemSysFlushL2AllRamsAndCaches_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a6du,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMemSysFlushL2AllRamsAndCaches"
#endif
    },
    {               /*  [141] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMemSysDisableNvlinkPeers_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a6eu,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMemSysDisableNvlinkPeers"
#endif
    },
    {               /*  [142] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMemSysProgramRawCompressionMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a6fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_MEMSYS_PROGRAM_RAW_COMPRESSION_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMemSysProgramRawCompressionMode"
#endif
    },
    {               /*  [143] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalBusFlushWithSysmembar_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a70u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalBusFlushWithSysmembar"
#endif
    },
    {               /*  [144] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalBusSetupP2pMailboxLocal_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a71u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_INTERNAL_BUS_SETUP_P2P_MAILBOX_LOCAL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalBusSetupP2pMailboxLocal"
#endif
    },
    {               /*  [145] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalBusSetupP2pMailboxRemote_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a72u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_INTERNAL_BUS_SETUP_P2P_MAILBOX_REMOTE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalBusSetupP2pMailboxRemote"
#endif
    },
    {               /*  [146] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalBusDestroyP2pMailbox_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a73u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_BUS_DESTROY_P2P_MAILBOX_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalBusDestroyP2pMailbox"
#endif
    },
    {               /*  [147] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalBusCreateC2cPeerMapping_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a74u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_BUS_CREATE_C2C_PEER_MAPPING_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalBusCreateC2cPeerMapping"
#endif
    },
    {               /*  [148] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalBusRemoveC2cPeerMapping_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a75u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_BUS_REMOVE_C2C_PEER_MAPPING_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalBusRemoveC2cPeerMapping"
#endif
    },
    {               /*  [149] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfCudaLimitDisable_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*flags=*/      0x610u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a7au,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfCudaLimitDisable"
#endif
    },
    {               /*  [150] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfOptpCliClear_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a7cu,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfOptpCliClear"
#endif
    },
    {               /*  [151] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfGpuBoostSyncSetControl_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a7eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_GPU_BOOST_SYNC_CONTROL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfGpuBoostSyncSetControl"
#endif
    },
    {               /*  [152] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfSyncGpuBoostSetLimits_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a7fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_GPU_BOOST_SYNC_SET_LIMITS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfSyncGpuBoostSetLimits"
#endif
    },
    {               /*  [153] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfGpuBoostSyncGetInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a80u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_GPU_BOOST_SYNC_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfGpuBoostSyncGetInfo"
#endif
    },
    {               /*  [154] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdHshubPeerConnConfig_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a88u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_HSHUB_PEER_CONN_CONFIG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdHshubPeerConnConfig"
#endif
    },
    {               /*  [155] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdHshubFirstLinkPeerId_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a89u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_HSHUB_FIRST_LINK_PEER_ID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdHshubFirstLinkPeerId"
#endif
    },
    {               /*  [156] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdHshubGetHshubIdForLinks_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a8au,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_HSHUB_GET_HSHUB_ID_FOR_LINKS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdHshubGetHshubIdForLinks"
#endif
    },
    {               /*  [157] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdHshubGetNumUnits_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a8bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_HSHUB_GET_NUM_UNITS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdHshubGetNumUnits"
#endif
    },
    {               /*  [158] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdHshubNextHshubId_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a8cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_HSHUB_NEXT_HSHUB_ID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdHshubNextHshubId"
#endif
    },
    {               /*  [159] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfPerfmonClientReservationCheck_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*flags=*/      0x610u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a98u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_PERFMON_CLIENT_RESERVATION_CHECK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfPerfmonClientReservationCheck"
#endif
    },
    {               /*  [160] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfPerfmonClientReservationSet_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*flags=*/      0x610u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a99u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_PERFMON_CLIENT_RESERVATION_SET_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfPerfmonClientReservationSet"
#endif
    },
    {               /*  [161] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfBoostSet_2x_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*flags=*/      0x610u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a9au,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_BOOST_SET_PARAMS_2X),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfBoostSet_2x"
#endif
    },
    {               /*  [162] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGmmuRegisterFaultBuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a9bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GMMU_REGISTER_FAULT_BUFFER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGmmuRegisterFaultBuffer"
#endif
    },
    {               /*  [163] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGmmuUnregisterFaultBuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a9cu,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGmmuUnregisterFaultBuffer"
#endif
    },
    {               /*  [164] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGmmuRegisterClientShadowFaultBuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a9du,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GMMU_REGISTER_CLIENT_SHADOW_FAULT_BUFFER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGmmuRegisterClientShadowFaultBuffer"
#endif
    },
    {               /*  [165] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGmmuUnregisterClientShadowFaultBuffer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800a9eu,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGmmuUnregisterClientShadowFaultBuffer"
#endif
    },
    {               /*  [166] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfBoostSet_3x_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*flags=*/      0x610u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800aa0u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_BOOST_SET_PARAMS_3X),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfBoostSet_3x"
#endif
    },
    {               /*  [167] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfBoostClear_3x_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
        /*flags=*/      0x610u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800aa1u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_BOOST_CLEAR_PARAMS_3X),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfBoostClear_3x"
#endif
    },
    {               /*  [168] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalKMIGmgrExportGPUInstance_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400u)
        /*flags=*/      0x400u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800aa7u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_KMIGMGR_IMPORT_EXPORT_GPU_INSTANCE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalKMIGmgrExportGPUInstance"
#endif
    },
    {               /*  [169] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalKMIGmgrImportGPUInstance_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400u)
        /*flags=*/      0x400u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800aa9u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_KMIGMGR_IMPORT_EXPORT_GPU_INSTANCE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalKMIGmgrImportGPUInstance"
#endif
    },
    {               /*  [170] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBifGetStaticInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800aacu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_BIF_GET_STATIC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBifGetStaticInfo"
#endif
    },
    {               /*  [171] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalNvlinkEnableComputePeerAddr_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800aadu,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalNvlinkEnableComputePeerAddr"
#endif
    },
    {               /*  [172] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalNvlinkGetSetNvswitchFabricAddr_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800aaeu,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_NVLINK_GET_SET_NVSWITCH_FABRIC_ADDR_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalNvlinkGetSetNvswitchFabricAddr"
#endif
    },
    {               /*  [173] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBifGetAspmL1Flags_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ab0u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_BIF_GET_ASPM_L1_FLAGS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBifGetAspmL1Flags"
#endif
    },
    {               /*  [174] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalPerfCfControllerSetMaxVGpuVMCount_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ab1u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_PERF_CF_CONTROLLERS_SET_MAX_VGPU_VM_COUNT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalPerfCfControllerSetMaxVGpuVMCount"
#endif
    },
    {               /*  [175] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCcuMap_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ab3u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_CCU_MAP_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCcuMap"
#endif
    },
    {               /*  [176] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCcuUnmap_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ab4u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCcuUnmap"
#endif
    },
    {               /*  [177] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGetPcieP2pCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ab8u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GET_PCIE_P2P_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetPcieP2pCaps"
#endif
    },
    {               /*  [178] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBifSetPcieRo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ab9u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_BIF_SET_PCIE_RO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBifSetPcieRo"
#endif
    },
    {               /*  [179] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalStaticKMIGmgrGetComputeInstanceProfiles_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
        /*flags=*/      0x2600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800abau,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_STATIC_MIGMGR_GET_COMPUTE_PROFILES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalStaticKMIGmgrGetComputeInstanceProfiles"
#endif
    },
    {               /*  [180] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalNvlinkGetNumActiveLinksPerIoctrl_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ad8u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_NVLINK_GET_NUM_ACTIVE_LINK_PER_IOCTRL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalNvlinkGetNumActiveLinksPerIoctrl"
#endif
    },
    {               /*  [181] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalNvlinkGetTotalNumLinksPerIoctrl_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800ad9u,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_NVLINK_GET_TOTAL_NUM_LINK_PER_IOCTRL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalNvlinkGetTotalNumLinksPerIoctrl"
#endif
    },
    {               /*  [182] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdInternalGetCoherentFbApertureSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20800adau,
        /*paramSize=*/  sizeof(NV2080_CTRL_INTERNAL_GET_COHERENT_FB_APERTURE_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdInternalGetCoherentFbApertureSize"
#endif
    },
    {               /*  [183] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdSetGpfifo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801102u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_SET_GPFIFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdSetGpfifo"
#endif
    },
    {               /*  [184] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoBindEngines_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801103u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FIFO_BIND_ENGINES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoBindEngines"
#endif
    },
    {               /*  [185] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdSetOperationalProperties_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*flags=*/      0x2204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801104u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_SET_OPERATIONAL_PROPERTIES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdSetOperationalProperties"
#endif
    },
    {               /*  [186] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGetPhysicalChannelCount_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801108u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FIFO_GET_PHYSICAL_CHANNEL_COUNT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGetPhysicalChannelCount"
#endif
    },
    {               /*  [187] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoGetInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801109u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FIFO_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoGetInfo"
#endif
    },
    {               /*  [188] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoDisableChannels_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080110bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_FIFO_DISABLE_CHANNELS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoDisableChannels"
#endif
    },
    {               /*  [189] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoGetChannelMemInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080110cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_FIFO_GET_CHANNEL_MEM_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoGetChannelMemInfo"
#endif
    },
    {               /*  [190] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoGetUserdLocation_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080110du,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_FIFO_GET_USERD_LOCATION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoGetUserdLocation"
#endif
    },
    {               /*  [191] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoGetDeviceInfoTable_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*flags=*/      0x2200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801112u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FIFO_GET_DEVICE_INFO_TABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoGetDeviceInfoTable"
#endif
    },
    {               /*  [192] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoClearFaultedBit_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*flags=*/      0x2204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801113u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_FIFO_CLEAR_FAULTED_BIT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoClearFaultedBit"
#endif
    },
    {               /*  [193] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2310u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoRunlistSetSchedPolicy_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2310u)
        /*flags=*/      0x2310u,
        /*accessRight=*/0x2u,
        /*methodId=*/   0x20801115u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FIFO_RUNLIST_SET_SCHED_POLICY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoRunlistSetSchedPolicy"
#endif
    },
    {               /*  [194] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoUpdateChannelInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801116u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FIFO_UPDATE_CHANNEL_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoUpdateChannelInfo"
#endif
    },
    {               /*  [195] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFifoDisableUsermodeChannels_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*flags=*/      0x2200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801117u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FIFO_DISABLE_USERMODE_CHANNELS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFifoDisableUsermodeChannels"
#endif
    },
    {               /*  [196] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*flags=*/      0x50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801201u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetInfo"
#endif
    },
    {               /*  [197] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrCtxswZcullMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801205u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_CTXSW_ZCULL_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrCtxswZcullMode"
#endif
    },
    {               /*  [198] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetZcullInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801206u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_ZCULL_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetZcullInfo"
#endif
    },
    {               /*  [199] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2010u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrCtxswPmMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2010u)
        /*flags=*/      0x2010u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801207u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_CTXSW_PM_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrCtxswPmMode"
#endif
    },
    {               /*  [200] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrCtxswZcullBind_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801208u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_CTXSW_ZCULL_BIND_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrCtxswZcullBind"
#endif
    },
    {               /*  [201] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrCtxswPmBind_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801209u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_CTXSW_PM_BIND_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrCtxswPmBind"
#endif
    },
    {               /*  [202] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrSetGpcTileMap_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080120au,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_SET_GPC_TILE_MAP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrSetGpcTileMap"
#endif
    },
    {               /*  [203] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrCtxswSmpcMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080120eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_CTXSW_SMPC_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrCtxswSmpcMode"
#endif
    },
    {               /*  [204] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetSmToGpcTpcMappings_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080120fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_SM_TO_GPC_TPC_MAPPINGS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetSmToGpcTpcMappings"
#endif
    },
    {               /*  [205] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrSetCtxswPreemptionMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801210u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_SET_CTXSW_PREEMPTION_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrSetCtxswPreemptionMode"
#endif
    },
    {               /*  [206] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrCtxswPreemptionBind_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801211u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_CTXSW_PREEMPTION_BIND_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrCtxswPreemptionBind"
#endif
    },
    {               /*  [207] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrPcSamplingMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801212u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_PC_SAMPLING_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrPcSamplingMode"
#endif
    },
    {               /*  [208] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetROPInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801213u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_ROP_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetROPInfo"
#endif
    },
    {               /*  [209] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetCtxswStats_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801215u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_CTXSW_STATS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetCtxswStats"
#endif
    },
    {               /*  [210] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetCtxBufferSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*flags=*/      0x50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801218u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_CTX_BUFFER_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetCtxBufferSize"
#endif
    },
    {               /*  [211] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetCtxBufferInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801219u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_CTX_BUFFER_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetCtxBufferInfo"
#endif
    },
    {               /*  [212] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetGlobalSmOrder_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080121bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_GLOBAL_SM_ORDER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetGlobalSmOrder"
#endif
    },
    {               /*  [213] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetCurrentResidentChannel_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080121cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_GR_GET_CURRENT_RESIDENT_CHANNEL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetCurrentResidentChannel"
#endif
    },
    {               /*  [214] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetVatAlarmData_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080121du,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_VAT_ALARM_DATA_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetVatAlarmData"
#endif
    },
    {               /*  [215] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetAttributeBufferSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080121eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_ATTRIBUTE_BUFFER_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetAttributeBufferSize"
#endif
    },
    {               /*  [216] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGfxPoolQuerySize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*flags=*/      0x2200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080121fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GFX_POOL_QUERY_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGfxPoolQuerySize"
#endif
    },
    {               /*  [217] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGfxPoolInitialize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*flags=*/      0x2200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801220u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GFX_POOL_INITIALIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGfxPoolInitialize"
#endif
    },
    {               /*  [218] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGfxPoolAddSlots_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*flags=*/      0x2200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801221u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GFX_POOL_ADD_SLOTS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGfxPoolAddSlots"
#endif
    },
    {               /*  [219] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGfxPoolRemoveSlots_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
        /*flags=*/      0x2200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801222u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GFX_POOL_REMOVE_SLOTS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGfxPoolRemoveSlots"
#endif
    },
    {               /*  [220] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetCapsV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*flags=*/      0x812u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801227u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_CAPS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetCapsV2"
#endif
    },
    {               /*  [221] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetInfoV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*flags=*/      0x50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801228u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetInfoV2"
#endif
    },
    {               /*  [222] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetGpcMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*flags=*/      0x50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080122au,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_GPC_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetGpcMask"
#endif
    },
    {               /*  [223] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetTpcMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080122bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_TPC_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetTpcMask"
#endif
    },
    {               /*  [224] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrSetTpcPartitionMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080122cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_SET_TPC_PARTITION_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrSetTpcPartitionMode"
#endif
    },
    {               /*  [225] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetEngineContextProperties_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080122du,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_ENGINE_CONTEXT_PROPERTIES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetEngineContextProperties"
#endif
    },
    {               /*  [226] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetSmIssueRateModifier_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801230u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_SM_ISSUE_RATE_MODIFIER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetSmIssueRateModifier"
#endif
    },
    {               /*  [227] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrFecsBindEvtbufForUid_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801231u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_FECS_BIND_EVTBUF_FOR_UID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrFecsBindEvtbufForUid"
#endif
    },
    {               /*  [228] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x44u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetPhysGpcMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x44u)
        /*flags=*/      0x44u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801232u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_PHYS_GPC_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetPhysGpcMask"
#endif
    },
    {               /*  [229] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetPpcMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801233u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_PPC_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetPpcMask"
#endif
    },
    {               /*  [230] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetNumTpcsForGpc_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801234u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_NUM_TPCS_FOR_GPC_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetNumTpcsForGpc"
#endif
    },
    {               /*  [231] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetCtxswModes_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801235u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_CTXSW_MODES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetCtxswModes"
#endif
    },
    {               /*  [232] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetGpcTileMap_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801236u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_GPC_TILE_MAP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetGpcTileMap"
#endif
    },
    {               /*  [233] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetZcullMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*flags=*/      0x50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801237u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_ZCULL_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetZcullMask"
#endif
    },
    {               /*  [234] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x8010u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrFecsBindEvtbufForUidV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x8010u)
        /*flags=*/      0x8010u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801238u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_FECS_BIND_EVTBUF_FOR_UID_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrFecsBindEvtbufForUidV2"
#endif
    },
    {               /*  [235] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKGrGetGfxGpcAndTpcInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801239u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GR_GET_GFX_GPC_AND_TPC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKGrGetGfxGpcAndTpcInfo"
#endif
    },
    {               /*  [236] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801301u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetInfo"
#endif
    },
    {               /*  [237] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetInfoV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801303u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetInfoV2"
#endif
    },
    {               /*  [238] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetCarveoutAddressInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080130bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_SYSTEM_CARVEOUT_ADDRESS_SPACE_INFO),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetCarveoutAddressInfo"
#endif
    },
    {               /*  [239] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetCalibrationLockFailed_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080130cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_CALIBRATION_LOCK_FAILED_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetCalibrationLockFailed"
#endif
    },
    {               /*  [240] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbFlushGpuCache_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080130eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_FLUSH_GPU_CACHE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbFlushGpuCache"
#endif
    },
    {               /*  [241] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbSetGpuCacheAllocPolicy_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080130fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GPU_CACHE_ALLOC_POLICY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbSetGpuCacheAllocPolicy"
#endif
    },
    {               /*  [242] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetBar1Offset_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801310u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_BAR1_OFFSET_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetBar1Offset"
#endif
    },
    {               /*  [243] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetGpuCacheAllocPolicy_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801312u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GPU_CACHE_ALLOC_POLICY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetGpuCacheAllocPolicy"
#endif
    },
    {               /*  [244] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbIsKind_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801313u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_IS_KIND_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbIsKind"
#endif
    },
    {               /*  [245] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetGpuCacheInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801315u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_GPU_CACHE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetGpuCacheInfo"
#endif
    },
    {               /*  [246] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbSetGpuCacheAllocPolicyV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801318u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GPU_CACHE_ALLOC_POLICY_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbSetGpuCacheAllocPolicyV2"
#endif
    },
    {               /*  [247] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetGpuCacheAllocPolicyV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801319u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GPU_CACHE_ALLOC_POLICY_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetGpuCacheAllocPolicyV2"
#endif
    },
    {               /*  [248] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetFBRegionInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801320u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_FB_GET_FB_REGION_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetFBRegionInfo"
#endif
    },
    {               /*  [249] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetOfflinedPages_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801322u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_OFFLINED_PAGES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetOfflinedPages"
#endif
    },
    {               /*  [250] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetLTCInfoForFBP_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
        /*flags=*/      0xa50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801328u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_LTC_INFO_FOR_FBP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetLTCInfoForFBP"
#endif
    },
    {               /*  [251] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbCBCOp_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801337u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_FB_CBC_OP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbCBCOp"
#endif
    },
    {               /*  [252] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetCtagsForCbcEviction_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801338u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_CTAGS_FOR_CBC_EVICTION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetCtagsForCbcEviction"
#endif
    },
    {               /*  [253] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbSetupVprRegion_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080133bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_FB_SETUP_VPR_REGION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbSetupVprRegion"
#endif
    },
    {               /*  [254] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetCliManagedOfflinedPages_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080133cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_CLI_MANAGED_OFFLINED_PAGES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetCliManagedOfflinedPages"
#endif
    },
    {               /*  [255] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetCompBitCopyConstructInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080133du,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_FB_GET_COMPBITCOPY_CONSTRUCT_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetCompBitCopyConstructInfo"
#endif
    },
    {               /*  [256] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbSetRrd_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080133eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_SET_RRD_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbSetRrd"
#endif
    },
    {               /*  [257] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbSetReadLimit_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080133fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_SET_READ_LIMIT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbSetReadLimit"
#endif
    },
    {               /*  [258] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbSetWriteLimit_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801340u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_SET_WRITE_LIMIT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbSetWriteLimit"
#endif
    },
    {               /*  [259] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbPatchPbrForMining_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801341u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_PATCH_PBR_FOR_MINING_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbPatchPbrForMining"
#endif
    },
    {               /*  [260] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetMemAlignment_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
        /*flags=*/      0x50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801342u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_MEM_ALIGNMENT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetMemAlignment"
#endif
    },
    {               /*  [261] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetRemappedRows_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801344u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_REMAPPED_ROWS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetRemappedRows"
#endif
    },
    {               /*  [262] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetFsInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801346u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_FS_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetFsInfo"
#endif
    },
    {               /*  [263] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetRowRemapperHistogram_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801347u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_ROW_REMAPPER_HISTOGRAM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetRowRemapperHistogram"
#endif
    },
    {               /*  [264] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetDynamicOfflinedPages_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801348u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_DYNAMIC_OFFLINED_PAGES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetDynamicOfflinedPages"
#endif
    },
    {               /*  [265] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbUpdateNumaStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801350u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_UPDATE_NUMA_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbUpdateNumaStatus"
#endif
    },
    {               /*  [266] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFbGetNumaInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801351u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FB_GET_NUMA_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFbGetNumaInfo"
#endif
    },
    {               /*  [267] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMcGetArchInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*flags=*/      0x812u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801701u,
        /*paramSize=*/  sizeof(NV2080_CTRL_MC_GET_ARCH_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMcGetArchInfo"
#endif
    },
    {               /*  [268] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMcServiceInterrupts_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801702u,
        /*paramSize=*/  sizeof(NV2080_CTRL_MC_SERVICE_INTERRUPTS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMcServiceInterrupts"
#endif
    },
    {               /*  [269] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMcGetManufacturer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801703u,
        /*paramSize=*/  sizeof(NV2080_CTRL_MC_GET_MANUFACTURER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMcGetManufacturer"
#endif
    },
    {               /*  [270] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMcQueryHostclkSlowdownStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801708u,
        /*paramSize=*/  sizeof(NV2080_CTRL_MC_QUERY_HOSTCLK_SLOWDOWN_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMcQueryHostclkSlowdownStatus"
#endif
    },
    {               /*  [271] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMcSetHostclkSlowdownStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801709u,
        /*paramSize=*/  sizeof(NV2080_CTRL_MC_SET_HOSTCLK_SLOWDOWN_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMcSetHostclkSlowdownStatus"
#endif
    },
    {               /*  [272] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdMcChangeReplayableFaultOwnership_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080170cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_MC_CHANGE_REPLAYABLE_FAULT_OWNERSHIP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdMcChangeReplayableFaultOwnership"
#endif
    },
    {               /*  [273] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetPciInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801801u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_PCI_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetPciInfo"
#endif
    },
    {               /*  [274] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801802u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetInfo"
#endif
    },
    {               /*  [275] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetPciBarInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801803u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_PCI_BAR_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetPciBarInfo"
#endif
    },
    {               /*  [276] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusSetPcieLinkWidth_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801804u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_SET_PCIE_LINK_WIDTH_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusSetPcieLinkWidth"
#endif
    },
    {               /*  [277] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusSetPcieSpeed_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801805u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_SET_PCIE_SPEED_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusSetPcieSpeed"
#endif
    },
    {               /*  [278] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusSetHwbcUpstreamPcieSpeed_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801806u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_SET_HWBC_UPSTREAM_PCIE_SPEED_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusSetHwbcUpstreamPcieSpeed"
#endif
    },
    {               /*  [279] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetHwbcUpstreamPcieSpeed_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801807u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_HWBC_UPSTREAM_PCIE_SPEED_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetHwbcUpstreamPcieSpeed"
#endif
    },
    {               /*  [280] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusHWBCGetUpstreamBAR0_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080180eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_HWBC_GET_UPSTREAM_BAR0_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusHWBCGetUpstreamBAR0"
#endif
    },
    {               /*  [281] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusServiceGpuMultifunctionState_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801812u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_SERVICE_GPU_MULTIFUNC_STATE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusServiceGpuMultifunctionState"
#endif
    },
    {               /*  [282] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetPexCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801813u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_PEX_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetPexCounters"
#endif
    },
    {               /*  [283] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusClearPexCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801814u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_CLEAR_PEX_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusClearPexCounters"
#endif
    },
    {               /*  [284] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusFreezePexCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801815u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_FREEZE_PEX_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusFreezePexCounters"
#endif
    },
    {               /*  [285] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetPexLaneCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801816u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BUS_GET_PEX_LANE_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetPexLaneCounters"
#endif
    },
    {               /*  [286] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetPcieLtrLatency_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801817u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BUS_GET_PCIE_LTR_LATENCY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetPcieLtrLatency"
#endif
    },
    {               /*  [287] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusSetPcieLtrLatency_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801818u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BUS_SET_PCIE_LTR_LATENCY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusSetPcieLtrLatency"
#endif
    },
    {               /*  [288] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetPexUtilCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801819u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_PEX_UTIL_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetPexUtilCounters"
#endif
    },
    {               /*  [289] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusClearPexUtilCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801820u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_CLEAR_PEX_UTIL_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusClearPexUtilCounters"
#endif
    },
    {               /*  [290] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetBFD_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801821u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_BFD_PARAMSARR),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetBFD"
#endif
    },
    {               /*  [291] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetAspmDisableFlags_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801822u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_ASPM_DISABLE_FLAGS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetAspmDisableFlags"
#endif
    },
    {               /*  [292] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetInfoV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801823u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetInfoV2"
#endif
    },
    {               /*  [293] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusControlPublicAspmBits_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801824u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BUS_CONTROL_PUBLIC_ASPM_BITS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusControlPublicAspmBits"
#endif
    },
    {               /*  [294] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetNvlinkPeerIdMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801825u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_NVLINK_PEER_ID_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetNvlinkPeerIdMask"
#endif
    },
    {               /*  [295] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusSetEomParameters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801826u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BUS_SET_EOM_PARAMETERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusSetEomParameters"
#endif
    },
    {               /*  [296] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetUphyDlnCfgSpace_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801827u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BUS_GET_UPHY_DLN_CFG_SPACE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetUphyDlnCfgSpace"
#endif
    },
    {               /*  [297] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetEomStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801828u,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_EOM_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetEomStatus"
#endif
    },
    {               /*  [298] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x6210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetPcieReqAtomicsCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x6210u)
        /*flags=*/      0x6210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20801829u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BUS_GET_PCIE_REQ_ATOMICS_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetPcieReqAtomicsCaps"
#endif
    },
    {               /*  [299] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x6210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x6210u)
        /*flags=*/      0x6210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080182au,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BUS_GET_PCIE_SUPPORTED_GPU_ATOMICS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics"
#endif
    },
    {               /*  [300] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetC2CInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080182bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_BUS_GET_C2C_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetC2CInfo"
#endif
    },
    {               /*  [301] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusSysmemAccess_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10200u)
        /*flags=*/      0x10200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080182cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_SYSMEM_ACCESS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusSysmemAccess"
#endif
    },
    {               /*  [302] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetC2CErrorInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080182du,
        /*paramSize=*/  sizeof(NV2080_CTRL_BUS_GET_C2C_ERR_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetC2CErrorInfo"
#endif
    },
    {               /*  [303] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdKPerfBoost_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*flags=*/      0x810u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080200au,
        /*paramSize=*/  sizeof(NV2080_CTRL_PERF_BOOST_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdKPerfBoost"
#endif
    },
    {               /*  [304] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdPerfRatedTdpGetControl_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080206eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_PERF_RATED_TDP_CONTROL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdPerfRatedTdpGetControl"
#endif
    },
    {               /*  [305] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdPerfRatedTdpSetControl_a2e9a2_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080206fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_PERF_RATED_TDP_CONTROL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdPerfRatedTdpSetControl"
#endif
    },
    {               /*  [306] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdPerfReservePerfmonHw_3f0664_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802093u,
        /*paramSize=*/  sizeof(NV2080_CTRL_PERF_RESERVE_PERFMON_HW_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdPerfReservePerfmonHw"
#endif
    },
    {               /*  [307] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802096u,
        /*paramSize=*/  sizeof(NV2080_CTRL_PERF_GET_GPUMON_PERFMON_UTIL_SAMPLES_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2"
#endif
    },
    {               /*  [308] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdRcReadVirtualMem_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802204u,
        /*paramSize=*/  sizeof(NV2080_CTRL_RC_READ_VIRTUAL_MEM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdRcReadVirtualMem"
#endif
    },
    {               /*  [309] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdRcGetErrorCount_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802205u,
        /*paramSize=*/  sizeof(NV2080_CTRL_RC_GET_ERROR_COUNT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdRcGetErrorCount"
#endif
    },
    {               /*  [310] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdRcSetCleanErrorHistory_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802207u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdRcSetCleanErrorHistory"
#endif
    },
    {               /*  [311] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdRcGetWatchdogInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802209u,
        /*paramSize=*/  sizeof(NV2080_CTRL_RC_GET_WATCHDOG_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdRcGetWatchdogInfo"
#endif
    },
    {               /*  [312] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdRcDisableWatchdog_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080220au,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdRcDisableWatchdog"
#endif
    },
    {               /*  [313] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdRcEnableWatchdog_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080220bu,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdRcEnableWatchdog"
#endif
    },
    {               /*  [314] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdRcReleaseWatchdogRequests_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080220cu,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdRcReleaseWatchdogRequests"
#endif
    },
    {               /*  [315] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdSetRcRecovery_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080220du,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_RC_RECOVERY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdSetRcRecovery"
#endif
    },
    {               /*  [316] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGetRcRecovery_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080220eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_RC_RECOVERY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGetRcRecovery"
#endif
    },
    {               /*  [317] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdRcSoftDisableWatchdog_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802210u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdRcSoftDisableWatchdog"
#endif
    },
    {               /*  [318] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdSetRcInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802211u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_RC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdSetRcInfo"
#endif
    },
    {               /*  [319] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGetRcInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802212u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_RC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGetRcInfo"
#endif
    },
    {               /*  [320] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdRcGetErrorV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802213u,
        /*paramSize=*/  sizeof(NV2080_CTRL_RC_GET_ERROR_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdRcGetErrorV2"
#endif
    },
    {               /*  [321] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvdGetDumpSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802401u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVD_GET_DUMP_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvdGetDumpSize"
#endif
    },
    {               /*  [322] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvdGetDump_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802402u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVD_GET_DUMP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvdGetDump"
#endif
    },
    {               /*  [323] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvdGetNocatJournalRpt_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*flags=*/      0x7u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802409u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVD_GET_NOCAT_JOURNAL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvdGetNocatJournalRpt"
#endif
    },
    {               /*  [324] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvdSetNocatJournalData_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*flags=*/      0x7u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080240bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVD_SET_NOCAT_JOURNAL_DATA_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvdSetNocatJournalData"
#endif
    },
    {               /*  [325] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdDmaInvalidateTLB_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802502u,
        /*paramSize=*/  sizeof(NV2080_CTRL_DMA_INVALIDATE_TLB_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDmaInvalidateTLB"
#endif
    },
    {               /*  [326] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdDmaGetInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802503u,
        /*paramSize=*/  sizeof(NV2080_CTRL_DMA_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdDmaGetInfo"
#endif
    },
    {               /*  [327] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeGetCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a01u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetCaps"
#endif
    },
    {               /*  [328] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x211u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeGetCePceMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x211u)
        /*flags=*/      0x211u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a02u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_CE_PCE_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetCePceMask"
#endif
    },
    {               /*  [329] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeGetCapsV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a03u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_CAPS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetCapsV2"
#endif
    },
    {               /*  [330] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeUpdatePceLceMappings_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a05u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_UPDATE_PCE_LCE_MAPPINGS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeUpdatePceLceMappings"
#endif
    },
    {               /*  [331] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeUpdateClassDB_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a06u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_UPDATE_CLASS_DB_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeUpdateClassDB"
#endif
    },
    {               /*  [332] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xe40u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeGetPhysicalCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xe40u)
        /*flags=*/      0xe40u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a07u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_CAPS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetPhysicalCaps"
#endif
    },
    {               /*  [333] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeGetFaultMethodBufferSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4200u)
        /*flags=*/      0x4200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a08u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_FAULT_METHOD_BUFFER_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetFaultMethodBufferSize"
#endif
    },
    {               /*  [334] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeGetHubPceMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
        /*flags=*/      0x4600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a09u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_HUB_PCE_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetHubPceMask"
#endif
    },
    {               /*  [335] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeGetAllCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a0au,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_ALL_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetAllCaps"
#endif
    },
    {               /*  [336] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xe40u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdCeGetAllPhysicalCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xe40u)
        /*flags=*/      0xe40u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20802a0bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_CE_GET_ALL_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdCeGetAllPhysicalCaps"
#endif
    },
    {               /*  [337] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetNvlinkCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803001u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_NVLINK_GET_NVLINK_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetNvlinkCaps"
#endif
    },
    {               /*  [338] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdBusGetNvlinkStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*flags=*/      0x810u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803002u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_NVLINK_GET_NVLINK_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdBusGetNvlinkStatus"
#endif
    },
    {               /*  [339] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGetNvlinkCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803004u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGetNvlinkCounters"
#endif
    },
    {               /*  [340] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdClearNvlinkCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803005u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_CLEAR_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdClearNvlinkCounters"
#endif
    },
    {               /*  [341] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetLinkFatalErrorCounts_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803009u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_LINK_FATAL_ERROR_COUNTS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetLinkFatalErrorCounts"
#endif
    },
    {               /*  [342] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkSetupEom_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080300cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_NVLINK_SETUP_EOM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkSetupEom"
#endif
    },
    {               /*  [343] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetPowerState_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080300eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_POWER_STATE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetPowerState"
#endif
    },
    {               /*  [344] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkReadTpCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803015u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_READ_TP_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkReadTpCounters"
#endif
    },
    {               /*  [345] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkEnableNvlinkPeer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803017u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_ENABLE_NVLINK_PEER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkEnableNvlinkPeer"
#endif
    },
    {               /*  [346] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetLpCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803018u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_LP_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetLpCounters"
#endif
    },
    {               /*  [347] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkCoreCallback_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803019u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_CORE_CALLBACK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkCoreCallback"
#endif
    },
    {               /*  [348] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetAliEnabled_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080301au,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_ALI_ENABLED_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetAliEnabled"
#endif
    },
    {               /*  [349] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkUpdateRemoteLocalSid_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080301bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_UPDATE_REMOTE_LOCAL_SID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkUpdateRemoteLocalSid"
#endif
    },
    {               /*  [350] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkUpdateHshubMux_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080301cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_UPDATE_HSHUB_MUX_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkUpdateHshubMux"
#endif
    },
    {               /*  [351] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkPreSetupNvlinkPeer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080301du,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_PRE_SETUP_NVLINK_PEER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkPreSetupNvlinkPeer"
#endif
    },
    {               /*  [352] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkPostSetupNvlinkPeer_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080301eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_POST_SETUP_NVLINK_PEER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkPostSetupNvlinkPeer"
#endif
    },
    {               /*  [353] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkRemoveNvlinkMapping_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080301fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_REMOVE_NVLINK_MAPPING_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkRemoveNvlinkMapping"
#endif
    },
    {               /*  [354] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkSaveRestoreHshubState_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803020u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_SAVE_RESTORE_HSHUB_STATE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkSaveRestoreHshubState"
#endif
    },
    {               /*  [355] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkProgramBufferready_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803021u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_PROGRAM_BUFFERREADY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkProgramBufferready"
#endif
    },
    {               /*  [356] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkUpdateCurrentConfig_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803022u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_UPDATE_CURRENT_CONFIG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkUpdateCurrentConfig"
#endif
    },
    {               /*  [357] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkSetLoopbackMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803023u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_SET_LOOPBACK_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkSetLoopbackMode"
#endif
    },
    {               /*  [358] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkUpdatePeerLinkMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803024u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_UPDATE_PEER_LINK_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkUpdatePeerLinkMask"
#endif
    },
    {               /*  [359] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkUpdateLinkConnection_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803025u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_UPDATE_LINK_CONNECTION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkUpdateLinkConnection"
#endif
    },
    {               /*  [360] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkEnableLinksPostTopology_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803026u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_ENABLE_LINKS_POST_TOPOLOGY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkEnableLinksPostTopology"
#endif
    },
    {               /*  [361] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkPreLinkTrainAli_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803027u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_PRE_LINK_TRAIN_ALI_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkPreLinkTrainAli"
#endif
    },
    {               /*  [362] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetRefreshCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803028u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_REFRESH_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetRefreshCounters"
#endif
    },
    {               /*  [363] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkClearRefreshCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803029u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_CLEAR_REFRESH_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkClearRefreshCounters"
#endif
    },
    {               /*  [364] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetLinkMaskPostRxDet_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080302au,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_LINK_MASK_POST_RX_DET_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetLinkMaskPostRxDet"
#endif
    },
    {               /*  [365] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkLinkTrainAli_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080302bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_LINK_TRAIN_ALI_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkLinkTrainAli"
#endif
    },
    {               /*  [366] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetNvlinkDeviceInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080302cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_NVLINK_DEVICE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetNvlinkDeviceInfo"
#endif
    },
    {               /*  [367] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetIoctrlDeviceInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080302du,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_IOCTRL_DEVICE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetIoctrlDeviceInfo"
#endif
    },
    {               /*  [368] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkProgramLinkSpeed_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080302eu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_PROGRAM_LINK_SPEED_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkProgramLinkSpeed"
#endif
    },
    {               /*  [369] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkAreLinksTrained_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080302fu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_ARE_LINKS_TRAINED_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkAreLinksTrained"
#endif
    },
    {               /*  [370] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkResetLinks_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803030u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_RESET_LINKS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkResetLinks"
#endif
    },
    {               /*  [371] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkDisableDlInterrupts_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803031u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_DISABLE_DL_INTERRUPTS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkDisableDlInterrupts"
#endif
    },
    {               /*  [372] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetLinkAndClockInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803032u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_LINK_AND_CLOCK_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetLinkAndClockInfo"
#endif
    },
    {               /*  [373] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkSetupNvlinkSysmem_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803033u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_SETUP_NVLINK_SYSMEM_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkSetupNvlinkSysmem"
#endif
    },
    {               /*  [374] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkProcessForcedConfigs_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803034u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_PROCESS_FORCED_CONFIGS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkProcessForcedConfigs"
#endif
    },
    {               /*  [375] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkSyncLaneShutdownProps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803035u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_SYNC_NVLINK_SHUTDOWN_PROPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkSyncLaneShutdownProps"
#endif
    },
    {               /*  [376] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkEnableSysmemNvlinkAts_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803036u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_ENABLE_SYSMEM_NVLINK_ATS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkEnableSysmemNvlinkAts"
#endif
    },
    {               /*  [377] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkHshubGetSysmemNvlinkMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803037u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_HSHUB_GET_SYSMEM_NVLINK_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkHshubGetSysmemNvlinkMask"
#endif
    },
    {               /*  [378] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkGetSetNvswitchFlaAddr_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803038u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_GET_SET_NVSWITCH_FLA_ADDR_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkGetSetNvswitchFlaAddr"
#endif
    },
    {               /*  [379] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkSyncLinkMasksAndVbiosInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
        /*flags=*/      0x201u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803039u,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_SYNC_LINK_MASKS_AND_VBIOS_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkSyncLinkMasksAndVbiosInfo"
#endif
    },
    {               /*  [380] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkEnableLinks_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080303au,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkEnableLinks"
#endif
    },
    {               /*  [381] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkProcessInitDisabledLinks_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080303bu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_PROCESS_INIT_DISABLED_LINKS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkProcessInitDisabledLinks"
#endif
    },
    {               /*  [382] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdNvlinkEomControl_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080303cu,
        /*paramSize=*/  sizeof(NV2080_CTRL_NVLINK_EOM_CONTROL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdNvlinkEomControl"
#endif
    },
    {               /*  [383] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlcnGetDmemUsage_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803101u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLCN_GET_DMEM_USAGE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlcnGetDmemUsage"
#endif
    },
    {               /*  [384] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlcnGetEngineArch_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803118u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLCN_GET_ENGINE_ARCH_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlcnGetEngineArch"
#endif
    },
    {               /*  [385] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlcnUstreamerQueueInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803120u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLCN_USTREAMER_QUEUE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlcnUstreamerQueueInfo"
#endif
    },
    {               /*  [386] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlcnUstreamerControlGet_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803122u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLCN_USTREAMER_CONTROL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlcnUstreamerControlGet"
#endif
    },
    {               /*  [387] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlcnUstreamerControlSet_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803123u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLCN_USTREAMER_CONTROL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlcnUstreamerControlSet"
#endif
    },
    {               /*  [388] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlcnGetCtxBufferInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803124u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLCN_GET_CTX_BUFFER_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlcnGetCtxBufferInfo"
#endif
    },
    {               /*  [389] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlcnGetCtxBufferSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803125u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLCN_GET_CTX_BUFFER_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlcnGetCtxBufferSize"
#endif
    },
    {               /*  [390] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdEccGetClientExposedCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803400u,
        /*paramSize=*/  sizeof(NV2080_CTRL_ECC_GET_CLIENT_EXPOSED_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdEccGetClientExposedCounters"
#endif
    },
    {               /*  [391] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlaRange_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*flags=*/      0x810u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803501u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLA_RANGE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlaRange"
#endif
    },
    {               /*  [392] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlaSetupInstanceMemBlock_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*flags=*/      0x2204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803502u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLA_SETUP_INSTANCE_MEM_BLOCK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlaSetupInstanceMemBlock"
#endif
    },
    {               /*  [393] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlaGetRange_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803503u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLA_GET_RANGE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlaGetRange"
#endif
    },
    {               /*  [394] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1810u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdFlaGetFabricMemStats_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1810u)
        /*flags=*/      0x1810u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803504u,
        /*paramSize=*/  sizeof(NV2080_CTRL_FLA_GET_FABRIC_MEM_STATS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdFlaGetFabricMemStats"
#endif
    },
    {               /*  [395] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x211u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGspGetFeatures_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x211u)
        /*flags=*/      0x211u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803601u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GSP_GET_FEATURES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGspGetFeatures"
#endif
    },
    {               /*  [396] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGrmgrGetGrFsInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803801u,
        /*paramSize=*/  sizeof(NV2080_CTRL_GRMGR_GET_GR_FS_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGrmgrGetGrFsInfo"
#endif
    },
    {               /*  [397] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x3u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdOsUnixGc6BlockerRefCnt_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x3u)
        /*flags=*/      0x3u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803d01u,
        /*paramSize=*/  sizeof(NV2080_CTRL_OS_UNIX_GC6_BLOCKER_REFCNT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdOsUnixGc6BlockerRefCnt"
#endif
    },
    {               /*  [398] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdOsUnixAllowDisallowGcoff_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803d02u,
        /*paramSize=*/  sizeof(NV2080_CTRL_OS_UNIX_ALLOW_DISALLOW_GCOFF_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdOsUnixAllowDisallowGcoff"
#endif
    },
    {               /*  [399] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdOsUnixAudioDynamicPower_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1u)
        /*flags=*/      0x1u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803d03u,
        /*paramSize=*/  sizeof(NV2080_CTRL_OS_UNIX_AUDIO_DYNAMIC_POWER_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdOsUnixAudioDynamicPower"
#endif
    },
    {               /*  [400] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdOsUnixVidmemPersistenceStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*flags=*/      0x13u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803d07u,
        /*paramSize=*/  sizeof(NV2080_CTRL_OS_UNIX_VIDMEM_PERSISTENCE_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdOsUnixVidmemPersistenceStatus"
#endif
    },
    {               /*  [401] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdOsUnixUpdateTgpStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*flags=*/      0x7u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20803d08u,
        /*paramSize=*/  sizeof(NV2080_CTRL_OS_UNIX_UPDATE_TGP_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdOsUnixUpdateTgpStatus"
#endif
    },
    {               /*  [402] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdGetAvailableHshubMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
        /*flags=*/      0xa50u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x20804101u,
        /*paramSize=*/  sizeof(NV2080_CTRL_CMD_HSHUB_GET_AVAILABLE_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdGetAvailableHshubMask"
#endif
    },
    {               /*  [403] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamples_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x2080a083u,
        /*paramSize=*/  sizeof(NV2080_CTRL_PERF_GET_GPUMON_PERFMON_UTIL_SAMPLES_PARAM),
        /*pClassInfo=*/ &(__nvoc_class_def_Subdevice.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamples"
#endif
    },

};

const struct NVOC_EXPORT_INFO __nvoc_export_info_Subdevice =
{
    /*numEntries=*/     404,
    /*pExportEntries=*/ __nvoc_exported_method_def_Subdevice
};

void __nvoc_dtor_GpuResource(GpuResource*);
void __nvoc_dtor_Notifier(Notifier*);
void __nvoc_dtor_Subdevice(Subdevice *pThis) {
    __nvoc_subdeviceDestruct(pThis);
    __nvoc_dtor_GpuResource(&pThis->__nvoc_base_GpuResource);
    __nvoc_dtor_Notifier(&pThis->__nvoc_base_Notifier);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_Subdevice(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);
}

NV_STATUS __nvoc_ctor_GpuResource(GpuResource* , struct CALL_CONTEXT *, struct RS_RES_ALLOC_PARAMS_INTERNAL *);
NV_STATUS __nvoc_ctor_Notifier(Notifier* , struct CALL_CONTEXT *);
NV_STATUS __nvoc_ctor_Subdevice(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_GpuResource(&pThis->__nvoc_base_GpuResource, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_Subdevice_fail_GpuResource;
    status = __nvoc_ctor_Notifier(&pThis->__nvoc_base_Notifier, arg_pCallContext);
    if (status != NV_OK) goto __nvoc_ctor_Subdevice_fail_Notifier;
    __nvoc_init_dataField_Subdevice(pThis, pRmhalspecowner);

    status = __nvoc_subdeviceConstruct(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_Subdevice_fail__init;
    goto __nvoc_ctor_Subdevice_exit; // Success

__nvoc_ctor_Subdevice_fail__init:
    __nvoc_dtor_Notifier(&pThis->__nvoc_base_Notifier);
__nvoc_ctor_Subdevice_fail_Notifier:
    __nvoc_dtor_GpuResource(&pThis->__nvoc_base_GpuResource);
__nvoc_ctor_Subdevice_fail_GpuResource:
__nvoc_ctor_Subdevice_exit:

    return status;
}

static void __nvoc_init_funcTable_Subdevice_1(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);

    pThis->__subdevicePreDestruct__ = &subdevicePreDestruct_IMPL;

    pThis->__subdeviceInternalControlForward__ = &subdeviceInternalControlForward_IMPL;

    pThis->__subdeviceControlFilter__ = &subdeviceControlFilter_IMPL;

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBiosGetInfoV2__ = &subdeviceCtrlCmdBiosGetInfoV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBiosGetSKUInfo__ = &subdeviceCtrlCmdBiosGetSKUInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBiosGetPostTime__ = &subdeviceCtrlCmdBiosGetPostTime_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBiosGetUefiSupport__ = &subdeviceCtrlCmdBiosGetUefiSupport_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
    pThis->__subdeviceCtrlCmdMcGetArchInfo__ = &subdeviceCtrlCmdMcGetArchInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdMcGetManufacturer__ = &subdeviceCtrlCmdMcGetManufacturer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdMcQueryHostclkSlowdownStatus__ = &subdeviceCtrlCmdMcQueryHostclkSlowdownStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdMcSetHostclkSlowdownStatus__ = &subdeviceCtrlCmdMcSetHostclkSlowdownStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__subdeviceCtrlCmdMcChangeReplayableFaultOwnership__ = &subdeviceCtrlCmdMcChangeReplayableFaultOwnership_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdMcServiceInterrupts__ = &subdeviceCtrlCmdMcServiceInterrupts_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdDmaInvalidateTLB__ = &subdeviceCtrlCmdDmaInvalidateTLB_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdDmaGetInfo__ = &subdeviceCtrlCmdDmaGetInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdBusGetPciInfo__ = &subdeviceCtrlCmdBusGetPciInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdBusGetInfo__ = &subdeviceCtrlCmdBusGetInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdBusGetInfoV2__ = &subdeviceCtrlCmdBusGetInfoV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdBusGetPciBarInfo__ = &subdeviceCtrlCmdBusGetPciBarInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdBusSetPcieSpeed__ = &subdeviceCtrlCmdBusSetPcieSpeed_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdBusSetPcieLinkWidth__ = &subdeviceCtrlCmdBusSetPcieLinkWidth_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdBusSetHwbcUpstreamPcieSpeed__ = &subdeviceCtrlCmdBusSetHwbcUpstreamPcieSpeed_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdBusGetHwbcUpstreamPcieSpeed__ = &subdeviceCtrlCmdBusGetHwbcUpstreamPcieSpeed_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdBusHWBCGetUpstreamBAR0__ = &subdeviceCtrlCmdBusHWBCGetUpstreamBAR0_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusServiceGpuMultifunctionState__ = &subdeviceCtrlCmdBusServiceGpuMultifunctionState_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusGetPexCounters__ = &subdeviceCtrlCmdBusGetPexCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdBusGetBFD__ = &subdeviceCtrlCmdBusGetBFD_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdBusGetAspmDisableFlags__ = &subdeviceCtrlCmdBusGetAspmDisableFlags_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusControlPublicAspmBits__ = &subdeviceCtrlCmdBusControlPublicAspmBits_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusClearPexCounters__ = &subdeviceCtrlCmdBusClearPexCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusGetPexUtilCounters__ = &subdeviceCtrlCmdBusGetPexUtilCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusClearPexUtilCounters__ = &subdeviceCtrlCmdBusClearPexUtilCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusFreezePexCounters__ = &subdeviceCtrlCmdBusFreezePexCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusGetPexLaneCounters__ = &subdeviceCtrlCmdBusGetPexLaneCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusGetPcieLtrLatency__ = &subdeviceCtrlCmdBusGetPcieLtrLatency_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusSetPcieLtrLatency__ = &subdeviceCtrlCmdBusSetPcieLtrLatency_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdBusGetNvlinkPeerIdMask__ = &subdeviceCtrlCmdBusGetNvlinkPeerIdMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusSetEomParameters__ = &subdeviceCtrlCmdBusSetEomParameters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusGetUphyDlnCfgSpace__ = &subdeviceCtrlCmdBusGetUphyDlnCfgSpace_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusGetEomStatus__ = &subdeviceCtrlCmdBusGetEomStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x6210u)
    pThis->__subdeviceCtrlCmdBusGetPcieReqAtomicsCaps__ = &subdeviceCtrlCmdBusGetPcieReqAtomicsCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x6210u)
    pThis->__subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics__ = &subdeviceCtrlCmdBusGetPcieSupportedGpuAtomics_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusGetC2CInfo__ = &subdeviceCtrlCmdBusGetC2CInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdBusGetC2CErrorInfo__ = &subdeviceCtrlCmdBusGetC2CErrorInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10200u)
    pThis->__subdeviceCtrlCmdBusSysmemAccess__ = &subdeviceCtrlCmdBusSysmemAccess_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdBusGetNvlinkCaps__ = &subdeviceCtrlCmdBusGetNvlinkCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
    pThis->__subdeviceCtrlCmdBusGetNvlinkStatus__ = &subdeviceCtrlCmdBusGetNvlinkStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGetNvlinkCounters__ = &subdeviceCtrlCmdGetNvlinkCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdClearNvlinkCounters__ = &subdeviceCtrlCmdClearNvlinkCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdNvlinkGetLinkFatalErrorCounts__ = &subdeviceCtrlCmdNvlinkGetLinkFatalErrorCounts_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkSetupEom__ = &subdeviceCtrlCmdNvlinkSetupEom_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdNvlinkGetPowerState__ = &subdeviceCtrlCmdNvlinkGetPowerState_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdNvlinkReadTpCounters__ = &subdeviceCtrlCmdNvlinkReadTpCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdNvlinkGetLpCounters__ = &subdeviceCtrlCmdNvlinkGetLpCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkEnableNvlinkPeer__ = &subdeviceCtrlCmdNvlinkEnableNvlinkPeer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkCoreCallback__ = &subdeviceCtrlCmdNvlinkCoreCallback_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkGetAliEnabled__ = &subdeviceCtrlCmdNvlinkGetAliEnabled_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkSetLoopbackMode__ = &subdeviceCtrlCmdNvlinkSetLoopbackMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkUpdateRemoteLocalSid__ = &subdeviceCtrlCmdNvlinkUpdateRemoteLocalSid_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkUpdateHshubMux__ = &subdeviceCtrlCmdNvlinkUpdateHshubMux_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkPreSetupNvlinkPeer__ = &subdeviceCtrlCmdNvlinkPreSetupNvlinkPeer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkPostSetupNvlinkPeer__ = &subdeviceCtrlCmdNvlinkPostSetupNvlinkPeer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkRemoveNvlinkMapping__ = &subdeviceCtrlCmdNvlinkRemoveNvlinkMapping_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkSaveRestoreHshubState__ = &subdeviceCtrlCmdNvlinkSaveRestoreHshubState_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkProgramBufferready__ = &subdeviceCtrlCmdNvlinkProgramBufferready_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkUpdateCurrentConfig__ = &subdeviceCtrlCmdNvlinkUpdateCurrentConfig_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkUpdatePeerLinkMask__ = &subdeviceCtrlCmdNvlinkUpdatePeerLinkMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkUpdateLinkConnection__ = &subdeviceCtrlCmdNvlinkUpdateLinkConnection_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkEnableLinksPostTopology__ = &subdeviceCtrlCmdNvlinkEnableLinksPostTopology_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkPreLinkTrainAli__ = &subdeviceCtrlCmdNvlinkPreLinkTrainAli_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkGetRefreshCounters__ = &subdeviceCtrlCmdNvlinkGetRefreshCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkClearRefreshCounters__ = &subdeviceCtrlCmdNvlinkClearRefreshCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkGetLinkMaskPostRxDet__ = &subdeviceCtrlCmdNvlinkGetLinkMaskPostRxDet_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkLinkTrainAli__ = &subdeviceCtrlCmdNvlinkLinkTrainAli_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkGetNvlinkDeviceInfo__ = &subdeviceCtrlCmdNvlinkGetNvlinkDeviceInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkGetIoctrlDeviceInfo__ = &subdeviceCtrlCmdNvlinkGetIoctrlDeviceInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkProgramLinkSpeed__ = &subdeviceCtrlCmdNvlinkProgramLinkSpeed_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkAreLinksTrained__ = &subdeviceCtrlCmdNvlinkAreLinksTrained_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkResetLinks__ = &subdeviceCtrlCmdNvlinkResetLinks_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkDisableDlInterrupts__ = &subdeviceCtrlCmdNvlinkDisableDlInterrupts_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkGetLinkAndClockInfo__ = &subdeviceCtrlCmdNvlinkGetLinkAndClockInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkSetupNvlinkSysmem__ = &subdeviceCtrlCmdNvlinkSetupNvlinkSysmem_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkProcessForcedConfigs__ = &subdeviceCtrlCmdNvlinkProcessForcedConfigs_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkSyncLaneShutdownProps__ = &subdeviceCtrlCmdNvlinkSyncLaneShutdownProps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkEnableSysmemNvlinkAts__ = &subdeviceCtrlCmdNvlinkEnableSysmemNvlinkAts_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkHshubGetSysmemNvlinkMask__ = &subdeviceCtrlCmdNvlinkHshubGetSysmemNvlinkMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkGetSetNvswitchFlaAddr__ = &subdeviceCtrlCmdNvlinkGetSetNvswitchFlaAddr_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x201u)
    pThis->__subdeviceCtrlCmdNvlinkSyncLinkMasksAndVbiosInfo__ = &subdeviceCtrlCmdNvlinkSyncLinkMasksAndVbiosInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkEnableLinks__ = &subdeviceCtrlCmdNvlinkEnableLinks_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkProcessInitDisabledLinks__ = &subdeviceCtrlCmdNvlinkProcessInitDisabledLinks_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdNvlinkEomControl__ = &subdeviceCtrlCmdNvlinkEomControl_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdI2cReadBuffer__ = &subdeviceCtrlCmdI2cReadBuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdI2cWriteBuffer__ = &subdeviceCtrlCmdI2cWriteBuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdI2cReadReg__ = &subdeviceCtrlCmdI2cReadReg_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdI2cWriteReg__ = &subdeviceCtrlCmdI2cWriteReg_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamples__ = &subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamples_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2__ = &subdeviceCtrlCmdPerfGetGpumonPerfmonUtilSamplesV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdPerfRatedTdpGetControl__ = &subdeviceCtrlCmdPerfRatedTdpGetControl_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdPerfRatedTdpSetControl__ = &subdeviceCtrlCmdPerfRatedTdpSetControl_a2e9a2;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdPerfReservePerfmonHw__ = &subdeviceCtrlCmdPerfReservePerfmonHw_3f0664;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
    pThis->__subdeviceCtrlCmdKPerfBoost__ = &subdeviceCtrlCmdKPerfBoost_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFbGetFBRegionInfo__ = &subdeviceCtrlCmdFbGetFBRegionInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFbGetBar1Offset__ = &subdeviceCtrlCmdFbGetBar1Offset_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdFbIsKind__ = &subdeviceCtrlCmdFbIsKind_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
    pThis->__subdeviceCtrlCmdFbGetMemAlignment__ = &subdeviceCtrlCmdFbGetMemAlignment_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdFbGetHeapReservationSize__ = &subdeviceCtrlCmdFbGetHeapReservationSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdFbGetInfo__ = &subdeviceCtrlCmdFbGetInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdFbGetInfoV2__ = &subdeviceCtrlCmdFbGetInfoV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFbGetCarveoutAddressInfo__ = &subdeviceCtrlCmdFbGetCarveoutAddressInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFbGetCalibrationLockFailed__ = &subdeviceCtrlCmdFbGetCalibrationLockFailed_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFbFlushGpuCache__ = &subdeviceCtrlCmdFbFlushGpuCache_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFbSetGpuCacheAllocPolicy__ = &subdeviceCtrlCmdFbSetGpuCacheAllocPolicy_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFbGetGpuCacheAllocPolicy__ = &subdeviceCtrlCmdFbGetGpuCacheAllocPolicy_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFbSetGpuCacheAllocPolicyV2__ = &subdeviceCtrlCmdFbSetGpuCacheAllocPolicyV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFbGetGpuCacheAllocPolicyV2__ = &subdeviceCtrlCmdFbGetGpuCacheAllocPolicyV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFbGetGpuCacheInfo__ = &subdeviceCtrlCmdFbGetGpuCacheInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__subdeviceCtrlCmdFbGetCliManagedOfflinedPages__ = &subdeviceCtrlCmdFbGetCliManagedOfflinedPages_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFbGetOfflinedPages__ = &subdeviceCtrlCmdFbGetOfflinedPages_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdFbSetupVprRegion__ = &subdeviceCtrlCmdFbSetupVprRegion_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
    pThis->__subdeviceCtrlCmdFbGetLTCInfoForFBP__ = &subdeviceCtrlCmdFbGetLTCInfoForFBP_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdFbGetCompBitCopyConstructInfo__ = &subdeviceCtrlCmdFbGetCompBitCopyConstructInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdFbPatchPbrForMining__ = &subdeviceCtrlCmdFbPatchPbrForMining_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFbGetRemappedRows__ = &subdeviceCtrlCmdFbGetRemappedRows_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFbGetFsInfo__ = &subdeviceCtrlCmdFbGetFsInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFbGetRowRemapperHistogram__ = &subdeviceCtrlCmdFbGetRowRemapperHistogram_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdFbGetDynamicOfflinedPages__ = &subdeviceCtrlCmdFbGetDynamicOfflinedPages_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__subdeviceCtrlCmdFbUpdateNumaStatus__ = &subdeviceCtrlCmdFbUpdateNumaStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__subdeviceCtrlCmdFbGetNumaInfo__ = &subdeviceCtrlCmdFbGetNumaInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdMemSysGetStaticConfig__ = &subdeviceCtrlCmdMemSysGetStaticConfig_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdMemSysSetPartitionableMem__ = &subdeviceCtrlCmdMemSysSetPartitionableMem_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdKMemSysGetMIGMemoryConfig__ = &subdeviceCtrlCmdKMemSysGetMIGMemoryConfig_133e5e;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFbSetZbcReferenced__ = &subdeviceCtrlCmdFbSetZbcReferenced_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdMemSysL2InvalidateEvict__ = &subdeviceCtrlCmdMemSysL2InvalidateEvict_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdMemSysFlushL2AllRamsAndCaches__ = &subdeviceCtrlCmdMemSysFlushL2AllRamsAndCaches_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdMemSysDisableNvlinkPeers__ = &subdeviceCtrlCmdMemSysDisableNvlinkPeers_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdMemSysProgramRawCompressionMode__ = &subdeviceCtrlCmdMemSysProgramRawCompressionMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable__ = &subdeviceCtrlCmdMemSysGetMIGMemoryPartitionTable_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdFbGetCtagsForCbcEviction__ = &subdeviceCtrlCmdFbGetCtagsForCbcEviction_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdFbCBCOp__ = &subdeviceCtrlCmdFbCBCOp_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdFbSetRrd__ = &subdeviceCtrlCmdFbSetRrd_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdFbSetReadLimit__ = &subdeviceCtrlCmdFbSetReadLimit_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdFbSetWriteLimit__ = &subdeviceCtrlCmdFbSetWriteLimit_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdSetGpfifo__ = &subdeviceCtrlCmdSetGpfifo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
    pThis->__subdeviceCtrlCmdSetOperationalProperties__ = &subdeviceCtrlCmdSetOperationalProperties_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdFifoBindEngines__ = &subdeviceCtrlCmdFifoBindEngines_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGetPhysicalChannelCount__ = &subdeviceCtrlCmdGetPhysicalChannelCount_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFifoGetInfo__ = &subdeviceCtrlCmdFifoGetInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFifoDisableChannels__ = &subdeviceCtrlCmdFifoDisableChannels_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
    pThis->__subdeviceCtrlCmdFifoDisableUsermodeChannels__ = &subdeviceCtrlCmdFifoDisableUsermodeChannels_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__subdeviceCtrlCmdFifoGetChannelMemInfo__ = &subdeviceCtrlCmdFifoGetChannelMemInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdFifoGetUserdLocation__ = &subdeviceCtrlCmdFifoGetUserdLocation_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
    pThis->__subdeviceCtrlCmdFifoGetDeviceInfoTable__ = &subdeviceCtrlCmdFifoGetDeviceInfoTable_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
    pThis->__subdeviceCtrlCmdFifoClearFaultedBit__ = &subdeviceCtrlCmdFifoClearFaultedBit_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2310u)
    pThis->__subdeviceCtrlCmdFifoRunlistSetSchedPolicy__ = &subdeviceCtrlCmdFifoRunlistSetSchedPolicy_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__subdeviceCtrlCmdFifoUpdateChannelInfo__ = &subdeviceCtrlCmdFifoUpdateChannelInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdInternalFifoPromoteRunlistBuffers__ = &subdeviceCtrlCmdInternalFifoPromoteRunlistBuffers_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2610u)
    pThis->__subdeviceCtrlCmdInternalFifoGetNumChannels__ = &subdeviceCtrlCmdInternalFifoGetNumChannels_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
    pThis->__subdeviceCtrlCmdKGrGetInfo__ = &subdeviceCtrlCmdKGrGetInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
    pThis->__subdeviceCtrlCmdKGrGetInfoV2__ = &subdeviceCtrlCmdKGrGetInfoV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
    pThis->__subdeviceCtrlCmdKGrGetCapsV2__ = &subdeviceCtrlCmdKGrGetCapsV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrGetCtxswModes__ = &subdeviceCtrlCmdKGrGetCtxswModes_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrCtxswZcullMode__ = &subdeviceCtrlCmdKGrCtxswZcullMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrCtxswZcullBind__ = &subdeviceCtrlCmdKGrCtxswZcullBind_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdKGrGetZcullInfo__ = &subdeviceCtrlCmdKGrGetZcullInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2010u)
    pThis->__subdeviceCtrlCmdKGrCtxswPmMode__ = &subdeviceCtrlCmdKGrCtxswPmMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrCtxswPmBind__ = &subdeviceCtrlCmdKGrCtxswPmBind_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrSetGpcTileMap__ = &subdeviceCtrlCmdKGrSetGpcTileMap_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrCtxswSmpcMode__ = &subdeviceCtrlCmdKGrCtxswSmpcMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrPcSamplingMode__ = &subdeviceCtrlCmdKGrPcSamplingMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrGetSmToGpcTpcMappings__ = &subdeviceCtrlCmdKGrGetSmToGpcTpcMappings_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdKGrGetGlobalSmOrder__ = &subdeviceCtrlCmdKGrGetGlobalSmOrder_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrSetCtxswPreemptionMode__ = &subdeviceCtrlCmdKGrSetCtxswPreemptionMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrCtxswPreemptionBind__ = &subdeviceCtrlCmdKGrCtxswPreemptionBind_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrGetROPInfo__ = &subdeviceCtrlCmdKGrGetROPInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrGetCtxswStats__ = &subdeviceCtrlCmdKGrGetCtxswStats_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
    pThis->__subdeviceCtrlCmdKGrGetCtxBufferSize__ = &subdeviceCtrlCmdKGrGetCtxBufferSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__subdeviceCtrlCmdKGrGetCtxBufferInfo__ = &subdeviceCtrlCmdKGrGetCtxBufferInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__subdeviceCtrlCmdKGrGetCtxBufferPtes__ = &subdeviceCtrlCmdKGrGetCtxBufferPtes_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrGetCurrentResidentChannel__ = &subdeviceCtrlCmdKGrGetCurrentResidentChannel_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrGetVatAlarmData__ = &subdeviceCtrlCmdKGrGetVatAlarmData_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrGetAttributeBufferSize__ = &subdeviceCtrlCmdKGrGetAttributeBufferSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
    pThis->__subdeviceCtrlCmdKGrGfxPoolQuerySize__ = &subdeviceCtrlCmdKGrGfxPoolQuerySize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
    pThis->__subdeviceCtrlCmdKGrGfxPoolInitialize__ = &subdeviceCtrlCmdKGrGfxPoolInitialize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
    pThis->__subdeviceCtrlCmdKGrGfxPoolAddSlots__ = &subdeviceCtrlCmdKGrGfxPoolAddSlots_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
    pThis->__subdeviceCtrlCmdKGrGfxPoolRemoveSlots__ = &subdeviceCtrlCmdKGrGfxPoolRemoveSlots_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrGetPpcMask__ = &subdeviceCtrlCmdKGrGetPpcMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrSetTpcPartitionMode__ = &subdeviceCtrlCmdKGrSetTpcPartitionMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrGetSmIssueRateModifier__ = &subdeviceCtrlCmdKGrGetSmIssueRateModifier_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrFecsBindEvtbufForUid__ = &subdeviceCtrlCmdKGrFecsBindEvtbufForUid_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x8010u)
    pThis->__subdeviceCtrlCmdKGrFecsBindEvtbufForUidV2__ = &subdeviceCtrlCmdKGrFecsBindEvtbufForUidV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x44u)
    pThis->__subdeviceCtrlCmdKGrGetPhysGpcMask__ = &subdeviceCtrlCmdKGrGetPhysGpcMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
    pThis->__subdeviceCtrlCmdKGrGetGpcMask__ = &subdeviceCtrlCmdKGrGetGpcMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrGetTpcMask__ = &subdeviceCtrlCmdKGrGetTpcMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrGetEngineContextProperties__ = &subdeviceCtrlCmdKGrGetEngineContextProperties_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrGetNumTpcsForGpc__ = &subdeviceCtrlCmdKGrGetNumTpcsForGpc_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdKGrGetGpcTileMap__ = &subdeviceCtrlCmdKGrGetGpcTileMap_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
    pThis->__subdeviceCtrlCmdKGrGetZcullMask__ = &subdeviceCtrlCmdKGrGetZcullMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdKGrGetGfxGpcAndTpcInfo__ = &subdeviceCtrlCmdKGrGetGfxGpcAndTpcInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetInfo__ = &subdeviceCtrlCmdKGrInternalStaticGetInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetCaps__ = &subdeviceCtrlCmdKGrInternalStaticGetCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetGlobalSmOrder__ = &subdeviceCtrlCmdKGrInternalStaticGetGlobalSmOrder_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetFloorsweepingMasks__ = &subdeviceCtrlCmdKGrInternalStaticGetFloorsweepingMasks_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetPpcMasks__ = &subdeviceCtrlCmdKGrInternalStaticGetPpcMasks_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetZcullInfo__ = &subdeviceCtrlCmdKGrInternalStaticGetZcullInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetRopInfo__ = &subdeviceCtrlCmdKGrInternalStaticGetRopInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetContextBuffersInfo__ = &subdeviceCtrlCmdKGrInternalStaticGetContextBuffersInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifier__ = &subdeviceCtrlCmdKGrInternalStaticGetSmIssueRateModifier_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetFecsRecordSize__ = &subdeviceCtrlCmdKGrInternalStaticGetFecsRecordSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetFecsTraceDefines__ = &subdeviceCtrlCmdKGrInternalStaticGetFecsTraceDefines_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdKGrInternalStaticGetPdbProperties__ = &subdeviceCtrlCmdKGrInternalStaticGetPdbProperties_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__subdeviceCtrlCmdGpuGetCachedInfo__ = &subdeviceCtrlCmdGpuGetCachedInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdGpuGetInfoV2__ = &subdeviceCtrlCmdGpuGetInfoV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuGetIpVersion__ = &subdeviceCtrlCmdGpuGetIpVersion_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetPhysicalBridgeVersionInfo__ = &subdeviceCtrlCmdGpuGetPhysicalBridgeVersionInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetAllBridgesUpstreamOfGpu__ = &subdeviceCtrlCmdGpuGetAllBridgesUpstreamOfGpu_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuSetOptimusInfo__ = &subdeviceCtrlCmdGpuSetOptimusInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa10u)
    pThis->__subdeviceCtrlCmdGpuGetNameString__ = &subdeviceCtrlCmdGpuGetNameString_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4a10u)
    pThis->__subdeviceCtrlCmdGpuGetShortNameString__ = &subdeviceCtrlCmdGpuGetShortNameString_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetEncoderCapacity__ = &subdeviceCtrlCmdGpuGetEncoderCapacity_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetNvencSwSessionStats__ = &subdeviceCtrlCmdGpuGetNvencSwSessionStats_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetNvencSwSessionInfo__ = &subdeviceCtrlCmdGpuGetNvencSwSessionInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetNvfbcSwSessionStats__ = &subdeviceCtrlCmdGpuGetNvfbcSwSessionStats_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetNvfbcSwSessionInfo__ = &subdeviceCtrlCmdGpuGetNvfbcSwSessionInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuSetFabricAddr__ = &subdeviceCtrlCmdGpuSetFabricAddr_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuSetPower__ = &subdeviceCtrlCmdGpuSetPower_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdGpuGetSdm__ = &subdeviceCtrlCmdGpuGetSdm_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
    pThis->__subdeviceCtrlCmdGpuSetSdm__ = &subdeviceCtrlCmdGpuSetSdm_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__subdeviceCtrlCmdGpuGetSimulationInfo__ = &subdeviceCtrlCmdGpuGetSimulationInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__subdeviceCtrlCmdGpuGetEngines__ = &subdeviceCtrlCmdGpuGetEngines_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__subdeviceCtrlCmdGpuGetEnginesV2__ = &subdeviceCtrlCmdGpuGetEnginesV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__subdeviceCtrlCmdGpuGetEngineClasslist__ = &subdeviceCtrlCmdGpuGetEngineClasslist_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdGpuGetEnginePartnerList__ = &subdeviceCtrlCmdGpuGetEnginePartnerList_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdGpuGetFermiGpcInfo__ = &subdeviceCtrlCmdGpuGetFermiGpcInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdGpuGetFermiTpcInfo__ = &subdeviceCtrlCmdGpuGetFermiTpcInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetFermiZcullInfo__ = &subdeviceCtrlCmdGpuGetFermiZcullInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetPesInfo__ = &subdeviceCtrlCmdGpuGetPesInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuExecRegOps__ = &subdeviceCtrlCmdGpuExecRegOps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuQueryMode__ = &subdeviceCtrlCmdGpuQueryMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4210u)
    pThis->__subdeviceCtrlCmdGpuGetInforomImageVersion__ = &subdeviceCtrlCmdGpuGetInforomImageVersion_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuGetInforomObjectVersion__ = &subdeviceCtrlCmdGpuGetInforomObjectVersion_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuQueryInforomEccSupport__ = &subdeviceCtrlCmdGpuQueryInforomEccSupport_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
    pThis->__subdeviceCtrlCmdGpuQueryEccStatus__ = &subdeviceCtrlCmdGpuQueryEccStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4210u)
    pThis->__subdeviceCtrlCmdGpuGetOEMBoardInfo__ = &subdeviceCtrlCmdGpuGetOEMBoardInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4210u)
    pThis->__subdeviceCtrlCmdGpuGetOEMInfo__ = &subdeviceCtrlCmdGpuGetOEMInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
    pThis->__subdeviceCtrlCmdGpuHandleGpuSR__ = &subdeviceCtrlCmdGpuHandleGpuSR_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x844u)
    pThis->__subdeviceCtrlCmdGpuSetComputeModeRules__ = &subdeviceCtrlCmdGpuSetComputeModeRules_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdGpuQueryComputeModeRules__ = &subdeviceCtrlCmdGpuQueryComputeModeRules_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdGpuAcquireComputeModeReservation__ = &subdeviceCtrlCmdGpuAcquireComputeModeReservation_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdGpuReleaseComputeModeReservation__ = &subdeviceCtrlCmdGpuReleaseComputeModeReservation_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
    pThis->__subdeviceCtrlCmdGpuInitializeCtx__ = &subdeviceCtrlCmdGpuInitializeCtx_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
    pThis->__subdeviceCtrlCmdGpuPromoteCtx__ = &subdeviceCtrlCmdGpuPromoteCtx_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2200u)
    pThis->__subdeviceCtrlCmdGpuEvictCtx__ = &subdeviceCtrlCmdGpuEvictCtx_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
    pThis->__subdeviceCtrlCmdGpuGetId__ = &subdeviceCtrlCmdGpuGetId_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
    pThis->__subdeviceCtrlCmdGpuGetGidInfo__ = &subdeviceCtrlCmdGpuGetGidInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuQueryIllumSupport__ = &subdeviceCtrlCmdGpuQueryIllumSupport_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuGetIllum__ = &subdeviceCtrlCmdGpuGetIllum_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuSetIllum__ = &subdeviceCtrlCmdGpuSetIllum_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuQueryScrubberStatus__ = &subdeviceCtrlCmdGpuQueryScrubberStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuGetVprCaps__ = &subdeviceCtrlCmdGpuGetVprCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuGetVprInfo__ = &subdeviceCtrlCmdGpuGetVprInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetPids__ = &subdeviceCtrlCmdGpuGetPids_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetPidInfo__ = &subdeviceCtrlCmdGpuGetPidInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuQueryFunctionStatus__ = &subdeviceCtrlCmdGpuQueryFunctionStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdGpuReportNonReplayableFault__ = &subdeviceCtrlCmdGpuReportNonReplayableFault_IMPL;
#endif
}

static void __nvoc_init_funcTable_Subdevice_2(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner) {
    RmVariantHal *rmVariantHal = &pRmhalspecowner->rmVariantHal;
    const unsigned long rmVariantHal_HalVarIdx = (unsigned long)rmVariantHal->__nvoc_HalVarIdx;
    PORT_UNREFERENCED_VARIABLE(pThis);
    PORT_UNREFERENCED_VARIABLE(pRmhalspecowner);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal);
    PORT_UNREFERENCED_VARIABLE(rmVariantHal_HalVarIdx);

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdGpuGetEngineFaultInfo__ = &subdeviceCtrlCmdGpuGetEngineFaultInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__subdeviceCtrlCmdGpuGetEngineRunlistPriBase__ = &subdeviceCtrlCmdGpuGetEngineRunlistPriBase_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetHwEngineId__ = &subdeviceCtrlCmdGpuGetHwEngineId_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x50u)
    pThis->__subdeviceCtrlCmdGpuGetMaxSupportedPageSize__ = &subdeviceCtrlCmdGpuGetMaxSupportedPageSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__subdeviceCtrlCmdGpuSetComputePolicyConfig__ = &subdeviceCtrlCmdGpuSetComputePolicyConfig_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetComputePolicyConfig__ = &subdeviceCtrlCmdGpuGetComputePolicyConfig_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__subdeviceCtrlCmdValidateMemMapRequest__ = &subdeviceCtrlCmdValidateMemMapRequest_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x12u)
    pThis->__subdeviceCtrlCmdGpuGetEngineLoadTimes__ = &subdeviceCtrlCmdGpuGetEngineLoadTimes_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdEventSetTrigger__ = &subdeviceCtrlCmdEventSetTrigger_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdEventSetTriggerFifo__ = &subdeviceCtrlCmdEventSetTriggerFifo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdEventSetNotification__ = &subdeviceCtrlCmdEventSetNotification_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdEventSetMemoryNotifies__ = &subdeviceCtrlCmdEventSetMemoryNotifies_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdEventSetSemaphoreMemory__ = &subdeviceCtrlCmdEventSetSemaphoreMemory_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdEventSetSemaMemValidation__ = &subdeviceCtrlCmdEventSetSemaMemValidation_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdTimerCancel__ = &subdeviceCtrlCmdTimerCancel_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdTimerSchedule__ = &subdeviceCtrlCmdTimerSchedule_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdTimerGetTime__ = &subdeviceCtrlCmdTimerGetTime_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdTimerGetRegisterOffset__ = &subdeviceCtrlCmdTimerGetRegisterOffset_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdTimerGetGpuCpuTimeCorrelationInfo__ = &subdeviceCtrlCmdTimerGetGpuCpuTimeCorrelationInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2010u)
    pThis->__subdeviceCtrlCmdTimerSetGrTickFreq__ = &subdeviceCtrlCmdTimerSetGrTickFreq_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__subdeviceCtrlCmdRcReadVirtualMem__ = &subdeviceCtrlCmdRcReadVirtualMem_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdRcGetErrorCount__ = &subdeviceCtrlCmdRcGetErrorCount_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdRcGetErrorV2__ = &subdeviceCtrlCmdRcGetErrorV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdRcSetCleanErrorHistory__ = &subdeviceCtrlCmdRcSetCleanErrorHistory_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdRcGetWatchdogInfo__ = &subdeviceCtrlCmdRcGetWatchdogInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdRcDisableWatchdog__ = &subdeviceCtrlCmdRcDisableWatchdog_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdRcSoftDisableWatchdog__ = &subdeviceCtrlCmdRcSoftDisableWatchdog_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdRcEnableWatchdog__ = &subdeviceCtrlCmdRcEnableWatchdog_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdRcReleaseWatchdogRequests__ = &subdeviceCtrlCmdRcReleaseWatchdogRequests_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalRcWatchdogTimeout__ = &subdeviceCtrlCmdInternalRcWatchdogTimeout_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdSetRcRecovery__ = &subdeviceCtrlCmdSetRcRecovery_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdGetRcRecovery__ = &subdeviceCtrlCmdGetRcRecovery_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdGetRcInfo__ = &subdeviceCtrlCmdGetRcInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdSetRcInfo__ = &subdeviceCtrlCmdSetRcInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdNvdGetDumpSize__ = &subdeviceCtrlCmdNvdGetDumpSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__subdeviceCtrlCmdNvdGetDump__ = &subdeviceCtrlCmdNvdGetDump_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
    pThis->__subdeviceCtrlCmdNvdGetNocatJournalRpt__ = &subdeviceCtrlCmdNvdGetNocatJournalRpt_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
    pThis->__subdeviceCtrlCmdNvdSetNocatJournalData__ = &subdeviceCtrlCmdNvdSetNocatJournalData_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdCeGetCaps__ = &subdeviceCtrlCmdCeGetCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdCeGetCapsV2__ = &subdeviceCtrlCmdCeGetCapsV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__subdeviceCtrlCmdCeGetAllCaps__ = &subdeviceCtrlCmdCeGetAllCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x211u)
    pThis->__subdeviceCtrlCmdCeGetCePceMask__ = &subdeviceCtrlCmdCeGetCePceMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdCeUpdatePceLceMappings__ = &subdeviceCtrlCmdCeUpdatePceLceMappings_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFlcnGetDmemUsage__ = &subdeviceCtrlCmdFlcnGetDmemUsage_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFlcnGetEngineArch__ = &subdeviceCtrlCmdFlcnGetEngineArch_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFlcnUstreamerQueueInfo__ = &subdeviceCtrlCmdFlcnUstreamerQueueInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFlcnUstreamerControlGet__ = &subdeviceCtrlCmdFlcnUstreamerControlGet_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdFlcnUstreamerControlSet__ = &subdeviceCtrlCmdFlcnUstreamerControlSet_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__subdeviceCtrlCmdFlcnGetCtxBufferInfo__ = &subdeviceCtrlCmdFlcnGetCtxBufferInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdFlcnGetCtxBufferSize__ = &subdeviceCtrlCmdFlcnGetCtxBufferSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdEccGetClientExposedCounters__ = &subdeviceCtrlCmdEccGetClientExposedCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuQueryEccConfiguration__ = &subdeviceCtrlCmdGpuQueryEccConfiguration_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdGpuSetEccConfiguration__ = &subdeviceCtrlCmdGpuSetEccConfiguration_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__subdeviceCtrlCmdGpuResetEccErrorStatus__ = &subdeviceCtrlCmdGpuResetEccErrorStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
    pThis->__subdeviceCtrlCmdFlaRange__ = &subdeviceCtrlCmdFlaRange_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
    pThis->__subdeviceCtrlCmdFlaSetupInstanceMemBlock__ = &subdeviceCtrlCmdFlaSetupInstanceMemBlock_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__subdeviceCtrlCmdFlaGetRange__ = &subdeviceCtrlCmdFlaGetRange_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1810u)
    pThis->__subdeviceCtrlCmdFlaGetFabricMemStats__ = &subdeviceCtrlCmdFlaGetFabricMemStats_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x211u)
    pThis->__subdeviceCtrlCmdGspGetFeatures__ = &subdeviceCtrlCmdGspGetFeatures_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetActivePartitionIds__ = &subdeviceCtrlCmdGpuGetActivePartitionIds_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__subdeviceCtrlCmdGpuGetPartitionCapacity__ = &subdeviceCtrlCmdGpuGetPartitionCapacity_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuDescribePartitions__ = &subdeviceCtrlCmdGpuDescribePartitions_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__subdeviceCtrlCmdGpuSetPartitioningMode__ = &subdeviceCtrlCmdGpuSetPartitioningMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__subdeviceCtrlCmdGrmgrGetGrFsInfo__ = &subdeviceCtrlCmdGrmgrGetGrFsInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuSetPartitions__ = &subdeviceCtrlCmdGpuSetPartitions_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetPartitions__ = &subdeviceCtrlCmdGpuGetPartitions_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__subdeviceCtrlCmdGpuGetComputeProfiles__ = &subdeviceCtrlCmdGpuGetComputeProfiles_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdInternalStaticKMIGmgrGetProfiles__ = &subdeviceCtrlCmdInternalStaticKMIGmgrGetProfiles_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdInternalStaticKMIGmgrGetPartitionableEngines__ = &subdeviceCtrlCmdInternalStaticKMIGmgrGetPartitionableEngines_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdInternalStaticKMIGmgrGetSwizzIdFbMemPageRanges__ = &subdeviceCtrlCmdInternalStaticKMIGmgrGetSwizzIdFbMemPageRanges_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2600u)
    pThis->__subdeviceCtrlCmdInternalStaticKMIGmgrGetComputeInstanceProfiles__ = &subdeviceCtrlCmdInternalStaticKMIGmgrGetComputeInstanceProfiles_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400u)
    pThis->__subdeviceCtrlCmdInternalKMIGmgrExportGPUInstance__ = &subdeviceCtrlCmdInternalKMIGmgrExportGPUInstance_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x400u)
    pThis->__subdeviceCtrlCmdInternalKMIGmgrImportGPUInstance__ = &subdeviceCtrlCmdInternalKMIGmgrImportGPUInstance_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x3u)
    pThis->__subdeviceCtrlCmdOsUnixGc6BlockerRefCnt__ = &subdeviceCtrlCmdOsUnixGc6BlockerRefCnt_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__subdeviceCtrlCmdOsUnixAllowDisallowGcoff__ = &subdeviceCtrlCmdOsUnixAllowDisallowGcoff_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1u)
    pThis->__subdeviceCtrlCmdOsUnixAudioDynamicPower__ = &subdeviceCtrlCmdOsUnixAudioDynamicPower_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
    pThis->__subdeviceCtrlCmdOsUnixVidmemPersistenceStatus__ = &subdeviceCtrlCmdOsUnixVidmemPersistenceStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
    pThis->__subdeviceCtrlCmdOsUnixUpdateTgpStatus__ = &subdeviceCtrlCmdOsUnixUpdateTgpStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdDisplayGetIpVersion__ = &subdeviceCtrlCmdDisplayGetIpVersion_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdDisplayGetStaticInfo__ = &subdeviceCtrlCmdDisplayGetStaticInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdDisplaySetChannelPushbuffer__ = &subdeviceCtrlCmdDisplaySetChannelPushbuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdDisplayWriteInstMem__ = &subdeviceCtrlCmdDisplayWriteInstMem_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdDisplaySetupRgLineIntr__ = &subdeviceCtrlCmdDisplaySetupRgLineIntr_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdDisplaySetImportedImpData__ = &subdeviceCtrlCmdDisplaySetImportedImpData_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdDisplayGetDisplayMask__ = &subdeviceCtrlCmdDisplayGetDisplayMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
    pThis->__subdeviceCtrlCmdMsencGetCaps__ = &subdeviceCtrlCmdMsencGetCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalUvmRegisterAccessCntrBuffer__ = &subdeviceCtrlCmdInternalUvmRegisterAccessCntrBuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalUvmUnregisterAccessCntrBuffer__ = &subdeviceCtrlCmdInternalUvmUnregisterAccessCntrBuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalUvmServiceAccessCntrBuffer__ = &subdeviceCtrlCmdInternalUvmServiceAccessCntrBuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalUvmGetAccessCntrBufferSize__ = &subdeviceCtrlCmdInternalUvmGetAccessCntrBufferSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
    pThis->__subdeviceCtrlCmdInternalGetChipInfo__ = &subdeviceCtrlCmdInternalGetChipInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
    pThis->__subdeviceCtrlCmdInternalGetUserRegisterAccessMap__ = &subdeviceCtrlCmdInternalGetUserRegisterAccessMap_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
    pThis->__subdeviceCtrlCmdInternalGetDeviceInfoTable__ = &subdeviceCtrlCmdInternalGetDeviceInfoTable_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalGetConstructedFalconInfo__ = &subdeviceCtrlCmdInternalGetConstructedFalconInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalRecoverAllComputeContexts__ = &subdeviceCtrlCmdInternalRecoverAllComputeContexts_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalGetSmcMode__ = &subdeviceCtrlCmdInternalGetSmcMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalBusBindLocalGfidForP2p__ = &subdeviceCtrlCmdInternalBusBindLocalGfidForP2p_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalBusBindRemoteGfidForP2p__ = &subdeviceCtrlCmdInternalBusBindRemoteGfidForP2p_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalBusFlushWithSysmembar__ = &subdeviceCtrlCmdInternalBusFlushWithSysmembar_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalBusSetupP2pMailboxLocal__ = &subdeviceCtrlCmdInternalBusSetupP2pMailboxLocal_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalBusSetupP2pMailboxRemote__ = &subdeviceCtrlCmdInternalBusSetupP2pMailboxRemote_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalBusDestroyP2pMailbox__ = &subdeviceCtrlCmdInternalBusDestroyP2pMailbox_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalBusCreateC2cPeerMapping__ = &subdeviceCtrlCmdInternalBusCreateC2cPeerMapping_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalBusRemoveC2cPeerMapping__ = &subdeviceCtrlCmdInternalBusRemoveC2cPeerMapping_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdGmmuGetStaticInfo__ = &subdeviceCtrlCmdGmmuGetStaticInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalGmmuRegisterFaultBuffer__ = &subdeviceCtrlCmdInternalGmmuRegisterFaultBuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalGmmuUnregisterFaultBuffer__ = &subdeviceCtrlCmdInternalGmmuUnregisterFaultBuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalGmmuRegisterClientShadowFaultBuffer__ = &subdeviceCtrlCmdInternalGmmuRegisterClientShadowFaultBuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalGmmuUnregisterClientShadowFaultBuffer__ = &subdeviceCtrlCmdInternalGmmuUnregisterClientShadowFaultBuffer_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xe40u)
    pThis->__subdeviceCtrlCmdCeGetPhysicalCaps__ = &subdeviceCtrlCmdCeGetPhysicalCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xe40u)
    pThis->__subdeviceCtrlCmdCeGetAllPhysicalCaps__ = &subdeviceCtrlCmdCeGetAllPhysicalCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdCeUpdateClassDB__ = &subdeviceCtrlCmdCeUpdateClassDB_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4200u)
    pThis->__subdeviceCtrlCmdCeGetFaultMethodBufferSize__ = &subdeviceCtrlCmdCeGetFaultMethodBufferSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4600u)
    pThis->__subdeviceCtrlCmdCeGetHubPceMask__ = &subdeviceCtrlCmdCeGetHubPceMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdIntrGetKernelTable__ = &subdeviceCtrlCmdIntrGetKernelTable_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
    pThis->__subdeviceCtrlCmdInternalPerfCudaLimitDisable__ = &subdeviceCtrlCmdInternalPerfCudaLimitDisable_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalPerfOptpCliClear__ = &subdeviceCtrlCmdInternalPerfOptpCliClear_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
    pThis->__subdeviceCtrlCmdInternalPerfBoostSet_2x__ = &subdeviceCtrlCmdInternalPerfBoostSet_2x_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
    pThis->__subdeviceCtrlCmdInternalPerfBoostSet_3x__ = &subdeviceCtrlCmdInternalPerfBoostSet_3x_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
    pThis->__subdeviceCtrlCmdInternalPerfBoostClear_3x__ = &subdeviceCtrlCmdInternalPerfBoostClear_3x_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalPerfGpuBoostSyncSetControl__ = &subdeviceCtrlCmdInternalPerfGpuBoostSyncSetControl_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalPerfGpuBoostSyncGetInfo__ = &subdeviceCtrlCmdInternalPerfGpuBoostSyncGetInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalPerfSyncGpuBoostSetLimits__ = &subdeviceCtrlCmdInternalPerfSyncGpuBoostSetLimits_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
    pThis->__subdeviceCtrlCmdInternalPerfPerfmonClientReservationCheck__ = &subdeviceCtrlCmdInternalPerfPerfmonClientReservationCheck_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x610u)
    pThis->__subdeviceCtrlCmdInternalPerfPerfmonClientReservationSet__ = &subdeviceCtrlCmdInternalPerfPerfmonClientReservationSet_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalPerfCfControllerSetMaxVGpuVMCount__ = &subdeviceCtrlCmdInternalPerfCfControllerSetMaxVGpuVMCount_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdBifGetStaticInfo__ = &subdeviceCtrlCmdBifGetStaticInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdBifGetAspmL1Flags__ = &subdeviceCtrlCmdBifGetAspmL1Flags_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdBifSetPcieRo__ = &subdeviceCtrlCmdBifSetPcieRo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdHshubPeerConnConfig__ = &subdeviceCtrlCmdHshubPeerConnConfig_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdHshubFirstLinkPeerId__ = &subdeviceCtrlCmdHshubFirstLinkPeerId_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdHshubGetHshubIdForLinks__ = &subdeviceCtrlCmdHshubGetHshubIdForLinks_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdHshubGetNumUnits__ = &subdeviceCtrlCmdHshubGetNumUnits_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdHshubNextHshubId__ = &subdeviceCtrlCmdHshubNextHshubId_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalNvlinkEnableComputePeerAddr__ = &subdeviceCtrlCmdInternalNvlinkEnableComputePeerAddr_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalNvlinkGetSetNvswitchFabricAddr__ = &subdeviceCtrlCmdInternalNvlinkGetSetNvswitchFabricAddr_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalNvlinkGetNumActiveLinksPerIoctrl__ = &subdeviceCtrlCmdInternalNvlinkGetNumActiveLinksPerIoctrl_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalNvlinkGetTotalNumLinksPerIoctrl__ = &subdeviceCtrlCmdInternalNvlinkGetTotalNumLinksPerIoctrl_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalGetPcieP2pCaps__ = &subdeviceCtrlCmdInternalGetPcieP2pCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdInternalGetCoherentFbApertureSize__ = &subdeviceCtrlCmdInternalGetCoherentFbApertureSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xa50u)
    pThis->__subdeviceCtrlCmdGetAvailableHshubMask__ = &subdeviceCtrlCmdGetAvailableHshubMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdCcuMap__ = &subdeviceCtrlCmdCcuMap_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__subdeviceCtrlCmdCcuUnmap__ = &subdeviceCtrlCmdCcuUnmap_IMPL;
#endif

    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__resPreDestruct__ = &__nvoc_thunk_Subdevice_resPreDestruct;

    pThis->__nvoc_base_GpuResource.__gpuresInternalControlForward__ = &__nvoc_thunk_Subdevice_gpuresInternalControlForward;

    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__resControlFilter__ = &__nvoc_thunk_Subdevice_resControlFilter;

    pThis->__subdeviceShareCallback__ = &__nvoc_thunk_GpuResource_subdeviceShareCallback;

    pThis->__subdeviceMapTo__ = &__nvoc_thunk_RsResource_subdeviceMapTo;

    pThis->__subdeviceGetOrAllocNotifShare__ = &__nvoc_thunk_Notifier_subdeviceGetOrAllocNotifShare;

    pThis->__subdeviceCheckMemInterUnmap__ = &__nvoc_thunk_RmResource_subdeviceCheckMemInterUnmap;

    pThis->__subdeviceGetMapAddrSpace__ = &__nvoc_thunk_GpuResource_subdeviceGetMapAddrSpace;

    pThis->__subdeviceSetNotificationShare__ = &__nvoc_thunk_Notifier_subdeviceSetNotificationShare;

    pThis->__subdeviceGetRefCount__ = &__nvoc_thunk_RsResource_subdeviceGetRefCount;

    pThis->__subdeviceAddAdditionalDependants__ = &__nvoc_thunk_RsResource_subdeviceAddAdditionalDependants;

    pThis->__subdeviceControl_Prologue__ = &__nvoc_thunk_RmResource_subdeviceControl_Prologue;

    pThis->__subdeviceGetRegBaseOffsetAndSize__ = &__nvoc_thunk_GpuResource_subdeviceGetRegBaseOffsetAndSize;

    pThis->__subdeviceUnmapFrom__ = &__nvoc_thunk_RsResource_subdeviceUnmapFrom;

    pThis->__subdeviceControl_Epilogue__ = &__nvoc_thunk_RmResource_subdeviceControl_Epilogue;

    pThis->__subdeviceControlLookup__ = &__nvoc_thunk_RsResource_subdeviceControlLookup;

    pThis->__subdeviceGetInternalObjectHandle__ = &__nvoc_thunk_GpuResource_subdeviceGetInternalObjectHandle;

    pThis->__subdeviceControl__ = &__nvoc_thunk_GpuResource_subdeviceControl;

    pThis->__subdeviceUnmap__ = &__nvoc_thunk_GpuResource_subdeviceUnmap;

    pThis->__subdeviceGetMemInterMapParams__ = &__nvoc_thunk_RmResource_subdeviceGetMemInterMapParams;

    pThis->__subdeviceGetMemoryMappingDescriptor__ = &__nvoc_thunk_RmResource_subdeviceGetMemoryMappingDescriptor;

    pThis->__subdeviceUnregisterEvent__ = &__nvoc_thunk_Notifier_subdeviceUnregisterEvent;

    pThis->__subdeviceCanCopy__ = &__nvoc_thunk_RsResource_subdeviceCanCopy;

    pThis->__subdeviceGetNotificationListPtr__ = &__nvoc_thunk_Notifier_subdeviceGetNotificationListPtr;

    pThis->__subdeviceGetNotificationShare__ = &__nvoc_thunk_Notifier_subdeviceGetNotificationShare;

    pThis->__subdeviceMap__ = &__nvoc_thunk_GpuResource_subdeviceMap;

    pThis->__subdeviceAccessCallback__ = &__nvoc_thunk_RmResource_subdeviceAccessCallback;
}

void __nvoc_init_funcTable_Subdevice(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner) {
    __nvoc_init_funcTable_Subdevice_1(pThis, pRmhalspecowner);
    __nvoc_init_funcTable_Subdevice_2(pThis, pRmhalspecowner);
}

void __nvoc_init_GpuResource(GpuResource*);
void __nvoc_init_Notifier(Notifier*);
void __nvoc_init_Subdevice(Subdevice *pThis, RmHalspecOwner *pRmhalspecowner) {
    pThis->__nvoc_pbase_Subdevice = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource;
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource;
    pThis->__nvoc_pbase_GpuResource = &pThis->__nvoc_base_GpuResource;
    pThis->__nvoc_pbase_INotifier = &pThis->__nvoc_base_Notifier.__nvoc_base_INotifier;
    pThis->__nvoc_pbase_Notifier = &pThis->__nvoc_base_Notifier;
    __nvoc_init_GpuResource(&pThis->__nvoc_base_GpuResource);
    __nvoc_init_Notifier(&pThis->__nvoc_base_Notifier);
    __nvoc_init_funcTable_Subdevice(pThis, pRmhalspecowner);
}

NV_STATUS __nvoc_objCreate_Subdevice(Subdevice **ppThis, Dynamic *pParent, NvU32 createFlags, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status;
    Object *pParentObj;
    Subdevice *pThis;
    RmHalspecOwner *pRmhalspecowner;

    pThis = portMemAllocNonPaged(sizeof(Subdevice));
    if (pThis == NULL) return NV_ERR_NO_MEMORY;

    portMemSet(pThis, 0, sizeof(Subdevice));

    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_Subdevice);

    if (pParent != NULL && !(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    if ((pRmhalspecowner = dynamicCast(pParent, RmHalspecOwner)) == NULL)
        pRmhalspecowner = objFindAncestorOfType(RmHalspecOwner, pParent);
    NV_ASSERT_OR_RETURN(pRmhalspecowner != NULL, NV_ERR_INVALID_ARGUMENT);

    __nvoc_init_Subdevice(pThis, pRmhalspecowner);
    status = __nvoc_ctor_Subdevice(pThis, pRmhalspecowner, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_objCreate_Subdevice_cleanup;

    *ppThis = pThis;
    return NV_OK;

__nvoc_objCreate_Subdevice_cleanup:
    // do not call destructors here since the constructor already called them
    portMemFree(pThis);
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_Subdevice(Subdevice **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;
    struct CALL_CONTEXT * arg_pCallContext = va_arg(args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams = va_arg(args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    status = __nvoc_objCreate_Subdevice(ppThis, pParent, createFlags, arg_pCallContext, arg_pParams);

    return status;
}
