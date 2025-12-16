// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayVolumeMutator.h"

#ifdef AUDIOGAMEPLAYVOLUME_AudioGameplayVolumeMutator_generated_h
#error "AudioGameplayVolumeMutator.generated.h already included, missing '#pragma once' in AudioGameplayVolumeMutator.h"
#endif
#define AUDIOGAMEPLAYVOLUME_AudioGameplayVolumeMutator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioGameplayVolumeMutator **********************************************
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_102_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetPriority);


struct Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics;
AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeMutator_NoRegister();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUAudioGameplayVolumeMutator(); \
	friend struct ::Z_Construct_UClass_UAudioGameplayVolumeMutator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAYVOLUME_API UClass* ::Z_Construct_UClass_UAudioGameplayVolumeMutator_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioGameplayVolumeMutator, UAudioGameplayComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), Z_Construct_UClass_UAudioGameplayVolumeMutator_NoRegister) \
	DECLARE_SERIALIZER(UAudioGameplayVolumeMutator)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAYVOLUME_API UAudioGameplayVolumeMutator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayVolumeMutator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAYVOLUME_API, UAudioGameplayVolumeMutator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayVolumeMutator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioGameplayVolumeMutator(UAudioGameplayVolumeMutator&&) = delete; \
	UAudioGameplayVolumeMutator(const UAudioGameplayVolumeMutator&) = delete;


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_99_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_102_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_102_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioGameplayVolumeMutator;

// ********** End Class UAudioGameplayVolumeMutator ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeMutator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
