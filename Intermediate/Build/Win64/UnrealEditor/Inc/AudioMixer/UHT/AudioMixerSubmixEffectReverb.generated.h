// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/AudioMixerSubmixEffectReverb.h"

#ifdef AUDIOMIXER_AudioMixerSubmixEffectReverb_generated_h
#error "AudioMixerSubmixEffectReverb.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectReverb.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectReverb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UReverbEffect;
struct FSubmixEffectReverbSettings;

// ********** Begin ScriptStruct FSubmixEffectReverbSettings ***************************************
struct Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics;
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectReverbSettings_Statics; \
	AUDIOMIXER_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectReverbSettings;
// ********** End ScriptStruct FSubmixEffectReverbSettings *****************************************

// ********** Begin Class USubmixEffectReverbPreset ************************************************
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettingsWithReverbEffect); \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USubmixEffectReverbPreset_Statics;
AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectReverbPreset(); \
	friend struct ::Z_Construct_UClass_USubmixEffectReverbPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMIXER_API UClass* ::Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectReverbPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), Z_Construct_UClass_USubmixEffectReverbPreset_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectReverbPreset)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_151_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMIXER_API USubmixEffectReverbPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectReverbPreset(USubmixEffectReverbPreset&&) = delete; \
	USubmixEffectReverbPreset(const USubmixEffectReverbPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, USubmixEffectReverbPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectReverbPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectReverbPreset) \
	AUDIOMIXER_API virtual ~USubmixEffectReverbPreset();


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_148_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_151_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectReverbPreset;

// ********** End Class USubmixEffectReverbPreset **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverb_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
