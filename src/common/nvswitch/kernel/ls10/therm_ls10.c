/*
 * SPDX-FileCopyrightText: Copyright (c) 2020-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#include "export_nvswitch.h"

#include "common_nvswitch.h"
#include "ls10/ls10.h"
#include <ls10/soe_ls10.h>
#include "ls10/therm_ls10.h"
#include "error_nvswitch.h"
#include "soe/soeiftherm.h"

#include "flcn/flcnable_nvswitch.h"
#include "flcn/flcn_nvswitch.h"
#include "rmflcncmdif_nvswitch.h"
#include "soe/soeifcmn.h"

#include "nvswitch/ls10/dev_therm.h"

//
// Thermal functions
//

//
// Initialize thermal offsets for External Tdiode.
//

NvlStatus
nvswitch_init_thermal_ls10
(
    nvswitch_device *device
)
{
    ls10_device *chip_device = NVSWITCH_GET_CHIP_DEVICE_LS10(device);

    // Mark everything invalid
    chip_device->tdiode.method = NVSWITCH_THERM_METHOD_UNKNOWN;

    return NVL_SUCCESS;
}

static void
_nvswitch_read_max_tsense_temperature_ls10
(
    nvswitch_device *device,
    NVSWITCH_CTRL_GET_TEMPERATURE_PARAMS *info,
    NvU32 channel
)
{
    NvU32  offset;
    NvU32  temperature;

    temperature = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_MAXIMUM_TEMPERATURE);
    temperature = DRF_VAL(_THERM_TSENSE, _MAXIMUM_TEMPERATURE, _MAXIMUM_TEMPERATURE, temperature);
    temperature = NV_TSENSE_FXP_9_5_TO_24_8(temperature);

    if (channel == NVSWITCH_THERM_CHANNEL_LR10_TSENSE_MAX)
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);

        // Temperature of the sensor reported equals calculation of the max temperature reported
        // from the TSENSE HUB plus the temperature offset programmed by SW. This offset needs to
        // be substracted to get the actual temperature of the sensor.
        temperature -= NV_TSENSE_FXP_9_5_TO_24_8(offset);
    }

    info->temperature[channel] = temperature;
    info->status[channel] = NVL_SUCCESS;
}

static void
_nvswitch_read_external_tdiode_temperature_ls10
(
    nvswitch_device *device,
    NVSWITCH_CTRL_GET_TEMPERATURE_PARAMS *info,
    NvU32 channel
)
{
}

//
// nvswitch_therm_read_temperature
//
// Temperature and voltage are only available on SKUs which have thermal and
// voltage sensors.
//

NvlStatus
nvswitch_ctrl_therm_read_temperature_ls10
(
    nvswitch_device *device,
    NVSWITCH_CTRL_GET_TEMPERATURE_PARAMS *info
)
{
    NvU32 channel;
    NvU32 val;
    NvU32 offset;

    if (!info->channelMask)
    {
        NVSWITCH_PRINT(device, ERROR,
            "%s: No channel given in the input.\n",
            __FUNCTION__);

        return -NVL_BAD_ARGS;
    }

    nvswitch_os_memset(info->temperature, 0x0, sizeof(info->temperature));

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_MAX;
    if (info->channelMask & NVBIT(channel))
    {
        _nvswitch_read_max_tsense_temperature_ls10(device, info, channel);
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_OFFSET_MAX;
    if (info->channelMask & NVBIT(channel))
    {
        _nvswitch_read_max_tsense_temperature_ls10(device, info, channel);
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TDIODE;
    if (info->channelMask & NVBIT(channel))
    {
        _nvswitch_read_external_tdiode_temperature_ls10(device, info, channel);
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TDIODE_OFFSET;
    if (info->channelMask & NVBIT(channel))
    {
        _nvswitch_read_external_tdiode_temperature_ls10(device, info, channel);
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_0;
    if (info->channelMask & NVBIT(channel))
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_0_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);
        offset = NV_TSENSE_FXP_9_5_TO_24_8(offset);

        val = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_0);
        val = DRF_VAL(_THERM, _TSENSE_U2_A_0_BJT_0, _TEMPERATURE, val);
        val = NV_TSENSE_FXP_9_5_TO_24_8(val);
        val -= offset;

        info->temperature[channel] = val;
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_1;
    if (info->channelMask & NVBIT(channel))
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_1_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_1_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);
        offset = NV_TSENSE_FXP_9_5_TO_24_8(offset);

        val = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_1);
        val = DRF_VAL(_THERM, _TSENSE_U2_A_0_BJT_1, _TEMPERATURE, val);
        val = NV_TSENSE_FXP_9_5_TO_24_8(val);
        val -= offset;

        info->temperature[channel] = val;
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_2;
    if (info->channelMask & NVBIT(channel))
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_2_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_2_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);
        offset = NV_TSENSE_FXP_9_5_TO_24_8(offset);

        val = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_2);
        val = DRF_VAL(_THERM, _TSENSE_U2_A_0_BJT_2, _TEMPERATURE, val);
        val = NV_TSENSE_FXP_9_5_TO_24_8(val);
        val -= offset;

        info->temperature[channel] = val;
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_3;
    if (info->channelMask & NVBIT(channel))
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_3_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_3_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);
        offset = NV_TSENSE_FXP_9_5_TO_24_8(offset);

        val = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_3);
        val = DRF_VAL(_THERM, _TSENSE_U2_A_0_BJT_3, _TEMPERATURE, val);
        val = NV_TSENSE_FXP_9_5_TO_24_8(val);
        val -= offset;

        info->temperature[channel] = val;
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_4;
    if (info->channelMask & NVBIT(channel))
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_4_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_4_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);
        offset = NV_TSENSE_FXP_9_5_TO_24_8(offset);

        val = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_4);
        val = DRF_VAL(_THERM, _TSENSE_U2_A_0_BJT_4, _TEMPERATURE, val);
        val = NV_TSENSE_FXP_9_5_TO_24_8(val);
        val -= offset;

        info->temperature[channel] = val;
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_5;
    if (info->channelMask & NVBIT(channel))
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_5_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_5_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);
        offset = NV_TSENSE_FXP_9_5_TO_24_8(offset);

        val = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_5);
        val = DRF_VAL(_THERM, _TSENSE_U2_A_0_BJT_5, _TEMPERATURE, val);
        val = NV_TSENSE_FXP_9_5_TO_24_8(val);
        val -= offset;

        info->temperature[channel] = val;
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_6;
    if (info->channelMask & NVBIT(channel))
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_6_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_6_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);
        offset = NV_TSENSE_FXP_9_5_TO_24_8(offset);

        val = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_6);
        val = DRF_VAL(_THERM, _TSENSE_U2_A_0_BJT_6, _TEMPERATURE, val);
        val = NV_TSENSE_FXP_9_5_TO_24_8(val);
        val -= offset;

        info->temperature[channel] = val;
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_7;
    if (info->channelMask & NVBIT(channel))
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_7_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_7_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);
        offset = NV_TSENSE_FXP_9_5_TO_24_8(offset);

        val = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_7);
        val = DRF_VAL(_THERM, _TSENSE_U2_A_0_BJT_7, _TEMPERATURE, val);
        val = NV_TSENSE_FXP_9_5_TO_24_8(val);
        val -= offset;

        info->temperature[channel] = val;
        info->channelMask &= ~NVBIT(channel);
    }

    channel = NVSWITCH_THERM_CHANNEL_LS10_TSENSE_8;
    if (info->channelMask & NVBIT(channel))
    {
        offset = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_8_TEMPERATURE_MODIFICATIONS);
        offset = DRF_VAL(_THERM_TSENSE, _U2_A_0_BJT_8_TEMPERATURE_MODIFICATIONS, _TEMPERATURE_OFFSET, offset);
        offset = NV_TSENSE_FXP_9_5_TO_24_8(offset);

        val = NVSWITCH_REG_RD32(device, _THERM, _TSENSE_U2_A_0_BJT_8);
        val = DRF_VAL(_THERM, _TSENSE_U2_A_0_BJT_8, _TEMPERATURE, val);
        val = NV_TSENSE_FXP_9_5_TO_24_8(val);
        val -= offset;

        info->temperature[channel] = val;
        info->channelMask &= ~NVBIT(channel);
    }

    if (info->channelMask)
    {
        NVSWITCH_PRINT(device, ERROR,
            "%s: ChannelMask %x absent on LS10.\n",
            __FUNCTION__, info->channelMask);

        return -NVL_BAD_ARGS;
    }

    return NVL_SUCCESS;
}

NvlStatus
nvswitch_ctrl_therm_get_temperature_limit_ls10
(
    nvswitch_device *device,
    NVSWITCH_CTRL_GET_TEMPERATURE_LIMIT_PARAMS *info
)
{
    NvU32 threshold;
    NvU32 temperature;

    threshold = nvswitch_reg_read_32(device, NV_THERM_TSENSE_THRESHOLD_TEMPERATURES);

    switch (info->thermalEventId)
    {
        case NVSWITCH_CTRL_THERMAL_EVENT_ID_WARN:
        {
            // Get Slowdown temperature
            temperature = DRF_VAL(_THERM_TSENSE, _THRESHOLD_TEMPERATURES,
                                  _WARNING_TEMPERATURE, threshold);
            break;
        }
        case NVSWITCH_CTRL_THERMAL_EVENT_ID_OVERT:
        {
            // Get Shutdown temperature
            temperature = DRF_VAL(_THERM_TSENSE, _THRESHOLD_TEMPERATURES,
                                  _OVERTEMP_TEMPERATURE, threshold);
            break;
        }
        default:
        {
            NVSWITCH_PRINT(device, ERROR, "Invalid Thermal Event Id: 0x%x\n", info->thermalEventId);
            return -NVL_BAD_ARGS;
        }
    }

    info->temperatureLimit = NV_TSENSE_FXP_9_5_TO_24_8(temperature);

    return NVL_SUCCESS;
}

// Background task to monitor thermal warn and adjust link mode
void
nvswitch_monitor_thermal_alert_ls10
(
    nvswitch_device *device
)
{
    return;
}

//
// nvswitch_therm_read_voltage
//
// Temperature and voltage are only available on SKUs which have thermal and
// voltage sensors.
//
NvlStatus
nvswitch_ctrl_therm_read_voltage_ls10
(
    nvswitch_device *device,
    NVSWITCH_CTRL_GET_VOLTAGE_PARAMS *pParams
)
{
    FLCN                *pFlcn;
    NvU32               cmdSeqDesc;
    NV_STATUS           status;
    NvU8                flcnStatus;
    RM_FLCN_CMD_SOE     cmd;
    RM_FLCN_MSG_SOE     msg;
    RM_SOE_CORE_CMD_GET_VOLTAGE *pGetVoltageCmd;
    NVSWITCH_TIMEOUT    timeout;

    if (!nvswitch_is_soe_supported(device))
    {
        return -NVL_ERR_NOT_SUPPORTED;
    }

    if (pParams == NULL)
    {
        return -NVL_BAD_ARGS;
    }

    pFlcn = device->pSoe->pFlcn;

    nvswitch_os_memset(pParams, 0, sizeof(NVSWITCH_CTRL_GET_VOLTAGE_PARAMS));
    nvswitch_os_memset(&cmd, 0, sizeof(RM_FLCN_CMD_SOE));
    nvswitch_os_memset(&msg, 0, sizeof(RM_FLCN_MSG_SOE));

    cmd.hdr.unitId = RM_SOE_UNIT_CORE;
    cmd.hdr.size   = RM_SOE_CMD_SIZE(CORE, GET_VOLTAGE);

    msg.hdr.unitId = RM_SOE_UNIT_CORE;
    msg.hdr.size   = RM_SOE_MSG_SIZE(CORE, GET_VOLTAGE);

    pGetVoltageCmd = &cmd.cmd.core.getVoltage;
    pGetVoltageCmd->cmdType = RM_SOE_CORE_CMD_GET_VOLTAGE_VALUES;

    cmdSeqDesc = 0;

    nvswitch_timeout_create(NVSWITCH_INTERVAL_1SEC_IN_NS * 5, &timeout);
    status = flcnQueueCmdPostBlocking(device, pFlcn,
                                      (PRM_FLCN_CMD)&cmd,
                                      (PRM_FLCN_MSG)&msg,   // pMsg
                                      NULL, // pPayload
                                      SOE_RM_CMDQ_LOG_ID,
                                      &cmdSeqDesc,
                                      &timeout);
    if (status != NV_OK)
    {
        NVSWITCH_PRINT(device, ERROR, "%s: Failed to read VRs 0x%x\n",
                       __FUNCTION__, status);
        return -NVL_ERR_INVALID_STATE;
    }

    flcnStatus = msg.msg.core.getVoltage.flcnStatus;
    if (flcnStatus != FLCN_OK)
    {
        if (flcnStatus == FLCN_ERR_MORE_PROCESSING_REQUIRED)
        {
            return -NVL_MORE_PROCESSING_REQUIRED;
        }
        else
        {
            return -NVL_ERR_GENERIC;
        }
    }

    pParams->vdd_mv = msg.msg.core.getVoltage.vdd_mv;
    pParams->dvdd_mv = msg.msg.core.getVoltage.dvdd_mv;
    pParams->hvdd_mv = msg.msg.core.getVoltage.hvdd_mv;

    return NVL_SUCCESS;
}
