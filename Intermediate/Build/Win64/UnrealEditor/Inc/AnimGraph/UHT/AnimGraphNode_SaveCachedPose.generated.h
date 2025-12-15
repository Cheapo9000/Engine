// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_SaveCachedPose.h"

#ifdef ANIMGRAPH_AnimGraphNode_SaveCachedPose_generated_h
#error "AnimGraphNode_SaveCachedPose.generated.h already included, missing '#pragma once' in AnimGraphNode_SaveCachedPose.h"
#endif
#define ANIMGRAPH_AnimGraphNode_SaveCachedPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_SaveCachedPose ********************************************
struct Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SaveCachedPose(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_SaveCachedPose, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_SaveCachedPose)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SaveCachedPose(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SaveCachedPose) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SaveCachedPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SaveCachedPose); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_SaveCachedPose(UAnimGraphNode_SaveCachedPose&&) = delete; \
	UAnimGraphNode_SaveCachedPose(const UAnimGraphNode_SaveCachedPose&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_SaveCachedPose();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_16_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_19_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_SaveCachedPose;

// ********** End Class UAnimGraphNode_SaveCachedPose **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
