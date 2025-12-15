// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_HandIKRetargeting.h"

#ifdef ANIMGRAPH_AnimGraphNode_HandIKRetargeting_generated_h
#error "AnimGraphNode_HandIKRetargeting.generated.h already included, missing '#pragma once' in AnimGraphNode_HandIKRetargeting.h"
#endif
#define ANIMGRAPH_AnimGraphNode_HandIKRetargeting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_HandIKRetargeting *****************************************
struct Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_HandIKRetargeting(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_HandIKRetargeting, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_HandIKRetargeting)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_HandIKRetargeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_HandIKRetargeting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_HandIKRetargeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_HandIKRetargeting); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_HandIKRetargeting(UAnimGraphNode_HandIKRetargeting&&) = delete; \
	UAnimGraphNode_HandIKRetargeting(const UAnimGraphNode_HandIKRetargeting&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_HandIKRetargeting();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_HandIKRetargeting;

// ********** End Class UAnimGraphNode_HandIKRetargeting *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
