// This file is automatically generated by rmconfig - DO NOT EDIT!
//
// Hal registration entry points.
//
// Profile:  shipping-gpus-openrm
// Template: templates/gt_hal_archimpl.h
//
// Chips:    TU10X, GA100, GA102, GA103, GA104, GA106, GA107, AD102, AD103, AD104, GH10X
//

#ifndef _G_RMCFG_HAL_ARCHIMPL_H_
#define _G_RMCFG_HAL_ARCHIMPL_H_

#include "g_hal.h"

// OpenRM for Tegra build uses different include path
// The following lines refer to the same file.
// TODO: merge them
#include "published/nv_ref.h"

//
// CHIPID array Implementation
//
const struct ChipID
{
    NvU32  arch;
    NvU32  impl;
    NvU32  hidrev;
} chipID[] = {
    {                               0x0,                            0x0,   0x0 } , // GF100  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF100B (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF104  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF104B (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF106  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF106B (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF108  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF110D (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF110  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF117  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF118  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF119  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF110F (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF110F2 (disabled)
    {                               0x0,                            0x0,   0x0 } , // GF110F3 (disabled)
    {                               0x0,                            0x0,   0x0 } , // GK104  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GK106  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GK107  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GK20A  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GK110  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GK110B (disabled)
    {                               0x0,                            0x0,   0x0 } , // GK110C (disabled)
    {                               0x0,                            0x0,   0x0 } , // GK208  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GK208S (disabled)
    {                               0x0,                            0x0,   0x0 } , // GM107  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GM108  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GM200  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GM204  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GM206  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GP100  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GP102  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GP104  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GP106  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GP107  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GP108  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GV100  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GV11B  (disabled)
    {  NV_PMC_BOOT_0_ARCHITECTURE_TU100, NV_PMC_BOOT_0_IMPLEMENTATION_2,   0x0 } , // TU102 
    {  NV_PMC_BOOT_0_ARCHITECTURE_TU100, NV_PMC_BOOT_0_IMPLEMENTATION_4,   0x0 } , // TU104 
    {  NV_PMC_BOOT_0_ARCHITECTURE_TU100, NV_PMC_BOOT_0_IMPLEMENTATION_6,   0x0 } , // TU106 
    {  NV_PMC_BOOT_0_ARCHITECTURE_TU110, NV_PMC_BOOT_0_IMPLEMENTATION_8,   0x0 } , // TU116 
    {  NV_PMC_BOOT_0_ARCHITECTURE_TU110, NV_PMC_BOOT_0_IMPLEMENTATION_7,   0x0 } , // TU117 
    {  NV_PMC_BOOT_0_ARCHITECTURE_GA100, NV_PMC_BOOT_0_IMPLEMENTATION_0,   0x0 } , // GA100 
    {  NV_PMC_BOOT_0_ARCHITECTURE_GA100, NV_PMC_BOOT_0_IMPLEMENTATION_2,   0x0 } , // GA102 
    {  NV_PMC_BOOT_0_ARCHITECTURE_GA100, NV_PMC_BOOT_0_IMPLEMENTATION_3,   0x0 } , // GA103 
    {  NV_PMC_BOOT_0_ARCHITECTURE_GA100, NV_PMC_BOOT_0_IMPLEMENTATION_4,   0x0 } , // GA104 
    {  NV_PMC_BOOT_0_ARCHITECTURE_GA100, NV_PMC_BOOT_0_IMPLEMENTATION_6,   0x0 } , // GA106 
    {  NV_PMC_BOOT_0_ARCHITECTURE_GA100, NV_PMC_BOOT_0_IMPLEMENTATION_7,   0x0 } , // GA107 
    {                               0x0,                            0x0,   0x0 } , // GA10B  (disabled)
    {                               0x0,                            0x0,   0x0 } , // GA102F (disabled)
    {  NV_PMC_BOOT_0_ARCHITECTURE_AD100, NV_PMC_BOOT_0_IMPLEMENTATION_2,   0x0 } , // AD102 
    {  NV_PMC_BOOT_0_ARCHITECTURE_AD100, NV_PMC_BOOT_0_IMPLEMENTATION_3,   0x0 } , // AD103 
    {  NV_PMC_BOOT_0_ARCHITECTURE_AD100, NV_PMC_BOOT_0_IMPLEMENTATION_4,   0x0 } , // AD104 
    {  NV_PMC_BOOT_0_ARCHITECTURE_GH100, NV_PMC_BOOT_0_IMPLEMENTATION_0,   0x0 } , // GH100 
    {                               0x0,                            0x0,   0x0 } , // T001_FERMI_NOT_EXIST (disabled)
    {                               0x0,                            0x0,   0x0 } , // T124   (disabled)
    {                               0x0,                            0x0,   0x0 } , // T132   (disabled)
    {                               0x0,                            0x0,   0x0 } , // T210   (disabled)
    {                               0x0,                            0x0,   0x0 } , // T186   (disabled)
    {                               0x0,                            0x0,   0x0 } , // T194   (disabled)
    {                               0x0,                            0x0,   0x0 } , // T002_TURING_NOT_EXIST (disabled)
    {                               0x0,                            0x0,   0x0 } , // T234   (disabled)
    {                               0x0,                            0x0,   0x0 } , // T234D  (disabled)
    {                               0x0,                            0x0,   0x0 } , // AMODEL (disabled)

};

#endif  // _G_RMCFG_HAL_ARCHIMPL_H_

