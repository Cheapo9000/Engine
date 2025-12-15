// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_SkeletalControlBase.h"

#ifdef ANIMGRAPH_AnimGraphNode_SkeletalControlBase_generated_h
#error "AnimGraphNode_SkeletalControlBase.generated.h already included, missing '#pragma once' in AnimGraphNode_SkeletalControlBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_SkeletalControlBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_SkeletalControlBase ***************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_SkeletalControlBase, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_SkeletalControlBase(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_SkeletalControlBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_SkeletalControlBase) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_27_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_SkeletalControlBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_SkeletalControlBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_SkeletalControlBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_SkeletalControlBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_SkeletalControlBase(UAnimGraphNode_SkeletalControlBase&&) = delete; \
	UAnimGraphNode_SkeletalControlBase(const UAnimGraphNode_SkeletalControlBase&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_SkeletalControlBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_24_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_27_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_SkeletalControlBase;

// ********** End Class UAnimGraphNode_SkeletalControlBase *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
