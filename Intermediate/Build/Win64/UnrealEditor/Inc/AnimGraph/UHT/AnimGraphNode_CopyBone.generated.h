// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_CopyBone.h"

#ifdef ANIMGRAPH_AnimGraphNode_CopyBone_generated_h
#error "AnimGraphNode_CopyBone.generated.h already included, missing '#pragma once' in AnimGraphNode_CopyBone.h"
#endif
#define ANIMGRAPH_AnimGraphNode_CopyBone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_CopyBone **************************************************
struct Z_Construct_UClass_UAnimGraphNode_CopyBone_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CopyBone_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyBone_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_CopyBone(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_CopyBone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_CopyBone_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_CopyBone, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_CopyBone_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_CopyBone)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyBone_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_CopyBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_CopyBone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_CopyBone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_CopyBone); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_CopyBone(UAnimGraphNode_CopyBone&&) = delete; \
	UAnimGraphNode_CopyBone(const UAnimGraphNode_CopyBone&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_CopyBone();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyBone_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyBone_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyBone_h_15_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyBone_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_CopyBone;

// ********** End Class UAnimGraphNode_CopyBone ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyBone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
