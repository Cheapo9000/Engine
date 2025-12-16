// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateTransitionGraph.h"

#ifdef SCENESTATETRANSITIONGRAPH_SceneStateTransitionGraph_generated_h
#error "SceneStateTransitionGraph.generated.h already included, missing '#pragma once' in SceneStateTransitionGraph.h"
#endif
#define SCENESTATETRANSITIONGRAPH_SceneStateTransitionGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateTransitionGraph ***********************************************
struct Z_Construct_UClass_USceneStateTransitionGraph_Statics;
SCENESTATETRANSITIONGRAPH_API UClass* Z_Construct_UClass_USceneStateTransitionGraph_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraph_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateTransitionGraph(); \
	friend struct ::Z_Construct_UClass_USceneStateTransitionGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATETRANSITIONGRAPH_API UClass* ::Z_Construct_UClass_USceneStateTransitionGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateTransitionGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateTransitionGraph"), Z_Construct_UClass_USceneStateTransitionGraph_NoRegister) \
	DECLARE_SERIALIZER(USceneStateTransitionGraph)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraph_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATETRANSITIONGRAPH_API USceneStateTransitionGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateTransitionGraph(USceneStateTransitionGraph&&) = delete; \
	USceneStateTransitionGraph(const USceneStateTransitionGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATETRANSITIONGRAPH_API, USceneStateTransitionGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateTransitionGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateTransitionGraph) \
	SCENESTATETRANSITIONGRAPH_API virtual ~USceneStateTransitionGraph();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraph_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraph_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraph_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraph_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateTransitionGraph;

// ********** End Class USceneStateTransitionGraph *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateTransitionGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
