// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_AnimDynamics.h"

#ifdef ANIMGRAPH_AnimGraphNode_AnimDynamics_generated_h
#error "AnimGraphNode_AnimDynamics.generated.h already included, missing '#pragma once' in AnimGraphNode_AnimDynamics.h"
#endif
#define ANIMGRAPH_AnimGraphNode_AnimDynamics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_AnimDynamics **********************************************
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_AnimDynamics, ANIMGRAPH_API)


struct Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AnimDynamics_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_AnimDynamics(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_AnimDynamics_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_AnimDynamics_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_AnimDynamics, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_AnimDynamics_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_AnimDynamics) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_37_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_AnimDynamics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_AnimDynamics(UAnimGraphNode_AnimDynamics&&) = delete; \
	UAnimGraphNode_AnimDynamics(const UAnimGraphNode_AnimDynamics&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_AnimDynamics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_AnimDynamics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_AnimDynamics) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_AnimDynamics();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_34_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_AnimDynamics;

// ********** End Class UAnimGraphNode_AnimDynamics ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AnimDynamics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
