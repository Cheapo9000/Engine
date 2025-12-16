// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "2D/TextureType.h"

#ifdef TEXTUREGRAPHENGINE_TextureType_generated_h
#error "TextureType.generated.h already included, missing '#pragma once' in TextureType.h"
#endif
#define TEXTUREGRAPHENGINE_TextureType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_2D_TextureType_h

// ********** Begin Enum TextureType ***************************************************************
#define FOREACH_ENUM_TEXTURETYPE(op) \
	op(TextureType::Diffuse) \
	op(TextureType::Specular) \
	op(TextureType::Albedo) \
	op(TextureType::Metalness) \
	op(TextureType::Normal) \
	op(TextureType::Displacement) \
	op(TextureType::Opacity) \
	op(TextureType::Roughness) \
	op(TextureType::AO) \
	op(TextureType::Curvature) \
	op(TextureType::Preview) \
	op(TextureType::Count) \
	op(TextureType::Unknown) 

enum class TextureType;
template<> struct TIsUEnumClass<TextureType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<TextureType>();
// ********** End Enum TextureType *****************************************************************

// ********** Begin Enum LayerBlendMode ************************************************************
#define FOREACH_ENUM_LAYERBLENDMODE(op) \
	op(LayerBlendMode::Normal) \
	op(LayerBlendMode::Add) \
	op(LayerBlendMode::Subtract) \
	op(LayerBlendMode::Multiply) \
	op(LayerBlendMode::Divide) \
	op(LayerBlendMode::Difference) \
	op(LayerBlendMode::Max) \
	op(LayerBlendMode::Min) \
	op(LayerBlendMode::Step) \
	op(LayerBlendMode::Overlay) \
	op(LayerBlendMode::Distort) 

enum class LayerBlendMode : uint8;
template<> struct TIsUEnumClass<LayerBlendMode> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<LayerBlendMode>();
// ********** End Enum LayerBlendMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
