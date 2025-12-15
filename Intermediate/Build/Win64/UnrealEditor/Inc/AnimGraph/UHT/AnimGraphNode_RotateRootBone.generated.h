// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_RotateRootBone.h"

#ifdef ANIMGRAPH_AnimGraphNode_RotateRootBone_generated_h
#error "AnimGraphNode_RotateRootBone.generated.h already included, missing '#pragma once' in AnimGraphNode_RotateRootBone.h"
#endif
#define ANIMGRAPH_AnimGraphNode_RotateRootBone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_RotateRootBone ********************************************
struct Z_Construct_UClass_UAnimGraphNode_RotateRootBone_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_RotateRootBone_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotateRootBone_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_RotateRootBone(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_RotateRootBone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_RotateRootBone_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_RotateRootBone, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_RotateRootBone_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_RotateRootBone)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotateRootBone_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_RotateRootBone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_RotateRootBone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_RotateRootBone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_RotateRootBone); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_RotateRootBone(UAnimGraphNode_RotateRootBone&&) = delete; \
	UAnimGraphNode_RotateRootBone(const UAnimGraphNode_RotateRootBone&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_RotateRootBone();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotateRootBone_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotateRootBone_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotateRootBone_h_15_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotateRootBone_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_RotateRootBone;

// ********** End Class UAnimGraphNode_RotateRootBone **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotateRootBone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
