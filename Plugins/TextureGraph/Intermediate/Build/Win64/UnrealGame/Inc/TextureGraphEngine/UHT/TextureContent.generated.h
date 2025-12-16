// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "2D/TextureContent.h"

#ifdef TEXTUREGRAPHENGINE_TextureContent_generated_h
#error "TextureContent.generated.h already included, missing '#pragma once' in TextureContent.h"
#endif
#define TEXTUREGRAPHENGINE_TextureContent_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_2D_TextureContent_h

// ********** Begin Enum TextureContent ************************************************************
#define FOREACH_ENUM_TEXTURECONTENT(op) \
	op(TextureContent::Asset) \
	op(TextureContent::Diffuse) \
	op(TextureContent::Specular) \
	op(TextureContent::Gloss) \
	op(TextureContent::AO) \
	op(TextureContent::Normal) \
	op(TextureContent::Displacement) \
	op(TextureContent::Preview) \
	op(TextureContent::Json) \
	op(TextureContent::Cavity) \
	op(TextureContent::Roughness) \
	op(TextureContent::Metalness) \
	op(TextureContent::Albedo) \
	op(TextureContent::Opacity) \
	op(TextureContent::Curvature) \
	op(TextureContent::Mask) \
	op(TextureContent::PaintMask) \
	op(TextureContent::SolidMask) \
	op(TextureContent::ImageMask) \
	op(TextureContent::NoiseMask) \
	op(TextureContent::PatternMask) \
	op(TextureContent::NormalMask) \
	op(TextureContent::CurvatureMask) \
	op(TextureContent::PositionGradient) \
	op(TextureContent::CircularModifier) \
	op(TextureContent::TransformModifier) \
	op(TextureContent::BrightnessMaskModifier) \
	op(TextureContent::ClampMaskModifier) \
	op(TextureContent::InvertMaskModifier) \
	op(TextureContent::NormalizeMaskModifier) \
	op(TextureContent::GradientRemapMaskModifier) \
	op(TextureContent::PosterizeMaskModifier) \
	op(TextureContent::ScatterMaskModifier) \
	op(TextureContent::CustomSource) \
	op(TextureContent::None) \
	op(TextureContent::MaterialIDMask) \
	op(TextureContent::GroupMaskComponent) \
	op(TextureContent::ProjectionModifier) \
	op(TextureContent::SmartMaterial) \
	op(TextureContent::MaterialID) \
	op(TextureContent::Count) 

enum class TextureContent : uint8;
template<> struct TIsUEnumClass<TextureContent> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<TextureContent>();
// ********** End Enum TextureContent **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
