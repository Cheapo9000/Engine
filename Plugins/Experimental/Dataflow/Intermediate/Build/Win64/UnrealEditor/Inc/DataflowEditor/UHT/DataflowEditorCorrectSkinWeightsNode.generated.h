// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataflowEditorTools/DataflowEditorCorrectSkinWeightsNode.h"

#ifdef DATAFLOWEDITOR_DataflowEditorCorrectSkinWeightsNode_generated_h
#error "DataflowEditorCorrectSkinWeightsNode.generated.h already included, missing '#pragma once' in DataflowEditorCorrectSkinWeightsNode.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorCorrectSkinWeightsNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowCorrectSkinWeightsNode ***********************************
struct Z_Construct_UScriptStruct_FDataflowCorrectSkinWeightsNode_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorCorrectSkinWeightsNode_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowCorrectSkinWeightsNode_Statics; \
	DATAFLOWEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FDataflowCorrectSkinWeightsNode;
// ********** End ScriptStruct FDataflowCorrectSkinWeightsNode *************************************

// ********** Begin ScriptStruct FDataflowSetSkinningSelectionNode *********************************
struct Z_Construct_UScriptStruct_FDataflowSetSkinningSelectionNode_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorCorrectSkinWeightsNode_h_123_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowSetSkinningSelectionNode_Statics; \
	DATAFLOWEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FDataflowSetSkinningSelectionNode;
// ********** End ScriptStruct FDataflowSetSkinningSelectionNode ***********************************

// ********** Begin ScriptStruct FDataflowGetSkinningSelectionNode *********************************
struct Z_Construct_UScriptStruct_FDataflowGetSkinningSelectionNode_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorCorrectSkinWeightsNode_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowGetSkinningSelectionNode_Statics; \
	DATAFLOWEDITOR_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FDataflowGetSkinningSelectionNode;
// ********** End ScriptStruct FDataflowGetSkinningSelectionNode ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorCorrectSkinWeightsNode_h

// ********** Begin Enum ESkinWeightsCorrectionType ************************************************
#define FOREACH_ENUM_ESKINWEIGHTSCORRECTIONTYPE(op) \
	op(ESkinWeightsCorrectionType::Relax) \
	op(ESkinWeightsCorrectionType::Prune) \
	op(ESkinWeightsCorrectionType::Hammer) \
	op(ESkinWeightsCorrectionType::Clamp) \
	op(ESkinWeightsCorrectionType::Normalize) 

enum class ESkinWeightsCorrectionType : uint8;
template<> struct TIsUEnumClass<ESkinWeightsCorrectionType> { enum { Value = true }; };
template<> DATAFLOWEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkinWeightsCorrectionType>();
// ********** End Enum ESkinWeightsCorrectionType **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
