// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SceneStateMachineGraph.h"

#ifdef SCENESTATEMACHINEGRAPH_SceneStateMachineGraph_generated_h
#error "SceneStateMachineGraph.generated.h already included, missing '#pragma once' in SceneStateMachineGraph.h"
#endif
#define SCENESTATEMACHINEGRAPH_SceneStateMachineGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateMachineGraph **************************************************
struct Z_Construct_UClass_USceneStateMachineGraph_Statics;
SCENESTATEMACHINEGRAPH_API UClass* Z_Construct_UClass_USceneStateMachineGraph_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraph_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateMachineGraph(); \
	friend struct ::Z_Construct_UClass_USceneStateMachineGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEMACHINEGRAPH_API UClass* ::Z_Construct_UClass_USceneStateMachineGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateMachineGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateMachineGraph"), Z_Construct_UClass_USceneStateMachineGraph_NoRegister) \
	DECLARE_SERIALIZER(USceneStateMachineGraph)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraph_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateMachineGraph(USceneStateMachineGraph&&) = delete; \
	USceneStateMachineGraph(const USceneStateMachineGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEMACHINEGRAPH_API, USceneStateMachineGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateMachineGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneStateMachineGraph) \
	SCENESTATEMACHINEGRAPH_API virtual ~USceneStateMachineGraph();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraph_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraph_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraph_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraph_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateMachineGraph;

// ********** End Class USceneStateMachineGraph ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_SceneStateMachineGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
