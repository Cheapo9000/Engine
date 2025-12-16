// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundControlBusMix.h"

#ifdef AUDIOMODULATION_SoundControlBusMix_generated_h
#error "SoundControlBusMix.generated.h already included, missing '#pragma once' in SoundControlBusMix.h"
#endif
#define AUDIOMODULATION_SoundControlBusMix_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundControlBusMixStage ******************************************
struct Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics;
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundControlBusMixStage_Statics; \
	AUDIOMODULATION_API static class UScriptStruct* StaticStruct();


struct FSoundControlBusMixStage;
// ********** End ScriptStruct FSoundControlBusMixStage ********************************************

// ********** Begin Class USoundControlBusMix ******************************************************
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_39_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDeactivateAllMixes); \
	DECLARE_FUNCTION(execDeactivateMix); \
	DECLARE_FUNCTION(execActivateMix); \
	DECLARE_FUNCTION(execSoloMix); \
	DECLARE_FUNCTION(execSaveMixToProfile); \
	DECLARE_FUNCTION(execLoadMixFromProfile);


struct Z_Construct_UClass_USoundControlBusMix_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUSoundControlBusMix(); \
	friend struct ::Z_Construct_UClass_USoundControlBusMix_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundControlBusMix_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundControlBusMix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundControlBusMix_NoRegister) \
	DECLARE_SERIALIZER(USoundControlBusMix)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundControlBusMix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundControlBusMix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundControlBusMix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundControlBusMix); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundControlBusMix(USoundControlBusMix&&) = delete; \
	USoundControlBusMix(const USoundControlBusMix&) = delete; \
	AUDIOMODULATION_API virtual ~USoundControlBusMix();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_39_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundControlBusMix;

// ********** End Class USoundControlBusMix ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBusMix_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
