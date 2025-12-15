// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_PoseBlendNode.h"

#ifdef ANIMGRAPH_AnimGraphNode_PoseBlendNode_generated_h
#error "AnimGraphNode_PoseBlendNode.generated.h already included, missing '#pragma once' in AnimGraphNode_PoseBlendNode.h"
#endif
#define ANIMGRAPH_AnimGraphNode_PoseBlendNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_PoseBlendNode *********************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_PoseBlendNode, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_PoseBlendNode(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_PoseBlendNode, UAnimGraphNode_PoseHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_PoseBlendNode) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_PoseBlendNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_PoseBlendNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_PoseBlendNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_PoseBlendNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_PoseBlendNode(UAnimGraphNode_PoseBlendNode&&) = delete; \
	UAnimGraphNode_PoseBlendNode(const UAnimGraphNode_PoseBlendNode&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_PoseBlendNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_13_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_16_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_PoseBlendNode;

// ********** End Class UAnimGraphNode_PoseBlendNode ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
