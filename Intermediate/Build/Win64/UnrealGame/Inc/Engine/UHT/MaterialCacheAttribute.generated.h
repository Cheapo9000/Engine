// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialCache/MaterialCacheAttribute.h"

#ifdef ENGINE_MaterialCacheAttribute_generated_h
#error "MaterialCacheAttribute.generated.h already included, missing '#pragma once' in MaterialCacheAttribute.h"
#endif
#define ENGINE_MaterialCacheAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialCacheLayer ***********************************************
struct Z_Construct_UScriptStruct_FMaterialCacheLayer_Statics;
#define FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheAttribute_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialCacheLayer_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialCacheLayer;
// ********** End ScriptStruct FMaterialCacheLayer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Internal_MaterialCache_MaterialCacheAttribute_h

// ********** Begin Enum EMaterialCacheAttribute ***************************************************
#define FOREACH_ENUM_EMATERIALCACHEATTRIBUTE(op) \
	op(EMaterialCacheAttribute::BaseColor) \
	op(EMaterialCacheAttribute::Normal) \
	op(EMaterialCacheAttribute::Roughness) \
	op(EMaterialCacheAttribute::Specular) \
	op(EMaterialCacheAttribute::Metallic) \
	op(EMaterialCacheAttribute::Opacity) \
	op(EMaterialCacheAttribute::WorldPosition) \
	op(EMaterialCacheAttribute::WorldHeight) \
	op(EMaterialCacheAttribute::Mask) \
	op(EMaterialCacheAttribute::Float) 

enum class EMaterialCacheAttribute : uint8;
template<> struct TIsUEnumClass<EMaterialCacheAttribute> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialCacheAttribute>();
// ********** End Enum EMaterialCacheAttribute *****************************************************

// ********** Begin Enum EMaterialCacheAttributeIdentity *******************************************
#define FOREACH_ENUM_EMATERIALCACHEATTRIBUTEIDENTITY(op) \
	op(EMaterialCacheAttributeIdentity::None) \
	op(EMaterialCacheAttributeIdentity::BaseColorRoughness) \
	op(EMaterialCacheAttributeIdentity::NormalSpecularOpacity) \
	op(EMaterialCacheAttributeIdentity::MetallicWorldPositionOffset) 

enum class EMaterialCacheAttributeIdentity : uint8;
template<> struct TIsUEnumClass<EMaterialCacheAttributeIdentity> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialCacheAttributeIdentity>();
// ********** End Enum EMaterialCacheAttributeIdentity *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
