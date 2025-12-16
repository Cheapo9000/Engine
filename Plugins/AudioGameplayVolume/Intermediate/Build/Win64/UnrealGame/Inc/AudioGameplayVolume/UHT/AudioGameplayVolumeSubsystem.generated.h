// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayVolumeSubsystem.h"

#ifdef AUDIOGAMEPLAYVOLUME_AudioGameplayVolumeSubsystem_generated_h
#error "AudioGameplayVolumeSubsystem.generated.h already included, missing '#pragma once' in AudioGameplayVolumeSubsystem.h"
#endif
#define AUDIOGAMEPLAYVOLUME_AudioGameplayVolumeSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioGameplayVolumeSubsystem ********************************************
struct Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics;
AUDIOGAMEPLAYVOLUME_API UClass* Z_Construct_UClass_UAudioGameplayVolumeSubsystem_NoRegister();

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioGameplayVolumeSubsystem(); \
	friend struct ::Z_Construct_UClass_UAudioGameplayVolumeSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAYVOLUME_API UClass* ::Z_Construct_UClass_UAudioGameplayVolumeSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioGameplayVolumeSubsystem, UAudioEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), Z_Construct_UClass_UAudioGameplayVolumeSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAudioGameplayVolumeSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioGameplayVolumeSubsystem*>(this); }


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioGameplayVolumeSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioGameplayVolumeSubsystem(UAudioGameplayVolumeSubsystem&&) = delete; \
	UAudioGameplayVolumeSubsystem(const UAudioGameplayVolumeSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioGameplayVolumeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayVolumeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioGameplayVolumeSubsystem)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_116_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_120_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioGameplayVolumeSubsystem;

// ********** End Class UAudioGameplayVolumeSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolumeSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
