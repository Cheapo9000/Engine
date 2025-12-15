// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VirtualTextureEnum.h"

#ifdef RENDERCORE_VirtualTextureEnum_generated_h
#error "VirtualTextureEnum.generated.h already included, missing '#pragma once' in VirtualTextureEnum.h"
#endif
#define RENDERCORE_VirtualTextureEnum_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RenderCore_Public_VirtualTextureEnum_h

// ********** Begin Enum EVTProducerPriority *******************************************************
#define FOREACH_ENUM_EVTPRODUCERPRIORITY(op) \
	op(EVTProducerPriority::Lowest) \
	op(EVTProducerPriority::Lower) \
	op(EVTProducerPriority::Low) \
	op(EVTProducerPriority::BelowNormal) \
	op(EVTProducerPriority::Normal) \
	op(EVTProducerPriority::AboveNormal) \
	op(EVTProducerPriority::High) \
	op(EVTProducerPriority::Highest) \
	op(EVTProducerPriority::Count) 

enum class EVTProducerPriority : uint8;
template<> struct TIsUEnumClass<EVTProducerPriority> { enum { Value = true }; };
template<> RENDERCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVTProducerPriority>();
// ********** End Enum EVTProducerPriority *********************************************************

// ********** Begin Enum EVTInvalidatePriority *****************************************************
#define FOREACH_ENUM_EVTINVALIDATEPRIORITY(op) \
	op(EVTInvalidatePriority::Normal) \
	op(EVTInvalidatePriority::High) \
	op(EVTInvalidatePriority::Count) 

enum class EVTInvalidatePriority : uint8;
template<> struct TIsUEnumClass<EVTInvalidatePriority> { enum { Value = true }; };
template<> RENDERCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVTInvalidatePriority>();
// ********** End Enum EVTInvalidatePriority *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
