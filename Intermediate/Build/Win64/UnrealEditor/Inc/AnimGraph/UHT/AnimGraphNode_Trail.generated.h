// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_Trail.h"

#ifdef ANIMGRAPH_AnimGraphNode_Trail_generated_h
#error "AnimGraphNode_Trail.generated.h already included, missing '#pragma once' in AnimGraphNode_Trail.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Trail_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_Trail *****************************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Trail_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_Trail, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_Trail_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Trail_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Trail_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Trail(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_Trail_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_Trail_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_Trail, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_Trail_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_Trail) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Trail_h_15_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Trail_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Trail(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Trail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Trail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Trail); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_Trail(UAnimGraphNode_Trail&&) = delete; \
	UAnimGraphNode_Trail(const UAnimGraphNode_Trail&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_Trail();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Trail_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Trail_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Trail_h_15_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Trail_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_Trail;

// ********** End Class UAnimGraphNode_Trail *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Trail_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
