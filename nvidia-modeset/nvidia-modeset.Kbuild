###########################################################################
# Kbuild fragment for nvidia-modeset.ko
###########################################################################

#
# Define NVIDIA_MODESET_{SOURCES,OBJECTS}
#

NVIDIA_MODESET_SOURCES  = nvidia-modeset/nvidia-modeset-linux.c
NVIDIA_MODESET_SOURCES += nvidia-modeset/nv-kthread-q.c

NVIDIA_MODESET_OBJECTS = $(patsubst %.c,%.o,$(NVIDIA_MODESET_SOURCES))

obj-$(CONFIG_DRM_NVIDIA) += nvidia-modeset.o
nvidia-modeset-y := $(NVIDIA_MODESET_OBJECTS)

NVIDIA_MODESET_KO = nvidia-modeset/nvidia-modeset.ko

NV_KERNEL_MODULE_TARGETS += $(NVIDIA_MODESET_KO)

#
# Former nv-modeset-kernel.o, now part of Kbuild.
#

include $(src)/src/nvidia-modeset/Makefile

NVIDIA_MODESET_API_OBJS = $(patsubst %.c,%.o,$(NVIDIA_MODESET_API_SRCS))

nvidia-modeset-y += $(NVIDIA_MODESET_API_OBJS)

$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_API_OBJS), $(NVIDIA_MODESET_API_CFLAGS))
$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_API_OBJS), $(NVIDIA_MODESET_API_CCFLAGS))

ifneq ($(LLVM),)
CXX = $(HOSTCXX)
else
CXX = $(CROSS_COMPILE)g++
endif

cxx_flags = $(patsubst %/linux/compiler_types.h,%/linux/compiler_attributes.h,$(c_flags))

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

NVIDIA_MODESET_API_OBJS_CXX = $(patsubst %.cpp,%.o,$(NVIDIA_MODESET_API_SRCS_CXX))

nvidia-modeset-y += $(NVIDIA_MODESET_API_OBJS_CXX)

$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_API_OBJS_CXX), $(NVIDIA_MODESET_API_CFLAGS))
$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_API_OBJS_CXX), $(NVIDIA_MODESET_API_CXXFLAGS))

#
# Define nvidia-modeset.ko-specific CFLAGS.
#

NVIDIA_MODESET_CFLAGS += $(COMMON_CFLAGS)
NVIDIA_MODESET_CFLAGS += -I$(src)/nvidia-modeset
NVIDIA_MODESET_CFLAGS += -UDEBUG -U_DEBUG -DNDEBUG -DNV_BUILD_MODULE_INSTANCES=0

$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_OBJECTS), $(NVIDIA_MODESET_CFLAGS))

#
# Register the conftests needed by nvidia-modeset.ko
#

NV_OBJECTS_DEPEND_ON_CONFTEST += $(NVIDIA_MODESET_OBJECTS)

NV_CONFTEST_TYPE_COMPILE_TESTS += file_operations
NV_CONFTEST_TYPE_COMPILE_TESTS += node_states_n_memory
NV_CONFTEST_TYPE_COMPILE_TESTS += timespec64
NV_CONFTEST_TYPE_COMPILE_TESTS += proc_ops
NV_CONFTEST_FUNCTION_COMPILE_TESTS += pde_data
NV_CONFTEST_FUNCTION_COMPILE_TESTS += proc_remove
NV_CONFTEST_FUNCTION_COMPILE_TESTS += timer_setup
NV_CONFTEST_FUNCTION_COMPILE_TESTS += kthread_create_on_node
NV_CONFTEST_FUNCTION_COMPILE_TESTS += list_is_first
NV_CONFTEST_FUNCTION_COMPILE_TESTS += ktime_get_real_ts64
NV_CONFTEST_FUNCTION_COMPILE_TESTS += ktime_get_raw_ts64
NV_CONFTEST_SYMBOL_COMPILE_TESTS += is_export_symbol_present_kthread_create_on_node
