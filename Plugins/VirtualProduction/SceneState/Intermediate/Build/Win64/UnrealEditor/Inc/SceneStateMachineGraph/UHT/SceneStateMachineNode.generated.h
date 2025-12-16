// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/SceneStateMachineNode.h"

#ifdef SCENESTATEMACHINEGRAPH_SceneStateMachineNode_generated_h
#error "SceneStateMachineNode.generated.h already included, missing '#pragma once' in SceneStateMachineNode.h"
#endif
#define SCENESTATEMACHINEGRAPH_SceneStateMachineNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateMachineNode ***************************************************
struct Z_Construct_UClass_USceneStateMachineNode_Statics;
SCENESTATEMACHINEGRAPH_API UClass* Z_Construct_UClass_USceneStateMachineNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateMachineNode(); \
	friend struct ::Z_Construct_UClass_USceneStateMachineNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEMACHINEGRAPH_API UClass* ::Z_Construct_UClass_USceneStateMachineNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateMachineNode, UEdGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SceneStateMachineGraph"), Z_Construct_UClass_USceneStateMachineNode_NoRegister) \
	DECLARE_SERIALIZER(USceneStateMachineNode)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCENESTATEMACHINEGRAPH_API USceneStateMachineNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateMachineNode(USceneStateMachineNode&&) = delete; \
	USceneStateMachineNode(const USceneStateMachineNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEMACHINEGRAPH_API, USceneStateMachineNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateMachineNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneStateMachineNode) \
	SCENESTATEMACHINEGRAPH_API virtual ~USceneStateMachineNode();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineNode_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateMachineNode;

// ********** End Class USceneStateMachineNode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
