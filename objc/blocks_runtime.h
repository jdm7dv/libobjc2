#if defined(__clang__) && !defined(__OBJC_RUNTIME_INTERNAL__)
#pragma clang system_header
#endif

/*
 * Blocks Runtime
 */

#include "Availability.h"
#ifdef __cplusplus
#define BLOCKS_EXPORT extern "C"
#else
#define BLOCKS_EXPORT extern 
#endif

PUBLIC BLOCKS_EXPORT void *_Block_copy(const void *);
PUBLIC BLOCKS_EXPORT void _Block_release(const void *);
PUBLIC BLOCKS_EXPORT const char *block_getType_np(const void *b) OBJC_NONPORTABLE;
#ifdef __OBJC__
PUBLIC BLOCKS_EXPORT _Bool _Block_has_signature(id);
PUBLIC BLOCKS_EXPORT const char * _Block_signature(id);
#else
PUBLIC BLOCKS_EXPORT _Bool _Block_has_signature(void *);
PUBLIC BLOCKS_EXPORT const char * _Block_signature(void *);
#endif

#define Block_copy(x) ((__typeof(x))_Block_copy((const void *)(x)))
#define Block_release(x) _Block_release((const void *)(x))
