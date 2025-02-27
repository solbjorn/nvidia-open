/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2020 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

/*!
 * @file
 *
 * @brief  Provides RmExportObject, RmImportObject, RmFreeObjExportHandle and
 *         RmGetExportObjectInfo interfaces :
 *
 *             These interfaces allow rm clients to export their objects into
 *         a unique RmObjExportHandle which another rm client could
 *         import, even if the source rm client gets destroyed.
 *
 *             RM's device instance may get destroyed asynchronously, in which
 *         case exported objects residing on that device instance also get
 *         destroyed.  This means it is not possible to import it back, but the
 *         RmObjExportHandle into which the object had been exported still
 *         remains valid but no other object could get it.
 *
 *         There are not init/fini routines, it is the responsibility of the
 *         rest of RM's eco-system to make sure that all RmObjExportHandles get
 *         freed during driver unload.
 *
 *         The api lock is expected to be held before calling into
 *         rmobjexportimport.c; do not hold gpu or any other lock.
 */

#include "rmobjexportimport.h"
#include "nvlimits.h"
#include "gpu/device/device.h"

#include "containers/map.h"
#include "rmapi/rmapi.h"
#include "rmapi/rs_utils.h"

#include "class/cl0080.h"
#include "class/cl2080.h"
#include <ctrl/ctrl0000/ctrl0000unix.h>
#include <ctrl/ctrl0000/ctrl0000client.h>

//
// A reference to an RmObjExportHandle
// generated by function RmGenerateObjExportHandle().
//
typedef struct
{
    NvU32             deviceInstance;
} RmObjExportHandleRef;
MAKE_MAP(RmObjExportHandleMap, RmObjExportHandleRef);

//
// Memory allocator
//
PORT_MEM_ALLOCATOR *pMemAllocator;

//
// Map RmObjExportHandle -> RmObjExportHandleRef
//
RmObjExportHandleMap objExportHandleMap;

//
// Rm client to use to dup an object exported to RmObjExportHandle.  The minimal
// requirement for duping is to have a device object allocated.  This rm client
// is simply like any other external rm client and has no any special handling.
//
// We keep this rm client just like any other external rm client: if
// gpu(s)/device gets powered-down/uninitialized, rm objects allocated by
// external rm clients and located on that gpu(s)/device gets freed (the
// os-layer does that).  In that way, code in this file doesn't need to worry
// about freeing exported objects located on that gpu(s)/device.
//
NvHandle hObjExportRmClient;

//
// Tracker for device and subdevice handles. For now only one subdevice
// (instance 0) is supported per device.
//
typedef struct
{
    NvHandle hRmDevice;
    NvHandle hRmSubDevice;
} RmObjExportDevice;

RmObjExportDevice objExportDevice[NV_MAX_DEVICES];

//
// Usage reference counter for static object in this file like rm client used to
// dup an exported object, memory allocator, map etc.
//
NvU64 objExportImportRefCount;

//
// Static functions for internal use to code in this file.
//
static NV_STATUS  RmRefObjExportImport    (void);
static void       RmUnrefObjExportImport  (void);

static RmObjExportHandle RmGenerateObjExportHandle  (NvU32 deviceInstance);
static NV_STATUS         RmUnrefObjExportHandle     (RmObjExportHandle hObject);

//
// Free the RmObjExportHandle.
//
static NV_STATUS RmUnrefObjExportHandle(RmObjExportHandle hObject)
{
    RM_API *pRmApi = rmapiGetInterface(RMAPI_API_LOCK_INTERNAL);

    RmObjExportHandleRef *pHandleRef =
                          mapFind(&objExportHandleMap, hObject);

    if (pHandleRef == NULL)
    {
        return NV_ERR_OBJECT_NOT_FOUND;
    }

    if (pRmApi->Free(pRmApi,
                     hObjExportRmClient,
                     (NvHandle)mapKey(&objExportHandleMap, pHandleRef)) != NV_OK)
    {
        NV_PRINTF(LEVEL_WARNING,
                  "Exported object trying to free was zombie in %s\n",
                  __FUNCTION__);
    }

    mapRemove(&objExportHandleMap, pHandleRef);

    return NV_OK;
}

//
// Generate unique RmObjExportHandle.
//
static RmObjExportHandle RmGenerateObjExportHandle(NvU32 deviceInstance)
{
    //
    // The object export handle belongs to range of 0 to
    // (MAX_OBJ_EXPORT_HANDLES - 1).
    //
    // Handle 0 is considered as invalid object handle, this function generates
    // handle from range of 1 to (MAX_OBJ_EXPORT_HANDLES - 1).
    //
    #define MAX_OBJ_EXPORT_HANDLES 0x80000

    static NvHandle hObjExportHandleNext = 1;

    RmObjExportHandle hStartHandle = hObjExportHandleNext;
    RmObjExportHandle hObject = 0;

    do
    {
        RmObjExportHandleRef *pHandleRef;

        hObject = hObjExportHandleNext++;
        /* Reset hObjExportHandleNext to next valid handle */
        if (hObjExportHandleNext == MAX_OBJ_EXPORT_HANDLES) {
            hObjExportHandleNext = 1;
        }

        pHandleRef = mapFind(&objExportHandleMap, hObject);

        if (hObject != hObjExportRmClient && pHandleRef == NULL)
        {
            break;
        }
        else
        {
            hObject = 0;
        }

    } while(hObjExportHandleNext != hStartHandle);

    if (hObject != 0)
    {
        RmObjExportHandleRef *pHandleRef =
                    mapInsertNew(&objExportHandleMap, hObject);

        if (pHandleRef != NULL)
        {
            pHandleRef->deviceInstance = deviceInstance;
        }
        else
        {
            hObject = 0;
        }
    }

    return hObject;
}

//
// Validate that the given hObject is not one of our internally used handles.
//
// Note that mapFind(&objExportHandleMap, hObject) could still fail; that is the
// caller's responsibility.
//
static NvBool RmValidateHandleAgainstInternalHandles(RmObjExportHandle hObject)
{
    NvU32 i;

    //
    // No external RmObjExportHandle could be valid if hObjExportRmClient has
    // not been allocated yet, or if it is equal to any of the handles used
    // internally by code in this file.
    //
    if (objExportImportRefCount == 0 || hObjExportRmClient == 0 ||
        hObject == hObjExportRmClient)
    {
        return NV_FALSE;
    }

    for (i = 0; i < NV_ARRAY_ELEMENTS(objExportDevice); i++)
    {
        if (objExportDevice[i].hRmDevice != 0 &&
            (hObject == objExportDevice[i].hRmDevice ||
             hObject == objExportDevice[i].hRmSubDevice))
        {
            return NV_FALSE;
        }
    }

    return NV_TRUE;
}

//
// Increment reference count of static objects internally
// used by code in this file.
//
static NV_STATUS RmRefObjExportImport(void)
{
    NV_STATUS rmStatus = NV_OK;
    RM_API   *pRmApi = rmapiGetInterface(RMAPI_API_LOCK_INTERNAL);

    if ((objExportImportRefCount++) != 0)
    {
        NV_ASSERT(hObjExportRmClient != 0);
        NV_ASSERT(pMemAllocator != NULL);
        return NV_OK;
    }

    rmStatus = pRmApi->AllocWithHandle(pRmApi,
                                       NV01_NULL_OBJECT,
                                       NV01_NULL_OBJECT,
                                       NV01_NULL_OBJECT,
                                       NV01_ROOT,
                                       &hObjExportRmClient);
    if (rmStatus != NV_OK)
    {
        NV_PRINTF(LEVEL_ERROR, "Unable to alloc root in %s\n", __FUNCTION__);
        goto failed;
    }

    pMemAllocator = portMemAllocatorCreateNonPaged();

    if (pMemAllocator == NULL)
    {
        NV_PRINTF(LEVEL_ERROR, "Failed to alloc memory allocator in %s\n",
                  __FUNCTION__);
        goto failed;
    }

    mapInit(&objExportHandleMap, pMemAllocator);

    return NV_OK;

failed:

    RmUnrefObjExportImport();

    return rmStatus;
}

//
// Decrement reference count of static objects internally used by code in this
// file, and free them if reference count reaches to zero.
//
static void RmUnrefObjExportImport(void)
{
    RM_API *pRmApi = rmapiGetInterface(RMAPI_GPU_LOCK_INTERNAL);

    if ((--objExportImportRefCount) != 0)
    {
        return;
    }

    if (pMemAllocator != NULL)
    {
        NvU32 i;

        for (i = 0; i < NV_ARRAY_ELEMENTS(objExportDevice); i++)
        {
            if (objExportDevice[i].hRmDevice != 0)
            {
                RmUnrefObjExportHandle(objExportDevice[i].hRmSubDevice);
                objExportDevice[i].hRmSubDevice = 0;
                RmUnrefObjExportHandle(objExportDevice[i].hRmDevice);
                objExportDevice[i].hRmDevice = 0;
            }
        }

        mapDestroy(&objExportHandleMap);

        portMemAllocatorRelease(pMemAllocator);
        pMemAllocator = NULL;
    }

    if (hObjExportRmClient != 0)
    {
        NV_STATUS rmStatus = pRmApi->Free(pRmApi,
            hObjExportRmClient,
            hObjExportRmClient);

        NV_ASSERT(rmStatus == NV_OK);
        hObjExportRmClient = 0;
    }
}

NV_STATUS RmExportObject(NvHandle hSrcClient, NvHandle hSrcObject,
                         RmObjExportHandle *pDstObject, NvU32 *pDeviceInstance)
{
    RmObjExportHandle hDstObject;
    NvU32             deviceInstance = NV_MAX_DEVICES;
    NvHandle          hTmpObject;
    NvBool            bClientAsDstParent = NV_FALSE;
    NV_STATUS         status;
    RM_API           *pRmApi = rmapiGetInterface(RMAPI_API_LOCK_INTERNAL);

    if (pDstObject == NULL)
    {
        return NV_ERR_INVALID_ARGUMENT;
    }

    //
    // Find the device instance on which the rm object exists.
    //
    hTmpObject = hSrcObject;
    do
    {
        RsResourceRef *pResourceRef;
	Device *pDevice;

        status = serverutilGetResourceRef(hSrcClient, hTmpObject, &pResourceRef);
        if (status != NV_OK)
            return status;

        pDevice = dynamicCast(pResourceRef->pResource, Device);
        if (pDevice != NULL)
        {
            deviceInstance = pDevice->deviceInst;
            break;
        }

        hTmpObject = pResourceRef->pParentRef ? pResourceRef->pParentRef->hResource : 0;
    } while (hTmpObject != 0);

    // If a memory object is not parented by a device, use client as a parent.
    if ((hTmpObject == 0) || (deviceInstance >= NV_MAX_DEVICES))
    {
        bClientAsDstParent = NV_TRUE;
    }

    status = RmRefObjExportImport();

    if (status != NV_OK)
    {
        return status;
    }

    if (!bClientAsDstParent &&
        ((objExportDevice[deviceInstance].hRmDevice == 0) ||
         serverutilValidateNewResourceHandle(hObjExportRmClient,
                        objExportDevice[deviceInstance].hRmDevice)))
    {
        //
        // Device object has not been created or it got destroyed in the
        // teardown path of device instance destruction; allocate a fresh device
        // object.
        //
        NV0080_ALLOC_PARAMETERS params;
        NV2080_ALLOC_PARAMETERS subdevParams;

        if (objExportDevice[deviceInstance].hRmDevice == 0)
        {
            NV_ASSERT(objExportDevice[deviceInstance].hRmSubDevice == 0);

            objExportDevice[deviceInstance].hRmDevice =
                            RmGenerateObjExportHandle(deviceInstance);
            objExportDevice[deviceInstance].hRmSubDevice =
                                RmGenerateObjExportHandle(deviceInstance);

            if (objExportDevice[deviceInstance].hRmDevice == 0 ||
                objExportDevice[deviceInstance].hRmSubDevice == 0)
            {
                NV_PRINTF(LEVEL_ERROR, "Failed to allocate object handles in %s\n",
                          __FUNCTION__);

                status = NV_ERR_NO_MEMORY;
                goto done;
            }
        }

        portMemSet(&params, 0, sizeof(NV0080_ALLOC_PARAMETERS));

        params.deviceId = deviceInstance;

        status = pRmApi->AllocWithHandle(pRmApi,
                                         hObjExportRmClient,
                                         hObjExportRmClient,
                                         objExportDevice[deviceInstance].hRmDevice,
                                         NV01_DEVICE_0,
                                         &params);
        if (status != NV_OK)
        {
            NV_PRINTF(LEVEL_ERROR, "Unable to alloc device in %s\n",
                      __FUNCTION__);
            goto done;
        }

        portMemSet(&subdevParams, 0, sizeof(NV2080_ALLOC_PARAMETERS));

        subdevParams.subDeviceId = 0;

        status = pRmApi->AllocWithHandle(pRmApi,
                                         hObjExportRmClient,
                                         objExportDevice[deviceInstance].hRmDevice,
                                         objExportDevice[deviceInstance].hRmSubDevice,
                                         NV20_SUBDEVICE_0,
                                         &subdevParams);
        if (status != NV_OK)
        {
            NV_PRINTF(LEVEL_ERROR, "Unable to alloc subdevice in %s\n",
                      __FUNCTION__);

            (void) pRmApi->Free(pRmApi, hObjExportRmClient,
                                objExportDevice[deviceInstance].hRmDevice);
            goto done;
        }
    }

    hDstObject = RmGenerateObjExportHandle(deviceInstance);

    if (hDstObject == 0)
    {
        NV_PRINTF(LEVEL_ERROR, "Failed to allocate object handle in %s\n",
                  __FUNCTION__);
        status = NV_ERR_NO_MEMORY;
        goto done;
    }

    // If duping under device handle fails, try subdevice handle.
    status = pRmApi->DupObject(pRmApi,
                               hObjExportRmClient,
                               bClientAsDstParent ? hObjExportRmClient :
                               objExportDevice[deviceInstance].hRmDevice,
                               &hDstObject,
                               hSrcClient,
                               hSrcObject,
                               0 /* flags */);
    if (status != NV_OK)
    {
        if (!bClientAsDstParent && (status == NV_ERR_INVALID_OBJECT_PARENT))
        {
            NV_PRINTF(LEVEL_INFO,
                "pRmApi->DupObject(Dev, failed due to invalid parent in %s."
                " Now attempting DupObject with Subdev handle.\n",
                __FUNCTION__);

            status = pRmApi->DupObject(pRmApi,
                                       hObjExportRmClient,
                                       objExportDevice[deviceInstance].hRmSubDevice,
                                       &hDstObject,
                                       hSrcClient,
                                       hSrcObject,
                                       0 /* flags */);
            if (status != NV_OK)
            {
                RmUnrefObjExportHandle(hDstObject);

                NV_PRINTF(LEVEL_ERROR,
                    "pRmApi->DupObject(Subdev, failed with error code 0x%x in %s\n",
                    status, __FUNCTION__);
                goto done;
            }
        }
        else
        {
            RmUnrefObjExportHandle(hDstObject);

            NV_PRINTF(LEVEL_ERROR,
                "pRmApi->DupObject(Dev, failed with error code 0x%x in %s\n",
                status, __FUNCTION__);
            goto done;
        }
    }

    if (pDeviceInstance != NULL)
    {
        *pDeviceInstance = deviceInstance;
    }

    *pDstObject = hDstObject;

done:
    if (status != NV_OK)
    {
        RmUnrefObjExportImport();
    }

    return status;
}

void RmFreeObjExportHandle(RmObjExportHandle hObject)
{
    if (!RmValidateHandleAgainstInternalHandles(hObject))
    {
        NV_PRINTF(LEVEL_ERROR, "Invalid handle to exported object in %s\n",
                  __FUNCTION__);
        return;
    }

    RmUnrefObjExportHandle(hObject);

    RmUnrefObjExportImport();
}

NV_STATUS RmImportObject(NvHandle hDstClient, NvHandle hDstParent,
                         NvHandle *phDstObject, RmObjExportHandle hSrcObject,
                         NvU8 *pObjectType)
{
    NV_STATUS status;
    NV0000_CTRL_CLIENT_GET_ADDR_SPACE_TYPE_PARAMS params;
    RM_API   *pRmApi = rmapiGetInterface(RMAPI_API_LOCK_INTERNAL);

    if (!RmValidateHandleAgainstInternalHandles(hSrcObject))
    {
        return NV_ERR_INVALID_ARGUMENT;
    }

    if (mapFind(&objExportHandleMap, hSrcObject) == NULL)
    {
        return NV_ERR_INVALID_ARGUMENT;
    }

    if (pObjectType != NULL)
    {
        params.hObject = hSrcObject;
        params.mapFlags = 0;
        params.addrSpaceType = \
                NV0000_CTRL_CMD_CLIENT_GET_ADDR_SPACE_TYPE_INVALID;

        status = pRmApi->Control(pRmApi, hObjExportRmClient, hObjExportRmClient,
                                 NV0000_CTRL_CMD_CLIENT_GET_ADDR_SPACE_TYPE,
                                 &params, sizeof(params));
        if (status != NV_OK)
        {
            NV_PRINTF(LEVEL_ERROR,
                      "GET_ADDR_SPACE_TYPE failed with error code 0x%x in %s\n",
                      status, __FUNCTION__);
            return status;
        }

        switch (params.addrSpaceType)
        {
            case NV0000_CTRL_CMD_CLIENT_GET_ADDR_SPACE_TYPE_SYSMEM:
                *pObjectType = NV0000_CTRL_CMD_OS_UNIX_IMPORT_OBJECT_TYPE_SYSMEM;
                break;
            case NV0000_CTRL_CMD_CLIENT_GET_ADDR_SPACE_TYPE_VIDMEM:
                *pObjectType = NV0000_CTRL_CMD_OS_UNIX_IMPORT_OBJECT_TYPE_VIDMEM;
                break;
            case NV0000_CTRL_CMD_CLIENT_GET_ADDR_SPACE_TYPE_FABRIC:
                *pObjectType = NV0000_CTRL_CMD_OS_UNIX_IMPORT_OBJECT_TYPE_FABRIC;
                break;
#if defined(NV0000_CTRL_CMD_CLIENT_GET_ADDR_SPACE_TYPE_FABRIC_MC) && \
    defined(NV0000_CTRL_CMD_OS_UNIX_IMPORT_OBJECT_TYPE_FABRIC_MC)
            case NV0000_CTRL_CMD_CLIENT_GET_ADDR_SPACE_TYPE_FABRIC_MC:
                *pObjectType = NV0000_CTRL_CMD_OS_UNIX_IMPORT_OBJECT_TYPE_FABRIC_MC;
                break;
#endif
            default:
                NV_ASSERT_OK_OR_RETURN(NV_ERR_INVALID_ARGUMENT);
        }
    }

    status = pRmApi->DupObject(pRmApi, hDstClient, hDstParent, phDstObject,
                               hObjExportRmClient, hSrcObject,
                               0 /* flags */);

    if (status != NV_OK)
    {
        NV_PRINTF(LEVEL_ERROR,
                  "pRmApi->DupObject(pRmApi,  failed with error code 0x%x in %s\n",
                  status, __FUNCTION__);
        return status;
    }

    return NV_OK;
}

NV_STATUS RmGetExportObjectInfo(RmObjExportHandle hSrcObject, NvU32 *deviceInstance)
{
    RmObjExportHandleRef *pHandleRef = NULL;

    if (!RmValidateHandleAgainstInternalHandles(hSrcObject))
    {
        return NV_ERR_INVALID_ARGUMENT;
    }

    pHandleRef = mapFind(&objExportHandleMap, hSrcObject);
    if (pHandleRef == NULL)
    {
        return NV_ERR_OBJECT_NOT_FOUND;
    }

    *deviceInstance = pHandleRef->deviceInstance;
    return NV_OK;
}
