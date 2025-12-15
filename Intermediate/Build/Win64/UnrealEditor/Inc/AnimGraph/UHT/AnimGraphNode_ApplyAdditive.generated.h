// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_ApplyAdditive.h"

#ifdef ANIMGRAPH_AnimGraphNode_ApplyAdditive_generated_h
#error "AnimGraphNode_ApplyAdditive.generated.h already included, missing '#pragma once' in AnimGraphNode_ApplyAdditive.h"
#endif
#define ANIMGRAPH_AnimGraphNode_ApplyAdditive_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_ApplyAdditive *********************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_ApplyAdditive, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_ApplyAdditive_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_ApplyAdditive_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_ApplyAdditive(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_ApplyAdditive_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_ApplyAdditive_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_ApplyAdditive, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_ApplyAdditive_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_ApplyAdditive) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_ApplyAdditive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_ApplyAdditive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_ApplyAdditive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_ApplyAdditive); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_ApplyAdditive(UAnimGraphNode_ApplyAdditive&&) = delete; \
	UAnimGraphNode_ApplyAdditive(const UAnimGraphNode_ApplyAdditive&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_ApplyAdditive();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_ApplyAdditive;

// ********** End Class UAnimGraphNode_ApplyAdditive ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ApplyAdditive_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
