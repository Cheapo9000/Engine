// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MirrorModifier.h"

#ifdef ANIMATIONMODIFIERLIBRARY_MirrorModifier_generated_h
#error "MirrorModifier.generated.h already included, missing '#pragma once' in MirrorModifier.h"
#endif
#define ANIMATIONMODIFIERLIBRARY_MirrorModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMirrorModifier **********************************************************
struct Z_Construct_UClass_UMirrorModifier_Statics;
ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UMirrorModifier_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MirrorModifier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMirrorModifier(); \
	friend struct ::Z_Construct_UClass_UMirrorModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONMODIFIERLIBRARY_API UClass* ::Z_Construct_UClass_UMirrorModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UMirrorModifier, UAnimationModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifierLibrary"), Z_Construct_UClass_UMirrorModifier_NoRegister) \
	DECLARE_SERIALIZER(UMirrorModifier)


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MirrorModifier_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMirrorModifier(UMirrorModifier&&) = delete; \
	UMirrorModifier(const UMirrorModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMirrorModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMirrorModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMirrorModifier) \
	NO_API virtual ~UMirrorModifier();


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MirrorModifier_h_13_PROLOG
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MirrorModifier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MirrorModifier_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MirrorModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMirrorModifier;

// ********** End Class UMirrorModifier ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MirrorModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
