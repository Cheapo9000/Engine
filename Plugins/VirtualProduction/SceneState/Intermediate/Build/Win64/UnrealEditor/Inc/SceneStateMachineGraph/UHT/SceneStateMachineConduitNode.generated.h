// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/SceneStateMachineConduitNode.h"

#ifdef SCENESTATEMACHINEGRAPH_SceneStateMachineConduitNode_generated_h
#error "SceneStateMachineConduitNode.generated.h already included, missing '#pragma once' in SceneStateMachineConduitNode.h"
#endif
#define SCENESTATEMACHINEGRAPH_SceneStateMachineConduitNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateMachineConduitNode ********************************************
struct Z_Construct_UClass_USceneStateMachineConduitNode_Statics;
SCENESTATEMACHINEGRAPH_API UClass* Z_Construct_UClass_USceneStateMachineConduitNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineConduitNode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateMachineConduitNode(); \
	friend struct ::Z_Construct_UClass_USceneStateMachineConduitNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEMACHINEGRAPH_API UClass* ::Z_Construct_UClass_USceneStateMachineConduitNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateMachineConduitNode, USceneStateMachineNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateMachineGraph"), Z_Construct_UClass_USceneStateMachineConduitNode_NoRegister) \
	DECLARE_SERIALIZER(USceneStateMachineConduitNode) \
	virtual UObject* _getUObject() const override { return const_cast<USceneStateMachineConduitNode*>(this); }


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineConduitNode_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateMachineConduitNode(USceneStateMachineConduitNode&&) = delete; \
	USceneStateMachineConduitNode(const USceneStateMachineConduitNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEMACHINEGRAPH_API, USceneStateMachineConduitNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateMachineConduitNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneStateMachineConduitNode) \
	SCENESTATEMACHINEGRAPH_API virtual ~USceneStateMachineConduitNode();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineConduitNode_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineConduitNode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineConduitNode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineConduitNode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateMachineConduitNode;

// ********** End Class USceneStateMachineConduitNode **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineConduitNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
