// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextToSpeechEngineSubsystem.h"

#ifdef TEXTTOSPEECH_TextToSpeechEngineSubsystem_generated_h
#error "TextToSpeechEngineSubsystem.generated.h already included, missing '#pragma once' in TextToSpeechEngineSubsystem.h"
#endif
#define TEXTTOSPEECH_TextToSpeechEngineSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextToSpeechEngineSubsystem *********************************************
#define FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumChannels); \
	DECLARE_FUNCTION(execDoesChannelExist); \
	DECLARE_FUNCTION(execRemoveAllChannels); \
	DECLARE_FUNCTION(execRemoveChannel); \
	DECLARE_FUNCTION(execAddCustomChannel); \
	DECLARE_FUNCTION(execAddDefaultChannel); \
	DECLARE_FUNCTION(execIsChannelActive); \
	DECLARE_FUNCTION(execDeactivateAllChannels); \
	DECLARE_FUNCTION(execDeactivateChannel); \
	DECLARE_FUNCTION(execActivateAllChannels); \
	DECLARE_FUNCTION(execActivateChannel); \
	DECLARE_FUNCTION(execIsChannelMuted); \
	DECLARE_FUNCTION(execUnmuteChannel); \
	DECLARE_FUNCTION(execMuteChannel); \
	DECLARE_FUNCTION(execSetRateOnChannel); \
	DECLARE_FUNCTION(execGetRateOnChannel); \
	DECLARE_FUNCTION(execSetVolumeOnChannel); \
	DECLARE_FUNCTION(execGetVolumeOnChannel); \
	DECLARE_FUNCTION(execIsSpeakingOnChannel); \
	DECLARE_FUNCTION(execStopSpeakingOnAllChannels); \
	DECLARE_FUNCTION(execStopSpeakingOnChannel); \
	DECLARE_FUNCTION(execSpeakOnChannel);


struct Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics;
TEXTTOSPEECH_API UClass* Z_Construct_UClass_UTextToSpeechEngineSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextToSpeechEngineSubsystem(); \
	friend struct ::Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTTOSPEECH_API UClass* ::Z_Construct_UClass_UTextToSpeechEngineSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextToSpeechEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextToSpeech"), Z_Construct_UClass_UTextToSpeechEngineSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UTextToSpeechEngineSubsystem)


#define FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextToSpeechEngineSubsystem(UTextToSpeechEngineSubsystem&&) = delete; \
	UTextToSpeechEngineSubsystem(const UTextToSpeechEngineSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextToSpeechEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextToSpeechEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTextToSpeechEngineSubsystem)


#define FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextToSpeechEngineSubsystem;

// ********** End Class UTextToSpeechEngineSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
