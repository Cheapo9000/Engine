// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_Inertialization.h"

#ifdef ANIMGRAPH_AnimGraphNode_Inertialization_generated_h
#error "AnimGraphNode_Inertialization.generated.h already included, missing '#pragma once' in AnimGraphNode_Inertialization.h"
#endif
#define ANIMGRAPH_AnimGraphNode_Inertialization_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_Inertialization *******************************************
struct Z_Construct_UClass_UAnimGraphNode_Inertialization_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Inertialization_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Inertialization_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_Inertialization(); \
	friend struct ::Z_Construct_UClass_UAnimGraphNode_Inertialization_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimGraphNode_Inertialization_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_Inertialization, UAnimGraphNode_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimGraphNode_Inertialization_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_Inertialization)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Inertialization_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_Inertialization(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_Inertialization(UAnimGraphNode_Inertialization&&) = delete; \
	UAnimGraphNode_Inertialization(const UAnimGraphNode_Inertialization&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_Inertialization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_Inertialization); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_Inertialization) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_Inertialization();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Inertialization_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Inertialization_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Inertialization_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Inertialization_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_Inertialization;

// ********** End Class UAnimGraphNode_Inertialization *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Inertialization_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
