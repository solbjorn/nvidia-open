include $(src)/src/nvidia-modeset/srcs.mk

NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/inc/std
NVIDIA_MODESET_API_CFLAGS += -include $(src)/src/common/sdk/nvidia/inc/cpuopsys.h

NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/sdk/nvidia/inc
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/sdk/nvidia/inc/hw
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/shared/inc
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/inc
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/softfloat/nvidia
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/softfloat/source/include
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/softfloat/source/8086-SSE
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/unix/common/utils/interface
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/unix/common/inc
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/modeset
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/nvidia-modeset/os-interface/include
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/nvidia-modeset/kapi/interface
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/nvidia/arch/nvalloc/unix/include
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/nvidia-modeset/interface
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/nvidia-modeset/include
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/nvidia-modeset/kapi/include
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/displayport/inc
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/displayport/inc/dptestutil
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/inc/displayport

NVIDIA_MODESET_API_CFLAGS += -DNDEBUG
NVIDIA_MODESET_API_CFLAGS += -D_LANGUAGE_C
NVIDIA_MODESET_API_CFLAGS += -D__NO_CTYPE

NVIDIA_MODESET_API_CFLAGS += -DNV_CPU_INTRINSICS_KERNEL
NVIDIA_MODESET_API_CFLAGS += -DNVHDMIPKT_RM_CALLS_INTERNAL=0

# XXX it would be nice to only define these for appropriate files...
NVIDIA_MODESET_API_CFLAGS += -DSOFTFLOAT_ROUND_ODD
NVIDIA_MODESET_API_CFLAGS += -DSOFTFLOAT_FAST_DIV32TO16
NVIDIA_MODESET_API_CFLAGS += -DSOFTFLOAT_FAST_DIV64TO32

# Tell nvtiming to use nvkms import functions
NVIDIA_MODESET_API_CFLAGS += -DNVT_USE_NVKMS

NVIDIA_MODESET_API_CFLAGS += -DNVKMS_INCLUDE_HEADSURFACE=1

NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/unix/nvidia-3d/interface
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/unix/nvidia-push/interface
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/unix/nvidia-3d/include
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/unix/nvidia-push/include
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/common/unix/nvidia-headsurface
NVIDIA_MODESET_API_CFLAGS += -I$(src)/src/nvidia-modeset/src/shaders

NVIDIA_MODESET_API_CFLAGS += -DNV_PUSH_IN_KERNEL

NVIDIA_MODESET_API_CFLAGS += -Wformat
NVIDIA_MODESET_API_CFLAGS += -Wreturn-type
NVIDIA_MODESET_API_CFLAGS += -Wswitch
NVIDIA_MODESET_API_CFLAGS += -Wunused-local-typedefs
NVIDIA_MODESET_API_CFLAGS += -Wchar-subscripts
NVIDIA_MODESET_API_CFLAGS += -Wparentheses
NVIDIA_MODESET_API_CFLAGS += -Wall
NVIDIA_MODESET_API_CFLAGS += -Wextra
NVIDIA_MODESET_API_CFLAGS += -Wno-sign-compare
NVIDIA_MODESET_API_CFLAGS += -Wno-unused-parameter
NVIDIA_MODESET_API_CFLAGS += -Wmissing-declarations

NVIDIA_MODESET_API_CFLAGS += $(call cc-option, -Wformat-overflow=2)
NVIDIA_MODESET_API_CFLAGS += $(call cc-option, -Wformat-truncation=1)

NVIDIA_MODESET_API_CCFLAGS += -Wimplicit
NVIDIA_MODESET_API_CCFLAGS += -Wstrict-prototypes
NVIDIA_MODESET_API_CCFLAGS += -Wmissing-prototypes
NVIDIA_MODESET_API_CCFLAGS += -std=gnu11

NVIDIA_MODESET_API_CXXFLAGS += -std=gnu++11
NVIDIA_MODESET_API_CXXFLAGS += -fno-operator-names
NVIDIA_MODESET_API_CXXFLAGS += -fno-rtti
NVIDIA_MODESET_API_CXXFLAGS += -fno-exceptions
NVIDIA_MODESET_API_CXXFLAGS += -fcheck-new

#
# C++ sources compilation
#

ifneq ($(LLVM),)
CXX = $(HOSTCXX)
else
CXX = $(CROSS_COMPILE)g++
endif

cxx_flags = $(patsubst %/include/linux/compiler_types.h,%/drivers/gpu/drm/nvidia/src/common/inc/std/cxx_types.h,$(c_flags))

quiet_cmd_cxx_o_cpp = CXX $(quiet_modtag) $@
      cmd_cxx_o_cpp = $(CXX) $(cxx_flags) -c -o $@ $< $(cmd_objtool)

define rule_cxx_o_cpp
	$(call cmd_and_fixdep,cxx_o_cpp)
	$(call cmd,gen_ksymdeps)
	$(call cmd,checksrc)
	$(call cmd,checkdoc)
	$(call cmd,gen_objtooldep)
	$(call cmd,modversions_c)
	$(call cmd,record_mcount)
endef

$(obj)/%.o: $(src)/%.cpp $(recordmcount_source) FORCE
	$(call if_changed_rule,cxx_o_cpp)
	$(call cmd,force_checksrc)

# pahole's BTF encoder doesn't support C++ in general, limit debuginfo to
# level 1 for now, can change once full Rust support is here.
ifneq ($(filter -g%,$(KBUILD_CFLAGS)),)
NVIDIA_MODESET_API_CXXFLAGS += -g1
endif
