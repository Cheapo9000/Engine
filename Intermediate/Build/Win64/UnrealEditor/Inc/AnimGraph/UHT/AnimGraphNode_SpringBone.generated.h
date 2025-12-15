// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_SpringBone.h"

#ifdef ANIMGRAPH_AnimGraphNode_SpringBone_generated_h
#error "AnimGraphNode_SpringBone.generated.h already included, missing '#pragma once' in AnimGraphNode_SpringBone.h"
#endif
#define ANIMGRAPH_AnimGraphNode_SpringBone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_SpringBone ************************************************
struct Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SpringBone_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SpringBone_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SpringBone(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_SpringBone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_SpringBone_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_SpringBone, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_SpringBone_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_SpringBone)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SpringBone_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SpringBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SpringBone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SpringBone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SpringBone); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_SpringBone(UAnimGraphNode_SpringBone&&) = delete; \
	UAnimGraphNode_SpringBone(const UAnimGraphNode_SpringBone&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_SpringBone();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SpringBone_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SpringBone_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SpringBone_h_15_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SpringBone_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_SpringBone;

// ********** End Class UAnimGraphNode_SpringBone **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SpringBone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
