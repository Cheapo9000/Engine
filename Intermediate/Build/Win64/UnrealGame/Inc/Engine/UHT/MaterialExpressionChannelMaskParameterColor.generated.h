// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionChannelMaskParameterColor.h"

#ifdef ENGINE_MaterialExpressionChannelMaskParameterColor_generated_h
#error "MaterialExpressionChannelMaskParameterColor.generated.h already included, missing '#pragma once' in MaterialExpressionChannelMaskParameterColor.h"
#endif
#define ENGINE_MaterialExpressionChannelMaskParameterColor_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialExpressionChannelMaskParameterColor_h

// ********** Begin Enum EChannelMaskParameterColor ************************************************
#define FOREACH_ENUM_ECHANNELMASKPARAMETERCOLOR(op) \
	op(EChannelMaskParameterColor::Red) \
	op(EChannelMaskParameterColor::Green) \
	op(EChannelMaskParameterColor::Blue) \
	op(EChannelMaskParameterColor::Alpha) 

namespace EChannelMaskParameterColor { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EChannelMaskParameterColor::Type>();
// ********** End Enum EChannelMaskParameterColor **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
