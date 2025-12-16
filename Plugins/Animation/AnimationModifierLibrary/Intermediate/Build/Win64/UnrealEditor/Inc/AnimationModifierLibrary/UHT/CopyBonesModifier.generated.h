// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CopyBonesModifier.h"

#ifdef ANIMATIONMODIFIERLIBRARY_CopyBonesModifier_generated_h
#error "CopyBonesModifier.generated.h already included, missing '#pragma once' in CopyBonesModifier.h"
#endif
#define ANIMATIONMODIFIERLIBRARY_CopyBonesModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBoneReferencePair ************************************************
struct Z_Construct_UScriptStruct_FBoneReferencePair_Statics;
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBoneReferencePair_Statics; \
	ANIMATIONMODIFIERLIBRARY_API static class UScriptStruct* StaticStruct();


struct FBoneReferencePair;
// ********** End ScriptStruct FBoneReferencePair **************************************************

// ********** Begin Class UCopyBonesModifier *******************************************************
struct Z_Construct_UClass_UCopyBonesModifier_Statics;
ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UCopyBonesModifier_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCopyBonesModifier(); \
	friend struct ::Z_Construct_UClass_UCopyBonesModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONMODIFIERLIBRARY_API UClass* ::Z_Construct_UClass_UCopyBonesModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UCopyBonesModifier, UAnimationModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifierLibrary"), Z_Construct_UClass_UCopyBonesModifier_NoRegister) \
	DECLARE_SERIALIZER(UCopyBonesModifier)


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCopyBonesModifier(UCopyBonesModifier&&) = delete; \
	UCopyBonesModifier(const UCopyBonesModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCopyBonesModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCopyBonesModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCopyBonesModifier) \
	NO_API virtual ~UCopyBonesModifier();


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_25_PROLOG
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCopyBonesModifier;

// ********** End Class UCopyBonesModifier *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_CopyBonesModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
