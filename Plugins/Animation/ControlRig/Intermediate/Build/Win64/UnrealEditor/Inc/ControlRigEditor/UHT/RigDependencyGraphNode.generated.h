// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigDependencyGraph/RigDependencyGraphNode.h"

#ifdef CONTROLRIGEDITOR_RigDependencyGraphNode_generated_h
#error "RigDependencyGraphNode.generated.h already included, missing '#pragma once' in RigDependencyGraphNode.h"
#endif
#define CONTROLRIGEDITOR_RigDependencyGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigDependencyGraphNode **************************************************
struct Z_Construct_UClass_URigDependencyGraphNode_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_URigDependencyGraphNode_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphNode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesURigDependencyGraphNode(); \
	friend struct ::Z_Construct_UClass_URigDependencyGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_URigDependencyGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigDependencyGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_URigDependencyGraphNode_NoRegister) \
	DECLARE_SERIALIZER(URigDependencyGraphNode)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphNode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigDependencyGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigDependencyGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigDependencyGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigDependencyGraphNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigDependencyGraphNode(URigDependencyGraphNode&&) = delete; \
	URigDependencyGraphNode(const URigDependencyGraphNode&) = delete; \
	NO_API virtual ~URigDependencyGraphNode();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphNode_h_21_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphNode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphNode_h_24_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphNode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigDependencyGraphNode;

// ********** End Class URigDependencyGraphNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
