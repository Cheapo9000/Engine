// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationToolMenuContext.h"

#ifdef ANIMATIONEDITOR_AnimationToolMenuContext_generated_h
#error "AnimationToolMenuContext.generated.h already included, missing '#pragma once' in AnimationToolMenuContext.h"
#endif
#define ANIMATIONEDITOR_AnimationToolMenuContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationToolMenuContext ************************************************
struct Z_Construct_UClass_UAnimationToolMenuContext_Statics;
ANIMATIONEDITOR_API UClass* Z_Construct_UClass_UAnimationToolMenuContext_NoRegister();

#define FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationToolMenuContext(); \
	friend struct ::Z_Construct_UClass_UAnimationToolMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONEDITOR_API UClass* ::Z_Construct_UClass_UAnimationToolMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationToolMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationEditor"), Z_Construct_UClass_UAnimationToolMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UAnimationToolMenuContext)


#define FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONEDITOR_API UAnimationToolMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationToolMenuContext(UAnimationToolMenuContext&&) = delete; \
	UAnimationToolMenuContext(const UAnimationToolMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONEDITOR_API, UAnimationToolMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationToolMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationToolMenuContext) \
	ANIMATIONEDITOR_API virtual ~UAnimationToolMenuContext();


#define FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_11_PROLOG
#define FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationToolMenuContext;

// ********** End Class UAnimationToolMenuContext **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationEditor_Public_AnimationToolMenuContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
