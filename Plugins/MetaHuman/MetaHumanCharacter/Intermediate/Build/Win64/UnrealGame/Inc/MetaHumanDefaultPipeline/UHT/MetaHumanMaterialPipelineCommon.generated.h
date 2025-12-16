// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/MetaHumanMaterialPipelineCommon.h"

#ifdef METAHUMANDEFAULTPIPELINE_MetaHumanMaterialPipelineCommon_generated_h
#error "MetaHumanMaterialPipelineCommon.generated.h already included, missing '#pragma once' in MetaHumanMaterialPipelineCommon.h"
#endif
#define METAHUMANDEFAULTPIPELINE_MetaHumanMaterialPipelineCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMetaHumanMaterialParameter ***************************************
struct Z_Construct_UScriptStruct_FMetaHumanMaterialParameter_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanMaterialPipelineCommon_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanMaterialParameter_Statics; \
	METAHUMANDEFAULTPIPELINE_API static class UScriptStruct* StaticStruct();


struct FMetaHumanMaterialParameter;
// ********** End ScriptStruct FMetaHumanMaterialParameter *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanCharacter_Source_MetaHumanDefaultPipeline_Public_Item_MetaHumanMaterialPipelineCommon_h

// ********** Begin Enum EMetaHumanRuntimeMaterialParameterType ************************************
#define FOREACH_ENUM_EMETAHUMANRUNTIMEMATERIALPARAMETERTYPE(op) \
	op(EMetaHumanRuntimeMaterialParameterType::Toggle) \
	op(EMetaHumanRuntimeMaterialParameterType::Scalar) \
	op(EMetaHumanRuntimeMaterialParameterType::Vector) \
	op(EMetaHumanRuntimeMaterialParameterType::DoubleVector) \
	op(EMetaHumanRuntimeMaterialParameterType::Texture) \
	op(EMetaHumanRuntimeMaterialParameterType::TextureCollection) \
	op(EMetaHumanRuntimeMaterialParameterType::Font) \
	op(EMetaHumanRuntimeMaterialParameterType::RuntimeVirtualTexture) \
	op(EMetaHumanRuntimeMaterialParameterType::SparseVolumeTexture) 

enum class EMetaHumanRuntimeMaterialParameterType;
template<> struct TIsUEnumClass<EMetaHumanRuntimeMaterialParameterType> { enum { Value = true }; };
template<> METAHUMANDEFAULTPIPELINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanRuntimeMaterialParameterType>();
// ********** End Enum EMetaHumanRuntimeMaterialParameterType **************************************

// ********** Begin Enum EMetaHumanRuntimeMaterialParameterSlotTarget ******************************
#define FOREACH_ENUM_EMETAHUMANRUNTIMEMATERIALPARAMETERSLOTTARGET(op) \
	op(EMetaHumanRuntimeMaterialParameterSlotTarget::SlotNames) \
	op(EMetaHumanRuntimeMaterialParameterSlotTarget::SlotIndices) 

enum class EMetaHumanRuntimeMaterialParameterSlotTarget;
template<> struct TIsUEnumClass<EMetaHumanRuntimeMaterialParameterSlotTarget> { enum { Value = true }; };
template<> METAHUMANDEFAULTPIPELINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanRuntimeMaterialParameterSlotTarget>();
// ********** End Enum EMetaHumanRuntimeMaterialParameterSlotTarget ********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
