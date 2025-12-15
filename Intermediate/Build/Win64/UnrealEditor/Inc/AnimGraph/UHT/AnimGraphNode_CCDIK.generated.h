// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_CCDIK.h"

#ifdef ANIMGRAPH_AnimGraphNode_CCDIK_generated_h
#error "AnimGraphNode_CCDIK.generated.h already included, missing '#pragma once' in AnimGraphNode_CCDIK.h"
#endif
#define ANIMGRAPH_AnimGraphNode_CCDIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_CCDIK *****************************************************
struct Z_Construct_UClass_UAnimGraphNode_CCDIK_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CCDIK_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CCDIK_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_CCDIK(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_CCDIK_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_CCDIK_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_CCDIK, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_CCDIK_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_CCDIK)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CCDIK_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_CCDIK(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_CCDIK) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_CCDIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_CCDIK); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_CCDIK(UAnimGraphNode_CCDIK&&) = delete; \
	UAnimGraphNode_CCDIK(const UAnimGraphNode_CCDIK&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_CCDIK();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CCDIK_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CCDIK_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CCDIK_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CCDIK_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_CCDIK;

// ********** End Class UAnimGraphNode_CCDIK *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CCDIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
