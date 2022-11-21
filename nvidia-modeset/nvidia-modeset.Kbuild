###########################################################################
# Kbuild fragment for nvidia-modeset.ko
###########################################################################

#
# Define NVIDIA_MODESET_{SOURCES,OBJECTS}
#

NVIDIA_MODESET_SOURCES  = nvidia-modeset/nvidia-modeset-linux.c

NVIDIA_MODESET_OBJECTS = $(patsubst %.c,%.o,$(NVIDIA_MODESET_SOURCES))

obj-$(CONFIG_DRM_NVIDIA) += nvidia-modeset.o
nvidia-modeset-y := $(NVIDIA_MODESET_OBJECTS)

#
# Former nv-modeset-kernel.o, now part of Kbuild.
#

include $(src)/src/nvidia-modeset/Makefile

NVIDIA_MODESET_API_OBJS = $(patsubst %.c,%.o,$(NVIDIA_MODESET_API_SRCS))

nvidia-modeset-y += $(NVIDIA_MODESET_API_OBJS)

$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_API_OBJS), $(NVIDIA_MODESET_API_CFLAGS))
$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_API_OBJS), $(NVIDIA_MODESET_API_CCFLAGS))

NVIDIA_MODESET_API_OBJS_CXX = $(patsubst %.cpp,%.o,$(NVIDIA_MODESET_API_SRCS_CXX))

nvidia-modeset-y += $(NVIDIA_MODESET_API_OBJS_CXX)

$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_API_OBJS_CXX), $(NVIDIA_MODESET_API_CFLAGS))
$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_API_OBJS_CXX), $(NVIDIA_MODESET_API_CXXFLAGS))

#
# Define nvidia-modeset.ko-specific CFLAGS.
#

NVIDIA_MODESET_CFLAGS += $(COMMON_CFLAGS)
NVIDIA_MODESET_CFLAGS += -I$(src)/nvidia-modeset
NVIDIA_MODESET_CFLAGS += -UDEBUG -U_DEBUG -DNDEBUG

$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_MODESET_OBJECTS), $(NVIDIA_MODESET_CFLAGS))

#
# Register the conftests needed by nvidia-modeset.ko
#

NV_CONFTEST_TYPE_COMPILE_TESTS += timespec64
NV_CONFTEST_TYPE_COMPILE_TESTS += proc_ops
NV_CONFTEST_FUNCTION_COMPILE_TESTS += pde_data
NV_CONFTEST_FUNCTION_COMPILE_TESTS += timer_setup
NV_CONFTEST_FUNCTION_COMPILE_TESTS += list_is_first
NV_CONFTEST_FUNCTION_COMPILE_TESTS += ktime_get_real_ts64
NV_CONFTEST_FUNCTION_COMPILE_TESTS += ktime_get_raw_ts64
NV_CONFTEST_FUNCTION_COMPILE_TESTS += acpi_video_backlight_use_native
