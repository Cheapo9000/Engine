// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundSubmixSend.h"

#ifdef ENGINE_SoundSubmixSend_generated_h
#error "SoundSubmixSend.generated.h already included, missing '#pragma once' in SoundSubmixSend.h"
#endif
#define ENGINE_SoundSubmixSend_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundSubmixSpectralAnalysisBandSettings **************************
struct Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundSubmixSpectralAnalysisBandSettings;
// ********** End ScriptStruct FSoundSubmixSpectralAnalysisBandSettings ****************************

// ********** Begin Delegate FOnSubmixEnvelopeBP ***************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_54_DELEGATE \
ENGINE_API void FOnSubmixEnvelopeBP_DelegateWrapper(const FScriptDelegate& OnSubmixEnvelopeBP, TArray<float> const& Envelope);


// ********** End Delegate FOnSubmixEnvelopeBP *****************************************************

// ********** Begin Delegate FOnSubmixSpectralAnalysisBP *******************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_56_DELEGATE \
ENGINE_API void FOnSubmixSpectralAnalysisBP_DelegateWrapper(const FScriptDelegate& OnSubmixSpectralAnalysisBP, TArray<float> const& Magnitude);


// ********** End Delegate FOnSubmixSpectralAnalysisBP *********************************************

// ********** Begin ScriptStruct FSoundSubmixSendInfoBase ******************************************
struct Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundSubmixSendInfoBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundSubmixSendInfoBase;
// ********** End ScriptStruct FSoundSubmixSendInfoBase ********************************************

// ********** Begin ScriptStruct FSoundSubmixSendInfo **********************************************
struct Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSoundSubmixSendInfoBase Super;


struct FSoundSubmixSendInfo;
// ********** End ScriptStruct FSoundSubmixSendInfo ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h

// ********** Begin Enum EAudioSpectrumBandPresetType **********************************************
#define FOREACH_ENUM_EAUDIOSPECTRUMBANDPRESETTYPE(op) \
	op(EAudioSpectrumBandPresetType::KickDrum) \
	op(EAudioSpectrumBandPresetType::SnareDrum) \
	op(EAudioSpectrumBandPresetType::Voice) \
	op(EAudioSpectrumBandPresetType::Cymbals) 

enum class EAudioSpectrumBandPresetType : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumBandPresetType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioSpectrumBandPresetType>();
// ********** End Enum EAudioSpectrumBandPresetType ************************************************

// ********** Begin Enum EAudioRecordingExportType *************************************************
#define FOREACH_ENUM_EAUDIORECORDINGEXPORTTYPE(op) \
	op(EAudioRecordingExportType::SoundWave) \
	op(EAudioRecordingExportType::WavFile) 

enum class EAudioRecordingExportType : uint8;
template<> struct TIsUEnumClass<EAudioRecordingExportType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioRecordingExportType>();
// ********** End Enum EAudioRecordingExportType ***************************************************

// ********** Begin Enum ESendLevelControlMethod ***************************************************
#define FOREACH_ENUM_ESENDLEVELCONTROLMETHOD(op) \
	op(ESendLevelControlMethod::Linear) \
	op(ESendLevelControlMethod::CustomCurve) \
	op(ESendLevelControlMethod::Manual) 

enum class ESendLevelControlMethod : uint8;
template<> struct TIsUEnumClass<ESendLevelControlMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESendLevelControlMethod>();
// ********** End Enum ESendLevelControlMethod *****************************************************

// ********** Begin Enum ESubmixSendStage **********************************************************
#define FOREACH_ENUM_ESUBMIXSENDSTAGE(op) \
	op(ESubmixSendStage::PostDistanceAttenuation) \
	op(ESubmixSendStage::PreDistanceAttenuation) 

enum class ESubmixSendStage : uint8;
template<> struct TIsUEnumClass<ESubmixSendStage> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubmixSendStage>();
// ********** End Enum ESubmixSendStage ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
