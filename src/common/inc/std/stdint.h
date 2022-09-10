#ifndef __NV_STDINT_H
#define __NV_STDINT_H 1

#include <linux/const.h>
#include <linux/types.h>

typedef char			int_fast8_t;

typedef unsigned char		uint_fast8_t;
typedef unsigned char		uint_least8_t;

#if BITS_PER_LONG == 64

typedef long			int_fast16_t;
typedef long			int_fast32_t;
typedef long			int_fast64_t;

typedef unsigned long		uint_fast16_t;
typedef unsigned long		uint_fast32_t;
typedef unsigned long		uint_fast64_t;

#define INT64_C(x)		_AC(x, L)
#define UINT64_C(x)		_UL(x)

#else

typedef int			int_fast16_t;
typedef int			int_fast32_t;
typedef long long		int_fast64_t;

typedef unsigned int		uint_fast16_t;
typedef unsigned int		uint_fast32_t;
typedef unsigned long long	uint_fast64_t;

#define INT64_C(x)		_AC(x, LL)
#define UINT64_C(x)		_ULL(x)

#endif

#endif /* __NV_STDINT_H */
