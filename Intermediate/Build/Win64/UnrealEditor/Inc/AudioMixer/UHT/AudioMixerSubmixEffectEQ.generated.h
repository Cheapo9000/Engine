// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/AudioMixerSubmixEffectEQ.h"

#ifdef AUDIOMIXER_AudioMixerSubmixEffectEQ_generated_h
#error "AudioMixerSubmixEffectEQ.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectEQ.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectEQ_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubmixEffectSubmixEQSettings;

// ********** Begin ScriptStruct FSubmixEffectEQBand ***********************************************
struct Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics;
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectEQBand_Statics; \
	AUDIOMIXER_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectEQBand;
// ********** End ScriptStruct FSubmixEffectEQBand *************************************************

// ********** Begin ScriptStruct FSubmixEffectSubmixEQSettings *************************************
struct Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics;
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectSubmixEQSettings_Statics; \
	AUDIOMIXER_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectSubmixEQSettings;
// ********** End ScriptStruct FSubmixEffectSubmixEQSettings ***************************************

// ********** Begin Class USubmixEffectSubmixEQPreset **********************************************
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics;
AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister();

#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectSubmixEQPreset(); \
	friend struct ::Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMIXER_API UClass* ::Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectSubmixEQPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), Z_Construct_UClass_USubmixEffectSubmixEQPreset_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectSubmixEQPreset)


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMIXER_API USubmixEffectSubmixEQPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectSubmixEQPreset(USubmixEffectSubmixEQPreset&&) = delete; \
	USubmixEffectSubmixEQPreset(const USubmixEffectSubmixEQPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMIXER_API, USubmixEffectSubmixEQPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectSubmixEQPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectSubmixEQPreset) \
	AUDIOMIXER_API virtual ~USubmixEffectSubmixEQPreset();


#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_109_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_112_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectSubmixEQPreset;

// ********** End Class USubmixEffectSubmixEQPreset ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectEQ_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
