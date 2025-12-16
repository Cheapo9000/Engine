// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/GeometryCollectionClusteringNodes.h"

#ifdef GEOMETRYCOLLECTIONNODES_GeometryCollectionClusteringNodes_generated_h
#error "GeometryCollectionClusteringNodes.generated.h already included, missing '#pragma once' in GeometryCollectionClusteringNodes.h"
#endif
#define GEOMETRYCOLLECTIONNODES_GeometryCollectionClusteringNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAutoClusterDataflowNode ******************************************
struct Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutoClusterDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FAutoClusterDataflowNode;
// ********** End ScriptStruct FAutoClusterDataflowNode ********************************************

// ********** Begin ScriptStruct FClusterFlattenDataflowNode ***************************************
struct Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClusterFlattenDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FClusterFlattenDataflowNode;
// ********** End ScriptStruct FClusterFlattenDataflowNode *****************************************

// ********** Begin ScriptStruct FClusterUnclusterDataflowNode *************************************
struct Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_184_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClusterUnclusterDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FClusterUnclusterDataflowNode;
// ********** End ScriptStruct FClusterUnclusterDataflowNode ***************************************

// ********** Begin ScriptStruct FClusterDataflowNode **********************************************
struct Z_Construct_UScriptStruct_FClusterDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_215_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClusterDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FClusterDataflowNode;
// ********** End ScriptStruct FClusterDataflowNode ************************************************

// ********** Begin ScriptStruct FClusterMergeToNeighborsDataflowNode ******************************
struct Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_255_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClusterMergeToNeighborsDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FClusterMergeToNeighborsDataflowNode;
// ********** End ScriptStruct FClusterMergeToNeighborsDataflowNode ********************************

// ********** Begin ScriptStruct FClusterMergeDataflowNode *****************************************
struct Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_307_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClusterMergeDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FClusterMergeDataflowNode;
// ********** End ScriptStruct FClusterMergeDataflowNode *******************************************

// ********** Begin ScriptStruct FClusterIsolatedRootsDataflowNode *********************************
struct Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_339_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClusterIsolatedRootsDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FClusterIsolatedRootsDataflowNode;
// ********** End ScriptStruct FClusterIsolatedRootsDataflowNode ***********************************

// ********** Begin ScriptStruct FClusterMagnetDataflowNode ****************************************
struct Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics;
#define FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h_366_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClusterMagnetDataflowNode_Statics; \
	GEOMETRYCOLLECTIONNODES_API static class UScriptStruct* StaticStruct(); \
	typedef FDataflowNode Super;


struct FClusterMagnetDataflowNode;
// ********** End ScriptStruct FClusterMagnetDataflowNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionClusteringNodes_h

// ********** Begin Enum EClusterSizeMethodEnum ****************************************************
#define FOREACH_ENUM_ECLUSTERSIZEMETHODENUM(op) \
	op(EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber) \
	op(EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByFractionOfInput) \
	op(EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_BySize) \
	op(EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByGrid) \
	op(EClusterSizeMethodEnum::Dataflow_Max) 

enum class EClusterSizeMethodEnum : uint8;
template<> struct TIsUEnumClass<EClusterSizeMethodEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EClusterSizeMethodEnum>();
// ********** End Enum EClusterSizeMethodEnum ******************************************************

// ********** Begin Enum EClusterNeighborSelectionMethodEnum ***************************************
#define FOREACH_ENUM_ECLUSTERNEIGHBORSELECTIONMETHODENUM(op) \
	op(EClusterNeighborSelectionMethodEnum::Dataflow_ClusterNeighborSelectionMethod_LargestNeighbor) \
	op(EClusterNeighborSelectionMethodEnum::Dataflow_ClusterNeighborSelectionMethod_NearestCenter) 

enum class EClusterNeighborSelectionMethodEnum : uint8;
template<> struct TIsUEnumClass<EClusterNeighborSelectionMethodEnum> { enum { Value = true }; };
template<> GEOMETRYCOLLECTIONNODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EClusterNeighborSelectionMethodEnum>();
// ********** End Enum EClusterNeighborSelectionMethodEnum *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
