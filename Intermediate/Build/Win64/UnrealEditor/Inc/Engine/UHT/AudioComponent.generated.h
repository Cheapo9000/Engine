// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AudioComponent.h"

#ifdef ENGINE_AudioComponent_generated_h
#error "AudioComponent.generated.h already included, missing '#pragma once' in AudioComponent.h"
#endif
#define ENGINE_AudioComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class UObject;
class UQuartzClockHandle;
class USoundAttenuation;
class USoundBase;
class USoundModulatorBase;
class USoundSourceBus;
class USoundSubmixBase;
class USoundWave;
enum class EAudioComponentPlayState : uint8;
enum class EAudioFaderCurve : uint8;
enum class EModulationDestination : uint8;
enum class EModulationRouting : uint8;
struct FQuartzQuantizationBoundary;
struct FSoundAttenuationSettings;
struct FSoundWaveEnvelopeDataPerSound;
struct FSoundWaveSpectralData;
struct FSoundWaveSpectralDataPerSound;
struct FSubtitleCue;

// ********** Begin Delegate FOnAudioFinished ******************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_61_DELEGATE \
ENGINE_API void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished);


// ********** End Delegate FOnAudioFinished ********************************************************

// ********** Begin Delegate FOnQueueSubtitles *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_67_DELEGATE \
ENGINE_API void FOnQueueSubtitles_DelegateWrapper(const FScriptDelegate& OnQueueSubtitles, TArray<FSubtitleCue> const& Subtitles, float CueDuration);


// ********** End Delegate FOnQueueSubtitles *******************************************************

// ********** Begin Delegate FOnAudioPlayStateChanged **********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_70_DELEGATE \
ENGINE_API void FOnAudioPlayStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlayStateChanged, EAudioComponentPlayState PlayState);


// ********** End Delegate FOnAudioPlayStateChanged ************************************************

// ********** Begin Delegate FOnAudioVirtualizationChanged *****************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_76_DELEGATE \
ENGINE_API void FOnAudioVirtualizationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVirtualizationChanged, bool bIsVirtualized);


// ********** End Delegate FOnAudioVirtualizationChanged *******************************************

// ********** Begin Delegate FOnAudioPlaybackPercent ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_85_DELEGATE \
ENGINE_API void FOnAudioPlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackPercent, const USoundWave* PlayingSoundWave, const float PlaybackPercent);


// ********** End Delegate FOnAudioPlaybackPercent *************************************************

// ********** Begin Delegate FOnAudioSingleEnvelopeValue *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_94_DELEGATE \
ENGINE_API void FOnAudioSingleEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSingleEnvelopeValue, const USoundWave* PlayingSoundWave, const float EnvelopeValue);


// ********** End Delegate FOnAudioSingleEnvelopeValue *********************************************

// ********** Begin Delegate FOnAudioMultiEnvelopeValue ********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_103_DELEGATE \
ENGINE_API void FOnAudioMultiEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMultiEnvelopeValue, const float AverageEnvelopeValue, const float MaxEnvelope, const int32 NumWaveInstances);


// ********** End Delegate FOnAudioMultiEnvelopeValue **********************************************

// ********** Begin ScriptStruct FAudioComponentParam **********************************************
struct Z_Construct_UScriptStruct_FAudioComponentParam_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioComponentParam_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAudioParameter Super;


struct FAudioComponentParam;
// ********** End ScriptStruct FAudioComponentParam ************************************************

// ********** Begin Class UInitialActiveSoundParams ************************************************
struct Z_Construct_UClass_UInitialActiveSoundParams_Statics;
ENGINE_API UClass* Z_Construct_UClass_UInitialActiveSoundParams_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_148_INCLASS \
private: \
	static void StaticRegisterNativesUInitialActiveSoundParams(); \
	friend struct ::Z_Construct_UClass_UInitialActiveSoundParams_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UInitialActiveSoundParams_NoRegister(); \
public: \
	DECLARE_CLASS2(UInitialActiveSoundParams, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UInitialActiveSoundParams_NoRegister) \
	DECLARE_SERIALIZER(UInitialActiveSoundParams)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInitialActiveSoundParams(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitialActiveSoundParams) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInitialActiveSoundParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitialActiveSoundParams); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInitialActiveSoundParams(UInitialActiveSoundParams&&) = delete; \
	UInitialActiveSoundParams(const UInitialActiveSoundParams&) = delete; \
	ENGINE_API virtual ~UInitialActiveSoundParams();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_145_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_148_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInitialActiveSoundParams;

// ********** End Class UInitialActiveSoundParams **************************************************

// ********** Begin Class UAudioComponent **********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execGetModulators); \
	DECLARE_FUNCTION(execRemoveModulationRouting); \
	DECLARE_FUNCTION(execAddModulationRouting); \
	DECLARE_FUNCTION(execSetModulationRouting); \
	DECLARE_FUNCTION(execGetCookedEnvelopeDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedEnvelopeData); \
	DECLARE_FUNCTION(execGetCookedFFTDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedFFTData); \
	DECLARE_FUNCTION(execHasCookedAmplitudeEnvelopeData); \
	DECLARE_FUNCTION(execHasCookedFFTData); \
	DECLARE_FUNCTION(execSetOutputToBusOnly); \
	DECLARE_FUNCTION(execSetHighPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetHighPassFilterEnabled); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetAudioBusSendPostEffect); \
	DECLARE_FUNCTION(execSetAudioBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPostEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execSetWaveParameter); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execPlayQuantized); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound); \
	DECLARE_FUNCTION(execSetAttenuationOverrides); \
	DECLARE_FUNCTION(execSetAttenuationSettings); \
	DECLARE_FUNCTION(execSetOverrideAttenuation);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioComponent, ENGINE_API)


struct Z_Construct_UClass_UAudioComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend struct ::Z_Construct_UClass_UAudioComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAudioComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAudioComponent_NoRegister) \
	DECLARE_SERIALIZER(UAudioComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAudioComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioComponent(UAudioComponent&&) = delete; \
	UAudioComponent(const UAudioComponent&) = delete; \
	ENGINE_API virtual ~UAudioComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_166_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioComponent;

// ********** End Class UAudioComponent ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h

// ********** Begin Enum EAudioComponentPlayState **************************************************
#define FOREACH_ENUM_EAUDIOCOMPONENTPLAYSTATE(op) \
	op(EAudioComponentPlayState::Playing) \
	op(EAudioComponentPlayState::Stopped) \
	op(EAudioComponentPlayState::Paused) \
	op(EAudioComponentPlayState::FadingIn) \
	op(EAudioComponentPlayState::FadingOut) \
	op(EAudioComponentPlayState::Count) 

enum class EAudioComponentPlayState : uint8;
template<> struct TIsUEnumClass<EAudioComponentPlayState> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioComponentPlayState>();
// ********** End Enum EAudioComponentPlayState ****************************************************

// ********** Begin Enum EAudioFaderCurve **********************************************************
#define FOREACH_ENUM_EAUDIOFADERCURVE(op) \
	op(EAudioFaderCurve::Linear) \
	op(EAudioFaderCurve::Logarithmic) \
	op(EAudioFaderCurve::SCurve) \
	op(EAudioFaderCurve::Sin) \
	op(EAudioFaderCurve::Count) 

enum class EAudioFaderCurve : uint8;
template<> struct TIsUEnumClass<EAudioFaderCurve> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioFaderCurve>();
// ********** End Enum EAudioFaderCurve ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
