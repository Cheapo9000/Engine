// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationBlendStackGraphSchema.h"

#ifdef BLENDSTACKEDITOR_AnimationBlendStackGraphSchema_generated_h
#error "AnimationBlendStackGraphSchema.generated.h already included, missing '#pragma once' in AnimationBlendStackGraphSchema.h"
#endif
#define BLENDSTACKEDITOR_AnimationBlendStackGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationBlendStackGraphSchema ******************************************
struct Z_Construct_UClass_UAnimationBlendStackGraphSchema_Statics;
BLENDSTACKEDITOR_API UClass* Z_Construct_UClass_UAnimationBlendStackGraphSchema_NoRegister();

#define FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraphSchema_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationBlendStackGraphSchema(); \
	friend struct ::Z_Construct_UClass_UAnimationBlendStackGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLENDSTACKEDITOR_API UClass* ::Z_Construct_UClass_UAnimationBlendStackGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationBlendStackGraphSchema, UAnimationGraphSchema, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlendStackEditor"), Z_Construct_UClass_UAnimationBlendStackGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UAnimationBlendStackGraphSchema)


#define FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraphSchema_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLENDSTACKEDITOR_API UAnimationBlendStackGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationBlendStackGraphSchema(UAnimationBlendStackGraphSchema&&) = delete; \
	UAnimationBlendStackGraphSchema(const UAnimationBlendStackGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLENDSTACKEDITOR_API, UAnimationBlendStackGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBlendStackGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBlendStackGraphSchema) \
	BLENDSTACKEDITOR_API virtual ~UAnimationBlendStackGraphSchema();


#define FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraphSchema_h_8_PROLOG
#define FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraphSchema_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraphSchema_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraphSchema_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationBlendStackGraphSchema;

// ********** End Class UAnimationBlendStackGraphSchema ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_BlendStack_Source_Editor_Public_AnimationBlendStackGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
