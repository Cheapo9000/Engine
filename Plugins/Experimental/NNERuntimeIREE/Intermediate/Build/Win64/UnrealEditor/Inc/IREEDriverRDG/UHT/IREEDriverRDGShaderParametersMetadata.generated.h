// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IREEDriverRDGShaderParametersMetadata.h"

#ifdef IREEDRIVERRDG_IREEDriverRDGShaderParametersMetadata_generated_h
#error "IREEDriverRDGShaderParametersMetadata.generated.h already included, missing '#pragma once' in IREEDriverRDGShaderParametersMetadata.h"
#endif
#define IREEDRIVERRDG_IREEDriverRDGShaderParametersMetadata_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIREEDriverRDGShaderParametersMetadataEntry ***********************
struct Z_Construct_UScriptStruct_FIREEDriverRDGShaderParametersMetadataEntry_Statics;
#define FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_IREEDriverRDG_Private_IREEDriverRDGShaderParametersMetadata_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIREEDriverRDGShaderParametersMetadataEntry_Statics; \
	IREEDRIVERRDG_API static class UScriptStruct* StaticStruct();


struct FIREEDriverRDGShaderParametersMetadataEntry;
// ********** End ScriptStruct FIREEDriverRDGShaderParametersMetadataEntry *************************

// ********** Begin ScriptStruct FIREEDriverRDGShaderParametersMetadata ****************************
struct Z_Construct_UScriptStruct_FIREEDriverRDGShaderParametersMetadata_Statics;
#define FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_IREEDriverRDG_Private_IREEDriverRDGShaderParametersMetadata_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIREEDriverRDGShaderParametersMetadata_Statics; \
	IREEDRIVERRDG_API static class UScriptStruct* StaticStruct();


struct FIREEDriverRDGShaderParametersMetadata;
// ********** End ScriptStruct FIREEDriverRDGShaderParametersMetadata ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNERuntimeIREE_Source_IREEDriverRDG_Private_IREEDriverRDGShaderParametersMetadata_h

// ********** Begin Enum FIREEDriverRDGUniformBufferBaseType ***************************************
#define FOREACH_ENUM_FIREEDRIVERRDGUNIFORMBUFFERBASETYPE(op) \
	op(FIREEDriverRDGUniformBufferBaseType::INVALID) \
	op(FIREEDriverRDGUniformBufferBaseType::PARAM) \
	op(FIREEDriverRDGUniformBufferBaseType::PARAM_ARRAY) \
	op(FIREEDriverRDGUniformBufferBaseType::BUFFER_UAV) 

enum class FIREEDriverRDGUniformBufferBaseType : uint8;
template<> struct TIsUEnumClass<FIREEDriverRDGUniformBufferBaseType> { enum { Value = true }; };
template<> IREEDRIVERRDG_NON_ATTRIBUTED_API UEnum* StaticEnum<FIREEDriverRDGUniformBufferBaseType>();
// ********** End Enum FIREEDriverRDGUniformBufferBaseType *****************************************

// ********** Begin Enum FIREEDriverRDGUniformBufferElementType ************************************
#define FOREACH_ENUM_FIREEDRIVERRDGUNIFORMBUFFERELEMENTTYPE(op) \
	op(FIREEDriverRDGUniformBufferElementType::NONE) \
	op(FIREEDriverRDGUniformBufferElementType::UINT32) 

enum class FIREEDriverRDGUniformBufferElementType : uint8;
template<> struct TIsUEnumClass<FIREEDriverRDGUniformBufferElementType> { enum { Value = true }; };
template<> IREEDRIVERRDG_NON_ATTRIBUTED_API UEnum* StaticEnum<FIREEDriverRDGUniformBufferElementType>();
// ********** End Enum FIREEDriverRDGUniformBufferElementType **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
