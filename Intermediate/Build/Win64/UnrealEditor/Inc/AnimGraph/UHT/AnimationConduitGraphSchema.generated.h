// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationConduitGraphSchema.h"

#ifdef ANIMGRAPH_AnimationConduitGraphSchema_generated_h
#error "AnimationConduitGraphSchema.generated.h already included, missing '#pragma once' in AnimationConduitGraphSchema.h"
#endif
#define ANIMGRAPH_AnimationConduitGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationConduitGraphSchema *********************************************
struct Z_Construct_UClass_UAnimationConduitGraphSchema_Statics;
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationConduitGraphSchema_NoRegister();

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationConduitGraphSchema(); \
	friend struct ::Z_Construct_UClass_UAnimationConduitGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMGRAPH_API UClass* ::Z_Construct_UClass_UAnimationConduitGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationConduitGraphSchema, UEdGraphSchema_K2, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), Z_Construct_UClass_UAnimationConduitGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UAnimationConduitGraphSchema)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimationConduitGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationConduitGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimationConduitGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationConduitGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationConduitGraphSchema(UAnimationConduitGraphSchema&&) = delete; \
	UAnimationConduitGraphSchema(const UAnimationConduitGraphSchema&) = delete; \
	ANIMGRAPH_API virtual ~UAnimationConduitGraphSchema();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_14_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationConduitGraphSchema;

// ********** End Class UAnimationConduitGraphSchema ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationConduitGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
