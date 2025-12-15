// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_SplineIK.h"

#ifdef ANIMGRAPH_AnimGraphNode_SplineIK_generated_h
#error "AnimGraphNode_SplineIK.generated.h already included, missing '#pragma once' in AnimGraphNode_SplineIK.h"
#endif
#define ANIMGRAPH_AnimGraphNode_SplineIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_SplineIK **************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SplineIK_h_13_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_SplineIK, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_SplineIK_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SplineIK_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SplineIK_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SplineIK(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_SplineIK_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_SplineIK_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_SplineIK, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_SplineIK_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_SplineIK) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SplineIK_h_13_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SplineIK_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SplineIK(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SplineIK) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SplineIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SplineIK); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_SplineIK(UAnimGraphNode_SplineIK&&) = delete; \
	UAnimGraphNode_SplineIK(const UAnimGraphNode_SplineIK&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_SplineIK();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SplineIK_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SplineIK_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SplineIK_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SplineIK_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_SplineIK;

// ********** End Class UAnimGraphNode_SplineIK ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SplineIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
