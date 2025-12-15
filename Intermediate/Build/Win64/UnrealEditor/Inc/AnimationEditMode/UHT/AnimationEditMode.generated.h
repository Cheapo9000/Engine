// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationEditMode.h"

#ifdef ANIMATIONEDITMODE_AnimationEditMode_generated_h
#error "AnimationEditMode.generated.h already included, missing '#pragma once' in AnimationEditMode.h"
#endif
#define ANIMATIONEDITMODE_AnimationEditMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationEditModeContext ************************************************
struct Z_Construct_UClass_UAnimationEditModeContext_Statics;
ANIMATIONEDITMODE_API UClass* Z_Construct_UClass_UAnimationEditModeContext_NoRegister();

#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationEditModeContext(); \
	friend struct ::Z_Construct_UClass_UAnimationEditModeContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONEDITMODE_API UClass* ::Z_Construct_UClass_UAnimationEditModeContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationEditModeContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationEditMode"), Z_Construct_UClass_UAnimationEditModeContext_NoRegister) \
	DECLARE_SERIALIZER(UAnimationEditModeContext) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationEditModeContext*>(this); }


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONEDITMODE_API UAnimationEditModeContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationEditModeContext(UAnimationEditModeContext&&) = delete; \
	UAnimationEditModeContext(const UAnimationEditModeContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONEDITMODE_API, UAnimationEditModeContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationEditModeContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationEditModeContext) \
	ANIMATIONEDITMODE_API virtual ~UAnimationEditModeContext();


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_26_PROLOG
#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationEditModeContext;

// ********** End Class UAnimationEditModeContext **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
