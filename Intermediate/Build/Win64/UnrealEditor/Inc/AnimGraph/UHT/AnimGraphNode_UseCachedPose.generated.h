// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_UseCachedPose.h"

#ifdef ANIMGRAPH_AnimGraphNode_UseCachedPose_generated_h
#error "AnimGraphNode_UseCachedPose.generated.h already included, missing '#pragma once' in AnimGraphNode_UseCachedPose.h"
#endif
#define ANIMGRAPH_AnimGraphNode_UseCachedPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_UseCachedPose *********************************************
struct Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_UseCachedPose_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_UseCachedPose(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_UseCachedPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_UseCachedPose, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_UseCachedPose_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_UseCachedPose)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_UseCachedPose(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_UseCachedPose) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_UseCachedPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_UseCachedPose); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_UseCachedPose(UAnimGraphNode_UseCachedPose&&) = delete; \
	UAnimGraphNode_UseCachedPose(const UAnimGraphNode_UseCachedPose&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_UseCachedPose();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_14_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_17_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_UseCachedPose;

// ********** End Class UAnimGraphNode_UseCachedPose ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
