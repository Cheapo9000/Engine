// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_TwoWayBlend.h"

#ifdef ANIMGRAPH_AnimGraphNode_TwoWayBlend_generated_h
#error "AnimGraphNode_TwoWayBlend.generated.h already included, missing '#pragma once' in AnimGraphNode_TwoWayBlend.h"
#endif
#define ANIMGRAPH_AnimGraphNode_TwoWayBlend_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_TwoWayBlend ***********************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoWayBlend_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_TwoWayBlend, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_TwoWayBlend_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TwoWayBlend_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoWayBlend_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_TwoWayBlend(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_TwoWayBlend_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_TwoWayBlend_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_TwoWayBlend, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_TwoWayBlend_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_TwoWayBlend) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoWayBlend_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoWayBlend_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_TwoWayBlend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_TwoWayBlend) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_TwoWayBlend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_TwoWayBlend); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_TwoWayBlend(UAnimGraphNode_TwoWayBlend&&) = delete; \
	UAnimGraphNode_TwoWayBlend(const UAnimGraphNode_TwoWayBlend&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_TwoWayBlend();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoWayBlend_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoWayBlend_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoWayBlend_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoWayBlend_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_TwoWayBlend;

// ********** End Class UAnimGraphNode_TwoWayBlend *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoWayBlend_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
