// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/SceneStateMachineStateNode.h"

#ifdef SCENESTATEMACHINEGRAPH_SceneStateMachineStateNode_generated_h
#error "SceneStateMachineStateNode.generated.h already included, missing '#pragma once' in SceneStateMachineStateNode.h"
#endif
#define SCENESTATEMACHINEGRAPH_SceneStateMachineStateNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateMachineStateNode **********************************************
struct Z_Construct_UClass_USceneStateMachineStateNode_Statics;
SCENESTATEMACHINEGRAPH_API UClass* Z_Construct_UClass_USceneStateMachineStateNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineStateNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateMachineStateNode(); \
	friend struct ::Z_Construct_UClass_USceneStateMachineStateNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEMACHINEGRAPH_API UClass* ::Z_Construct_UClass_USceneStateMachineStateNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateMachineStateNode, USceneStateMachineNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateMachineGraph"), Z_Construct_UClass_USceneStateMachineStateNode_NoRegister) \
	DECLARE_SERIALIZER(USceneStateMachineStateNode) \
	virtual UObject* _getUObject() const override { return const_cast<USceneStateMachineStateNode*>(this); }


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineStateNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateMachineStateNode(USceneStateMachineStateNode&&) = delete; \
	USceneStateMachineStateNode(const USceneStateMachineStateNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEMACHINEGRAPH_API, USceneStateMachineStateNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateMachineStateNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneStateMachineStateNode) \
	SCENESTATEMACHINEGRAPH_API virtual ~USceneStateMachineStateNode();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineStateNode_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineStateNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineStateNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineStateNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateMachineStateNode;

// ********** End Class USceneStateMachineStateNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineStateNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
