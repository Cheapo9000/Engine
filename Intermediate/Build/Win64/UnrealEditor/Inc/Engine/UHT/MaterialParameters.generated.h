// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialParameters.h"

#ifdef ENGINE_MaterialParameters_generated_h
#error "MaterialParameters.generated.h already included, missing '#pragma once' in MaterialParameters.h"
#endif
#define ENGINE_MaterialParameters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMaterialParameterInfo ********************************************
struct Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameters_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMaterialParameterInfo;
// ********** End ScriptStruct FMaterialParameterInfo **********************************************

// ********** Begin ScriptStruct FParameterChannelNames ********************************************
struct Z_Construct_UScriptStruct_FParameterChannelNames_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameters_h_280_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParameterChannelNames_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FParameterChannelNames;
// ********** End ScriptStruct FParameterChannelNames **********************************************

// ********** Begin ScriptStruct FStaticComponentMaskValue *****************************************
struct Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameters_h_306_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FStaticComponentMaskValue;
// ********** End ScriptStruct FStaticComponentMaskValue *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Materials_MaterialParameters_h

// ********** Begin Enum EMaterialParameterAssociation *********************************************
#define FOREACH_ENUM_EMATERIALPARAMETERASSOCIATION(op) \
	op(LayerParameter) \
	op(BlendParameter) \
	op(GlobalParameter) 

enum EMaterialParameterAssociation : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialParameterAssociation>();
// ********** End Enum EMaterialParameterAssociation ***********************************************

// ********** Begin Enum EMaterialParameterType ****************************************************
#define FOREACH_ENUM_EMATERIALPARAMETERTYPE(op) \
	op(EMaterialParameterType::Scalar) \
	op(EMaterialParameterType::Vector) \
	op(EMaterialParameterType::DoubleVector) \
	op(EMaterialParameterType::Texture) \
	op(EMaterialParameterType::TextureCollection) \
	op(EMaterialParameterType::Font) \
	op(EMaterialParameterType::RuntimeVirtualTexture) \
	op(EMaterialParameterType::SparseVolumeTexture) \
	op(EMaterialParameterType::StaticSwitch) \
	op(EMaterialParameterType::ParameterCollection) \
	op(EMaterialParameterType::NumRuntime) \
	op(EMaterialParameterType::StaticComponentMask) \
	op(EMaterialParameterType::Num) \
	op(EMaterialParameterType::None) 

enum class EMaterialParameterType : uint8;
template<> struct TIsUEnumClass<EMaterialParameterType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaterialParameterType>();
// ********** End Enum EMaterialParameterType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
