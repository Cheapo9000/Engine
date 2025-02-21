// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMDefs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DYNAMICMATERIAL_DMDefs_generated_h
#error "DMDefs.generated.h already included, missing '#pragma once' in DMDefs.h"
#endif
#define DYNAMICMATERIAL_DMDefs_generated_h

#define FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMDefs_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMMaterialStageConnectorChannel_Statics; \
	DYNAMICMATERIAL_API static class UScriptStruct* StaticStruct();


template<> DYNAMICMATERIAL_API UScriptStruct* StaticStruct<struct FDMMaterialStageConnectorChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_DynamicMaterial_Source_DynamicMaterial_Public_DMDefs_h


#define FOREACH_ENUM_EDMMATERIALPROPERTYTYPE(op) \
	op(EDMMaterialPropertyType::None) \
	op(EDMMaterialPropertyType::BaseColor) \
	op(EDMMaterialPropertyType::EmissiveColor) \
	op(EDMMaterialPropertyType::Opacity) \
	op(EDMMaterialPropertyType::OpacityMask) \
	op(EDMMaterialPropertyType::Roughness) \
	op(EDMMaterialPropertyType::Specular) \
	op(EDMMaterialPropertyType::Metallic) \
	op(EDMMaterialPropertyType::Normal) \
	op(EDMMaterialPropertyType::PixelDepthOffset) \
	op(EDMMaterialPropertyType::WorldPositionOffset) \
	op(EDMMaterialPropertyType::AmbientOcclusion) \
	op(EDMMaterialPropertyType::Anisotropy) \
	op(EDMMaterialPropertyType::Refraction) \
	op(EDMMaterialPropertyType::Tangent) \
	op(EDMMaterialPropertyType::Custom1) \
	op(EDMMaterialPropertyType::Custom2) \
	op(EDMMaterialPropertyType::Custom3) \
	op(EDMMaterialPropertyType::Custom4) \
	op(EDMMaterialPropertyType::Displacement) \
	op(EDMMaterialPropertyType::SubsurfaceColor) \
	op(EDMMaterialPropertyType::SurfaceThickness) \
	op(EDMMaterialPropertyType::Any) 

enum class EDMMaterialPropertyType : uint8;
template<> struct TIsUEnumClass<EDMMaterialPropertyType> { enum { Value = true }; };
template<> DYNAMICMATERIAL_API UEnum* StaticEnum<EDMMaterialPropertyType>();

#define FOREACH_ENUM_EDMVALUETYPE(op) \
	op(EDMValueType::VT_None) \
	op(EDMValueType::VT_Bool) \
	op(EDMValueType::VT_Float1) \
	op(EDMValueType::VT_Float2) \
	op(EDMValueType::VT_Float3_RPY) \
	op(EDMValueType::VT_Float3_RGB) \
	op(EDMValueType::VT_Float3_XYZ) \
	op(EDMValueType::VT_Float4_RGBA) \
	op(EDMValueType::VT_Float_Any) \
	op(EDMValueType::VT_Texture) \
	op(EDMValueType::VT_ColorAtlas) \
	op(EDMValueType::VT_Unused) 

enum class EDMValueType : uint8;
template<> struct TIsUEnumClass<EDMValueType> { enum { Value = true }; };
template<> DYNAMICMATERIAL_API UEnum* StaticEnum<EDMValueType>();

#define FOREACH_ENUM_EDMUPDATETYPE(op) \
	op(EDMUpdateType::Value) \
	op(EDMUpdateType::Structure) \
	op(EDMUpdateType::AllowParentUpdate) 

enum class EDMUpdateType : uint8;
template<> struct TIsUEnumClass<EDMUpdateType> { enum { Value = true }; };
template<> DYNAMICMATERIAL_API UEnum* StaticEnum<EDMUpdateType>();

#define FOREACH_ENUM_EDMMATERIALSHADINGMODEL(op) \
	op(EDMMaterialShadingModel::Unlit) \
	op(EDMMaterialShadingModel::DefaultLit) 

enum class EDMMaterialShadingModel : uint8;
template<> struct TIsUEnumClass<EDMMaterialShadingModel> { enum { Value = true }; };
template<> DYNAMICMATERIAL_API UEnum* StaticEnum<EDMMaterialShadingModel>();

#define FOREACH_ENUM_EDMUVSOURCE(op) \
	op(EDMUVSource::Texture) \
	op(EDMUVSource::ScreenPosition) \
	op(EDMUVSource::WorldPosition) 

enum class EDMUVSource : uint8;
template<> struct TIsUEnumClass<EDMUVSource> { enum { Value = true }; };
template<> DYNAMICMATERIAL_API UEnum* StaticEnum<EDMUVSource>();

#define FOREACH_ENUM_EDMLOCATIONTYPE(op) \
	op(EDMLocationType::World) \
	op(EDMLocationType::Actor) 

enum class EDMLocationType : uint8;
template<> struct TIsUEnumClass<EDMLocationType> { enum { Value = true }; };
template<> DYNAMICMATERIAL_API UEnum* StaticEnum<EDMLocationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
