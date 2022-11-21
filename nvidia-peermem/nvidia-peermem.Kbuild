###########################################################################
# Kbuild fragment for nvidia-peermem.ko
###########################################################################

#
# Define NVIDIA_PEERMEM_{SOURCES,OBJECTS}
#

NVIDIA_PEERMEM_SOURCES =
NVIDIA_PEERMEM_SOURCES += nvidia-peermem/nvidia-peermem.c

NVIDIA_PEERMEM_OBJECTS = $(patsubst %.c,%.o,$(NVIDIA_PEERMEM_SOURCES))

obj-$(CONFIG_DRM_NVIDIA) += nvidia-peermem.o
nvidia-peermem-y := $(NVIDIA_PEERMEM_OBJECTS)

#
# Define nvidia-peermem.ko-specific CFLAGS.
#
NVIDIA_PEERMEM_CFLAGS += $(COMMON_CFLAGS)
NVIDIA_PEERMEM_CFLAGS += -I$(src)/nvidia-peermem
NVIDIA_PEERMEM_CFLAGS += -UDEBUG -U_DEBUG -DNDEBUG

$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_PEERMEM_OBJECTS), $(NVIDIA_PEERMEM_CFLAGS))

#
# Register the conftests needed by nvidia-peermem.ko
#

NV_CONFTEST_GENERIC_COMPILE_TESTS += ib_peer_memory_symbols

NV_CONFTEST_FUNCTION_COMPILE_TESTS +=

NV_CONFTEST_TYPE_COMPILE_TESTS +=
