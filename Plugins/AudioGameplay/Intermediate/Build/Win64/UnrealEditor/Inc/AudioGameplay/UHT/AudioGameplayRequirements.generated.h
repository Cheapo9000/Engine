// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayRequirements.h"

#ifdef AUDIOGAMEPLAY_AudioGameplayRequirements_generated_h
#error "AudioGameplayRequirements.generated.h already included, missing '#pragma once' in AudioGameplayRequirements.h"
#endif
#define AUDIOGAMEPLAY_AudioGameplayRequirements_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioRequirementPreset **************************************************
struct Z_Construct_UClass_UAudioRequirementPreset_Statics;
AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioRequirementPreset_NoRegister();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAudioRequirementPreset(); \
	friend struct ::Z_Construct_UClass_UAudioRequirementPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAY_API UClass* ::Z_Construct_UClass_UAudioRequirementPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioRequirementPreset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioGameplay"), Z_Construct_UClass_UAudioRequirementPreset_NoRegister) \
	DECLARE_SERIALIZER(UAudioRequirementPreset)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioRequirementPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioRequirementPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioRequirementPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioRequirementPreset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioRequirementPreset(UAudioRequirementPreset&&) = delete; \
	UAudioRequirementPreset(const UAudioRequirementPreset&) = delete;


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_15_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_18_INCLASS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioRequirementPreset;

// ********** End Class UAudioRequirementPreset ****************************************************

// ********** Begin ScriptStruct FAudioGameplayRequirements ****************************************
struct Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics;
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics; \
	AUDIOGAMEPLAY_API static class UScriptStruct* StaticStruct();


struct FAudioGameplayRequirements;
// ********** End ScriptStruct FAudioGameplayRequirements ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
