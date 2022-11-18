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

#include <core/core.h>
#include <gpu/gpu.h>
#include <gpu/eng_desc.h>
#include <g_allclasses.h>



const CLASSDESCRIPTOR *
gpuGetClassDescriptorList_TU102(POBJGPU pGpu, NvU32 *pNumClassDescriptors)
{
    static const CLASSDESCRIPTOR halTU102ClassDescriptorList[] = {
        { ACCESS_COUNTER_NOTIFY_BUFFER, ENG_GR(0) },
        { FERMI_CONTEXT_SHARE_A, ENG_KERNEL_FIFO },
        { FERMI_TWOD_A, ENG_GR(0) },
        { FERMI_VASPACE_A, ENG_DMA },
        { G84_PERFBUFFER, ENG_BUS },
        { GF100_DISP_SW, ENG_SW },
        { GF100_HDACODEC, ENG_HDACODEC },
        { GF100_SUBDEVICE_MASTER, ENG_GPU },
        { GF100_TIMED_SEMAPHORE_SW, ENG_SW },
        { GF100_ZBC_CLEAR, ENG_KERNEL_MEMORY_SYSTEM },
        { GP100_UVM_SW, ENG_SW },
        { KEPLER_CHANNEL_GROUP_A, ENG_KERNEL_FIFO },
        { KEPLER_INLINE_TO_MEMORY_B, ENG_GR(0) },
        { MMU_FAULT_BUFFER, ENG_GR(0) },
        { NV0060_SYNC_GPU_BOOST, ENG_GPU },
        { NV01_MEMORY_VIRTUAL, ENG_DMA },
        { NV04_DISPLAY_COMMON, ENG_KERNEL_DISPLAY },
        { NV04_SOFTWARE_TEST, ENG_SW },
        { NV50_DEFERRED_API_CLASS, ENG_SW },
        { NV50_MEMORY_VIRTUAL, ENG_DMA },
        { NV50_P2P, ENG_BUS },
        { NV50_THIRD_PARTY_P2P, ENG_BUS },
        { NVA081_VGPU_CONFIG, ENG_GPU },
        { NVA084_KERNEL_HOST_VGPU_DEVICE, ENG_GPU },
        { NVC371_DISP_SF_USER, ENG_KERNEL_DISPLAY },
        { NVC372_DISPLAY_SW, ENG_KERNEL_DISPLAY },
        { NVC4B0_VIDEO_DECODER, ENG_NVDEC(0) },
        { NVC4B7_VIDEO_ENCODER, ENG_MSENC(0) },
        { NVC570_DISPLAY, ENG_KERNEL_DISPLAY },
        { NVC573_DISP_CAPABILITIES, ENG_KERNEL_DISPLAY },
        { NVC57A_CURSOR_IMM_CHANNEL_PIO, ENG_KERNEL_DISPLAY },
        { NVC57B_WINDOW_IMM_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC57D_CORE_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC57E_WINDOW_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { RM_USER_SHARED_DATA, ENG_GPU },
        { TURING_A, ENG_GR(0) },
        { TURING_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { TURING_COMPUTE_A, ENG_GR(0) },
        { TURING_DMA_COPY_A, ENG_CE(0) },
        { TURING_DMA_COPY_A, ENG_CE(1) },
        { TURING_DMA_COPY_A, ENG_CE(2) },
        { TURING_DMA_COPY_A, ENG_CE(3) },
        { TURING_DMA_COPY_A, ENG_CE(4) },
        { TURING_USERMODE_A, ENG_GPU },
        { VOLTA_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { VOLTA_USERMODE_A, ENG_GPU },
    };

    #define HALTU102_NUM_CLASS_DESCS (sizeof(halTU102ClassDescriptorList) / sizeof(CLASSDESCRIPTOR))

    #define HALTU102_NUM_CLASSES 52

    ct_assert(NV0080_CTRL_GPU_CLASSLIST_MAX_SIZE >= HALTU102_NUM_CLASSES);

    *pNumClassDescriptors = HALTU102_NUM_CLASS_DESCS;
    return halTU102ClassDescriptorList;
}



const CLASSDESCRIPTOR *
gpuGetClassDescriptorList_TU104(POBJGPU pGpu, NvU32 *pNumClassDescriptors)
{
    static const CLASSDESCRIPTOR halTU104ClassDescriptorList[] = {
        { ACCESS_COUNTER_NOTIFY_BUFFER, ENG_GR(0) },
        { FERMI_CONTEXT_SHARE_A, ENG_KERNEL_FIFO },
        { FERMI_TWOD_A, ENG_GR(0) },
        { FERMI_VASPACE_A, ENG_DMA },
        { G84_PERFBUFFER, ENG_BUS },
        { GF100_DISP_SW, ENG_SW },
        { GF100_HDACODEC, ENG_HDACODEC },
        { GF100_SUBDEVICE_MASTER, ENG_GPU },
        { GF100_TIMED_SEMAPHORE_SW, ENG_SW },
        { GF100_ZBC_CLEAR, ENG_KERNEL_MEMORY_SYSTEM },
        { GP100_UVM_SW, ENG_SW },
        { KEPLER_CHANNEL_GROUP_A, ENG_KERNEL_FIFO },
        { KEPLER_INLINE_TO_MEMORY_B, ENG_GR(0) },
        { MMU_FAULT_BUFFER, ENG_GR(0) },
        { NV0060_SYNC_GPU_BOOST, ENG_GPU },
        { NV01_MEMORY_VIRTUAL, ENG_DMA },
        { NV04_DISPLAY_COMMON, ENG_KERNEL_DISPLAY },
        { NV04_SOFTWARE_TEST, ENG_SW },
        { NV50_DEFERRED_API_CLASS, ENG_SW },
        { NV50_MEMORY_VIRTUAL, ENG_DMA },
        { NV50_P2P, ENG_BUS },
        { NV50_THIRD_PARTY_P2P, ENG_BUS },
        { NVA081_VGPU_CONFIG, ENG_GPU },
        { NVA084_KERNEL_HOST_VGPU_DEVICE, ENG_GPU },
        { NVC371_DISP_SF_USER, ENG_KERNEL_DISPLAY },
        { NVC372_DISPLAY_SW, ENG_KERNEL_DISPLAY },
        { NVC4B0_VIDEO_DECODER, ENG_NVDEC(0) },
        { NVC4B0_VIDEO_DECODER, ENG_NVDEC(1) },
        { NVC4B7_VIDEO_ENCODER, ENG_MSENC(0) },
        { NVC570_DISPLAY, ENG_KERNEL_DISPLAY },
        { NVC573_DISP_CAPABILITIES, ENG_KERNEL_DISPLAY },
        { NVC57A_CURSOR_IMM_CHANNEL_PIO, ENG_KERNEL_DISPLAY },
        { NVC57B_WINDOW_IMM_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC57D_CORE_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC57E_WINDOW_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { RM_USER_SHARED_DATA, ENG_GPU },
        { TURING_A, ENG_GR(0) },
        { TURING_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { TURING_COMPUTE_A, ENG_GR(0) },
        { TURING_DMA_COPY_A, ENG_CE(0) },
        { TURING_DMA_COPY_A, ENG_CE(1) },
        { TURING_DMA_COPY_A, ENG_CE(2) },
        { TURING_DMA_COPY_A, ENG_CE(3) },
        { TURING_DMA_COPY_A, ENG_CE(4) },
        { TURING_USERMODE_A, ENG_GPU },
        { VOLTA_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { VOLTA_USERMODE_A, ENG_GPU },
    };

    #define HALTU104_NUM_CLASS_DESCS (sizeof(halTU104ClassDescriptorList) / sizeof(CLASSDESCRIPTOR))

    #define HALTU104_NUM_CLASSES 52

    ct_assert(NV0080_CTRL_GPU_CLASSLIST_MAX_SIZE >= HALTU104_NUM_CLASSES);

    *pNumClassDescriptors = HALTU104_NUM_CLASS_DESCS;
    return halTU104ClassDescriptorList;
}



const CLASSDESCRIPTOR *
gpuGetClassDescriptorList_TU106(POBJGPU pGpu, NvU32 *pNumClassDescriptors)
{
    static const CLASSDESCRIPTOR halTU106ClassDescriptorList[] = {
        { ACCESS_COUNTER_NOTIFY_BUFFER, ENG_GR(0) },
        { FERMI_CONTEXT_SHARE_A, ENG_KERNEL_FIFO },
        { FERMI_TWOD_A, ENG_GR(0) },
        { FERMI_VASPACE_A, ENG_DMA },
        { G84_PERFBUFFER, ENG_BUS },
        { GF100_DISP_SW, ENG_SW },
        { GF100_HDACODEC, ENG_HDACODEC },
        { GF100_SUBDEVICE_MASTER, ENG_GPU },
        { GF100_TIMED_SEMAPHORE_SW, ENG_SW },
        { GF100_ZBC_CLEAR, ENG_KERNEL_MEMORY_SYSTEM },
        { GP100_UVM_SW, ENG_SW },
        { KEPLER_CHANNEL_GROUP_A, ENG_KERNEL_FIFO },
        { KEPLER_INLINE_TO_MEMORY_B, ENG_GR(0) },
        { MMU_FAULT_BUFFER, ENG_GR(0) },
        { NV0060_SYNC_GPU_BOOST, ENG_GPU },
        { NV01_MEMORY_VIRTUAL, ENG_DMA },
        { NV04_DISPLAY_COMMON, ENG_KERNEL_DISPLAY },
        { NV04_SOFTWARE_TEST, ENG_SW },
        { NV50_DEFERRED_API_CLASS, ENG_SW },
        { NV50_MEMORY_VIRTUAL, ENG_DMA },
        { NV50_P2P, ENG_BUS },
        { NV50_THIRD_PARTY_P2P, ENG_BUS },
        { NVA081_VGPU_CONFIG, ENG_GPU },
        { NVA084_KERNEL_HOST_VGPU_DEVICE, ENG_GPU },
        { NVC371_DISP_SF_USER, ENG_KERNEL_DISPLAY },
        { NVC372_DISPLAY_SW, ENG_KERNEL_DISPLAY },
        { NVC4B0_VIDEO_DECODER, ENG_NVDEC(0) },
        { NVC4B0_VIDEO_DECODER, ENG_NVDEC(1) },
        { NVC4B0_VIDEO_DECODER, ENG_NVDEC(2) },
        { NVC4B7_VIDEO_ENCODER, ENG_MSENC(0) },
        { NVC570_DISPLAY, ENG_KERNEL_DISPLAY },
        { NVC573_DISP_CAPABILITIES, ENG_KERNEL_DISPLAY },
        { NVC57A_CURSOR_IMM_CHANNEL_PIO, ENG_KERNEL_DISPLAY },
        { NVC57B_WINDOW_IMM_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC57D_CORE_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC57E_WINDOW_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { RM_USER_SHARED_DATA, ENG_GPU },
        { TURING_A, ENG_GR(0) },
        { TURING_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { TURING_COMPUTE_A, ENG_GR(0) },
        { TURING_DMA_COPY_A, ENG_CE(0) },
        { TURING_DMA_COPY_A, ENG_CE(1) },
        { TURING_DMA_COPY_A, ENG_CE(2) },
        { TURING_DMA_COPY_A, ENG_CE(3) },
        { TURING_DMA_COPY_A, ENG_CE(4) },
        { TURING_USERMODE_A, ENG_GPU },
        { VOLTA_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { VOLTA_USERMODE_A, ENG_GPU },
    };

    #define HALTU106_NUM_CLASS_DESCS (sizeof(halTU106ClassDescriptorList) / sizeof(CLASSDESCRIPTOR))

    #define HALTU106_NUM_CLASSES 52

    ct_assert(NV0080_CTRL_GPU_CLASSLIST_MAX_SIZE >= HALTU106_NUM_CLASSES);

    *pNumClassDescriptors = HALTU106_NUM_CLASS_DESCS;
    return halTU106ClassDescriptorList;
}

const CLASSDESCRIPTOR *
gpuGetClassDescriptorList_TU117(POBJGPU pGpu, NvU32 *pNumClassDescriptors)
{
    static const CLASSDESCRIPTOR halTU117ClassDescriptorList[] = {
        { ACCESS_COUNTER_NOTIFY_BUFFER, ENG_GR(0) },
        { FERMI_CONTEXT_SHARE_A, ENG_KERNEL_FIFO },
        { FERMI_TWOD_A, ENG_GR(0) },
        { FERMI_VASPACE_A, ENG_DMA },
        { G84_PERFBUFFER, ENG_BUS },
        { GF100_DISP_SW, ENG_SW },
        { GF100_HDACODEC, ENG_HDACODEC },
        { GF100_SUBDEVICE_MASTER, ENG_GPU },
        { GF100_TIMED_SEMAPHORE_SW, ENG_SW },
        { GF100_ZBC_CLEAR, ENG_KERNEL_MEMORY_SYSTEM },
        { GP100_UVM_SW, ENG_SW },
        { KEPLER_CHANNEL_GROUP_A, ENG_KERNEL_FIFO },
        { KEPLER_INLINE_TO_MEMORY_B, ENG_GR(0) },
        { MMU_FAULT_BUFFER, ENG_GR(0) },
        { NV0060_SYNC_GPU_BOOST, ENG_GPU },
        { NV01_MEMORY_VIRTUAL, ENG_DMA },
        { NV04_DISPLAY_COMMON, ENG_KERNEL_DISPLAY },
        { NV04_SOFTWARE_TEST, ENG_SW },
        { NV50_DEFERRED_API_CLASS, ENG_SW },
        { NV50_MEMORY_VIRTUAL, ENG_DMA },
        { NV50_P2P, ENG_BUS },
        { NV50_THIRD_PARTY_P2P, ENG_BUS },
        { NVA081_VGPU_CONFIG, ENG_GPU },
        { NVA084_KERNEL_HOST_VGPU_DEVICE, ENG_GPU },
        { NVB4B7_VIDEO_ENCODER, ENG_MSENC(0) },
        { NVC371_DISP_SF_USER, ENG_KERNEL_DISPLAY },
        { NVC372_DISPLAY_SW, ENG_KERNEL_DISPLAY },
        { NVC4B0_VIDEO_DECODER, ENG_NVDEC(0) },
        { NVC570_DISPLAY, ENG_KERNEL_DISPLAY },
        { NVC573_DISP_CAPABILITIES, ENG_KERNEL_DISPLAY },
        { NVC57A_CURSOR_IMM_CHANNEL_PIO, ENG_KERNEL_DISPLAY },
        { NVC57B_WINDOW_IMM_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC57D_CORE_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC57E_WINDOW_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { RM_USER_SHARED_DATA, ENG_GPU },
        { TURING_A, ENG_GR(0) },
        { TURING_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { TURING_COMPUTE_A, ENG_GR(0) },
        { TURING_DMA_COPY_A, ENG_CE(0) },
        { TURING_DMA_COPY_A, ENG_CE(1) },
        { TURING_DMA_COPY_A, ENG_CE(2) },
        { TURING_DMA_COPY_A, ENG_CE(3) },
        { TURING_DMA_COPY_A, ENG_CE(4) },
        { TURING_USERMODE_A, ENG_GPU },
        { VOLTA_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { VOLTA_USERMODE_A, ENG_GPU },
    };

    #define HALTU117_NUM_CLASS_DESCS (sizeof(halTU117ClassDescriptorList) / sizeof(CLASSDESCRIPTOR))

    #define HALTU117_NUM_CLASSES 52

    ct_assert(NV0080_CTRL_GPU_CLASSLIST_MAX_SIZE >= HALTU117_NUM_CLASSES);

    *pNumClassDescriptors = HALTU117_NUM_CLASS_DESCS;
    return halTU117ClassDescriptorList;
}



const CLASSDESCRIPTOR *
gpuGetClassDescriptorList_GA100(POBJGPU pGpu, NvU32 *pNumClassDescriptors)
{
    static const CLASSDESCRIPTOR halGA100ClassDescriptorList[] = {
        { ACCESS_COUNTER_NOTIFY_BUFFER, ENG_GR(0) },
        { AMPERE_A, ENG_GR(0) },
        { AMPERE_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { AMPERE_COMPUTE_A, ENG_GR(0) },
        { AMPERE_COMPUTE_A, ENG_GR(1) },
        { AMPERE_COMPUTE_A, ENG_GR(2) },
        { AMPERE_COMPUTE_A, ENG_GR(3) },
        { AMPERE_COMPUTE_A, ENG_GR(4) },
        { AMPERE_COMPUTE_A, ENG_GR(5) },
        { AMPERE_COMPUTE_A, ENG_GR(6) },
        { AMPERE_COMPUTE_A, ENG_GR(7) },
        { AMPERE_DMA_COPY_A, ENG_CE(0) },
        { AMPERE_DMA_COPY_A, ENG_CE(1) },
        { AMPERE_DMA_COPY_A, ENG_CE(2) },
        { AMPERE_DMA_COPY_A, ENG_CE(3) },
        { AMPERE_DMA_COPY_A, ENG_CE(4) },
        { AMPERE_DMA_COPY_A, ENG_CE(5) },
        { AMPERE_DMA_COPY_A, ENG_CE(6) },
        { AMPERE_DMA_COPY_A, ENG_CE(7) },
        { AMPERE_DMA_COPY_A, ENG_CE(8) },
        { AMPERE_DMA_COPY_A, ENG_CE(9) },
        { AMPERE_USERMODE_A, ENG_GPU },
        { FERMI_CONTEXT_SHARE_A, ENG_KERNEL_FIFO },
        { FERMI_TWOD_A, ENG_GR(0) },
        { FERMI_VASPACE_A, ENG_DMA },
        { G84_PERFBUFFER, ENG_BUS },
        { GF100_SUBDEVICE_MASTER, ENG_GPU },
        { GF100_TIMED_SEMAPHORE_SW, ENG_SW },
        { GF100_ZBC_CLEAR, ENG_KERNEL_MEMORY_SYSTEM },
        { GP100_UVM_SW, ENG_SW },
        { KEPLER_CHANNEL_GROUP_A, ENG_KERNEL_FIFO },
        { KEPLER_INLINE_TO_MEMORY_B, ENG_GR(0) },
        { MMU_FAULT_BUFFER, ENG_GR(0) },
        { NV0060_SYNC_GPU_BOOST, ENG_GPU },
        { NV01_MEMORY_VIRTUAL, ENG_DMA },
        { NV04_SOFTWARE_TEST, ENG_SW },
        { NV50_DEFERRED_API_CLASS, ENG_SW },
        { NV50_MEMORY_VIRTUAL, ENG_DMA },
        { NV50_P2P, ENG_BUS },
        { NV50_THIRD_PARTY_P2P, ENG_BUS },
        { NVA081_VGPU_CONFIG, ENG_GPU },
        { NVA084_KERNEL_HOST_VGPU_DEVICE, ENG_GPU },
        { NVC4D1_VIDEO_NVJPG, ENG_NVJPG },
        { NVC6B0_VIDEO_DECODER, ENG_NVDEC(0) },
        { NVC6B0_VIDEO_DECODER, ENG_NVDEC(1) },
        { NVC6B0_VIDEO_DECODER, ENG_NVDEC(2) },
        { NVC6B0_VIDEO_DECODER, ENG_NVDEC(3) },
        { NVC6B0_VIDEO_DECODER, ENG_NVDEC(4) },
        { NVC6FA_VIDEO_OFA, ENG_OFA },
        { RM_USER_SHARED_DATA, ENG_GPU },
        { TURING_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { TURING_USERMODE_A, ENG_GPU },
        { VOLTA_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { VOLTA_USERMODE_A, ENG_GPU },
    };

    #define HALGA100_NUM_CLASS_DESCS (sizeof(halGA100ClassDescriptorList) / sizeof(CLASSDESCRIPTOR))

    #define HALGA100_NUM_CLASSES 46

    ct_assert(NV0080_CTRL_GPU_CLASSLIST_MAX_SIZE >= HALGA100_NUM_CLASSES);

    *pNumClassDescriptors = HALGA100_NUM_CLASS_DESCS;
    return halGA100ClassDescriptorList;
}



const CLASSDESCRIPTOR *
gpuGetClassDescriptorList_GA102(POBJGPU pGpu, NvU32 *pNumClassDescriptors)
{
    static const CLASSDESCRIPTOR halGA102ClassDescriptorList[] = {
        { ACCESS_COUNTER_NOTIFY_BUFFER, ENG_GR(0) },
        { AMPERE_B, ENG_GR(0) },
        { AMPERE_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { AMPERE_COMPUTE_B, ENG_GR(0) },
        { AMPERE_DMA_COPY_B, ENG_CE(0) },
        { AMPERE_DMA_COPY_B, ENG_CE(1) },
        { AMPERE_DMA_COPY_B, ENG_CE(2) },
        { AMPERE_DMA_COPY_B, ENG_CE(3) },
        { AMPERE_DMA_COPY_B, ENG_CE(4) },
        { AMPERE_USERMODE_A, ENG_GPU },
        { FERMI_CONTEXT_SHARE_A, ENG_KERNEL_FIFO },
        { FERMI_TWOD_A, ENG_GR(0) },
        { FERMI_VASPACE_A, ENG_DMA },
        { G84_PERFBUFFER, ENG_BUS },
        { GF100_DISP_SW, ENG_SW },
        { GF100_HDACODEC, ENG_HDACODEC },
        { GF100_SUBDEVICE_MASTER, ENG_GPU },
        { GF100_TIMED_SEMAPHORE_SW, ENG_SW },
        { GF100_ZBC_CLEAR, ENG_KERNEL_MEMORY_SYSTEM },
        { GP100_UVM_SW, ENG_SW },
        { KEPLER_CHANNEL_GROUP_A, ENG_KERNEL_FIFO },
        { KEPLER_INLINE_TO_MEMORY_B, ENG_GR(0) },
        { MMU_FAULT_BUFFER, ENG_GR(0) },
        { NV0060_SYNC_GPU_BOOST, ENG_GPU },
        { NV01_MEMORY_VIRTUAL, ENG_DMA },
        { NV04_DISPLAY_COMMON, ENG_KERNEL_DISPLAY },
        { NV04_SOFTWARE_TEST, ENG_SW },
        { NV50_DEFERRED_API_CLASS, ENG_SW },
        { NV50_MEMORY_VIRTUAL, ENG_DMA },
        { NV50_P2P, ENG_BUS },
        { NV50_THIRD_PARTY_P2P, ENG_BUS },
        { NVA081_VGPU_CONFIG, ENG_GPU },
        { NVA084_KERNEL_HOST_VGPU_DEVICE, ENG_GPU },
        { NVC372_DISPLAY_SW, ENG_KERNEL_DISPLAY },
        { NVC670_DISPLAY, ENG_KERNEL_DISPLAY },
        { NVC671_DISP_SF_USER, ENG_KERNEL_DISPLAY },
        { NVC673_DISP_CAPABILITIES, ENG_KERNEL_DISPLAY },
        { NVC67A_CURSOR_IMM_CHANNEL_PIO, ENG_KERNEL_DISPLAY },
        { NVC67B_WINDOW_IMM_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC67D_CORE_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC67E_WINDOW_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC77F_ANY_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC7B0_VIDEO_DECODER, ENG_NVDEC(0) },
        { NVC7B0_VIDEO_DECODER, ENG_NVDEC(1) },
        { NVC7B7_VIDEO_ENCODER, ENG_MSENC(0) },
        { NVC7FA_VIDEO_OFA, ENG_OFA },
        { RM_USER_SHARED_DATA, ENG_GPU },
        { TURING_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { TURING_USERMODE_A, ENG_GPU },
        { VOLTA_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { VOLTA_USERMODE_A, ENG_GPU },
    };

    #define HALGA102_NUM_CLASS_DESCS (sizeof(halGA102ClassDescriptorList) / sizeof(CLASSDESCRIPTOR))

    #define HALGA102_NUM_CLASSES 58

    ct_assert(NV0080_CTRL_GPU_CLASSLIST_MAX_SIZE >= HALGA102_NUM_CLASSES);

    *pNumClassDescriptors = HALGA102_NUM_CLASS_DESCS;
    return halGA102ClassDescriptorList;
}

const CLASSDESCRIPTOR *
gpuGetClassDescriptorList_AD102(POBJGPU pGpu, NvU32 *pNumClassDescriptors)
{
    static const CLASSDESCRIPTOR halAD102ClassDescriptorList[] = {
        { ACCESS_COUNTER_NOTIFY_BUFFER, ENG_GR(0) },
        { ADA_A, ENG_GR(0) },
        { ADA_COMPUTE_A, ENG_GR(0) },
        { AMPERE_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { AMPERE_DMA_COPY_B, ENG_CE(0) },
        { AMPERE_DMA_COPY_B, ENG_CE(1) },
        { AMPERE_DMA_COPY_B, ENG_CE(2) },
        { AMPERE_DMA_COPY_B, ENG_CE(3) },
        { AMPERE_DMA_COPY_B, ENG_CE(4) },
        { AMPERE_USERMODE_A, ENG_GPU },
        { FERMI_CONTEXT_SHARE_A, ENG_KERNEL_FIFO },
        { FERMI_TWOD_A, ENG_GR(0) },
        { FERMI_VASPACE_A, ENG_DMA },
        { G84_PERFBUFFER, ENG_BUS },
        { GF100_DISP_SW, ENG_SW },
        { GF100_HDACODEC, ENG_HDACODEC },
        { GF100_SUBDEVICE_MASTER, ENG_GPU },
        { GF100_TIMED_SEMAPHORE_SW, ENG_SW },
        { GF100_ZBC_CLEAR, ENG_KERNEL_MEMORY_SYSTEM },
        { GP100_UVM_SW, ENG_SW },
        { KEPLER_CHANNEL_GROUP_A, ENG_KERNEL_FIFO },
        { KEPLER_INLINE_TO_MEMORY_B, ENG_GR(0) },
        { MMU_FAULT_BUFFER, ENG_GR(0) },
        { NV0060_SYNC_GPU_BOOST, ENG_GPU },
        { NV01_MEMORY_VIRTUAL, ENG_DMA },
        { NV04_DISPLAY_COMMON, ENG_KERNEL_DISPLAY },
        { NV04_SOFTWARE_TEST, ENG_SW },
        { NV50_DEFERRED_API_CLASS, ENG_SW },
        { NV50_MEMORY_VIRTUAL, ENG_DMA },
        { NV50_P2P, ENG_BUS },
        { NV50_THIRD_PARTY_P2P, ENG_BUS },
        { NVA081_VGPU_CONFIG, ENG_GPU },
        { NVA084_KERNEL_HOST_VGPU_DEVICE, ENG_GPU },
        { NVC372_DISPLAY_SW, ENG_KERNEL_DISPLAY },
        { NVC67A_CURSOR_IMM_CHANNEL_PIO, ENG_KERNEL_DISPLAY },
        { NVC67B_WINDOW_IMM_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC67E_WINDOW_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC770_DISPLAY, ENG_KERNEL_DISPLAY },
        { NVC771_DISP_SF_USER, ENG_KERNEL_DISPLAY },
        { NVC773_DISP_CAPABILITIES, ENG_KERNEL_DISPLAY },
        { NVC77D_CORE_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC77F_ANY_CHANNEL_DMA, ENG_KERNEL_DISPLAY },
        { NVC9B0_VIDEO_DECODER, ENG_NVDEC(0) },
        { NVC9B0_VIDEO_DECODER, ENG_NVDEC(1) },
        { NVC9B0_VIDEO_DECODER, ENG_NVDEC(2) },
        { NVC9B0_VIDEO_DECODER, ENG_NVDEC(3) },
        { NVC9B7_VIDEO_ENCODER, ENG_MSENC(0) },
        { NVC9B7_VIDEO_ENCODER, ENG_MSENC(1) },
        { NVC9B7_VIDEO_ENCODER, ENG_MSENC(2) },
        { NVC9D1_VIDEO_NVJPG, ENG_NVJPEG(0) },
        { NVC9D1_VIDEO_NVJPG, ENG_NVJPEG(1) },
        { NVC9D1_VIDEO_NVJPG, ENG_NVJPEG(2) },
        { NVC9D1_VIDEO_NVJPG, ENG_NVJPEG(3) },
        { NVC9FA_VIDEO_OFA, ENG_OFA },
        { RM_USER_SHARED_DATA, ENG_GPU },
        { TURING_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { TURING_USERMODE_A, ENG_GPU },
        { VOLTA_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { VOLTA_USERMODE_A, ENG_GPU },
    };

    #define HALAD102_NUM_CLASS_DESCS (sizeof(halAD102ClassDescriptorList) / sizeof(CLASSDESCRIPTOR))

    #define HALAD102_NUM_CLASSES 59

    ct_assert(NV0080_CTRL_GPU_CLASSLIST_MAX_SIZE >= HALAD102_NUM_CLASSES);

    *pNumClassDescriptors = HALAD102_NUM_CLASS_DESCS;
    return halAD102ClassDescriptorList;
}

const CLASSDESCRIPTOR *
gpuGetClassDescriptorList_GH100(POBJGPU pGpu, NvU32 *pNumClassDescriptors)
{
    static const CLASSDESCRIPTOR halGH100ClassDescriptorList[] = {
        { ACCESS_COUNTER_NOTIFY_BUFFER, ENG_GR(0) },
        { AMPERE_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { AMPERE_USERMODE_A, ENG_GPU },
        { FERMI_CONTEXT_SHARE_A, ENG_KERNEL_FIFO },
        { FERMI_TWOD_A, ENG_GR(0) },
        { FERMI_VASPACE_A, ENG_DMA },
        { G84_PERFBUFFER, ENG_BUS },
        { GF100_SUBDEVICE_MASTER, ENG_GPU },
        { GF100_TIMED_SEMAPHORE_SW, ENG_SW },
        { GF100_ZBC_CLEAR, ENG_KERNEL_MEMORY_SYSTEM },
        { GP100_UVM_SW, ENG_SW },
        { HOPPER_A, ENG_GR(0) },
        { HOPPER_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { HOPPER_COMPUTE_A, ENG_GR(0) },
        { HOPPER_COMPUTE_A, ENG_GR(1) },
        { HOPPER_COMPUTE_A, ENG_GR(2) },
        { HOPPER_COMPUTE_A, ENG_GR(3) },
        { HOPPER_COMPUTE_A, ENG_GR(4) },
        { HOPPER_COMPUTE_A, ENG_GR(5) },
        { HOPPER_COMPUTE_A, ENG_GR(6) },
        { HOPPER_COMPUTE_A, ENG_GR(7) },
        { HOPPER_DMA_COPY_A, ENG_CE(0) },
        { HOPPER_DMA_COPY_A, ENG_CE(1) },
        { HOPPER_DMA_COPY_A, ENG_CE(2) },
        { HOPPER_DMA_COPY_A, ENG_CE(3) },
        { HOPPER_DMA_COPY_A, ENG_CE(4) },
        { HOPPER_DMA_COPY_A, ENG_CE(5) },
        { HOPPER_DMA_COPY_A, ENG_CE(6) },
        { HOPPER_DMA_COPY_A, ENG_CE(7) },
        { HOPPER_DMA_COPY_A, ENG_CE(8) },
        { HOPPER_DMA_COPY_A, ENG_CE(9) },
        { HOPPER_USERMODE_A, ENG_GPU },
        { KEPLER_CHANNEL_GROUP_A, ENG_KERNEL_FIFO },
        { KEPLER_INLINE_TO_MEMORY_B, ENG_GR(0) },
        { MMU_FAULT_BUFFER, ENG_GR(0) },
        { NV0060_SYNC_GPU_BOOST, ENG_GPU },
        { NV01_MEMORY_VIRTUAL, ENG_DMA },
        { NV04_SOFTWARE_TEST, ENG_SW },
        { NV50_DEFERRED_API_CLASS, ENG_SW },
        { NV50_MEMORY_VIRTUAL, ENG_DMA },
        { NV50_P2P, ENG_BUS },
        { NV50_THIRD_PARTY_P2P, ENG_BUS },
        { NVA081_VGPU_CONFIG, ENG_GPU },
        { NVA084_KERNEL_HOST_VGPU_DEVICE, ENG_GPU },
        { NVB8B0_VIDEO_DECODER, ENG_NVDEC(0) },
        { NVB8B0_VIDEO_DECODER, ENG_NVDEC(1) },
        { NVB8B0_VIDEO_DECODER, ENG_NVDEC(2) },
        { NVB8B0_VIDEO_DECODER, ENG_NVDEC(3) },
        { NVB8B0_VIDEO_DECODER, ENG_NVDEC(4) },
        { NVB8B0_VIDEO_DECODER, ENG_NVDEC(5) },
        { NVB8B0_VIDEO_DECODER, ENG_NVDEC(6) },
        { NVB8B0_VIDEO_DECODER, ENG_NVDEC(7) },
        { NVB8D1_VIDEO_NVJPG, ENG_NVJPEG(0) },
        { NVB8D1_VIDEO_NVJPG, ENG_NVJPEG(1) },
        { NVB8D1_VIDEO_NVJPG, ENG_NVJPEG(2) },
        { NVB8D1_VIDEO_NVJPG, ENG_NVJPEG(3) },
        { NVB8D1_VIDEO_NVJPG, ENG_NVJPEG(4) },
        { NVB8D1_VIDEO_NVJPG, ENG_NVJPEG(5) },
        { NVB8D1_VIDEO_NVJPG, ENG_NVJPEG(6) },
        { NVB8D1_VIDEO_NVJPG, ENG_NVJPEG(7) },
        { NVB8FA_VIDEO_OFA, ENG_OFA },
        { RM_USER_SHARED_DATA, ENG_GPU },
        { TURING_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { TURING_USERMODE_A, ENG_GPU },
        { VOLTA_CHANNEL_GPFIFO_A, ENG_KERNEL_FIFO },
        { VOLTA_USERMODE_A, ENG_GPU },
    };

    #define HALGH100_NUM_CLASS_DESCS (sizeof(halGH100ClassDescriptorList) / sizeof(CLASSDESCRIPTOR))

    #define HALGH100_NUM_CLASSES 49

    ct_assert(NV0080_CTRL_GPU_CLASSLIST_MAX_SIZE >= HALGH100_NUM_CLASSES);

    *pNumClassDescriptors = HALGH100_NUM_CLASS_DESCS;
    return halGH100ClassDescriptorList;
}
