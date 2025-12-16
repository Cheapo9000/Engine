// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EncodeRootBoneModifier.h"

#ifdef ANIMATIONMODIFIERLIBRARY_EncodeRootBoneModifier_generated_h
#error "EncodeRootBoneModifier.generated.h already included, missing '#pragma once' in EncodeRootBoneModifier.h"
#endif
#define ANIMATIONMODIFIERLIBRARY_EncodeRootBoneModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEncodeRootBoneWeightedBone ***************************************
struct Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics;
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBone_Statics; \
	ANIMATIONMODIFIERLIBRARY_API static class UScriptStruct* StaticStruct();


struct FEncodeRootBoneWeightedBone;
// ********** End ScriptStruct FEncodeRootBoneWeightedBone *****************************************

// ********** Begin ScriptStruct FEncodeRootBoneWeightedBoneAxis ***********************************
struct Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics;
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEncodeRootBoneWeightedBoneAxis_Statics; \
	ANIMATIONMODIFIERLIBRARY_API static class UScriptStruct* StaticStruct(); \
	typedef FEncodeRootBoneWeightedBone Super;


struct FEncodeRootBoneWeightedBoneAxis;
// ********** End ScriptStruct FEncodeRootBoneWeightedBoneAxis *************************************

// ********** Begin Class UEncodeRootBoneModifier **************************************************
struct Z_Construct_UClass_UEncodeRootBoneModifier_Statics;
ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UEncodeRootBoneModifier_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEncodeRootBoneModifier(); \
	friend struct ::Z_Construct_UClass_UEncodeRootBoneModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONMODIFIERLIBRARY_API UClass* ::Z_Construct_UClass_UEncodeRootBoneModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UEncodeRootBoneModifier, UAnimationModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifierLibrary"), Z_Construct_UClass_UEncodeRootBoneModifier_NoRegister) \
	DECLARE_SERIALIZER(UEncodeRootBoneModifier)


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEncodeRootBoneModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEncodeRootBoneModifier(UEncodeRootBoneModifier&&) = delete; \
	UEncodeRootBoneModifier(const UEncodeRootBoneModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEncodeRootBoneModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEncodeRootBoneModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEncodeRootBoneModifier) \
	NO_API virtual ~UEncodeRootBoneModifier();


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_38_PROLOG
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEncodeRootBoneModifier;

// ********** End Class UEncodeRootBoneModifier ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_EncodeRootBoneModifier_h

// ********** Begin Enum EEncodeRootBoneAxis *******************************************************
#define FOREACH_ENUM_EENCODEROOTBONEAXIS(op) \
	op(EEncodeRootBoneAxis::X) \
	op(EEncodeRootBoneAxis::Y) \
	op(EEncodeRootBoneAxis::Z) 

enum class EEncodeRootBoneAxis : uint8;
template<> struct TIsUEnumClass<EEncodeRootBoneAxis> { enum { Value = true }; };
template<> ANIMATIONMODIFIERLIBRARY_NON_ATTRIBUTED_API UEnum* StaticEnum<EEncodeRootBoneAxis>();
// ********** End Enum EEncodeRootBoneAxis *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
