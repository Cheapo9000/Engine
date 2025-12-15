// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/SoundWaveScrubber.h"

#ifdef AUDIOMIXER_SoundWaveScrubber_generated_h
#error "SoundWaveScrubber.generated.h already included, missing '#pragma once' in SoundWaveScrubber.h"
#endif
#define AUDIOMIXER_SoundWaveScrubber_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;

// ********** Begin Class UScrubbedSound ***********************************************************
#define FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h_209_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetIsScrubbingWhileStationary); \
	DECLARE_FUNCTION(execSetIsScrubbing); \
	DECLARE_FUNCTION(execSetGrainDurationRange); \
	DECLARE_FUNCTION(execGetPlayheadTime); \
	DECLARE_FUNCTION(execSetPlayheadTime); \
	DECLARE_FUNCTION(execSetSoundWave);


struct Z_Construct_UClass_UScrubbedSound_Statics;
AUDIOMIXER_API UClass* Z_Construct_UClass_UScrubbedSound_NoRegister();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h_209_INCLASS \
private: \
	static void StaticRegisterNativesUScrubbedSound(); \
	friend struct ::Z_Construct_UClass_UScrubbedSound_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMIXER_API UClass* ::Z_Construct_UClass_UScrubbedSound_NoRegister(); \
public: \
	DECLARE_CLASS2(UScrubbedSound, USoundWave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMixer"), Z_Construct_UClass_UScrubbedSound_NoRegister) \
	DECLARE_SERIALIZER(UScrubbedSound)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h_209_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMIXER_API UScrubbedSound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScrubbedSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, UScrubbedSound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScrubbedSound); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScrubbedSound(UScrubbedSound&&) = delete; \
	UScrubbedSound(const UScrubbedSound&) = delete; \
	AUDIOMIXER_API virtual ~UScrubbedSound();


#define FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h_206_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h_209_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h_209_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h_209_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h_209_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScrubbedSound;

// ********** End Class UScrubbedSound *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_SoundWaveScrubber_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
