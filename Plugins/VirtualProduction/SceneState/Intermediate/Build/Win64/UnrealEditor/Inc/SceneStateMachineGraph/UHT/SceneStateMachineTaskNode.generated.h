// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/SceneStateMachineTaskNode.h"

#ifdef SCENESTATEMACHINEGRAPH_SceneStateMachineTaskNode_generated_h
#error "SceneStateMachineTaskNode.generated.h already included, missing '#pragma once' in SceneStateMachineTaskNode.h"
#endif
#define SCENESTATEMACHINEGRAPH_SceneStateMachineTaskNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USceneStateMachineTaskNode ***********************************************
struct Z_Construct_UClass_USceneStateMachineTaskNode_Statics;
SCENESTATEMACHINEGRAPH_API UClass* Z_Construct_UClass_USceneStateMachineTaskNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTaskNode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneStateMachineTaskNode(); \
	friend struct ::Z_Construct_UClass_USceneStateMachineTaskNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCENESTATEMACHINEGRAPH_API UClass* ::Z_Construct_UClass_USceneStateMachineTaskNode_NoRegister(); \
public: \
	DECLARE_CLASS2(USceneStateMachineTaskNode, USceneStateMachineNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SceneStateMachineGraph"), Z_Construct_UClass_USceneStateMachineTaskNode_NoRegister) \
	DECLARE_SERIALIZER(USceneStateMachineTaskNode)


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTaskNode_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USceneStateMachineTaskNode(USceneStateMachineTaskNode&&) = delete; \
	USceneStateMachineTaskNode(const USceneStateMachineTaskNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCENESTATEMACHINEGRAPH_API, USceneStateMachineTaskNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneStateMachineTaskNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USceneStateMachineTaskNode) \
	SCENESTATEMACHINEGRAPH_API virtual ~USceneStateMachineTaskNode();


#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTaskNode_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTaskNode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTaskNode_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTaskNode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USceneStateMachineTaskNode;

// ********** End Class USceneStateMachineTaskNode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_SceneState_Source_SceneStateMachineGraph_Public_Nodes_SceneStateMachineTaskNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
