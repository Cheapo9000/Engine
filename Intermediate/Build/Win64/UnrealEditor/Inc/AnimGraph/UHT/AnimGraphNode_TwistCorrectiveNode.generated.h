// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_TwistCorrectiveNode.h"

#ifdef ANIMGRAPH_AnimGraphNode_TwistCorrectiveNode_generated_h
#error "AnimGraphNode_TwistCorrectiveNode.generated.h already included, missing '#pragma once' in AnimGraphNode_TwistCorrectiveNode.h"
#endif
#define ANIMGRAPH_AnimGraphNode_TwistCorrectiveNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_TwistCorrectiveNode ***************************************
struct Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_TwistCorrectiveNode(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_TwistCorrectiveNode, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_TwistCorrectiveNode)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_TwistCorrectiveNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_TwistCorrectiveNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_TwistCorrectiveNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_TwistCorrectiveNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_TwistCorrectiveNode(UAnimGraphNode_TwistCorrectiveNode&&) = delete; \
	UAnimGraphNode_TwistCorrectiveNode(const UAnimGraphNode_TwistCorrectiveNode&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_TwistCorrectiveNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_18_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_21_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_TwistCorrectiveNode;

// ********** End Class UAnimGraphNode_TwistCorrectiveNode *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
