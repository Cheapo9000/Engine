// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayRequirements.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOGAMEPLAY_AudioGameplayRequirements_generated_h
#error "AudioGameplayRequirements.generated.h already included, missing '#pragma once' in AudioGameplayRequirements.h"
#endif
#define AUDIOGAMEPLAY_AudioGameplayRequirements_generated_h

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAudioRequirementPreset(); \
	friend struct Z_Construct_UClass_UAudioRequirementPreset_Statics; \
public: \
	DECLARE_CLASS(UAudioRequirementPreset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAudioRequirementPreset)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioRequirementPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioRequirementPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioRequirementPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioRequirementPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioRequirementPreset(UAudioRequirementPreset&&); \
	UAudioRequirementPreset(const UAudioRequirementPreset&); \
public:


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_13_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_16_INCLASS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAY_API UClass* StaticClass<class UAudioRequirementPreset>();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioGameplayRequirements_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOGAMEPLAY_API UScriptStruct* StaticStruct<struct FAudioGameplayRequirements>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioGameplayRequirements_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
