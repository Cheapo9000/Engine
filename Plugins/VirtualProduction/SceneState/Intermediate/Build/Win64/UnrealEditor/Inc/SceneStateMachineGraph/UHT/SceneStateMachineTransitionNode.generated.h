// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/SceneStateMachineTransitionNode.h"

#ifdef SCENESTATEMACHINEGRAPH_SceneStateMachineTransitionNode_generated_h
#error "SceneStateMachineTransitionNode.generated.h already included, missing '#pragma once' in SceneStateMachineTransitionNode.h"
#endif
#define SCENESTATEMACHINEGRAPH_SceneStateMachineTransitionNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateMachineTransitionNode *****************************************
struct Z_Construct_UClass_USceneStateMachineTransitionNode_Statics;
SCENESTATEMACHINEGRAPH_API UClass* Z_Construct_UClass_USceneStateMachineTransitionNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTransitionNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateMachineTransitionNode(); \
	friend struct ::Z_Construct_UClass_USceneStateMachineTransitionNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEMACHINEGRAPH_API UClass* ::Z_Construct_UClass_USceneStateMachineTransitionNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateMachineTransitionNode, USceneStateMachineNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateMachineGraph"), Z_Construct_UClass_USceneStateMachineTransitionNode_NoRegister) \
	DECLARE_SERIALIZER(USceneStateMachineTransitionNode) \
	virtual UObject* _getUObject() const override { return const_cast<USceneStateMachineTransitionNode*>(this); }


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTransitionNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateMachineTransitionNode(USceneStateMachineTransitionNode&&) = delete; \
	USceneStateMachineTransitionNode(const USceneStateMachineTransitionNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEMACHINEGRAPH_API, USceneStateMachineTransitionNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateMachineTransitionNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneStateMachineTransitionNode) \
	SCENESTATEMACHINEGRAPH_API virtual ~USceneStateMachineTransitionNode();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTransitionNode_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTransitionNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTransitionNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTransitionNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateMachineTransitionNode;

// ********** End Class USceneStateMachineTransitionNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTransitionNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
