// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_TwoBoneIK.h"

#ifdef ANIMGRAPH_AnimGraphNode_TwoBoneIK_generated_h
#error "AnimGraphNode_TwoBoneIK.generated.h already included, missing '#pragma once' in AnimGraphNode_TwoBoneIK.h"
#endif
#define ANIMGRAPH_AnimGraphNode_TwoBoneIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_TwoBoneIK *************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_TwoBoneIK, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_TwoBoneIK(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_TwoBoneIK, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_TwoBoneIK) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_22_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_TwoBoneIK(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_TwoBoneIK) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_TwoBoneIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_TwoBoneIK); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_TwoBoneIK(UAnimGraphNode_TwoBoneIK&&) = delete; \
	UAnimGraphNode_TwoBoneIK(const UAnimGraphNode_TwoBoneIK&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_TwoBoneIK();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_19_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_22_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_TwoBoneIK;

// ********** End Class UAnimGraphNode_TwoBoneIK ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
