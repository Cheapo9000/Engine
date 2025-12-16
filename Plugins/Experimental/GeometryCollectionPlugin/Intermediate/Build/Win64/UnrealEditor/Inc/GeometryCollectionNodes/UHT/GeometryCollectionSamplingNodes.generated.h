// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionSamplingNodes.h"

#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionSamplingNodes_generated_h
#error "GeometryCollectionSamplingNodes.generated.h already included, missing '#pragma once' in GeometryCollectionSamplingNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionSamplingNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFilterPointSetWithMeshDataflowNode *******************************
struct Z_Construct_UScriptStruct_FFilterPointSetWithMeshDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSamplingNodes_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFilterPointSetWithMeshDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FFilterPointSetWithMeshDataflowNode;
// ********** End ScriptStruct FFilterPointSetWithMeshDataflowNode *********************************

// ********** Begin ScriptStruct FUniformPointSamplingDataflowNode *********************************
struct Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSamplingNodes_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FUniformPointSamplingDataflowNode;
// ********** End ScriptStruct FUniformPointSamplingDataflowNode ***********************************

// ********** Begin ScriptStruct FNonUniformPointSamplingDataflowNode ******************************
struct Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSamplingNodes_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNonUniformPointSamplingDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FNonUniformPointSamplingDataflowNode;
// ********** End ScriptStruct FNonUniformPointSamplingDataflowNode ********************************

// ********** Begin ScriptStruct FVertexWeightedPointSamplingDataflowNode **************************
struct Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSamplingNodes_h_246_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FVertexWeightedPointSamplingDataflowNode;
// ********** End ScriptStruct FVertexWeightedPointSamplingDataflowNode ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSamplingNodes_h

// ********** Begin Enum EFilterPointSetWithMeshDataflowMethodFlags ********************************
#define FOREACH_ENUM_EFILTERPOINTSETWITHMESHDATAFLOWMETHODFLAGS(op) \
	op(EFilterPointSetWithMeshDataflowMethodFlags::None) \
	op(EFilterPointSetWithMeshDataflowMethodFlags::Winding) \
	op(EFilterPointSetWithMeshDataflowMethodFlags::MinDistance) \
	op(EFilterPointSetWithMeshDataflowMethodFlags::MaxDistance) 

enum class EFilterPointSetWithMeshDataflowMethodFlags : uint8;
template<> struct TIsUEnumClass<EFilterPointSetWithMeshDataflowMethodFlags> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EFilterPointSetWithMeshDataflowMethodFlags>();
// ********** End Enum EFilterPointSetWithMeshDataflowMethodFlags **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
