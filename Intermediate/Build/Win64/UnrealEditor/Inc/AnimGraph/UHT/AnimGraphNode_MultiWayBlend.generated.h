// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_MultiWayBlend.h"

#ifdef ANIMGRAPH_AnimGraphNode_MultiWayBlend_generated_h
#error "AnimGraphNode_MultiWayBlend.generated.h already included, missing '#pragma once' in AnimGraphNode_MultiWayBlend.h"
#endif
#define ANIMGRAPH_AnimGraphNode_MultiWayBlend_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_MultiWayBlend *********************************************
struct Z_Construct_UClass_UAnimGraphNode_MultiWayBlend_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_MultiWayBlend_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_MultiWayBlend_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_MultiWayBlend(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_MultiWayBlend_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_MultiWayBlend_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_MultiWayBlend, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_MultiWayBlend_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_MultiWayBlend)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_MultiWayBlend_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_MultiWayBlend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_MultiWayBlend) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_MultiWayBlend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_MultiWayBlend); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_MultiWayBlend(UAnimGraphNode_MultiWayBlend&&) = delete; \
	UAnimGraphNode_MultiWayBlend(const UAnimGraphNode_MultiWayBlend&) = delete; \
	ANIMGRAPH_API virtual ~UAnimGraphNode_MultiWayBlend();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_MultiWayBlend_h_8_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_MultiWayBlend_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_MultiWayBlend_h_11_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_MultiWayBlend_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_MultiWayBlend;

// ********** End Class UAnimGraphNode_MultiWayBlend ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_MultiWayBlend_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
