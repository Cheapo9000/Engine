// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasicReplicationGraph.h"

#ifdef REPLICATIONGRAPH_BasicReplicationGraph_generated_h
#error "BasicReplicationGraph.generated.h already included, missing '#pragma once' in BasicReplicationGraph.h"
#endif
#define REPLICATIONGRAPH_BasicReplicationGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConnectionAlwaysRelevantNodePair *********************************
struct Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics;
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConnectionAlwaysRelevantNodePair_Statics; \
	REPLICATIONGRAPH_API static class UScriptStruct* StaticStruct();


struct FConnectionAlwaysRelevantNodePair;
// ********** End ScriptStruct FConnectionAlwaysRelevantNodePair ***********************************

// ********** Begin Class UBasicReplicationGraph ***************************************************
struct Z_Construct_UClass_UBasicReplicationGraph_Statics;
REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UBasicReplicationGraph_NoRegister();

#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicReplicationGraph(); \
	friend struct ::Z_Construct_UClass_UBasicReplicationGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REPLICATIONGRAPH_API UClass* ::Z_Construct_UClass_UBasicReplicationGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UBasicReplicationGraph, UReplicationGraph, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ReplicationGraph"), Z_Construct_UClass_UBasicReplicationGraph_NoRegister) \
	DECLARE_SERIALIZER(UBasicReplicationGraph)


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBasicReplicationGraph(UBasicReplicationGraph&&) = delete; \
	UBasicReplicationGraph(const UBasicReplicationGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicReplicationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicReplicationGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBasicReplicationGraph) \
	NO_API virtual ~UBasicReplicationGraph();


#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_38_PROLOG
#define FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBasicReplicationGraph;

// ********** End Class UBasicReplicationGraph *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ReplicationGraph_Source_Public_BasicReplicationGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
