#ifndef __NV_STDDEF_H
#define __NV_STDDEF_H 1

#ifndef __cplusplus

#include <linux/stddef.h>
#include <linux/types.h>

#else

#include <asm/posix_types.h>

typedef __kernel_size_t size_t;

#undef NULL
#define NULL	__null

#endif

#endif /* __NV_STDDEF_H */
