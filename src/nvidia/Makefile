include $(src)/src/nvidia/srcs.mk

NVIDIA_API_CFLAGS += -I$(src)/src/common/inc/std
NVIDIA_API_CFLAGS += -include $(src)/src/common/sdk/nvidia/inc/cpuopsys.h

NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/kernel/inc
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/interface
NVIDIA_API_CFLAGS += -I$(src)/src/common/sdk/nvidia/inc
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/arch/nvalloc/common/inc
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/arch/nvalloc/common/inc/deprecated
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/arch/nvalloc/unix/include
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/inc
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/inc/os
NVIDIA_API_CFLAGS += -I$(src)/src/common/shared/inc
NVIDIA_API_CFLAGS += -I$(src)/src/common/shared/msgq/inc
NVIDIA_API_CFLAGS += -I$(src)/src/common/inc

NVIDIA_API_CFLAGS += -I$(src)/src/common/uproc/os/libos-v2.0.0/include
NVIDIA_API_CFLAGS += -I$(src)/src/common/uproc/os/libos-v2.0.0/debug
NVIDIA_API_CFLAGS += -I$(src)/src/common/inc/swref
NVIDIA_API_CFLAGS += -I$(src)/src/common/inc/swref/published

NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/generated
NVIDIA_API_CFLAGS += -I$(src)/src/common/nvswitch/kernel/inc
NVIDIA_API_CFLAGS += -I$(src)/src/common/nvswitch/interface
NVIDIA_API_CFLAGS += -I$(src)/src/common/nvswitch/common/inc/
NVIDIA_API_CFLAGS += -I$(src)/src/common/inc/displayport
NVIDIA_API_CFLAGS += -I$(src)/src/common/nvlink/interface/
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/src/mm/uvm/interface
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/inc/libraries
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/src/libraries
NVIDIA_API_CFLAGS += -I$(src)/src/nvidia/inc/kernel

NVIDIA_API_CFLAGS += -D_LANGUAGE_C
NVIDIA_API_CFLAGS += -D__NO_CTYPE
NVIDIA_API_CFLAGS += -DNVRM
NVIDIA_API_CFLAGS += -DLOCK_VAL_ENABLED=0
NVIDIA_API_CFLAGS += -DPORT_ATOMIC_64_BIT_SUPPORTED=1
NVIDIA_API_CFLAGS += -DPORT_IS_KERNEL_BUILD=1
NVIDIA_API_CFLAGS += -DPORT_IS_CHECKED_BUILD=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_atomic=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_core=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_cpu=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_crypto=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_debug=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_memory=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_safe=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_string=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_sync=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_thread=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_util=1
NVIDIA_API_CFLAGS += -DPORT_MODULE_example=0
NVIDIA_API_CFLAGS += -DPORT_MODULE_mmio=0
NVIDIA_API_CFLAGS += -DPORT_MODULE_time=0
NVIDIA_API_CFLAGS += -DRS_STANDALONE=0
NVIDIA_API_CFLAGS += -DRS_STANDALONE_TEST=0
NVIDIA_API_CFLAGS += -DRS_COMPATABILITY_MODE=1
NVIDIA_API_CFLAGS += -DRS_PROVIDES_API_STATE=0
NVIDIA_API_CFLAGS += -DNV_CONTAINERS_NO_TEMPLATES

NVIDIA_API_CFLAGS += -DINCLUDE_NVLINK_LIB
NVIDIA_API_CFLAGS += -DINCLUDE_NVSWITCH_LIB

NVIDIA_API_CFLAGS += -DNV_PRINTF_STRINGS_ALLOWED=1
NVIDIA_API_CFLAGS += -DNV_ASSERT_FAILED_USES_STRINGS=1
NVIDIA_API_CFLAGS += -DPORT_ASSERT_FAILED_USES_STRINGS=1

NVIDIA_API_CFLAGS += -DRMCFG_FEATURE_PHYSICAL_RM=0

NVIDIA_API_CFLAGS += -Wwrite-strings
NVIDIA_API_CFLAGS += --std=gnu11
