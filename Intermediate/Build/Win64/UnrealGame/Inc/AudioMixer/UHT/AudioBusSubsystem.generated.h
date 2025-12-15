// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioBusSubsystem.h"

#ifdef AUDIOMIXER_AudioBusSubsystem_generated_h
#error "AudioBusSubsystem.generated.h already included, missing '#pragma once' in AudioBusSubsystem.h"
#endif
#define AUDIOMIXER_AudioBusSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioBusSubsystem *******************************************************
struct Z_Construct_UClass_UAudioBusSubsystem_Statics;
AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioBusSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioBusSubsystem(); \
	friend struct ::Z_Construct_UClass_UAudioBusSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMIXER_API UClass* ::Z_Construct_UClass_UAudioBusSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioBusSubsystem, UAudioEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), Z_Construct_UClass_UAudioBusSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAudioBusSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioBusSubsystem(UAudioBusSubsystem&&) = delete; \
	UAudioBusSubsystem(const UAudioBusSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, UAudioBusSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBusSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioBusSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_66_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioBusSubsystem;

// ********** End Class UAudioBusSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_AudioBusSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
