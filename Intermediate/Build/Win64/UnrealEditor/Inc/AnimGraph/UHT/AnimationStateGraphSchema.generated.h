// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationStateGraphSchema.h"

#ifdef ANIMGRAPH_AnimationStateGraphSchema_generated_h
#error "AnimationStateGraphSchema.generated.h already included, missing '#pragma once' in AnimationStateGraphSchema.h"
#endif
#define ANIMGRAPH_AnimationStateGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationStateGraphSchema ***********************************************
struct Z_Construct_UClass_UAnimationStateGraphSchema_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateGraphSchema_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationStateGraphSchema(); \
	friend struct ::Z_Construct_UClass_UAnimationStateGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimationStateGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationStateGraphSchema, UAnimationGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimationStateGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UAnimationStateGraphSchema)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationStateGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationStateGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationStateGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationStateGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationStateGraphSchema(UAnimationStateGraphSchema&&) = delete; \
	UAnimationStateGraphSchema(const UAnimationStateGraphSchema&) = delete; \
	ANIMGRAPH_API virtual ~UAnimationStateGraphSchema();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationStateGraphSchema;

// ********** End Class UAnimationStateGraphSchema *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
