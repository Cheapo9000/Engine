// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixOverrideVolumeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioVolumeSubmixOverrideSettings;
#ifdef AUDIOGAMEPLAYVOLUME_SubmixOverrideVolumeComponent_generated_h
#error "SubmixOverrideVolumeComponent.generated.h already included, missing '#pragma once' in SubmixOverrideVolumeComponent.h"
#endif
#define AUDIOGAMEPLAYVOLUME_SubmixOverrideVolumeComponent_generated_h

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_35_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSubmixOverrideSettings);


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixOverrideVolumeComponent(); \
	friend struct Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(USubmixOverrideVolumeComponent, UAudioGameplayVolumeMutator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), NO_API) \
	DECLARE_SERIALIZER(USubmixOverrideVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixOverrideVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixOverrideVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixOverrideVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixOverrideVolumeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubmixOverrideVolumeComponent(USubmixOverrideVolumeComponent&&); \
	USubmixOverrideVolumeComponent(const USubmixOverrideVolumeComponent&); \
public:


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_32_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_35_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<class USubmixOverrideVolumeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
