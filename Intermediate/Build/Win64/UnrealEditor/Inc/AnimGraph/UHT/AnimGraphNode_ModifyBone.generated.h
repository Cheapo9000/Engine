// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_ModifyBone.h"

#ifdef ANIMGRAPH_AnimGraphNode_ModifyBone_generated_h
#error "AnimGraphNode_ModifyBone.generated.h already included, missing '#pragma once' in AnimGraphNode_ModifyBone.h"
#endif
#define ANIMGRAPH_AnimGraphNode_ModifyBone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_ModifyBone ************************************************
struct Z_Construct_UClass_UAnimGraphNode_ModifyBone_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyBone_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyBone_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_ModifyBone(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_ModifyBone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_ModifyBone_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_ModifyBone, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_ModifyBone_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_ModifyBone)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyBone_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_ModifyBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_ModifyBone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_ModifyBone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_ModifyBone); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_ModifyBone(UAnimGraphNode_ModifyBone&&) = delete; \
	UAnimGraphNode_ModifyBone(const UAnimGraphNode_ModifyBone&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_ModifyBone();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyBone_h_16_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyBone_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyBone_h_19_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyBone_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_ModifyBone;

// ********** End Class UAnimGraphNode_ModifyBone **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyBone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
