// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttenuationVolumeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOGAMEPLAYVOLUME_AttenuationVolumeComponent_generated_h
#error "AttenuationVolumeComponent.generated.h already included, missing '#pragma once' in AttenuationVolumeComponent.h"
#endif
#define AUDIOGAMEPLAYVOLUME_AttenuationVolumeComponent_generated_h

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_37_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetInteriorVolume); \
	DECLARE_FUNCTION(execSetExteriorVolume);


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUAttenuationVolumeComponent(); \
	friend struct Z_Construct_UClass_UAttenuationVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UAttenuationVolumeComponent, UAudioGameplayVolumeMutator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), NO_API) \
	DECLARE_SERIALIZER(UAttenuationVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttenuationVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttenuationVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttenuationVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttenuationVolumeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttenuationVolumeComponent(UAttenuationVolumeComponent&&); \
	UAttenuationVolumeComponent(const UAttenuationVolumeComponent&); \
public:


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_34_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_37_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<class UAttenuationVolumeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AttenuationVolumeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
