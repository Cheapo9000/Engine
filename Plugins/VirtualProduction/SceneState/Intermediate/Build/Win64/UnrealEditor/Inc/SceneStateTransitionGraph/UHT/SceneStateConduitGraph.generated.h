// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateConduitGraph.h"

#ifdef SCENESTATETRANSITIONGRAPH_SceneStateConduitGraph_generated_h
#error "SceneStateConduitGraph.generated.h already included, missing '#pragma once' in SceneStateConduitGraph.h"
#endif
#define SCENESTATETRANSITIONGRAPH_SceneStateConduitGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateConduitGraph **************************************************
struct Z_Construct_UClass_USceneStateConduitGraph_Statics;
SCENESTATETRANSITIONGRAPH_API UClass* Z_Construct_UClass_USceneStateConduitGraph_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraph_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateConduitGraph(); \
	friend struct ::Z_Construct_UClass_USceneStateConduitGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATETRANSITIONGRAPH_API UClass* ::Z_Construct_UClass_USceneStateConduitGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateConduitGraph, USceneStateTransitionGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateTransitionGraph"), Z_Construct_UClass_USceneStateConduitGraph_NoRegister) \
	DECLARE_SERIALIZER(USceneStateConduitGraph)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraph_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATETRANSITIONGRAPH_API USceneStateConduitGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateConduitGraph(USceneStateConduitGraph&&) = delete; \
	USceneStateConduitGraph(const USceneStateConduitGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATETRANSITIONGRAPH_API, USceneStateConduitGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateConduitGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateConduitGraph) \
	SCENESTATETRANSITIONGRAPH_API virtual ~USceneStateConduitGraph();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraph_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraph_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraph_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraph_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateConduitGraph;

// ********** End Class USceneStateConduitGraph ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateTransitionGraph_Public_SceneStateConduitGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
