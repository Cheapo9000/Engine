// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FootstepAnimEventsModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONMODIFIERLIBRARY_FootstepAnimEventsModifier_generated_h
#error "FootstepAnimEventsModifier.generated.h already included, missing '#pragma once' in FootstepAnimEventsModifier.h"
#endif
#define ANIMATIONMODIFIERLIBRARY_FootstepAnimEventsModifier_generated_h

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_FootstepAnimEventsModifier_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootDefinition_Statics; \
	ANIMATIONMODIFIERLIBRARY_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONMODIFIERLIBRARY_API UScriptStruct* StaticStruct<struct FFootDefinition>();

#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_FootstepAnimEventsModifier_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFootstepAnimEventsModifier(); \
	friend struct Z_Construct_UClass_UFootstepAnimEventsModifier_Statics; \
public: \
	DECLARE_CLASS(UFootstepAnimEventsModifier, UAnimationModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifierLibrary"), NO_API) \
	DECLARE_SERIALIZER(UFootstepAnimEventsModifier)


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_FootstepAnimEventsModifier_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFootstepAnimEventsModifier(UFootstepAnimEventsModifier&&); \
	UFootstepAnimEventsModifier(const UFootstepAnimEventsModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFootstepAnimEventsModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootstepAnimEventsModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFootstepAnimEventsModifier) \
	NO_API virtual ~UFootstepAnimEventsModifier();


#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_FootstepAnimEventsModifier_h_82_PROLOG
#define FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_FootstepAnimEventsModifier_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_FootstepAnimEventsModifier_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_FootstepAnimEventsModifier_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONMODIFIERLIBRARY_API UClass* StaticClass<class UFootstepAnimEventsModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_FootstepAnimEventsModifier_h


#define FOREACH_ENUM_EDETECTIONTECHNIQUE(op) \
	op(EDetectionTechnique::PassThroughReferenceBone) \
	op(EDetectionTechnique::FootBoneReachesGround) \
	op(EDetectionTechnique::FootBoneSpeed) 

enum class EDetectionTechnique : uint8;
template<> struct TIsUEnumClass<EDetectionTechnique> { enum { Value = true }; };
template<> ANIMATIONMODIFIERLIBRARY_API UEnum* StaticEnum<EDetectionTechnique>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
