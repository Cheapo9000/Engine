// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationCustomTransitionSchema.h"

#ifdef ANIMGRAPH_AnimationCustomTransitionSchema_generated_h
#error "AnimationCustomTransitionSchema.generated.h already included, missing '#pragma once' in AnimationCustomTransitionSchema.h"
#endif
#define ANIMGRAPH_AnimationCustomTransitionSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationCustomTransitionSchema *****************************************
struct Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationCustomTransitionSchema_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionSchema_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationCustomTransitionSchema(); \
	friend struct ::Z_Construct_UClass_UAnimationCustomTransitionSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimationCustomTransitionSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationCustomTransitionSchema, UAnimationGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimationCustomTransitionSchema_NoRegister) \
	DECLARE_SERIALIZER(UAnimationCustomTransitionSchema)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionSchema_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationCustomTransitionSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCustomTransitionSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationCustomTransitionSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCustomTransitionSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationCustomTransitionSchema(UAnimationCustomTransitionSchema&&) = delete; \
	UAnimationCustomTransitionSchema(const UAnimationCustomTransitionSchema&) = delete; \
	ANIMGRAPH_API virtual ~UAnimationCustomTransitionSchema();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionSchema_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionSchema_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionSchema_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionSchema_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationCustomTransitionSchema;

// ********** End Class UAnimationCustomTransitionSchema *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
