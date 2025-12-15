// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_RotationMultiplier.h"

#ifdef ANIMGRAPH_AnimGraphNode_RotationMultiplier_generated_h
#error "AnimGraphNode_RotationMultiplier.generated.h already included, missing '#pragma once' in AnimGraphNode_RotationMultiplier.h"
#endif
#define ANIMGRAPH_AnimGraphNode_RotationMultiplier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_RotationMultiplier ****************************************
struct Z_Construct_UClass_UAnimGraphNode_RotationMultiplier_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_RotationMultiplier_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotationMultiplier_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_RotationMultiplier(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_RotationMultiplier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_RotationMultiplier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_RotationMultiplier, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_RotationMultiplier_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_RotationMultiplier)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotationMultiplier_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_RotationMultiplier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_RotationMultiplier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_RotationMultiplier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_RotationMultiplier); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_RotationMultiplier(UAnimGraphNode_RotationMultiplier&&) = delete; \
	UAnimGraphNode_RotationMultiplier(const UAnimGraphNode_RotationMultiplier&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_RotationMultiplier();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotationMultiplier_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotationMultiplier_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotationMultiplier_h_15_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotationMultiplier_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_RotationMultiplier;

// ********** End Class UAnimGraphNode_RotationMultiplier ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RotationMultiplier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
