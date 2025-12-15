// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_BlendListBase.h"

#ifdef ANIMGRAPH_AnimGraphNode_BlendListBase_generated_h
#error "AnimGraphNode_BlendListBase.generated.h already included, missing '#pragma once' in AnimGraphNode_BlendListBase.h"
#endif
#define ANIMGRAPH_AnimGraphNode_BlendListBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_BlendListBase *********************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_BlendListBase, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_BlendListBase_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendListBase_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_BlendListBase(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_BlendListBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_BlendListBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_BlendListBase, UAnimGraphNode_Base, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_BlendListBase_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_BlendListBase) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_15_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_BlendListBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_BlendListBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_BlendListBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_BlendListBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_BlendListBase(UAnimGraphNode_BlendListBase&&) = delete; \
	UAnimGraphNode_BlendListBase(const UAnimGraphNode_BlendListBase&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_BlendListBase();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_15_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_BlendListBase;

// ********** End Class UAnimGraphNode_BlendListBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendListBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
