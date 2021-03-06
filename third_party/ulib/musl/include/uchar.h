#ifndef SYSROOT_UCHAR_H_
#define SYSROOT_UCHAR_H_

#ifdef __cplusplus
extern "C" {
#else
typedef unsigned short char16_t;
typedef unsigned char32_t;
#endif

#define __NEED_mbstate_t
#define __NEED_size_t

#include <bits/alltypes.h>
#include <features.h>

size_t c16rtomb(char* __restrict, char16_t, mbstate_t* __restrict);
size_t mbrtoc16(char16_t* __restrict, const char* __restrict, size_t, mbstate_t* __restrict);

size_t c32rtomb(char* __restrict, char32_t, mbstate_t* __restrict);
size_t mbrtoc32(char32_t* __restrict, const char* __restrict, size_t, mbstate_t* __restrict);

#ifdef __cplusplus
}
#endif

#endif // SYSROOT_UCHAR_H_
