// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionEditNodes.h"

#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionEditNodes_generated_h
#error "GeometryCollectionEditNodes.generated.h already included, missing '#pragma once' in GeometryCollectionEditNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionEditNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPruneInCollectionDataflowNode ************************************
struct Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FPruneInCollectionDataflowNode;
// ********** End ScriptStruct FPruneInCollectionDataflowNode **************************************

// ********** Begin ScriptStruct FSetVisibilityInCollectionDataflowNode ****************************
struct Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FSetVisibilityInCollectionDataflowNode;
// ********** End ScriptStruct FSetVisibilityInCollectionDataflowNode ******************************

// ********** Begin ScriptStruct FMergeInCollectionDataflowNode ************************************
struct Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FMergeInCollectionDataflowNode;
// ********** End ScriptStruct FMergeInCollectionDataflowNode **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionEditNodes_h

// ********** Begin Enum EVisibiltyOptionsEnum *****************************************************
#define FOREACH_ENUM_EVISIBILTYOPTIONSENUM(op) \
	op(EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Visible) \
	op(EVisibiltyOptionsEnum::Dataflow_VisibilityOptions_Invisible) \
	op(EVisibiltyOptionsEnum::Dataflow_Max) 

enum class EVisibiltyOptionsEnum : uint8;
template<> struct TIsUEnumClass<EVisibiltyOptionsEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EVisibiltyOptionsEnum>();
// ********** End Enum EVisibiltyOptionsEnum *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
