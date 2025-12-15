// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationModifier.h"

#ifdef ANIMATIONMODIFIERS_AnimationModifier_generated_h
#error "AnimationModifier.generated.h already included, missing '#pragma once' in AnimationModifier.h"
#endif
#define ANIMATIONMODIFIERS_AnimationModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;

// ********** Begin Class UAnimationModifier *******************************************************
#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRevert); \
	DECLARE_FUNCTION(execOnApply);


#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationModifier, ANIMATIONMODIFIERS_API)


struct Z_Construct_UClass_UAnimationModifier_Statics;
ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier_NoRegister();

#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationModifier(); \
	friend struct ::Z_Construct_UClass_UAnimationModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONMODIFIERS_API UClass* ::Z_Construct_UClass_UAnimationModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationModifier, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifiers"), Z_Construct_UClass_UAnimationModifier_NoRegister) \
	DECLARE_SERIALIZER(UAnimationModifier) \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationModifier(UAnimationModifier&&) = delete; \
	UAnimationModifier(const UAnimationModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONMODIFIERS_API, UAnimationModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationModifier) \
	ANIMATIONMODIFIERS_API virtual ~UAnimationModifier();


#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_33_PROLOG
#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationModifier;

// ********** End Class UAnimationModifier *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
