obj-$(CONFIG_DRM_NVIDIA) += nvidia-common.o

NVIDIA_COMMON_OBJECTS := nvidia-common/nv-kthread-q.o nvidia-common/nvstatus.o
nvidia-common-y := $(NVIDIA_COMMON_OBJECTS)

NVIDIA_COMMON_CFLAGS += $(COMMON_CFLAGS)
$(call ASSIGN_PER_OBJ_CFLAGS, $(NVIDIA_COMMON_OBJECTS), $(NVIDIA_COMMON_CFLAGS))
