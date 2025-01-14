/*
 * SPDX-FileCopyrightText: Copyright (c) 2021-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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


#include "common_nvswitch.h"
#include "ls10/ls10.h"
#include "ls10/sugen_ls10.h"

//
// AUTO-GENERATED FILE -- DO NOT MODIFY
// This file is automatically generated from SU scripts
//

/*
 * @Brief : Fill In
 *
 * @Description : Fill In
 *
 * @paramin : Fill In
 *
 */

NvlStatus
nvswitch_apply_prod_nvlw_ls10
(
    nvswitch_device *device
)
{


    // .Apply PROD to NVLW registers

    NVSWITCH_ENG_WR32(device, CPR, _BCAST, 0, _CPR_SYS, _ERR_LOG_EN_0,
                      DRF_DEF(_CPR_SYS, _ERR_LOG_EN_0, _ENGINE_RESET_ERR, __PROD));

    NVSWITCH_ENG_WR32(device, CPR, _BCAST, 0, _CPR_SYS, _NVLW_CG1,
                      DRF_DEF(_CPR_SYS, _NVLW_CG1, _SLCG, __PROD));

    return NVL_SUCCESS;
}


/*
 * @Brief : Fill In
 *
 * @Description : Fill In
 *
 * @paramin : Fill In
 *
 */

NvlStatus
nvswitch_apply_prod_nxbar_ls10
(
    nvswitch_device *device
)
{
    NVSWITCH_ENG_WR32(device, TILEOUT, _BCAST, 0, _NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG,
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _DI_DT_SKEW_VAL, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _HALT_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _IDLE_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _IDLE_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _PAUSE_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _QUIESCENT_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _STALL_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _STALL_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _STATE_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _THROT_CLK_CNT, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _THROT_CLK_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _THROT_CLK_SW_OVER, __PROD) |
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG, _WAKEUP_DLY_CNT, __PROD));

    NVSWITCH_ENG_WR32(device, TILEOUT, _BCAST, 0, _NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG1,
                      DRF_DEF(_NXBAR_TILEOUT, _PRI_NXBAR_TILEOUT_CG1, _MONITOR_CG_EN, __PROD));

    NVSWITCH_ENG_WR32(device, TILE, _BCAST, 0, _NXBAR_TILE, _PRI_NXBAR_TILE_CG,
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _DI_DT_SKEW_VAL, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _HALT_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _IDLE_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _IDLE_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _PAUSE_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _QUIESCENT_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _STALL_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _STALL_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _STATE_CG_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _THROT_CLK_CNT, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _THROT_CLK_EN, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _THROT_CLK_SW_OVER, __PROD) |
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG, _WAKEUP_DLY_CNT, __PROD));

    NVSWITCH_ENG_WR32(device, TILE, _BCAST, 0, _NXBAR_TILE, _PRI_NXBAR_TILE_CG1,
                      DRF_DEF(_NXBAR_TILE, _PRI_NXBAR_TILE_CG1, _MONITOR_CG_EN, __PROD));

    return NVL_SUCCESS;
}


/*
 * @Brief : Fill In
 *
 * @Description : Fill In
 *
 * @paramin : Fill In
 *
 */

NvlStatus
nvswitch_nvs_top_prod_ls10
(
    nvswitch_device *device
)
{
    NvU32   i;

    // .NVS_TOP PROD application
    NVSWITCH_ENG_WR32(device, GIN,  , 0, _CTRL, _PRI_CTRL_CG1,
                      DRF_DEF(_CTRL, _PRI_CTRL_CG1, _SLCG_CTRLPRI, __PROD) |
                      DRF_DEF(_CTRL, _PRI_CTRL_CG1, _SLCG_MSIX, __PROD));

    NVSWITCH_ENG_WR32(device, PRI_MASTER_RS,  , 0, _PPRIV_MASTER, _CG1,
                      DRF_DEF(_PPRIV_MASTER, _CG1, _SLCG, __PROD));

    //
    // SU-generated code blindly writes each PRT_PRI_HUB and PRT_PRI_RS_CTRL
    // without checking to see if it is floorswept.  This code fragment is
    // hand editted into SU-generated code to handle floorsweeping.
    //
    for (i = 0; i < NVSWITCH_ENG_COUNT(device, PRT_PRI_HUB, ); i++)
    {
        if (NVSWITCH_ENG_IS_VALID(device, PRT_PRI_HUB, i))
        {
            NVSWITCH_ENG_WR32(device, PRT_PRI_HUB,  , i, _PPRIV_PRT, _CG1,
                              DRF_DEF(_PPRIV_PRT, _CG1, _SLCG_LOC_PRIV, __PROD) |
                              DRF_DEF(_PPRIV_PRT, _CG1, _SLCG_PM, __PROD) |
                              DRF_DEF(_PPRIV_PRT, _CG1, _SLCG_PRIV_CONFIG_REGS, __PROD) |
                              DRF_DEF(_PPRIV_PRT, _CG1, _SLCG_PRIV_FUNNEL_ARB, __PROD) |
                              DRF_DEF(_PPRIV_PRT, _CG1, _SLCG_PRIV_FUNNEL_DECODER, __PROD) |
                              DRF_DEF(_PPRIV_PRT, _CG1, _SLCG_PRIV_HISTORY_BUFFER, __PROD) |
                              DRF_DEF(_PPRIV_PRT, _CG1, _SLCG_PRIV_MASTER, __PROD) |
                              DRF_DEF(_PPRIV_PRT, _CG1, _SLCG_PRIV_SLAVE, __PROD) |
                              DRF_DEF(_PPRIV_PRT, _CG1, _SLCG_SLOWCLK, __PROD));
        }
    }

    for (i = 0; i < NVSWITCH_ENG_COUNT(device, PRT_PRI_RS_CTRL, ); i++)
    {
        if (NVSWITCH_ENG_IS_VALID(device, PRT_PRI_RS_CTRL, i))
        {
            NVSWITCH_ENG_WR32(device, PRT_PRI_RS_CTRL,  , i, _PPRIV_RS_CTRL_PRT, _CG1,
                              DRF_DEF(_PPRIV_RS_CTRL_PRT, _CG1, _SLCG, __PROD));
        }
    }

    NVSWITCH_ENG_WR32(device, PTIMER,  , 0, _PTIMER, _PRI_TMR_CG1,
                      DRF_DEF(_PTIMER, _PRI_TMR_CG1, _MONITOR_CG_EN, __PROD) |
                      DRF_DEF(_PTIMER, _PRI_TMR_CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, SAW,  , 0, _NVLSAW, _GLBLLATENCYTIMERCTRL,
                      DRF_DEF(_NVLSAW, _GLBLLATENCYTIMERCTRL, _ENABLE, __PROD));

    NVSWITCH_REG_WR32(device, _PSE, _CG1,
                           DRF_DEF(_PSE, _CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, SOE,  , 0, _SOE, _BAR0_TMOUT,
                      DRF_DEF(_SOE, _BAR0_TMOUT, _CYCLES, __PROD));

    NVSWITCH_ENG_WR32(device, SOE,  , 0, _SOE, _FALCON_CG2,
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_CFG, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_CTXSW, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_DIV, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_DMA, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_GC6_SR_FSM, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_GDMA, __PROD) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_GPTMR, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_ICD, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_IRQSTAT, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_LDST, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_MUL, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_PIPE, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_PMB, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_RF, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_SHA, __PROD) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_TOP, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_TSE, __PROD) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_TSYNC, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FALCON_WDTMR, _DISABLED) |
                      DRF_DEF(_SOE, _FALCON_CG2, _SLCG_FBIF, _DISABLED));

    NVSWITCH_ENG_WR32(device, SOE,  , 0, _SOE, _MISC_CG1,
                      DRF_DEF(_SOE, _MISC_CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, SOE,  , 0, _SOE, _PRIV_BLOCKER_CTRL_CG1,
                      DRF_DEF(_SOE, _PRIV_BLOCKER_CTRL_CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, SYSB_PRI_HUB,  , 0, _PPRIV_SYSB, _CG1,
                      DRF_DEF(_PPRIV_SYSB, _CG1, _SLCG_LOC_PRIV, __PROD) |
                      DRF_DEF(_PPRIV_SYSB, _CG1, _SLCG_PM, __PROD) |
                      DRF_DEF(_PPRIV_SYSB, _CG1, _SLCG_PRIV_CONFIG_REGS, __PROD) |
                      DRF_DEF(_PPRIV_SYSB, _CG1, _SLCG_PRIV_FUNNEL_ARB, __PROD) |
                      DRF_DEF(_PPRIV_SYSB, _CG1, _SLCG_PRIV_FUNNEL_DECODER, __PROD) |
                      DRF_DEF(_PPRIV_SYSB, _CG1, _SLCG_PRIV_HISTORY_BUFFER, __PROD) |
                      DRF_DEF(_PPRIV_SYSB, _CG1, _SLCG_PRIV_MASTER, __PROD) |
                      DRF_DEF(_PPRIV_SYSB, _CG1, _SLCG_PRIV_SLAVE, __PROD) |
                      DRF_DEF(_PPRIV_SYSB, _CG1, _SLCG_SLOWCLK, __PROD));

    NVSWITCH_ENG_WR32(device, SYSB_PRI_RS_CTRL,  , 0, _PPRIV_RS_CTRL_SYSB, _CG1,
                      DRF_DEF(_PPRIV_RS_CTRL_SYSB, _CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, SYS_PRI_HUB,  , 0, _PPRIV_SYS, _CG1,
                      DRF_DEF(_PPRIV_SYS, _CG1, _SLCG_LOC_PRIV, __PROD) |
                      DRF_DEF(_PPRIV_SYS, _CG1, _SLCG_PM, __PROD) |
                      DRF_DEF(_PPRIV_SYS, _CG1, _SLCG_PRIV_CONFIG_REGS, __PROD) |
                      DRF_DEF(_PPRIV_SYS, _CG1, _SLCG_PRIV_FUNNEL_ARB, __PROD) |
                      DRF_DEF(_PPRIV_SYS, _CG1, _SLCG_PRIV_FUNNEL_DECODER, __PROD) |
                      DRF_DEF(_PPRIV_SYS, _CG1, _SLCG_PRIV_HISTORY_BUFFER, __PROD) |
                      DRF_DEF(_PPRIV_SYS, _CG1, _SLCG_PRIV_MASTER, __PROD) |
                      DRF_DEF(_PPRIV_SYS, _CG1, _SLCG_PRIV_SLAVE, __PROD) |
                      DRF_DEF(_PPRIV_SYS, _CG1, _SLCG_SLOWCLK, __PROD));

    NVSWITCH_ENG_WR32(device, SYS_PRI_RS_CTRL,  , 0, _PPRIV_RS_CTRL_SYS, _CG1,
                      DRF_DEF(_PPRIV_RS_CTRL_SYS, _CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, XAL,  , 0, _XAL_EP, _CG,
                      DRF_DEF(_XAL_EP, _CG, _IDLE_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_XAL_EP, _CG, _IDLE_CG_EN, __PROD) |
                      DRF_DEF(_XAL_EP, _CG, _STALL_CG_EN, __PROD) |
                      DRF_DEF(_XAL_EP, _CG, _WAKEUP_DLY_CNT, __PROD));

    NVSWITCH_ENG_WR32(device, XAL,  , 0, _XAL_EP, _CG1,
                      DRF_DEF(_XAL_EP, _CG1, _MONITOR_CG_EN, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_DFD, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_DOWNARB, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_FASTFLUSH, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_FBI_UP, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_JOIN, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_JTAG, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_MEMOP, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_MEMRSP, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_MSIX, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_PM, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_PRIREQ, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_PRIRSP, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_PRI_TRACKER, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_RXMAP, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_TXMAP, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_UNROLL_MEM, __PROD) |
                      DRF_DEF(_XAL_EP, _CG1, _SLCG_UPARB, __PROD));

    NVSWITCH_ENG_WR32(device, XPL,  , 0, _XPL, _PL_PAD_CTL_PRI_XPL_RXCLK_CG,
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_RXCLK_CG, _IDLE_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_RXCLK_CG, _IDLE_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_RXCLK_CG, _STALL_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_RXCLK_CG, _WAKEUP_DLY_CNT, __PROD));

    NVSWITCH_ENG_WR32(device, XPL,  , 0, _XPL, _PL_PAD_CTL_PRI_XPL_RXCLK_CG1,
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_RXCLK_CG1, _MONITOR_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_RXCLK_CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, XPL,  , 0, _XPL, _PL_PAD_CTL_PRI_XPL_TXCLK_CG,
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_TXCLK_CG, _IDLE_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_TXCLK_CG, _IDLE_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_TXCLK_CG, _STALL_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_TXCLK_CG, _WAKEUP_DLY_CNT, __PROD));

    NVSWITCH_ENG_WR32(device, XPL,  , 0, _XPL, _PL_PAD_CTL_PRI_XPL_TXCLK_CG1,
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_TXCLK_CG1, _MONITOR_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_TXCLK_CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, XPL,  , 0, _XPL, _PL_PAD_CTL_PRI_XPL_XCLK_CG,
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_XCLK_CG, _IDLE_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_XCLK_CG, _IDLE_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_XCLK_CG, _STALL_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_XCLK_CG, _WAKEUP_DLY_CNT, __PROD));

    NVSWITCH_ENG_WR32(device, XPL,  , 0, _XPL, _PL_PAD_CTL_PRI_XPL_XCLK_CG1,
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_XCLK_CG1, _MONITOR_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _PL_PAD_CTL_PRI_XPL_XCLK_CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, XPL,  , 0, _XPL, _XTLQ_PRI_XTL_Q_CG,
                      DRF_DEF(_XPL, _XTLQ_PRI_XTL_Q_CG, _IDLE_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_XPL, _XTLQ_PRI_XTL_Q_CG, _IDLE_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _XTLQ_PRI_XTL_Q_CG, _STALL_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _XTLQ_PRI_XTL_Q_CG, _WAKEUP_DLY_CNT, __PROD));

    NVSWITCH_ENG_WR32(device, XPL,  , 0, _XPL, _XTLQ_PRI_XTL_Q_CG1,
                      DRF_DEF(_XPL, _XTLQ_PRI_XTL_Q_CG1, _MONITOR_CG_EN, __PROD) |
                      DRF_DEF(_XPL, _XTLQ_PRI_XTL_Q_CG1, _SLCG, __PROD));

    NVSWITCH_ENG_WR32(device, XTL,  , 0, _XTL, _EP_PRI_XTL_EP_CG,
                      DRF_DEF(_XTL, _EP_PRI_XTL_EP_CG, _IDLE_CG_DLY_CNT, __PROD) |
                      DRF_DEF(_XTL, _EP_PRI_XTL_EP_CG, _IDLE_CG_EN, __PROD) |
                      DRF_DEF(_XTL, _EP_PRI_XTL_EP_CG, _STALL_CG_EN, __PROD) |
                      DRF_DEF(_XTL, _EP_PRI_XTL_EP_CG, _WAKEUP_DLY_CNT, __PROD));

    NVSWITCH_ENG_WR32(device, XTL,  , 0, _XTL, _EP_PRI_XTL_EP_CG1,
                      DRF_DEF(_XTL, _EP_PRI_XTL_EP_CG1, _MONITOR_CG_EN, __PROD) |
                      DRF_DEF(_XTL, _EP_PRI_XTL_EP_CG1, _SLCG, __PROD));

    return NVL_SUCCESS;
}
