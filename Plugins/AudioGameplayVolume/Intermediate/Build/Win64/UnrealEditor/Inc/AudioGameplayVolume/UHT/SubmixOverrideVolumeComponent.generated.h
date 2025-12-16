// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixOverrideVolumeComponent.h"

#ifdef AUDIOGAMEPLAYVOLUME_SubmixOverrideVolumeComponent_generated_h
#error "SubmixOverrideVolumeComponent.generated.h already included, missing '#pragma once' in SubmixOverrideVolumeComponent.h"
#endif
#define AUDIOGAMEPLAYVOLUME_SubmixOverrideVolumeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioVolumeSubmixOverrideSettings;

// ********** Begin Class USubmixOverrideVolumeComponent *******************************************
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_37_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSubmixOverrideSettings);


struct Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics;
AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_USubmixOverrideVolumeComponent_NoRegister();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixOverrideVolumeComponent(); \
	friend struct ::Z_Construct_UClass_USubmixOverrideVolumeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAYVOLUME_API UClass* ::Z_Construct_UClass_USubmixOverrideVolumeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixOverrideVolumeComponent, UAudioGameplayVolumeMutator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), Z_Construct_UClass_USubmixOverrideVolumeComponent_NoRegister) \
	DECLARE_SERIALIZER(USubmixOverrideVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAYVOLUME_API USubmixOverrideVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixOverrideVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAYVOLUME_API, USubmixOverrideVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixOverrideVolumeComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixOverrideVolumeComponent(USubmixOverrideVolumeComponent&&) = delete; \
	USubmixOverrideVolumeComponent(const USubmixOverrideVolumeComponent&) = delete;


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_34_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_37_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixOverrideVolumeComponent;

// ********** End Class USubmixOverrideVolumeComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_SubmixOverrideVolumeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
