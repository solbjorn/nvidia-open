#define NVOC_DEVICE_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_device_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0xe0ac20 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Device;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_GpuResource;

void __nvoc_init_Device(Device*);
void __nvoc_init_funcTable_Device(Device*);
NV_STATUS __nvoc_ctor_Device(Device*, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams);
void __nvoc_init_dataField_Device(Device*);
void __nvoc_dtor_Device(Device*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_Device;

#define __NVOC_CB_TYPE Device
NVOC_BUILD_CTOR_DTOR(__nvoc_objCreateDynamic_Device, __nvoc_dtor_Device);

static const struct NVOC_RTTI __nvoc_rtti_Device_Device = {
    /*pClassDef=*/          &__nvoc_class_def_Device,
    /*dtor=*/               __nvoc_dtor_Device_dtor,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_Device_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Device, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_Device_RsResource = {
    /*pClassDef=*/          &__nvoc_class_def_RsResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Device, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource),
};

static const struct NVOC_RTTI __nvoc_rtti_Device_RmResourceCommon = {
    /*pClassDef=*/          &__nvoc_class_def_RmResourceCommon,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Device, __nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon),
};

static const struct NVOC_RTTI __nvoc_rtti_Device_RmResource = {
    /*pClassDef=*/          &__nvoc_class_def_RmResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Device, __nvoc_base_GpuResource.__nvoc_base_RmResource),
};

static const struct NVOC_RTTI __nvoc_rtti_Device_GpuResource = {
    /*pClassDef=*/          &__nvoc_class_def_GpuResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(Device, __nvoc_base_GpuResource),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_Device = {
    /*numRelatives=*/       6,
    /*relatives=*/ {
        &__nvoc_rtti_Device_Device,
        &__nvoc_rtti_Device_GpuResource,
        &__nvoc_rtti_Device_RmResource,
        &__nvoc_rtti_Device_RmResourceCommon,
        &__nvoc_rtti_Device_RsResource,
        &__nvoc_rtti_Device_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_Device =
{
    /*classInfo=*/ {
        /*size=*/               sizeof(Device),
        /*classId=*/            classId(Device),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "Device",
#endif
    },
    /*objCreatefn=*/        __nvoc_objCreateDynamic_Device_ctor,
    /*pCastInfo=*/          &__nvoc_castinfo_Device,
    /*pExportInfo=*/        &__nvoc_export_info_Device
};

static NV_STATUS __nvoc_thunk_Device_gpuresControl(struct GpuResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return deviceControl((struct Device *)(((unsigned char *)pResource) - __nvoc_rtti_Device_GpuResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_Device_gpuresInternalControlForward(struct GpuResource *pDevice, NvU32 command, void *pParams, NvU32 size) {
    return deviceInternalControlForward((struct Device *)(((unsigned char *)pDevice) - __nvoc_rtti_Device_GpuResource.offset), command, pParams, size);
}

static NvBool __nvoc_thunk_GpuResource_deviceShareCallback(struct Device *pGpuResource, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return gpuresShareCallback((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Device_GpuResource.offset), pInvokingClient, pParentRef, pSharePolicy);
}

static NV_STATUS __nvoc_thunk_RmResource_deviceCheckMemInterUnmap(struct Device *pRmResource, NvBool bSubdeviceHandleProvided) {
    return rmresCheckMemInterUnmap((struct RmResource *)(((unsigned char *)pRmResource) + __nvoc_rtti_Device_RmResource.offset), bSubdeviceHandleProvided);
}

static NV_STATUS __nvoc_thunk_RsResource_deviceMapTo(struct Device *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RsResource.offset), pParams);
}

static NV_STATUS __nvoc_thunk_GpuResource_deviceGetMapAddrSpace(struct Device *pGpuResource, struct CALL_CONTEXT *pCallContext, NvU32 mapFlags, NV_ADDRESS_SPACE *pAddrSpace) {
    return gpuresGetMapAddrSpace((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Device_GpuResource.offset), pCallContext, mapFlags, pAddrSpace);
}

static NvU32 __nvoc_thunk_RsResource_deviceGetRefCount(struct Device *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RsResource.offset));
}

static void __nvoc_thunk_RsResource_deviceAddAdditionalDependants(struct RsClient *pClient, struct Device *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RsResource.offset), pReference);
}

static NV_STATUS __nvoc_thunk_RmResource_deviceControl_Prologue(struct Device *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControl_Prologue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RmResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_GpuResource_deviceGetRegBaseOffsetAndSize(struct Device *pGpuResource, struct OBJGPU *pGpu, NvU32 *pOffset, NvU32 *pSize) {
    return gpuresGetRegBaseOffsetAndSize((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Device_GpuResource.offset), pGpu, pOffset, pSize);
}

static NV_STATUS __nvoc_thunk_RsResource_deviceUnmapFrom(struct Device *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RsResource.offset), pParams);
}

static void __nvoc_thunk_RmResource_deviceControl_Epilogue(struct Device *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControl_Epilogue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RmResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_RsResource_deviceControlLookup(struct Device *pResource, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams, const struct NVOC_EXPORTED_METHOD_DEF **ppEntry) {
    return resControlLookup((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RsResource.offset), pParams, ppEntry);
}

static NvHandle __nvoc_thunk_GpuResource_deviceGetInternalObjectHandle(struct Device *pGpuResource) {
    return gpuresGetInternalObjectHandle((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Device_GpuResource.offset));
}

static NV_STATUS __nvoc_thunk_GpuResource_deviceUnmap(struct Device *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RsCpuMapping *pCpuMapping) {
    return gpuresUnmap((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Device_GpuResource.offset), pCallContext, pCpuMapping);
}

static NV_STATUS __nvoc_thunk_RmResource_deviceGetMemInterMapParams(struct Device *pRmResource, RMRES_MEM_INTER_MAP_PARAMS *pParams) {
    return rmresGetMemInterMapParams((struct RmResource *)(((unsigned char *)pRmResource) + __nvoc_rtti_Device_RmResource.offset), pParams);
}

static NV_STATUS __nvoc_thunk_RmResource_deviceGetMemoryMappingDescriptor(struct Device *pRmResource, struct MEMORY_DESCRIPTOR **ppMemDesc) {
    return rmresGetMemoryMappingDescriptor((struct RmResource *)(((unsigned char *)pRmResource) + __nvoc_rtti_Device_RmResource.offset), ppMemDesc);
}

static NV_STATUS __nvoc_thunk_RsResource_deviceControlFilter(struct Device *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RsResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_RmResource_deviceControlSerialization_Prologue(struct Device *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return rmresControlSerialization_Prologue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RmResource.offset), pCallContext, pParams);
}

static NvBool __nvoc_thunk_RsResource_deviceCanCopy(struct Device *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RsResource.offset));
}

static void __nvoc_thunk_RsResource_devicePreDestruct(struct Device *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RsResource.offset));
}

static NV_STATUS __nvoc_thunk_RsResource_deviceIsDuplicate(struct Device *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RsResource.offset), hMemory, pDuplicate);
}

static void __nvoc_thunk_RmResource_deviceControlSerialization_Epilogue(struct Device *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    rmresControlSerialization_Epilogue((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RmResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_GpuResource_deviceMap(struct Device *pGpuResource, struct CALL_CONTEXT *pCallContext, struct RS_CPU_MAP_PARAMS *pParams, struct RsCpuMapping *pCpuMapping) {
    return gpuresMap((struct GpuResource *)(((unsigned char *)pGpuResource) + __nvoc_rtti_Device_GpuResource.offset), pCallContext, pParams, pCpuMapping);
}

static NvBool __nvoc_thunk_RmResource_deviceAccessCallback(struct Device *pResource, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return rmresAccessCallback((struct RmResource *)(((unsigned char *)pResource) + __nvoc_rtti_Device_RmResource.offset), pInvokingClient, pAllocParams, accessRight);
}

NVOC_BUILD_CALLBACK(deviceCtrlCmdBifGetDmaBaseSysmemAddr_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdBifAspmFeatureSupported_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdBifAspmCyaUpdate_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaGetPteInfo_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaUpdatePde2_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaSetPageDirectory_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaUnsetPageDirectory_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaFlush_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaAdvSchedGetVaCaps_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaGetPdeInfo_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaSetPteInfo_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaInvalidateTLB_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaGetCaps_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaSetVASpaceSize_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaEnablePrivilegedRange_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdDmaSetDefaultVASpace_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdKGrGetCaps_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdKGrGetCapsV2_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdKGrGetInfo_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdKGrGetInfoV2_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdKGrGetTpcPartitionMode_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdKGrSetTpcPartitionMode_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFbGetCompbitStoreInfo_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFbGetCaps_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFbGetCapsV2_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoGetCaps_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoGetCapsV2_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoStartSelectedChannels_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoGetEngineContextProperties_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoStopRunlist_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoStartRunlist_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoGetChannelList_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoGetLatencyBufferSize_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoSetChannelProperties_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdFifoIdleChannels_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdHostGetCaps_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdHostGetCapsV2_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdInternalPerfCudaLimitSetControl_IMPL);
NVOC_BUILD_CALLBACK_1(deviceCtrlCmdInternalPerfCudaLimitDisable);
NVOC_BUILD_CALLBACK(deviceCtrlCmdInternalPerfGetUnderpoweredGpuCount_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuGetClasslist_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuGetClasslistV2_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuGetNumSubdevices_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuModifyGpuSwStatePersistence_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuQueryGpuSwStatePersistence_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuGetVirtualizationMode_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuSetVgpuVfBar1Size_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuGetSparseTextureComputeMode_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuSetSparseTextureComputeMode_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuGetVgxCaps_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuGetBrandCaps_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuGetFindSubDeviceHandle_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdMsencGetCaps_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdBspGetCapsV2_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdNvjpgGetCapsV2_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdOsUnixVTSwitch_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdOsUnixVTGetFBInfo_IMPL);
NVOC_BUILD_CALLBACK(deviceCtrlCmdGpuGetSriovCaps_IMPL);

#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_Device[] =
{
    {               /*  [0] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdBifReset_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800102u,
        /*paramSize=*/  sizeof(NV0080_CTRL_BIF_RESET_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdBifReset"
#endif
    },
    {               /*  [1] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdBifGetDmaBaseSysmemAddr_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800103u,
        /*paramSize=*/  sizeof(NV0080_CTRL_BIF_GET_DMA_BASE_SYSMEM_ADDR_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdBifGetDmaBaseSysmemAddr"
#endif
    },
    {               /*  [2] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdBifAspmFeatureSupported_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800104u,
        /*paramSize=*/  sizeof(NV0080_CTRL_BIF_SET_ASPM_FEATURE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdBifAspmFeatureSupported"
#endif
    },
    {               /*  [3] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdBifAspmCyaUpdate_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800105u,
        /*paramSize=*/  sizeof(NV0080_CTRL_BIF_ASPM_CYA_UPDATE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdBifAspmCyaUpdate"
#endif
    },
    {               /*  [4] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdBifGetPciePowerControlMask_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
        /*flags=*/      0x200u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800106u,
        /*paramSize=*/  sizeof(NV0080_CTRL_CMD_BIF_GET_PCIE_POWER_CONTROL_MASK_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdBifGetPciePowerControlMask"
#endif
    },
    {               /*  [5] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuGetClasslist_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800201u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_GET_CLASSLIST_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuGetClasslist"
#endif
    },
    {               /*  [6] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuGetNumSubdevices_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4811u)
        /*flags=*/      0x4811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800280u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_GET_NUM_SUBDEVICES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuGetNumSubdevices"
#endif
    },
    {               /*  [7] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuModifyGpuSwStatePersistence_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
        /*flags=*/      0x5u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800287u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_MODIFY_SW_STATE_PERSISTENCE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuModifyGpuSwStatePersistence"
#endif
    },
    {               /*  [8] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuQueryGpuSwStatePersistence_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800288u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_QUERY_SW_STATE_PERSISTENCE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuQueryGpuSwStatePersistence"
#endif
    },
    {               /*  [9] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuGetVirtualizationMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800289u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_GET_VIRTUALIZATION_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuGetVirtualizationMode"
#endif
    },
    {               /*  [10] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuGetSparseTextureComputeMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80028cu,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_GET_SPARSE_TEXTURE_COMPUTE_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuGetSparseTextureComputeMode"
#endif
    },
    {               /*  [11] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuSetSparseTextureComputeMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80028du,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_SET_SPARSE_TEXTURE_COMPUTE_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuSetSparseTextureComputeMode"
#endif
    },
    {               /*  [12] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuGetVgxCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80028eu,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_GET_VGX_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuGetVgxCaps"
#endif
    },
    {               /*  [13] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuGetSriovCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800291u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_GET_SRIOV_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuGetSriovCaps"
#endif
    },
    {               /*  [14] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuGetClasslistV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800292u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_GET_CLASSLIST_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuGetClasslistV2"
#endif
    },
    {               /*  [15] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuGetFindSubDeviceHandle_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*flags=*/      0x13u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800293u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_FIND_SUBDEVICE_HANDLE_PARAM),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuGetFindSubDeviceHandle"
#endif
    },
    {               /*  [16] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x211u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuGetBrandCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x211u)
        /*flags=*/      0x211u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800294u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_GET_BRAND_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuGetBrandCaps"
#endif
    },
    {               /*  [17] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdGpuSetVgpuVfBar1Size_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
        /*flags=*/      0x204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x800296u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GPU_SET_VGPU_VF_BAR1_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdGpuSetVgpuVfBar1Size"
#endif
    },
    {               /*  [18] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdKGrGetCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*flags=*/      0x812u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801102u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GR_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdKGrGetCaps"
#endif
    },
    {               /*  [19] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdKGrGetInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*flags=*/      0x810u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801104u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GR_GET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdKGrGetInfo"
#endif
    },
    {               /*  [20] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdKGrGetTpcPartitionMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801107u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GR_TPC_PARTITION_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdKGrGetTpcPartitionMode"
#endif
    },
    {               /*  [21] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdKGrSetTpcPartitionMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801108u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GR_TPC_PARTITION_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdKGrSetTpcPartitionMode"
#endif
    },
    {               /*  [22] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdKGrGetCapsV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
        /*flags=*/      0x812u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801109u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GR_GET_CAPS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdKGrGetCapsV2"
#endif
    },
    {               /*  [23] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdKGrGetInfoV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801110u,
        /*paramSize=*/  sizeof(NV0080_CTRL_GR_GET_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdKGrGetInfoV2"
#endif
    },
    {               /*  [24] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFbGetCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801301u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FB_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFbGetCaps"
#endif
    },
    {               /*  [25] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFbGetCompbitStoreInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801306u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FB_GET_COMPBIT_STORE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFbGetCompbitStoreInfo"
#endif
    },
    {               /*  [26] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFbGetCapsV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801307u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FB_GET_CAPS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFbGetCapsV2"
#endif
    },
    {               /*  [27] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdHostGetCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
        /*flags=*/      0x850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801401u,
        /*paramSize=*/  sizeof(NV0080_CTRL_HOST_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdHostGetCaps"
#endif
    },
    {               /*  [28] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4850u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdHostGetCapsV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4850u)
        /*flags=*/      0x4850u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801402u,
        /*paramSize=*/  sizeof(NV0080_CTRL_HOST_GET_CAPS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdHostGetCapsV2"
#endif
    },
    {               /*  [29] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoGetCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*flags=*/      0x810u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801701u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoGetCaps"
#endif
    },
    {               /*  [30] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoStartSelectedChannels_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801705u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_START_SELECTED_CHANNELS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoStartSelectedChannels"
#endif
    },
    {               /*  [31] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoGetEngineContextProperties_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801707u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_GET_ENGINE_CONTEXT_PROPERTIES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoGetEngineContextProperties"
#endif
    },
    {               /*  [32] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoGetChannelList_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80170du,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_GET_CHANNELLIST_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoGetChannelList"
#endif
    },
    {               /*  [33] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2211u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoGetLatencyBufferSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2211u)
        /*flags=*/      0x2211u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80170eu,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_GET_LATENCY_BUFFER_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoGetLatencyBufferSize"
#endif
    },
    {               /*  [34] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoSetChannelProperties_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
        /*flags=*/      0x2210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80170fu,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_SET_CHANNEL_PROPERTIES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoSetChannelProperties"
#endif
    },
    {               /*  [35] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoStopRunlist_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*flags=*/      0x2204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801711u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_STOP_RUNLIST_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoStopRunlist"
#endif
    },
    {               /*  [36] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoStartRunlist_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
        /*flags=*/      0x2204u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801712u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_START_RUNLIST_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoStartRunlist"
#endif
    },
    {               /*  [37] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoGetCapsV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
        /*flags=*/      0x810u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801713u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_GET_CAPS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoGetCapsV2"
#endif
    },
    {               /*  [38] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdFifoIdleChannels_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801714u,
        /*paramSize=*/  sizeof(NV0080_CTRL_FIFO_IDLE_CHANNELS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdFifoIdleChannels"
#endif
    },
    {               /*  [39] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaGetPteInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801801u,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_GET_PTE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaGetPteInfo"
#endif
    },
    {               /*  [40] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaFlush_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801805u,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_FLUSH_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaFlush"
#endif
    },
    {               /*  [41] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaAdvSchedGetVaCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801806u,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_ADV_SCHED_GET_VA_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaAdvSchedGetVaCaps"
#endif
    },
    {               /*  [42] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaGetPdeInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801809u,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_GET_PDE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaGetPdeInfo"
#endif
    },
    {               /*  [43] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaSetPteInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80180au,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_SET_PTE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaSetPteInfo"
#endif
    },
    {               /*  [44] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaInvalidateTLB_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80180cu,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_INVALIDATE_TLB_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaInvalidateTLB"
#endif
    },
    {               /*  [45] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaGetCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80180du,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaGetCaps"
#endif
    },
    {               /*  [46] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaSetVASpaceSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80180eu,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_SET_VA_SPACE_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaSetVASpaceSize"
#endif
    },
    {               /*  [47] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaUpdatePde2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x80180fu,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_UPDATE_PDE_2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaUpdatePde2"
#endif
    },
    {               /*  [48] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaEnablePrivilegedRange_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801810u,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_ENABLE_PRIVILEGED_RANGE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaEnablePrivilegedRange"
#endif
    },
    {               /*  [49] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0000u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaSetDefaultVASpace_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0000u)
        /*flags=*/      0x1c0000u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801812u,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_SET_DEFAULT_VASPACE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaSetDefaultVASpace"
#endif
    },
    {               /*  [50] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaSetPageDirectory_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
        /*flags=*/      0x140004u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801813u,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_SET_PAGE_DIRECTORY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaSetPageDirectory"
#endif
    },
    {               /*  [51] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdDmaUnsetPageDirectory_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
        /*flags=*/      0x140004u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801814u,
        /*paramSize=*/  sizeof(NV0080_CTRL_DMA_UNSET_PAGE_DIRECTORY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdDmaUnsetPageDirectory"
#endif
    },
    {               /*  [52] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdMsencGetCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801b01u,
        /*paramSize=*/  sizeof(NV0080_CTRL_MSENC_GET_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdMsencGetCaps"
#endif
    },
    {               /*  [53] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdBspGetCapsV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801c02u,
        /*paramSize=*/  sizeof(NV0080_CTRL_BSP_GET_CAPS_PARAMS_V2),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdBspGetCapsV2"
#endif
    },
    {               /*  [54] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdOsUnixVTSwitch_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1u)
        /*flags=*/      0x1u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801e01u,
        /*paramSize=*/  sizeof(NV0080_CTRL_OS_UNIX_VT_SWITCH_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdOsUnixVTSwitch"
#endif
    },
    {               /*  [55] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdOsUnixVTGetFBInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1u)
        /*flags=*/      0x1u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801e02u,
        /*paramSize=*/  sizeof(NV0080_CTRL_OS_UNIX_VT_GET_FB_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdOsUnixVTGetFBInfo"
#endif
    },
    {               /*  [56] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdNvjpgGetCapsV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
        /*flags=*/      0x210u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x801f02u,
        /*paramSize=*/  sizeof(NV0080_CTRL_NVJPG_GET_CAPS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdNvjpgGetCapsV2"
#endif
    },
    {               /*  [57] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdInternalPerfCudaLimitDisable_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x802004u,
        /*paramSize=*/  0,
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdInternalPerfCudaLimitDisable"
#endif
    },
    {               /*  [58] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdInternalPerfGetUnderpoweredGpuCount_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
        /*flags=*/      0x600u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x802006u,
        /*paramSize=*/  sizeof(NV0080_CTRL_INTERNAL_PERF_GET_UNDERPOWERED_GPU_COUNT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdInternalPerfGetUnderpoweredGpuCount"
#endif
    },
    {               /*  [59] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xe10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      deviceCtrlCmdInternalPerfCudaLimitSetControl_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xe10u)
        /*flags=*/      0xe10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x802009u,
        /*paramSize=*/  sizeof(NV0080_CTRL_PERF_CUDA_LIMIT_CONTROL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_Device.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "deviceCtrlCmdInternalPerfCudaLimitSetControl"
#endif
    },

};

const struct NVOC_EXPORT_INFO __nvoc_export_info_Device =
{
    /*numEntries=*/     60,
    /*pExportEntries=*/ __nvoc_exported_method_def_Device
};

void __nvoc_dtor_GpuResource(GpuResource*);
void __nvoc_dtor_Device(Device *pThis) {
    __nvoc_deviceDestruct(pThis);
    __nvoc_dtor_GpuResource(&pThis->__nvoc_base_GpuResource);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_Device(Device *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}

NV_STATUS __nvoc_ctor_GpuResource(GpuResource* , struct CALL_CONTEXT *, struct RS_RES_ALLOC_PARAMS_INTERNAL *);
NV_STATUS __nvoc_ctor_Device(Device *pThis, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_GpuResource(&pThis->__nvoc_base_GpuResource, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_Device_fail_GpuResource;
    __nvoc_init_dataField_Device(pThis);

    status = __nvoc_deviceConstruct(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_Device_fail__init;
    goto __nvoc_ctor_Device_exit; // Success

__nvoc_ctor_Device_fail__init:
    __nvoc_dtor_GpuResource(&pThis->__nvoc_base_GpuResource);
__nvoc_ctor_Device_fail_GpuResource:
__nvoc_ctor_Device_exit:

    return status;
}

static void __nvoc_init_funcTable_Device_1(Device *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);

    pThis->__deviceControl__ = &deviceControl_IMPL;

    pThis->__deviceInternalControlForward__ = &deviceInternalControlForward_IMPL;

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__deviceCtrlCmdBifReset__ = &deviceCtrlCmdBifReset_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__deviceCtrlCmdBifGetDmaBaseSysmemAddr__ = &deviceCtrlCmdBifGetDmaBaseSysmemAddr_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__deviceCtrlCmdBifAspmFeatureSupported__ = &deviceCtrlCmdBifAspmFeatureSupported_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__deviceCtrlCmdBifAspmCyaUpdate__ = &deviceCtrlCmdBifAspmCyaUpdate_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x200u)
    pThis->__deviceCtrlCmdBifGetPciePowerControlMask__ = &deviceCtrlCmdBifGetPciePowerControlMask_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdDmaGetPteInfo__ = &deviceCtrlCmdDmaGetPteInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdDmaUpdatePde2__ = &deviceCtrlCmdDmaUpdatePde2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
    pThis->__deviceCtrlCmdDmaSetPageDirectory__ = &deviceCtrlCmdDmaSetPageDirectory_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
    pThis->__deviceCtrlCmdDmaUnsetPageDirectory__ = &deviceCtrlCmdDmaUnsetPageDirectory_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__deviceCtrlCmdDmaFlush__ = &deviceCtrlCmdDmaFlush_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__deviceCtrlCmdDmaAdvSchedGetVaCaps__ = &deviceCtrlCmdDmaAdvSchedGetVaCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdDmaGetPdeInfo__ = &deviceCtrlCmdDmaGetPdeInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdDmaSetPteInfo__ = &deviceCtrlCmdDmaSetPteInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdDmaInvalidateTLB__ = &deviceCtrlCmdDmaInvalidateTLB_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__deviceCtrlCmdDmaGetCaps__ = &deviceCtrlCmdDmaGetCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdDmaSetVASpaceSize__ = &deviceCtrlCmdDmaSetVASpaceSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdDmaEnablePrivilegedRange__ = &deviceCtrlCmdDmaEnablePrivilegedRange_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1c0000u)
    pThis->__deviceCtrlCmdDmaSetDefaultVASpace__ = &deviceCtrlCmdDmaSetDefaultVASpace_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
    pThis->__deviceCtrlCmdKGrGetCaps__ = &deviceCtrlCmdKGrGetCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x812u)
    pThis->__deviceCtrlCmdKGrGetCapsV2__ = &deviceCtrlCmdKGrGetCapsV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
    pThis->__deviceCtrlCmdKGrGetInfo__ = &deviceCtrlCmdKGrGetInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdKGrGetInfoV2__ = &deviceCtrlCmdKGrGetInfoV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__deviceCtrlCmdKGrGetTpcPartitionMode__ = &deviceCtrlCmdKGrGetTpcPartitionMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__deviceCtrlCmdKGrSetTpcPartitionMode__ = &deviceCtrlCmdKGrSetTpcPartitionMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__deviceCtrlCmdFbGetCompbitStoreInfo__ = &deviceCtrlCmdFbGetCompbitStoreInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__deviceCtrlCmdFbGetCaps__ = &deviceCtrlCmdFbGetCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__deviceCtrlCmdFbGetCapsV2__ = &deviceCtrlCmdFbGetCapsV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
    pThis->__deviceCtrlCmdFifoGetCaps__ = &deviceCtrlCmdFifoGetCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x810u)
    pThis->__deviceCtrlCmdFifoGetCapsV2__ = &deviceCtrlCmdFifoGetCapsV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__deviceCtrlCmdFifoStartSelectedChannels__ = &deviceCtrlCmdFifoStartSelectedChannels_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__deviceCtrlCmdFifoGetEngineContextProperties__ = &deviceCtrlCmdFifoGetEngineContextProperties_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
    pThis->__deviceCtrlCmdFifoStopRunlist__ = &deviceCtrlCmdFifoStopRunlist_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2204u)
    pThis->__deviceCtrlCmdFifoStartRunlist__ = &deviceCtrlCmdFifoStartRunlist_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__deviceCtrlCmdFifoGetChannelList__ = &deviceCtrlCmdFifoGetChannelList_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2211u)
    pThis->__deviceCtrlCmdFifoGetLatencyBufferSize__ = &deviceCtrlCmdFifoGetLatencyBufferSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x2210u)
    pThis->__deviceCtrlCmdFifoSetChannelProperties__ = &deviceCtrlCmdFifoSetChannelProperties_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__deviceCtrlCmdFifoIdleChannels__ = &deviceCtrlCmdFifoIdleChannels_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x850u)
    pThis->__deviceCtrlCmdHostGetCaps__ = &deviceCtrlCmdHostGetCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4850u)
    pThis->__deviceCtrlCmdHostGetCapsV2__ = &deviceCtrlCmdHostGetCapsV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0xe10u)
    pThis->__deviceCtrlCmdInternalPerfCudaLimitSetControl__ = &deviceCtrlCmdInternalPerfCudaLimitSetControl_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__deviceCtrlCmdInternalPerfCudaLimitDisable__ = &deviceCtrlCmdInternalPerfCudaLimitDisable_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x600u)
    pThis->__deviceCtrlCmdInternalPerfGetUnderpoweredGpuCount__ = &deviceCtrlCmdInternalPerfGetUnderpoweredGpuCount_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__deviceCtrlCmdGpuGetClasslist__ = &deviceCtrlCmdGpuGetClasslist_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__deviceCtrlCmdGpuGetClasslistV2__ = &deviceCtrlCmdGpuGetClasslistV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4811u)
    pThis->__deviceCtrlCmdGpuGetNumSubdevices__ = &deviceCtrlCmdGpuGetNumSubdevices_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
    pThis->__deviceCtrlCmdGpuModifyGpuSwStatePersistence__ = &deviceCtrlCmdGpuModifyGpuSwStatePersistence_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__deviceCtrlCmdGpuQueryGpuSwStatePersistence__ = &deviceCtrlCmdGpuQueryGpuSwStatePersistence_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__deviceCtrlCmdGpuGetVirtualizationMode__ = &deviceCtrlCmdGpuGetVirtualizationMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x204u)
    pThis->__deviceCtrlCmdGpuSetVgpuVfBar1Size__ = &deviceCtrlCmdGpuSetVgpuVfBar1Size_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__deviceCtrlCmdGpuGetSparseTextureComputeMode__ = &deviceCtrlCmdGpuGetSparseTextureComputeMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__deviceCtrlCmdGpuSetSparseTextureComputeMode__ = &deviceCtrlCmdGpuSetSparseTextureComputeMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__deviceCtrlCmdGpuGetVgxCaps__ = &deviceCtrlCmdGpuGetVgxCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x211u)
    pThis->__deviceCtrlCmdGpuGetBrandCaps__ = &deviceCtrlCmdGpuGetBrandCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdGpuGetSriovCaps__ = &deviceCtrlCmdGpuGetSriovCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
    pThis->__deviceCtrlCmdGpuGetFindSubDeviceHandle__ = &deviceCtrlCmdGpuGetFindSubDeviceHandle_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__deviceCtrlCmdMsencGetCaps__ = &deviceCtrlCmdMsencGetCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__deviceCtrlCmdBspGetCapsV2__ = &deviceCtrlCmdBspGetCapsV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x210u)
    pThis->__deviceCtrlCmdNvjpgGetCapsV2__ = &deviceCtrlCmdNvjpgGetCapsV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1u)
    pThis->__deviceCtrlCmdOsUnixVTSwitch__ = &deviceCtrlCmdOsUnixVTSwitch_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x1u)
    pThis->__deviceCtrlCmdOsUnixVTGetFBInfo__ = &deviceCtrlCmdOsUnixVTGetFBInfo_IMPL;
#endif

    pThis->__nvoc_base_GpuResource.__gpuresControl__ = &__nvoc_thunk_Device_gpuresControl;

    pThis->__nvoc_base_GpuResource.__gpuresInternalControlForward__ = &__nvoc_thunk_Device_gpuresInternalControlForward;

    pThis->__deviceShareCallback__ = &__nvoc_thunk_GpuResource_deviceShareCallback;

    pThis->__deviceCheckMemInterUnmap__ = &__nvoc_thunk_RmResource_deviceCheckMemInterUnmap;

    pThis->__deviceMapTo__ = &__nvoc_thunk_RsResource_deviceMapTo;

    pThis->__deviceGetMapAddrSpace__ = &__nvoc_thunk_GpuResource_deviceGetMapAddrSpace;

    pThis->__deviceGetRefCount__ = &__nvoc_thunk_RsResource_deviceGetRefCount;

    pThis->__deviceAddAdditionalDependants__ = &__nvoc_thunk_RsResource_deviceAddAdditionalDependants;

    pThis->__deviceControl_Prologue__ = &__nvoc_thunk_RmResource_deviceControl_Prologue;

    pThis->__deviceGetRegBaseOffsetAndSize__ = &__nvoc_thunk_GpuResource_deviceGetRegBaseOffsetAndSize;

    pThis->__deviceUnmapFrom__ = &__nvoc_thunk_RsResource_deviceUnmapFrom;

    pThis->__deviceControl_Epilogue__ = &__nvoc_thunk_RmResource_deviceControl_Epilogue;

    pThis->__deviceControlLookup__ = &__nvoc_thunk_RsResource_deviceControlLookup;

    pThis->__deviceGetInternalObjectHandle__ = &__nvoc_thunk_GpuResource_deviceGetInternalObjectHandle;

    pThis->__deviceUnmap__ = &__nvoc_thunk_GpuResource_deviceUnmap;

    pThis->__deviceGetMemInterMapParams__ = &__nvoc_thunk_RmResource_deviceGetMemInterMapParams;

    pThis->__deviceGetMemoryMappingDescriptor__ = &__nvoc_thunk_RmResource_deviceGetMemoryMappingDescriptor;

    pThis->__deviceControlFilter__ = &__nvoc_thunk_RsResource_deviceControlFilter;

    pThis->__deviceControlSerialization_Prologue__ = &__nvoc_thunk_RmResource_deviceControlSerialization_Prologue;

    pThis->__deviceCanCopy__ = &__nvoc_thunk_RsResource_deviceCanCopy;

    pThis->__devicePreDestruct__ = &__nvoc_thunk_RsResource_devicePreDestruct;

    pThis->__deviceIsDuplicate__ = &__nvoc_thunk_RsResource_deviceIsDuplicate;

    pThis->__deviceControlSerialization_Epilogue__ = &__nvoc_thunk_RmResource_deviceControlSerialization_Epilogue;

    pThis->__deviceMap__ = &__nvoc_thunk_GpuResource_deviceMap;

    pThis->__deviceAccessCallback__ = &__nvoc_thunk_RmResource_deviceAccessCallback;
}

void __nvoc_init_funcTable_Device(Device *pThis) {
    __nvoc_init_funcTable_Device_1(pThis);
}

void __nvoc_init_GpuResource(GpuResource*);
void __nvoc_init_Device(Device *pThis) {
    pThis->__nvoc_pbase_Device = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object;
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource;
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RmResourceCommon;
    pThis->__nvoc_pbase_RmResource = &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource;
    pThis->__nvoc_pbase_GpuResource = &pThis->__nvoc_base_GpuResource;
    __nvoc_init_GpuResource(&pThis->__nvoc_base_GpuResource);
    __nvoc_init_funcTable_Device(pThis);
}

NV_STATUS __nvoc_objCreate_Device(Device **ppThis, Dynamic *pParent, NvU32 createFlags, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status;
    Object *pParentObj;
    Device *pThis;

    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(Device), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    portMemSet(pThis, 0, sizeof(Device));

    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_Device);

    pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = createFlags;

    if (pParent != NULL && !(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_GpuResource.__nvoc_base_RmResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    __nvoc_init_Device(pThis);
    status = __nvoc_ctor_Device(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_objCreate_Device_cleanup;

    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_Device_cleanup:
    // do not call destructors here since the constructor already called them
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(Device));
    else
        portMemFree(pThis);

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_Device(Device **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;
    struct CALL_CONTEXT * arg_pCallContext = va_arg(args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams = va_arg(args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    status = __nvoc_objCreate_Device(ppThis, pParent, createFlags, arg_pCallContext, arg_pParams);

    return status;
}
