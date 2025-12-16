// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "STextureHistogram.h"

#ifdef TEXTUREGRAPHEDITOR_STextureHistogram_generated_h
#error "STextureHistogram.generated.h already included, missing '#pragma once' in STextureHistogram.h"
#endif
#define TEXTUREGRAPHEDITOR_STextureHistogram_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_STextureHistogram_h

// ********** Begin Enum ETextureHistogramStyle ****************************************************
#define FOREACH_ENUM_ETEXTUREHISTOGRAMSTYLE(op) \
	op(ETextureHistogramStyle::Bar) \
	op(ETextureHistogramStyle::Curve) 

enum class ETextureHistogramStyle : uint8;
template<> struct TIsUEnumClass<ETextureHistogramStyle> { enum { Value = true }; };
template<> TEXTUREGRAPHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureHistogramStyle>();
// ********** End Enum ETextureHistogramStyle ******************************************************

// ********** Begin Enum ETextureHistogramLayout ***************************************************
#define FOREACH_ENUM_ETEXTUREHISTOGRAMLAYOUT(op) \
	op(ETextureHistogramLayout::Combined) \
	op(ETextureHistogramLayout::Split) 

enum class ETextureHistogramLayout : uint8;
template<> struct TIsUEnumClass<ETextureHistogramLayout> { enum { Value = true }; };
template<> TEXTUREGRAPHEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETextureHistogramLayout>();
// ********** End Enum ETextureHistogramLayout *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
