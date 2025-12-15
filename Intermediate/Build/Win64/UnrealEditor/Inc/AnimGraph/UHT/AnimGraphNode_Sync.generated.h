// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_Sync.h"

#ifdef ANIMGRAPH_AnimGraphNode_Sync_generated_h
#error "AnimGraphNode_Sync.generated.h already included, missing '#pragma once' in AnimGraphNode_Sync.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Sync_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_Sync ******************************************************
struct Z_Construct_UClass_UAnimGraphNode_Sync_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Sync_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_Sync_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Sync(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_Sync_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_Sync_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_Sync, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_Sync_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_Sync)


#define FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_Sync_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Sync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_Sync(UAnimGraphNode_Sync&&) = delete; \
	UAnimGraphNode_Sync(const UAnimGraphNode_Sync&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Sync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Sync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Sync) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_Sync();


#define FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_Sync_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_Sync_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_Sync_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_Sync_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_Sync;

// ********** End Class UAnimGraphNode_Sync ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_Sync_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
