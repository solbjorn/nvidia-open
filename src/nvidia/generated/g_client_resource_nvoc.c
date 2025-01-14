#define NVOC_CLIENT_RESOURCE_H_PRIVATE_ACCESS_ALLOWED
#include "nvoc/runtime.h"
#include "nvoc/rtti.h"
#include "nvtypes.h"
#include "nvport/nvport.h"
#include "nvport/inline/util_valist.h"
#include "utils/nvassert.h"
#include "g_client_resource_nvoc.h"

#ifdef DEBUG
char __nvoc_class_id_uniqueness_check_0x37a701 = 1;
#endif

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmClientResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RsClientResource;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_RmResourceCommon;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_INotifier;

extern const struct NVOC_CLASS_DEF __nvoc_class_def_Notifier;

void __nvoc_init_RmClientResource(RmClientResource*);
void __nvoc_init_funcTable_RmClientResource(RmClientResource*);
NV_STATUS __nvoc_ctor_RmClientResource(RmClientResource*, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams);
void __nvoc_init_dataField_RmClientResource(RmClientResource*);
void __nvoc_dtor_RmClientResource(RmClientResource*);
extern const struct NVOC_EXPORT_INFO __nvoc_export_info_RmClientResource;

#define __NVOC_CB_TYPE RmClientResource
NVOC_BUILD_CTOR_DTOR(__nvoc_objCreateDynamic_RmClientResource, __nvoc_dtor_RmClientResource);

static const struct NVOC_RTTI __nvoc_rtti_RmClientResource_RmClientResource = {
    /*pClassDef=*/          &__nvoc_class_def_RmClientResource,
    /*dtor=*/               __nvoc_dtor_RmClientResource_dtor,
    /*offset=*/             0,
};

static const struct NVOC_RTTI __nvoc_rtti_RmClientResource_Object = {
    /*pClassDef=*/          &__nvoc_class_def_Object,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object),
};

static const struct NVOC_RTTI __nvoc_rtti_RmClientResource_RsResource = {
    /*pClassDef=*/          &__nvoc_class_def_RsResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource.__nvoc_base_RsResource),
};

static const struct NVOC_RTTI __nvoc_rtti_RmClientResource_RsClientResource = {
    /*pClassDef=*/          &__nvoc_class_def_RsClientResource,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(RmClientResource, __nvoc_base_RsClientResource),
};

static const struct NVOC_RTTI __nvoc_rtti_RmClientResource_RmResourceCommon = {
    /*pClassDef=*/          &__nvoc_class_def_RmResourceCommon,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(RmClientResource, __nvoc_base_RmResourceCommon),
};

static const struct NVOC_RTTI __nvoc_rtti_RmClientResource_INotifier = {
    /*pClassDef=*/          &__nvoc_class_def_INotifier,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(RmClientResource, __nvoc_base_Notifier.__nvoc_base_INotifier),
};

static const struct NVOC_RTTI __nvoc_rtti_RmClientResource_Notifier = {
    /*pClassDef=*/          &__nvoc_class_def_Notifier,
    /*dtor=*/               &__nvoc_destructFromBase,
    /*offset=*/             NV_OFFSETOF(RmClientResource, __nvoc_base_Notifier),
};

static const struct NVOC_CASTINFO __nvoc_castinfo_RmClientResource = {
    /*numRelatives=*/       7,
    /*relatives=*/ {
        &__nvoc_rtti_RmClientResource_RmClientResource,
        &__nvoc_rtti_RmClientResource_Notifier,
        &__nvoc_rtti_RmClientResource_INotifier,
        &__nvoc_rtti_RmClientResource_RmResourceCommon,
        &__nvoc_rtti_RmClientResource_RsClientResource,
        &__nvoc_rtti_RmClientResource_RsResource,
        &__nvoc_rtti_RmClientResource_Object,
    },
};

const struct NVOC_CLASS_DEF __nvoc_class_def_RmClientResource =
{
    /*classInfo=*/ {
        /*size=*/               sizeof(RmClientResource),
        /*classId=*/            classId(RmClientResource),
        /*providerId=*/         &__nvoc_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        /*name=*/               "RmClientResource",
#endif
    },
    /*objCreatefn=*/        __nvoc_objCreateDynamic_RmClientResource_ctor,
    /*pCastInfo=*/          &__nvoc_castinfo_RmClientResource,
    /*pExportInfo=*/        &__nvoc_export_info_RmClientResource
};

static NvBool __nvoc_thunk_RmClientResource_resAccessCallback(struct RsResource *pRmCliRes, struct RsClient *pInvokingClient, void *pAllocParams, RsAccessRight accessRight) {
    return cliresAccessCallback((struct RmClientResource *)(((unsigned char *)pRmCliRes) - __nvoc_rtti_RmClientResource_RsResource.offset), pInvokingClient, pAllocParams, accessRight);
}

static NvBool __nvoc_thunk_RmClientResource_resShareCallback(struct RsResource *pRmCliRes, struct RsClient *pInvokingClient, struct RsResourceRef *pParentRef, RS_SHARE_POLICY *pSharePolicy) {
    return cliresShareCallback((struct RmClientResource *)(((unsigned char *)pRmCliRes) - __nvoc_rtti_RmClientResource_RsResource.offset), pInvokingClient, pParentRef, pSharePolicy);
}

static NV_STATUS __nvoc_thunk_RmClientResource_resControl_Prologue(struct RsResource *pRmCliRes, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return cliresControl_Prologue((struct RmClientResource *)(((unsigned char *)pRmCliRes) - __nvoc_rtti_RmClientResource_RsResource.offset), pCallContext, pParams);
}

static void __nvoc_thunk_RmClientResource_resControl_Epilogue(struct RsResource *pRmCliRes, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    cliresControl_Epilogue((struct RmClientResource *)(((unsigned char *)pRmCliRes) - __nvoc_rtti_RmClientResource_RsResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_RsResource_cliresControl(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControl((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pCallContext, pParams);
}

static NV_STATUS __nvoc_thunk_RsResource_cliresUnmap(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, RsCpuMapping *pCpuMapping) {
    return resUnmap((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pCallContext, pCpuMapping);
}

static NV_STATUS __nvoc_thunk_RsResource_cliresMapTo(struct RmClientResource *pResource, RS_RES_MAP_TO_PARAMS *pParams) {
    return resMapTo((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pParams);
}

static void __nvoc_thunk_Notifier_cliresSetNotificationShare(struct RmClientResource *pNotifier, struct NotifShare *pNotifShare) {
    notifySetNotificationShare((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_RmClientResource_Notifier.offset), pNotifShare);
}

static NV_STATUS __nvoc_thunk_RsResource_cliresControlFilter(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlFilter((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pCallContext, pParams);
}

static void __nvoc_thunk_RsResource_cliresAddAdditionalDependants(struct RsClient *pClient, struct RmClientResource *pResource, RsResourceRef *pReference) {
    resAddAdditionalDependants(pClient, (struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pReference);
}

static NvU32 __nvoc_thunk_RsResource_cliresGetRefCount(struct RmClientResource *pResource) {
    return resGetRefCount((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset));
}

static NV_STATUS __nvoc_thunk_Notifier_cliresUnregisterEvent(struct RmClientResource *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, NvHandle hEventClient, NvHandle hEvent) {
    return notifyUnregisterEvent((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_RmClientResource_Notifier.offset), hNotifierClient, hNotifierResource, hEventClient, hEvent);
}

static NV_STATUS __nvoc_thunk_RsResource_cliresControlSerialization_Prologue(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    return resControlSerialization_Prologue((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pCallContext, pParams);
}

static NvBool __nvoc_thunk_RsResource_cliresCanCopy(struct RmClientResource *pResource) {
    return resCanCopy((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset));
}

static void __nvoc_thunk_RsResource_cliresPreDestruct(struct RmClientResource *pResource) {
    resPreDestruct((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset));
}

static NV_STATUS __nvoc_thunk_RsResource_cliresUnmapFrom(struct RmClientResource *pResource, RS_RES_UNMAP_FROM_PARAMS *pParams) {
    return resUnmapFrom((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pParams);
}

static NV_STATUS __nvoc_thunk_RsResource_cliresIsDuplicate(struct RmClientResource *pResource, NvHandle hMemory, NvBool *pDuplicate) {
    return resIsDuplicate((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), hMemory, pDuplicate);
}

static void __nvoc_thunk_RsResource_cliresControlSerialization_Epilogue(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams) {
    resControlSerialization_Epilogue((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pCallContext, pParams);
}

static PEVENTNOTIFICATION *__nvoc_thunk_Notifier_cliresGetNotificationListPtr(struct RmClientResource *pNotifier) {
    return notifyGetNotificationListPtr((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_RmClientResource_Notifier.offset));
}

static struct NotifShare *__nvoc_thunk_Notifier_cliresGetNotificationShare(struct RmClientResource *pNotifier) {
    return notifyGetNotificationShare((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_RmClientResource_Notifier.offset));
}

static NV_STATUS __nvoc_thunk_RsResource_cliresControlLookup(struct RmClientResource *pResource, struct RS_RES_CONTROL_PARAMS_INTERNAL *pParams, const struct NVOC_EXPORTED_METHOD_DEF **ppEntry) {
    return resControlLookup((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pParams, ppEntry);
}

static NV_STATUS __nvoc_thunk_RsResource_cliresMap(struct RmClientResource *pResource, struct CALL_CONTEXT *pCallContext, RS_CPU_MAP_PARAMS *pParams, RsCpuMapping *pCpuMapping) {
    return resMap((struct RsResource *)(((unsigned char *)pResource) + __nvoc_rtti_RmClientResource_RsResource.offset), pCallContext, pParams, pCpuMapping);
}

static NV_STATUS __nvoc_thunk_Notifier_cliresGetOrAllocNotifShare(struct RmClientResource *pNotifier, NvHandle hNotifierClient, NvHandle hNotifierResource, struct NotifShare **ppNotifShare) {
    return notifyGetOrAllocNotifShare((struct Notifier *)(((unsigned char *)pNotifier) + __nvoc_rtti_RmClientResource_Notifier.offset), hNotifierClient, hNotifierResource, ppNotifShare);
}

NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetCpuInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetFeatures_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetBuildVersionV2_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetChipsetInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemSetMemorySize_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetClassList_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemNotifyEvent_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetPlatformType_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemDebugCtrlRmMsg_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetHwbcInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetP2pCaps_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetP2pCapsV2_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetP2pCapsMatrix_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetPerfSensorCounters_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetExtendedPerfSensorCounters_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetGpusPowerStatus_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetPrivilegedStatus_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetFabricStatus_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetRmInstanceId_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemGetClientDatabaseInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdNvdGetDumpSize_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdNvdGetDump_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdNvdGetTimestamp_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdNvdGetNvlogInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdNvdGetNvlogBufferInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdNvdGetNvlog_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdNvdGetRcerrRpt_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdClientGetAddrSpaceType_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdClientGetHandleInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdClientGetAccessRights_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdClientSetInheritedSharePolicy_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdClientShareObject_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdClientGetChildHandle_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetAttachedIds_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetIdInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetIdInfoV2_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetInitStatus_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetDeviceIds_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetProbedIds_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuAttachIds_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuDetachIds_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetSvmSize_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetPciInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetUuidInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetUuidFromGpuId_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuModifyGpuDrainState_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuQueryGpuDrainState_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetMemOpEnable_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuDisableNvlinkInit_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdLegacyConfig_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdIdleChannels_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGsyncGetAttachedIds_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGsyncGetIdInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdEventSetNotification_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdEventGetSystemEventStatus_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdOsUnixExportObjectToFd_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdOsUnixImportObjectFromFd_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdOsUnixGetExportObjectInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdOsUnixCreateExportObjectFd_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdOsUnixExportObjectsToFd_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdOsUnixImportObjectsFromFd_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdOsUnixFlushUserCache_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuAcctSetAccountingState_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuAcctGetAccountingState_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuAcctGetProcAccountingInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuAcctGetAccountingPids_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuAcctClearAccountingData_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSetSubProcessID_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdDisableSubProcessUserdIsolation_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSyncGpuBoostInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSyncGpuBoostGroupCreate_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSyncGpuBoostGroupDestroy_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSyncGpuBoostGroupInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemSyncExternalFabricMgmt_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemExecuteAcpiMethod_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdVgpuGetVgpuVersion_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdVgpuSetVgpuVersion_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemNVPCFGetPowerModeInfo_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemRmctrlCacheModeCtrl_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemPfmreqhndlrGetPerfSensorCounters_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdPushGspUcode_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdVgpuGetStartData_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdObjectsAreDuplicates_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdSystemPfmreqhndlrGetExtendedPerfSensorCounters_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetVideoLinks_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuSetNvlinkBwMode_IMPL);
NVOC_BUILD_CALLBACK(cliresCtrlCmdGpuGetNvlinkBwMode_IMPL);

#if !defined(NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG)
#define NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(x)      (0)
#endif

static const struct NVOC_EXPORTED_METHOD_DEF __nvoc_exported_method_def_RmClientResource[] =
{
    {               /*  [0] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetCpuInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*flags=*/      0x13u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x102u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_CPU_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetCpuInfo"
#endif
    },
    {               /*  [1] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4013u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetChipsetInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4013u)
        /*flags=*/      0x4013u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x104u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_CHIPSET_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetChipsetInfo"
#endif
    },
    {               /*  [2] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemSetMemorySize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
        /*flags=*/      0x0u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x107u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_SET_MEMORY_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemSetMemorySize"
#endif
    },
    {               /*  [3] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetClassList_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x108u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_CLASSLIST_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetClassList"
#endif
    },
    {               /*  [4] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemNotifyEvent_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x110u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_NOTIFY_EVENT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemNotifyEvent"
#endif
    },
    {               /*  [5] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetPlatformType_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x111u,
        /*paramSize=*/  sizeof(NV0000_CTRL_CMD_SYSTEM_GET_PLATFORM_TYPE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetPlatformType"
#endif
    },
    {               /*  [6] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemDebugCtrlRmMsg_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x121u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_DEBUG_RMMSG_CTRL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemDebugCtrlRmMsg"
#endif
    },
    {               /*  [7] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetHwbcInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x124u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_HWBC_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetHwbcInfo"
#endif
    },
    {               /*  [8] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetP2pCaps_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x127u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_P2P_CAPS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetP2pCaps"
#endif
    },
    {               /*  [9] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetP2pCapsV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x12bu,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_P2P_CAPS_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetP2pCapsV2"
#endif
    },
    {               /*  [10] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetPerfSensorCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x12cu,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GPS_GET_PERF_SENSOR_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetPerfSensorCounters"
#endif
    },
    {               /*  [11] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetExtendedPerfSensorCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x12eu,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GPS_GET_PERF_SENSOR_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetExtendedPerfSensorCounters"
#endif
    },
    {               /*  [12] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemExecuteAcpiMethod_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x130u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_EXECUTE_ACPI_METHOD_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemExecuteAcpiMethod"
#endif
    },
    {               /*  [13] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetGpusPowerStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x134u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_GPUS_POWER_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetGpusPowerStatus"
#endif
    },
    {               /*  [14] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetPrivilegedStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x135u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_PRIVILEGED_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetPrivilegedStatus"
#endif
    },
    {               /*  [15] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetFabricStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x136u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_FABRIC_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetFabricStatus"
#endif
    },
    {               /*  [16] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdVgpuGetVgpuVersion_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x137u,
        /*paramSize=*/  sizeof(NV0000_CTRL_VGPU_GET_VGPU_VERSION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdVgpuGetVgpuVersion"
#endif
    },
    {               /*  [17] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdVgpuSetVgpuVersion_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x138u,
        /*paramSize=*/  sizeof(NV0000_CTRL_VGPU_SET_VGPU_VERSION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdVgpuSetVgpuVersion"
#endif
    },
    {               /*  [18] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetRmInstanceId_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x139u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_RM_INSTANCE_ID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetRmInstanceId"
#endif
    },
    {               /*  [19] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetP2pCapsMatrix_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x13au,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_P2P_CAPS_MATRIX_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetP2pCapsMatrix"
#endif
    },
    {               /*  [20] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemNVPCFGetPowerModeInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x13bu,
        /*paramSize=*/  sizeof(NV0000_CTRL_CMD_SYSTEM_NVPCF_GET_POWER_MODE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemNVPCFGetPowerModeInfo"
#endif
    },
    {               /*  [21] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemSyncExternalFabricMgmt_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x13cu,
        /*paramSize=*/  sizeof(NV0000_CTRL_CMD_SYSTEM_SYNC_EXTERNAL_FABRIC_MGMT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemSyncExternalFabricMgmt"
#endif
    },
    {               /*  [22] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x807u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetClientDatabaseInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x807u)
        /*flags=*/      0x807u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x13du,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_CLIENT_DATABASE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetClientDatabaseInfo"
#endif
    },
    {               /*  [23] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetBuildVersionV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4811u)
        /*flags=*/      0x4811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x13eu,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_BUILD_VERSION_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetBuildVersionV2"
#endif
    },
    {               /*  [24] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemRmctrlCacheModeCtrl_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*flags=*/      0x7u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x13fu,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_RMCTRL_CACHE_MODE_CTRL_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemRmctrlCacheModeCtrl"
#endif
    },
    {               /*  [25] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemPfmreqhndlrGetPerfSensorCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x146u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_PFM_REQ_HNDLR_GET_PERF_SENSOR_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemPfmreqhndlrGetPerfSensorCounters"
#endif
    },
    {               /*  [26] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemPfmreqhndlrGetExtendedPerfSensorCounters_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x147u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_PFM_REQ_HNDLR_GET_PERF_SENSOR_COUNTERS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemPfmreqhndlrGetExtendedPerfSensorCounters"
#endif
    },
    {               /*  [27] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSystemGetFeatures_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x1f0u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SYSTEM_GET_FEATURES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSystemGetFeatures"
#endif
    },
    {               /*  [28] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetAttachedIds_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x201u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_ATTACHED_IDS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetAttachedIds"
#endif
    },
    {               /*  [29] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetIdInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x202u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_ID_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetIdInfo"
#endif
    },
    {               /*  [30] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetInitStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x203u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_INIT_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetInitStatus"
#endif
    },
    {               /*  [31] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetDeviceIds_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x204u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_DEVICE_IDS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetDeviceIds"
#endif
    },
    {               /*  [32] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetIdInfoV2_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x205u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_ID_INFO_V2_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetIdInfoV2"
#endif
    },
    {               /*  [33] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetProbedIds_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x214u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_PROBED_IDS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetProbedIds"
#endif
    },
    {               /*  [34] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuAttachIds_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x215u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_ATTACH_IDS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuAttachIds"
#endif
    },
    {               /*  [35] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuDetachIds_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x216u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_DETACH_IDS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuDetachIds"
#endif
    },
    {               /*  [36] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetVideoLinks_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x219u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_VIDEO_LINKS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetVideoLinks"
#endif
    },
    {               /*  [37] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetPciInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x21bu,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_PCI_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetPciInfo"
#endif
    },
    {               /*  [38] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetSvmSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x240u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_SVM_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetSvmSize"
#endif
    },
    {               /*  [39] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetUuidInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x274u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_UUID_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetUuidInfo"
#endif
    },
    {               /*  [40] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetUuidFromGpuId_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x275u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_UUID_FROM_GPU_ID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetUuidFromGpuId"
#endif
    },
    {               /*  [41] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuModifyGpuDrainState_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x278u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_MODIFY_DRAIN_STATE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuModifyGpuDrainState"
#endif
    },
    {               /*  [42] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuQueryGpuDrainState_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x279u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_QUERY_DRAIN_STATE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuQueryGpuDrainState"
#endif
    },
    {               /*  [43] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetMemOpEnable_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4811u)
        /*flags=*/      0x4811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x27bu,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_MEMOP_ENABLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetMemOpEnable"
#endif
    },
    {               /*  [44] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuDisableNvlinkInit_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
        /*flags=*/      0x13u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x281u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_DISABLE_NVLINK_INIT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuDisableNvlinkInit"
#endif
    },
    {               /*  [45] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdLegacyConfig_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x282u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_LEGACY_CONFIG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdLegacyConfig"
#endif
    },
    {               /*  [46] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdIdleChannels_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x283u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_IDLE_CHANNELS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdIdleChannels"
#endif
    },
    {               /*  [47] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdPushGspUcode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x285u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_PUSH_GSP_UCODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdPushGspUcode"
#endif
    },
    {               /*  [48] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuSetNvlinkBwMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x286u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_SET_NVLINK_BW_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuSetNvlinkBwMode"
#endif
    },
    {               /*  [49] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuGetNvlinkBwMode_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x287u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPU_GET_NVLINK_BW_MODE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuGetNvlinkBwMode"
#endif
    },
    {               /*  [50] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGsyncGetAttachedIds_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x301u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GSYNC_GET_ATTACHED_IDS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGsyncGetAttachedIds"
#endif
    },
    {               /*  [51] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGsyncGetIdInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x302u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GSYNC_GET_ID_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGsyncGetIdInfo"
#endif
    },
    {               /*  [52] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdEventSetNotification_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x501u,
        /*paramSize=*/  sizeof(NV0000_CTRL_EVENT_SET_NOTIFICATION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdEventSetNotification"
#endif
    },
    {               /*  [53] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdEventGetSystemEventStatus_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x502u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GET_SYSTEM_EVENT_STATUS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdEventGetSystemEventStatus"
#endif
    },
    {               /*  [54] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdNvdGetDumpSize_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x601u,
        /*paramSize=*/  sizeof(NV0000_CTRL_NVD_GET_DUMP_SIZE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdNvdGetDumpSize"
#endif
    },
    {               /*  [55] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdNvdGetDump_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
        /*flags=*/      0x4u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x602u,
        /*paramSize=*/  sizeof(NV0000_CTRL_NVD_GET_DUMP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdNvdGetDump"
#endif
    },
    {               /*  [56] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdNvdGetTimestamp_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
        /*flags=*/      0x813u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x603u,
        /*paramSize=*/  sizeof(NV0000_CTRL_NVD_GET_TIMESTAMP_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdNvdGetTimestamp"
#endif
    },
    {               /*  [57] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdNvdGetNvlogInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*flags=*/      0x7u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x604u,
        /*paramSize=*/  sizeof(NV0000_CTRL_NVD_GET_NVLOG_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdNvdGetNvlogInfo"
#endif
    },
    {               /*  [58] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdNvdGetNvlogBufferInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*flags=*/      0x7u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x605u,
        /*paramSize=*/  sizeof(NV0000_CTRL_NVD_GET_NVLOG_BUFFER_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdNvdGetNvlogBufferInfo"
#endif
    },
    {               /*  [59] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdNvdGetNvlog_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
        /*flags=*/      0x7u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x606u,
        /*paramSize=*/  sizeof(NV0000_CTRL_NVD_GET_NVLOG_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdNvdGetNvlog"
#endif
    },
    {               /*  [60] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdNvdGetRcerrRpt_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x607u,
        /*paramSize=*/  sizeof(NV0000_CTRL_CMD_NVD_GET_RCERR_RPT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdNvdGetRcerrRpt"
#endif
    },
    {               /*  [61] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSetSubProcessID_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x901u,
        /*paramSize=*/  sizeof(NV0000_CTRL_SET_SUB_PROCESS_ID_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSetSubProcessID"
#endif
    },
    {               /*  [62] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdDisableSubProcessUserdIsolation_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x902u,
        /*paramSize=*/  sizeof(NV0000_CTRL_DISABLE_SUB_PROCESS_USERD_ISOLATION_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdDisableSubProcessUserdIsolation"
#endif
    },
    {               /*  [63] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSyncGpuBoostInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xa01u,
        /*paramSize=*/  sizeof(NV0000_SYNC_GPU_BOOST_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSyncGpuBoostInfo"
#endif
    },
    {               /*  [64] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSyncGpuBoostGroupCreate_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
        /*flags=*/      0x5u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xa02u,
        /*paramSize=*/  sizeof(NV0000_SYNC_GPU_BOOST_GROUP_CREATE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSyncGpuBoostGroupCreate"
#endif
    },
    {               /*  [65] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSyncGpuBoostGroupDestroy_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
        /*flags=*/      0x5u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xa03u,
        /*paramSize=*/  sizeof(NV0000_SYNC_GPU_BOOST_GROUP_DESTROY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSyncGpuBoostGroupDestroy"
#endif
    },
    {               /*  [66] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdSyncGpuBoostGroupInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xa04u,
        /*paramSize=*/  sizeof(NV0000_SYNC_GPU_BOOST_GROUP_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdSyncGpuBoostGroupInfo"
#endif
    },
    {               /*  [67] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuAcctSetAccountingState_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
        /*flags=*/      0x140004u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xb01u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPUACCT_SET_ACCOUNTING_STATE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuAcctSetAccountingState"
#endif
    },
    {               /*  [68] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuAcctGetAccountingState_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xb02u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPUACCT_GET_ACCOUNTING_STATE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuAcctGetAccountingState"
#endif
    },
    {               /*  [69] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuAcctGetProcAccountingInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xb03u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPUACCT_GET_PROC_ACCOUNTING_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuAcctGetProcAccountingInfo"
#endif
    },
    {               /*  [70] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuAcctGetAccountingPids_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xb04u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPUACCT_GET_ACCOUNTING_PIDS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuAcctGetAccountingPids"
#endif
    },
    {               /*  [71] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdGpuAcctClearAccountingData_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
        /*flags=*/      0x140004u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xb05u,
        /*paramSize=*/  sizeof(NV0000_CTRL_GPUACCT_CLEAR_ACCOUNTING_DATA_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdGpuAcctClearAccountingData"
#endif
    },
    {               /*  [72] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdVgpuGetStartData_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xc01u,
        /*paramSize=*/  sizeof(NV0000_CTRL_VGPU_GET_START_DATA_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdVgpuGetStartData"
#endif
    },
    {               /*  [73] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdClientGetAddrSpaceType_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xd01u,
        /*paramSize=*/  sizeof(NV0000_CTRL_CLIENT_GET_ADDR_SPACE_TYPE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdClientGetAddrSpaceType"
#endif
    },
    {               /*  [74] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdClientGetHandleInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xd02u,
        /*paramSize=*/  sizeof(NV0000_CTRL_CLIENT_GET_HANDLE_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdClientGetHandleInfo"
#endif
    },
    {               /*  [75] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdClientGetAccessRights_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xd03u,
        /*paramSize=*/  sizeof(NV0000_CTRL_CLIENT_GET_ACCESS_RIGHTS_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdClientGetAccessRights"
#endif
    },
    {               /*  [76] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdClientSetInheritedSharePolicy_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xd04u,
        /*paramSize=*/  sizeof(NV0000_CTRL_CLIENT_SET_INHERITED_SHARE_POLICY_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdClientSetInheritedSharePolicy"
#endif
    },
    {               /*  [77] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdClientGetChildHandle_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xd05u,
        /*paramSize=*/  sizeof(NV0000_CTRL_CMD_CLIENT_GET_CHILD_HANDLE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdClientGetChildHandle"
#endif
    },
    {               /*  [78] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdClientShareObject_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xd06u,
        /*paramSize=*/  sizeof(NV0000_CTRL_CLIENT_SHARE_OBJECT_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdClientShareObject"
#endif
    },
    {               /*  [79] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdObjectsAreDuplicates_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
        /*flags=*/      0x811u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0xd07u,
        /*paramSize=*/  sizeof(NV0000_CTRL_CLIENT_OBJECTS_ARE_DUPLICATES_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdObjectsAreDuplicates"
#endif
    },
    {               /*  [80] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdOsUnixFlushUserCache_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
        /*flags=*/      0x10u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x3d02u,
        /*paramSize=*/  sizeof(NV0000_CTRL_OS_UNIX_FLUSH_USER_CACHE_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdOsUnixFlushUserCache"
#endif
    },
    {               /*  [81] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdOsUnixExportObjectToFd_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x3d05u,
        /*paramSize=*/  sizeof(NV0000_CTRL_OS_UNIX_EXPORT_OBJECT_TO_FD_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdOsUnixExportObjectToFd"
#endif
    },
    {               /*  [82] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdOsUnixImportObjectFromFd_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x3d06u,
        /*paramSize=*/  sizeof(NV0000_CTRL_OS_UNIX_IMPORT_OBJECT_FROM_FD_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdOsUnixImportObjectFromFd"
#endif
    },
    {               /*  [83] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdOsUnixGetExportObjectInfo_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x3d08u,
        /*paramSize=*/  sizeof(NV0000_CTRL_OS_UNIX_GET_EXPORT_OBJECT_INFO_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdOsUnixGetExportObjectInfo"
#endif
    },
    {               /*  [84] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdOsUnixCreateExportObjectFd_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x3d0au,
        /*paramSize=*/  sizeof(NV0000_CTRL_OS_UNIX_CREATE_EXPORT_OBJECT_FD_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdOsUnixCreateExportObjectFd"
#endif
    },
    {               /*  [85] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdOsUnixExportObjectsToFd_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x3d0bu,
        /*paramSize=*/  sizeof(NV0000_CTRL_OS_UNIX_EXPORT_OBJECTS_TO_FD_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdOsUnixExportObjectsToFd"
#endif
    },
    {               /*  [86] */
#if NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*pFunc=*/      NULL,
#else
        /*pFunc=*/      cliresCtrlCmdOsUnixImportObjectsFromFd_IMPL_cb,
#endif // NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
        /*flags=*/      0x11u,
        /*accessRight=*/0x0u,
        /*methodId=*/   0x3d0cu,
        /*paramSize=*/  sizeof(NV0000_CTRL_OS_UNIX_IMPORT_OBJECTS_FROM_FD_PARAMS),
        /*pClassInfo=*/ &(__nvoc_class_def_RmClientResource.classInfo),
#if NV_PRINTF_STRINGS_ALLOWED
        /*func=*/       "cliresCtrlCmdOsUnixImportObjectsFromFd"
#endif
    },

};

const struct NVOC_EXPORT_INFO __nvoc_export_info_RmClientResource =
{
    /*numEntries=*/     87,
    /*pExportEntries=*/ __nvoc_exported_method_def_RmClientResource
};

void __nvoc_dtor_RsClientResource(RsClientResource*);
void __nvoc_dtor_RmResourceCommon(RmResourceCommon*);
void __nvoc_dtor_Notifier(Notifier*);
void __nvoc_dtor_RmClientResource(RmClientResource *pThis) {
    __nvoc_cliresDestruct(pThis);
    __nvoc_dtor_RsClientResource(&pThis->__nvoc_base_RsClientResource);
    __nvoc_dtor_RmResourceCommon(&pThis->__nvoc_base_RmResourceCommon);
    __nvoc_dtor_Notifier(&pThis->__nvoc_base_Notifier);
    PORT_UNREFERENCED_VARIABLE(pThis);
}

void __nvoc_init_dataField_RmClientResource(RmClientResource *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);
}

NV_STATUS __nvoc_ctor_RsClientResource(RsClientResource* , struct CALL_CONTEXT *, struct RS_RES_ALLOC_PARAMS_INTERNAL *);
NV_STATUS __nvoc_ctor_RmResourceCommon(RmResourceCommon* );
NV_STATUS __nvoc_ctor_Notifier(Notifier* , struct CALL_CONTEXT *);
NV_STATUS __nvoc_ctor_RmClientResource(RmClientResource *pThis, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status = NV_OK;
    status = __nvoc_ctor_RsClientResource(&pThis->__nvoc_base_RsClientResource, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_RmClientResource_fail_RsClientResource;
    status = __nvoc_ctor_RmResourceCommon(&pThis->__nvoc_base_RmResourceCommon);
    if (status != NV_OK) goto __nvoc_ctor_RmClientResource_fail_RmResourceCommon;
    status = __nvoc_ctor_Notifier(&pThis->__nvoc_base_Notifier, arg_pCallContext);
    if (status != NV_OK) goto __nvoc_ctor_RmClientResource_fail_Notifier;
    __nvoc_init_dataField_RmClientResource(pThis);

    status = __nvoc_cliresConstruct(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_ctor_RmClientResource_fail__init;
    goto __nvoc_ctor_RmClientResource_exit; // Success

__nvoc_ctor_RmClientResource_fail__init:
    __nvoc_dtor_Notifier(&pThis->__nvoc_base_Notifier);
__nvoc_ctor_RmClientResource_fail_Notifier:
    __nvoc_dtor_RmResourceCommon(&pThis->__nvoc_base_RmResourceCommon);
__nvoc_ctor_RmClientResource_fail_RmResourceCommon:
    __nvoc_dtor_RsClientResource(&pThis->__nvoc_base_RsClientResource);
__nvoc_ctor_RmClientResource_fail_RsClientResource:
__nvoc_ctor_RmClientResource_exit:

    return status;
}

static void __nvoc_init_funcTable_RmClientResource_1(RmClientResource *pThis) {
    PORT_UNREFERENCED_VARIABLE(pThis);

    pThis->__cliresAccessCallback__ = &cliresAccessCallback_IMPL;

    pThis->__cliresShareCallback__ = &cliresShareCallback_IMPL;

    pThis->__cliresControl_Prologue__ = &cliresControl_Prologue_IMPL;

    pThis->__cliresControl_Epilogue__ = &cliresControl_Epilogue_IMPL;

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
    pThis->__cliresCtrlCmdSystemGetCpuInfo__ = &cliresCtrlCmdSystemGetCpuInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemGetFeatures__ = &cliresCtrlCmdSystemGetFeatures_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4811u)
    pThis->__cliresCtrlCmdSystemGetBuildVersionV2__ = &cliresCtrlCmdSystemGetBuildVersionV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemExecuteAcpiMethod__ = &cliresCtrlCmdSystemExecuteAcpiMethod_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4013u)
    pThis->__cliresCtrlCmdSystemGetChipsetInfo__ = &cliresCtrlCmdSystemGetChipsetInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x0u)
    pThis->__cliresCtrlCmdSystemSetMemorySize__ = &cliresCtrlCmdSystemSetMemorySize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemGetClassList__ = &cliresCtrlCmdSystemGetClassList_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemNotifyEvent__ = &cliresCtrlCmdSystemNotifyEvent_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdSystemGetPlatformType__ = &cliresCtrlCmdSystemGetPlatformType_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemDebugCtrlRmMsg__ = &cliresCtrlCmdSystemDebugCtrlRmMsg_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemGetHwbcInfo__ = &cliresCtrlCmdSystemGetHwbcInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdSystemGetP2pCaps__ = &cliresCtrlCmdSystemGetP2pCaps_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdSystemGetP2pCapsV2__ = &cliresCtrlCmdSystemGetP2pCapsV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdSystemGetP2pCapsMatrix__ = &cliresCtrlCmdSystemGetP2pCapsMatrix_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemGetPerfSensorCounters__ = &cliresCtrlCmdSystemGetPerfSensorCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemGetExtendedPerfSensorCounters__ = &cliresCtrlCmdSystemGetExtendedPerfSensorCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdSystemGetGpusPowerStatus__ = &cliresCtrlCmdSystemGetGpusPowerStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdSystemGetPrivilegedStatus__ = &cliresCtrlCmdSystemGetPrivilegedStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdSystemGetFabricStatus__ = &cliresCtrlCmdSystemGetFabricStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__cliresCtrlCmdSystemGetRmInstanceId__ = &cliresCtrlCmdSystemGetRmInstanceId_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x807u)
    pThis->__cliresCtrlCmdSystemGetClientDatabaseInfo__ = &cliresCtrlCmdSystemGetClientDatabaseInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
    pThis->__cliresCtrlCmdSystemRmctrlCacheModeCtrl__ = &cliresCtrlCmdSystemRmctrlCacheModeCtrl_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdNvdGetDumpSize__ = &cliresCtrlCmdNvdGetDumpSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__cliresCtrlCmdNvdGetDump__ = &cliresCtrlCmdNvdGetDump_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__cliresCtrlCmdNvdGetTimestamp__ = &cliresCtrlCmdNvdGetTimestamp_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
    pThis->__cliresCtrlCmdNvdGetNvlogInfo__ = &cliresCtrlCmdNvdGetNvlogInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
    pThis->__cliresCtrlCmdNvdGetNvlogBufferInfo__ = &cliresCtrlCmdNvdGetNvlogBufferInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x7u)
    pThis->__cliresCtrlCmdNvdGetNvlog__ = &cliresCtrlCmdNvdGetNvlog_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdNvdGetRcerrRpt__ = &cliresCtrlCmdNvdGetRcerrRpt_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdClientGetAddrSpaceType__ = &cliresCtrlCmdClientGetAddrSpaceType_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdClientGetHandleInfo__ = &cliresCtrlCmdClientGetHandleInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdClientGetAccessRights__ = &cliresCtrlCmdClientGetAccessRights_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdClientSetInheritedSharePolicy__ = &cliresCtrlCmdClientSetInheritedSharePolicy_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdClientShareObject__ = &cliresCtrlCmdClientShareObject_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdClientGetChildHandle__ = &cliresCtrlCmdClientGetChildHandle_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdObjectsAreDuplicates__ = &cliresCtrlCmdObjectsAreDuplicates_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__cliresCtrlCmdGpuGetAttachedIds__ = &cliresCtrlCmdGpuGetAttachedIds_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuGetIdInfo__ = &cliresCtrlCmdGpuGetIdInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuGetIdInfoV2__ = &cliresCtrlCmdGpuGetIdInfoV2_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuGetInitStatus__ = &cliresCtrlCmdGpuGetInitStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__cliresCtrlCmdGpuGetDeviceIds__ = &cliresCtrlCmdGpuGetDeviceIds_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuGetProbedIds__ = &cliresCtrlCmdGpuGetProbedIds_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuAttachIds__ = &cliresCtrlCmdGpuAttachIds_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuDetachIds__ = &cliresCtrlCmdGpuDetachIds_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuGetSvmSize__ = &cliresCtrlCmdGpuGetSvmSize_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuGetPciInfo__ = &cliresCtrlCmdGpuGetPciInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdGpuGetUuidInfo__ = &cliresCtrlCmdGpuGetUuidInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuGetUuidFromGpuId__ = &cliresCtrlCmdGpuGetUuidFromGpuId_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__cliresCtrlCmdGpuModifyGpuDrainState__ = &cliresCtrlCmdGpuModifyGpuDrainState_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdGpuQueryGpuDrainState__ = &cliresCtrlCmdGpuQueryGpuDrainState_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4811u)
    pThis->__cliresCtrlCmdGpuGetMemOpEnable__ = &cliresCtrlCmdGpuGetMemOpEnable_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x13u)
    pThis->__cliresCtrlCmdGpuDisableNvlinkInit__ = &cliresCtrlCmdGpuDisableNvlinkInit_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__cliresCtrlCmdGpuSetNvlinkBwMode__ = &cliresCtrlCmdGpuSetNvlinkBwMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x813u)
    pThis->__cliresCtrlCmdGpuGetNvlinkBwMode__ = &cliresCtrlCmdGpuGetNvlinkBwMode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdLegacyConfig__ = &cliresCtrlCmdLegacyConfig_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdIdleChannels__ = &cliresCtrlCmdIdleChannels_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdPushGspUcode__ = &cliresCtrlCmdPushGspUcode_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdGpuGetVideoLinks__ = &cliresCtrlCmdGpuGetVideoLinks_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdGsyncGetAttachedIds__ = &cliresCtrlCmdGsyncGetAttachedIds_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdGsyncGetIdInfo__ = &cliresCtrlCmdGsyncGetIdInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdEventSetNotification__ = &cliresCtrlCmdEventSetNotification_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdEventGetSystemEventStatus__ = &cliresCtrlCmdEventGetSystemEventStatus_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdOsUnixExportObjectToFd__ = &cliresCtrlCmdOsUnixExportObjectToFd_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdOsUnixImportObjectFromFd__ = &cliresCtrlCmdOsUnixImportObjectFromFd_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdOsUnixGetExportObjectInfo__ = &cliresCtrlCmdOsUnixGetExportObjectInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdOsUnixCreateExportObjectFd__ = &cliresCtrlCmdOsUnixCreateExportObjectFd_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdOsUnixExportObjectsToFd__ = &cliresCtrlCmdOsUnixExportObjectsToFd_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x11u)
    pThis->__cliresCtrlCmdOsUnixImportObjectsFromFd__ = &cliresCtrlCmdOsUnixImportObjectsFromFd_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdOsUnixFlushUserCache__ = &cliresCtrlCmdOsUnixFlushUserCache_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
    pThis->__cliresCtrlCmdGpuAcctSetAccountingState__ = &cliresCtrlCmdGpuAcctSetAccountingState_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdGpuAcctGetAccountingState__ = &cliresCtrlCmdGpuAcctGetAccountingState_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdGpuAcctGetProcAccountingInfo__ = &cliresCtrlCmdGpuAcctGetProcAccountingInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdGpuAcctGetAccountingPids__ = &cliresCtrlCmdGpuAcctGetAccountingPids_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x140004u)
    pThis->__cliresCtrlCmdGpuAcctClearAccountingData__ = &cliresCtrlCmdGpuAcctClearAccountingData_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdSetSubProcessID__ = &cliresCtrlCmdSetSubProcessID_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdDisableSubProcessUserdIsolation__ = &cliresCtrlCmdDisableSubProcessUserdIsolation_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdSyncGpuBoostInfo__ = &cliresCtrlCmdSyncGpuBoostInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
    pThis->__cliresCtrlCmdSyncGpuBoostGroupCreate__ = &cliresCtrlCmdSyncGpuBoostGroupCreate_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x5u)
    pThis->__cliresCtrlCmdSyncGpuBoostGroupDestroy__ = &cliresCtrlCmdSyncGpuBoostGroupDestroy_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x811u)
    pThis->__cliresCtrlCmdSyncGpuBoostGroupInfo__ = &cliresCtrlCmdSyncGpuBoostGroupInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdVgpuGetStartData__ = &cliresCtrlCmdVgpuGetStartData_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdVgpuGetVgpuVersion__ = &cliresCtrlCmdVgpuGetVgpuVersion_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdVgpuSetVgpuVersion__ = &cliresCtrlCmdVgpuSetVgpuVersion_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemNVPCFGetPowerModeInfo__ = &cliresCtrlCmdSystemNVPCFGetPowerModeInfo_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x4u)
    pThis->__cliresCtrlCmdSystemSyncExternalFabricMgmt__ = &cliresCtrlCmdSystemSyncExternalFabricMgmt_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemPfmreqhndlrGetPerfSensorCounters__ = &cliresCtrlCmdSystemPfmreqhndlrGetPerfSensorCounters_IMPL;
#endif

#if !NVOC_EXPORTED_METHOD_DISABLED_BY_FLAG(0x10u)
    pThis->__cliresCtrlCmdSystemPfmreqhndlrGetExtendedPerfSensorCounters__ = &cliresCtrlCmdSystemPfmreqhndlrGetExtendedPerfSensorCounters_IMPL;
#endif

    pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__resAccessCallback__ = &__nvoc_thunk_RmClientResource_resAccessCallback;

    pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__resShareCallback__ = &__nvoc_thunk_RmClientResource_resShareCallback;

    pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__resControl_Prologue__ = &__nvoc_thunk_RmClientResource_resControl_Prologue;

    pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__resControl_Epilogue__ = &__nvoc_thunk_RmClientResource_resControl_Epilogue;

    pThis->__cliresControl__ = &__nvoc_thunk_RsResource_cliresControl;

    pThis->__cliresUnmap__ = &__nvoc_thunk_RsResource_cliresUnmap;

    pThis->__cliresMapTo__ = &__nvoc_thunk_RsResource_cliresMapTo;

    pThis->__cliresSetNotificationShare__ = &__nvoc_thunk_Notifier_cliresSetNotificationShare;

    pThis->__cliresControlFilter__ = &__nvoc_thunk_RsResource_cliresControlFilter;

    pThis->__cliresAddAdditionalDependants__ = &__nvoc_thunk_RsResource_cliresAddAdditionalDependants;

    pThis->__cliresGetRefCount__ = &__nvoc_thunk_RsResource_cliresGetRefCount;

    pThis->__cliresUnregisterEvent__ = &__nvoc_thunk_Notifier_cliresUnregisterEvent;

    pThis->__cliresControlSerialization_Prologue__ = &__nvoc_thunk_RsResource_cliresControlSerialization_Prologue;

    pThis->__cliresCanCopy__ = &__nvoc_thunk_RsResource_cliresCanCopy;

    pThis->__cliresPreDestruct__ = &__nvoc_thunk_RsResource_cliresPreDestruct;

    pThis->__cliresUnmapFrom__ = &__nvoc_thunk_RsResource_cliresUnmapFrom;

    pThis->__cliresIsDuplicate__ = &__nvoc_thunk_RsResource_cliresIsDuplicate;

    pThis->__cliresControlSerialization_Epilogue__ = &__nvoc_thunk_RsResource_cliresControlSerialization_Epilogue;

    pThis->__cliresGetNotificationListPtr__ = &__nvoc_thunk_Notifier_cliresGetNotificationListPtr;

    pThis->__cliresGetNotificationShare__ = &__nvoc_thunk_Notifier_cliresGetNotificationShare;

    pThis->__cliresControlLookup__ = &__nvoc_thunk_RsResource_cliresControlLookup;

    pThis->__cliresMap__ = &__nvoc_thunk_RsResource_cliresMap;

    pThis->__cliresGetOrAllocNotifShare__ = &__nvoc_thunk_Notifier_cliresGetOrAllocNotifShare;
}

void __nvoc_init_funcTable_RmClientResource(RmClientResource *pThis) {
    __nvoc_init_funcTable_RmClientResource_1(pThis);
}

void __nvoc_init_RsClientResource(RsClientResource*);
void __nvoc_init_RmResourceCommon(RmResourceCommon*);
void __nvoc_init_Notifier(Notifier*);
void __nvoc_init_RmClientResource(RmClientResource *pThis) {
    pThis->__nvoc_pbase_RmClientResource = pThis;
    pThis->__nvoc_pbase_Object = &pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object;
    pThis->__nvoc_pbase_RsResource = &pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource;
    pThis->__nvoc_pbase_RsClientResource = &pThis->__nvoc_base_RsClientResource;
    pThis->__nvoc_pbase_RmResourceCommon = &pThis->__nvoc_base_RmResourceCommon;
    pThis->__nvoc_pbase_INotifier = &pThis->__nvoc_base_Notifier.__nvoc_base_INotifier;
    pThis->__nvoc_pbase_Notifier = &pThis->__nvoc_base_Notifier;
    __nvoc_init_RsClientResource(&pThis->__nvoc_base_RsClientResource);
    __nvoc_init_RmResourceCommon(&pThis->__nvoc_base_RmResourceCommon);
    __nvoc_init_Notifier(&pThis->__nvoc_base_Notifier);
    __nvoc_init_funcTable_RmClientResource(pThis);
}

NV_STATUS __nvoc_objCreate_RmClientResource(RmClientResource **ppThis, Dynamic *pParent, NvU32 createFlags, struct CALL_CONTEXT * arg_pCallContext, struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams) {
    NV_STATUS status;
    Object *pParentObj;
    RmClientResource *pThis;

    status = __nvoc_handleObjCreateMemAlloc(createFlags, sizeof(RmClientResource), (void**)&pThis, (void**)ppThis);
    if (status != NV_OK)
        return status;

    portMemSet(pThis, 0, sizeof(RmClientResource));

    __nvoc_initRtti(staticCast(pThis, Dynamic), &__nvoc_class_def_RmClientResource);

    pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object.createFlags = createFlags;

    if (pParent != NULL && !(createFlags & NVOC_OBJ_CREATE_FLAGS_PARENT_HALSPEC_ONLY))
    {
        pParentObj = dynamicCast(pParent, Object);
        objAddChild(pParentObj, &pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object);
    }
    else
    {
        pThis->__nvoc_base_RsClientResource.__nvoc_base_RsResource.__nvoc_base_Object.pParent = NULL;
    }

    __nvoc_init_RmClientResource(pThis);
    status = __nvoc_ctor_RmClientResource(pThis, arg_pCallContext, arg_pParams);
    if (status != NV_OK) goto __nvoc_objCreate_RmClientResource_cleanup;

    *ppThis = pThis;

    return NV_OK;

__nvoc_objCreate_RmClientResource_cleanup:
    // do not call destructors here since the constructor already called them
    if (createFlags & NVOC_OBJ_CREATE_FLAGS_IN_PLACE_CONSTRUCT)
        portMemSet(pThis, 0, sizeof(RmClientResource));
    else
        portMemFree(pThis);

    // coverity[leaked_storage:FALSE]
    return status;
}

NV_STATUS __nvoc_objCreateDynamic_RmClientResource(RmClientResource **ppThis, Dynamic *pParent, NvU32 createFlags, va_list args) {
    NV_STATUS status;
    struct CALL_CONTEXT * arg_pCallContext = va_arg(args, struct CALL_CONTEXT *);
    struct RS_RES_ALLOC_PARAMS_INTERNAL * arg_pParams = va_arg(args, struct RS_RES_ALLOC_PARAMS_INTERNAL *);

    status = __nvoc_objCreate_RmClientResource(ppThis, pParent, createFlags, arg_pCallContext, arg_pParams);

    return status;
}
