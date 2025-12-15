// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavGraph/NavigationGraph.h"

#ifdef NAVIGATIONSYSTEM_NavigationGraph_generated_h
#error "NavigationGraph.generated.h already included, missing '#pragma once' in NavigationGraph.h"
#endif
#define NAVIGATIONSYSTEM_NavigationGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNavGraphEdge *****************************************************
struct Z_Construct_UScriptStruct_FNavGraphEdge_Statics;
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavGraphEdge_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


struct FNavGraphEdge;
// ********** End ScriptStruct FNavGraphEdge *******************************************************

// ********** Begin ScriptStruct FNavGraphNode *****************************************************
struct Z_Construct_UScriptStruct_FNavGraphNode_Statics;
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavGraphNode_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


struct FNavGraphNode;
// ********** End ScriptStruct FNavGraphNode *******************************************************

// ********** Begin Class ANavigationGraph *********************************************************
struct Z_Construct_UClass_ANavigationGraph_Statics;
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraph_NoRegister();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_63_INCLASS \
private: \
	static void StaticRegisterNativesANavigationGraph(); \
	friend struct ::Z_Construct_UClass_ANavigationGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NAVIGATIONSYSTEM_API UClass* ::Z_Construct_UClass_ANavigationGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(ANavigationGraph, ANavigationData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), Z_Construct_UClass_ANavigationGraph_NoRegister) \
	DECLARE_SERIALIZER(ANavigationGraph)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ANavigationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavigationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANavigationGraph(ANavigationGraph&&) = delete; \
	ANavigationGraph(const ANavigationGraph&) = delete; \
	NAVIGATIONSYSTEM_API virtual ~ANavigationGraph();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_60_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_63_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANavigationGraph;

// ********** End Class ANavigationGraph ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
