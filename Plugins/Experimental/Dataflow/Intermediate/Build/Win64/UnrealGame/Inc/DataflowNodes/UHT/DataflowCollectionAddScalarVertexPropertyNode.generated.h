// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowCollectionAddScalarVertexPropertyNode.h"

#ifdef DATAFLOWNODES_DataflowCollectionAddScalarVertexPropertyNode_generated_h
#error "DataflowCollectionAddScalarVertexPropertyNode.generated.h already included, missing '#pragma once' in DataflowCollectionAddScalarVertexPropertyNode.h"
#endif
#define DATAFLOWNODES_DataflowCollectionAddScalarVertexPropertyNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FScalarVertexPropertyGroup ****************************************
struct Z_Construct_UScriptStruct_FScalarVertexPropertyGroup_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAddScalarVertexPropertyNode_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FScalarVertexPropertyGroup_Statics; \
	DATAFLOWNODES_API static class UScriptStruct* StaticStruct();


struct FScalarVertexPropertyGroup;
// ********** End ScriptStruct FScalarVertexPropertyGroup ******************************************

// ********** Begin ScriptStruct FDataflowVertexAttributeEditableNode ******************************
struct Z_Construct_UScriptStruct_FDataflowVertexAttributeEditableNode_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAddScalarVertexPropertyNode_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowVertexAttributeEditableNode_Statics; \
	DATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FDataflowVertexAttributeEditableNode;
// ********** End ScriptStruct FDataflowVertexAttributeEditableNode ********************************

// ********** Begin ScriptStruct FDataflowCollectionAddScalarVertexPropertyNode ********************
struct Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAddScalarVertexPropertyNode_h_117_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics; \
	DATAFLOWNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowVertexAttributeEditableNode Super;


struct FDataflowCollectionAddScalarVertexPropertyNode;
// ********** End ScriptStruct FDataflowCollectionAddScalarVertexPropertyNode **********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAddScalarVertexPropertyNode_h

// ********** Begin Enum EDataflowWeightMapOverrideType ********************************************
#define FOREACH_ENUM_EDATAFLOWWEIGHTMAPOVERRIDETYPE(op) \
	op(EDataflowWeightMapOverrideType::ReplaceAll) \
	op(EDataflowWeightMapOverrideType::AddDifference) \
	op(EDataflowWeightMapOverrideType::ReplaceChanged) 

enum class EDataflowWeightMapOverrideType : uint8;
template<> struct TIsUEnumClass<EDataflowWeightMapOverrideType> { enum { Value = true }; };
template<> DATAFLOWNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EDataflowWeightMapOverrideType>();
// ********** End Enum EDataflowWeightMapOverrideType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
