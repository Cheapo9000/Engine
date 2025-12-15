// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationModifierSettings.h"

#ifdef ANIMATIONMODIFIERS_AnimationModifierSettings_generated_h
#error "AnimationModifierSettings.generated.h already included, missing '#pragma once' in AnimationModifierSettings.h"
#endif
#define ANIMATIONMODIFIERS_AnimationModifierSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimationModifierSettings ***********************************************
struct Z_Construct_UClass_UAnimationModifierSettings_Statics;
ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifierSettings_NoRegister();

#define FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationModifierSettings(); \
	friend struct ::Z_Construct_UClass_UAnimationModifierSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONMODIFIERS_API UClass* ::Z_Construct_UClass_UAnimationModifierSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationModifierSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifiers"), Z_Construct_UClass_UAnimationModifierSettings_NoRegister) \
	DECLARE_SERIALIZER(UAnimationModifierSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationModifierSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationModifierSettings(UAnimationModifierSettings&&) = delete; \
	UAnimationModifierSettings(const UAnimationModifierSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationModifierSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationModifierSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationModifierSettings) \
	NO_API virtual ~UAnimationModifierSettings();


#define FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_12_PROLOG
#define FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationModifierSettings;

// ********** End Class UAnimationModifierSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
