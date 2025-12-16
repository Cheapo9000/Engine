// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "2D/Mask/MaskEnums.h"

#ifdef TEXTUREGRAPHENGINE_MaskEnums_generated_h
#error "MaskEnums.generated.h already included, missing '#pragma once' in MaskEnums.h"
#endif
#define TEXTUREGRAPHENGINE_MaskEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_2D_Mask_MaskEnums_h

// ********** Begin Enum MaskType ******************************************************************
#define FOREACH_ENUM_MASKTYPE(op) \
	op(MaskType::PaintMask) \
	op(MaskType::SolidMask) \
	op(MaskType::ImageMask) \
	op(MaskType::NoiseMask) \
	op(MaskType::PatternMask) \
	op(MaskType::NormalMask) \
	op(MaskType::CurvatureMask) \
	op(MaskType::PositionGradient) \
	op(MaskType::MasksTypeCount) 

enum class MaskType : uint8;
template<> struct TIsUEnumClass<MaskType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<MaskType>();
// ********** End Enum MaskType ********************************************************************

// ********** Begin Enum TransformType *************************************************************
#define FOREACH_ENUM_TRANSFORMTYPE(op) \
	op(TransformType::Circular) \
	op(TransformType::Projection) 

enum class TransformType : uint8;
template<> struct TIsUEnumClass<TransformType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<TransformType>();
// ********** End Enum TransformType ***************************************************************

// ********** Begin Enum MaskModifierType **********************************************************
#define FOREACH_ENUM_MASKMODIFIERTYPE(op) \
	op(BrightnessMaskModifier) \
	op(ClampMaskModifier) \
	op(InvertMaskModifier) \
	op(NormalizeMaskModifier) \
	op(GradientRemapMaskModifier) \
	op(PosterizeMaskModifier) \
	op(ScatterMaskModifier) \
	op(MaskModifiersTypeCount) 

enum MaskModifierType : int;
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<MaskModifierType>();
// ********** End Enum MaskModifierType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
