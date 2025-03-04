// Copyright Epic Games, Inc. All Rights Reserved.

/*================================================================================
	IntelICXPlatform.h: Setup for any Intel ICX-using platform
==================================================================================*/

#pragma once

#if !defined(__cpp_if_constexpr)
	#error "Compiler is expected to support if constexpr"
#endif

#if !defined(__cpp_fold_expressions)
	#error "Compiler is expected to support fold expressions"
#endif

#define PLATFORM_RETURN_ADDRESS()			__builtin_return_address(0)
#define PLATFORM_RETURN_ADDRESS_POINTER()	__builtin_frame_address(0)

#define UE_LIFETIMEBOUND [[clang::lifetimebound]]

// Intel ICX supports the following GNU attributes to let us describe allocation functions.
// `gnu::malloc` maps to the `noalias` function return on the caller in the LLVM IR.
// `gnu::alloc_size` maps to the `allocsize` function attribute on the caller in the LLVM IR.
// `gnu::alloc_align` will cause any memory operations in the callee to have the specified alignment in the LLVM IR.
// We use a selector macro trick to map up to 2 inputs to the correct macros.
#define UE_ALLOCATION_FUNCTION_0() [[gnu::malloc]]
#define UE_ALLOCATION_FUNCTION_1(SIZE) [[gnu::malloc, gnu::alloc_size(SIZE)]]

// Note: we cannot use gnu::alloc_align(ALIGN) here yet, because the DEFAULT_ALIGNMENT argument is 0, which is not
//       a power of two, and Clang will complain about uses of a function with a default alignment that is not a
//       power of two.
#define UE_ALLOCATION_FUNCTION_2(SIZE, ALIGN) [[gnu::malloc, gnu::alloc_size(SIZE)]]
#define UE_ALLOCATION_FUNCTION_X(x, SIZE, ALIGN, FUNC, ...) FUNC
#define UE_ALLOCATION_FUNCTION(...) UE_ALLOCATION_FUNCTION_X(,##__VA_ARGS__, UE_ALLOCATION_FUNCTION_2(__VA_ARGS__), UE_ALLOCATION_FUNCTION_1(__VA_ARGS__), UE_ALLOCATION_FUNCTION_0(__VA_ARGS__)) 

// Intel ICX does not support constexpr for __builtin_FILE and __builtin_LINE
// Check with (__has_constexpr_builtin(__builtin_FILE) && __has_constexpr_builtin(__builtin_LINE)
#define PLATFORM_COMPILER_SUPPORTS_CONSTEXPR_BUILTIN_FILE_AND_LINE 0

#define PLATFORM_COMPILER_SUPPORTS_BUILTIN_BITCAST 0
