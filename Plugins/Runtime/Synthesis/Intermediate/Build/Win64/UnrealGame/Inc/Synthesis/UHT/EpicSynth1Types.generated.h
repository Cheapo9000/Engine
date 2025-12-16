// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EpicSynth1Types.h"

#ifdef SYNTHESIS_EpicSynth1Types_generated_h
#error "EpicSynth1Types.generated.h already included, missing '#pragma once' in EpicSynth1Types.h"
#endif
#define SYNTHESIS_EpicSynth1Types_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSynth1PatchCable *************************************************
struct Z_Construct_UScriptStruct_FSynth1PatchCable_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSynth1PatchCable_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSynth1PatchCable;
// ********** End ScriptStruct FSynth1PatchCable ***************************************************

// ********** Begin ScriptStruct FPatchId **********************************************************
struct Z_Construct_UScriptStruct_FPatchId_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPatchId_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FPatchId;
// ********** End ScriptStruct FPatchId ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h

// ********** Begin Enum ESynth1OscType ************************************************************
#define FOREACH_ENUM_ESYNTH1OSCTYPE(op) \
	op(ESynth1OscType::Sine) \
	op(ESynth1OscType::Saw) \
	op(ESynth1OscType::Triangle) \
	op(ESynth1OscType::Square) \
	op(ESynth1OscType::Noise) \
	op(ESynth1OscType::Count) 

enum class ESynth1OscType : uint8;
template<> struct TIsUEnumClass<ESynth1OscType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynth1OscType>();
// ********** End Enum ESynth1OscType **************************************************************

// ********** Begin Enum ESynthLFOType *************************************************************
#define FOREACH_ENUM_ESYNTHLFOTYPE(op) \
	op(ESynthLFOType::Sine) \
	op(ESynthLFOType::UpSaw) \
	op(ESynthLFOType::DownSaw) \
	op(ESynthLFOType::Square) \
	op(ESynthLFOType::Triangle) \
	op(ESynthLFOType::Exponential) \
	op(ESynthLFOType::RandomSampleHold) \
	op(ESynthLFOType::Count) 

enum class ESynthLFOType : uint8;
template<> struct TIsUEnumClass<ESynthLFOType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynthLFOType>();
// ********** End Enum ESynthLFOType ***************************************************************

// ********** Begin Enum ESynthLFOMode *************************************************************
#define FOREACH_ENUM_ESYNTHLFOMODE(op) \
	op(ESynthLFOMode::Sync) \
	op(ESynthLFOMode::OneShot) \
	op(ESynthLFOMode::Free) \
	op(ESynthLFOMode::Count) 

enum class ESynthLFOMode : uint8;
template<> struct TIsUEnumClass<ESynthLFOMode> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynthLFOMode>();
// ********** End Enum ESynthLFOMode ***************************************************************

// ********** Begin Enum ESynthLFOPatchType ********************************************************
#define FOREACH_ENUM_ESYNTHLFOPATCHTYPE(op) \
	op(ESynthLFOPatchType::PatchToNone) \
	op(ESynthLFOPatchType::PatchToGain) \
	op(ESynthLFOPatchType::PatchToOscFreq) \
	op(ESynthLFOPatchType::PatchToFilterFreq) \
	op(ESynthLFOPatchType::PatchToFilterQ) \
	op(ESynthLFOPatchType::PatchToOscPulseWidth) \
	op(ESynthLFOPatchType::PatchToOscPan) \
	op(ESynthLFOPatchType::PatchLFO1ToLFO2Frequency) \
	op(ESynthLFOPatchType::PatchLFO1ToLFO2Gain) \
	op(ESynthLFOPatchType::Count) 

enum class ESynthLFOPatchType : uint8;
template<> struct TIsUEnumClass<ESynthLFOPatchType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynthLFOPatchType>();
// ********** End Enum ESynthLFOPatchType **********************************************************

// ********** Begin Enum ESynthModEnvPatch *********************************************************
#define FOREACH_ENUM_ESYNTHMODENVPATCH(op) \
	op(ESynthModEnvPatch::PatchToNone) \
	op(ESynthModEnvPatch::PatchToOscFreq) \
	op(ESynthModEnvPatch::PatchToFilterFreq) \
	op(ESynthModEnvPatch::PatchToFilterQ) \
	op(ESynthModEnvPatch::PatchToLFO1Gain) \
	op(ESynthModEnvPatch::PatchToLFO2Gain) \
	op(ESynthModEnvPatch::PatchToLFO1Freq) \
	op(ESynthModEnvPatch::PatchToLFO2Freq) \
	op(ESynthModEnvPatch::Count) 

enum class ESynthModEnvPatch : uint8;
template<> struct TIsUEnumClass<ESynthModEnvPatch> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynthModEnvPatch>();
// ********** End Enum ESynthModEnvPatch ***********************************************************

// ********** Begin Enum ESynthModEnvBiasPatch *****************************************************
#define FOREACH_ENUM_ESYNTHMODENVBIASPATCH(op) \
	op(ESynthModEnvBiasPatch::PatchToNone) \
	op(ESynthModEnvBiasPatch::PatchToOscFreq) \
	op(ESynthModEnvBiasPatch::PatchToFilterFreq) \
	op(ESynthModEnvBiasPatch::PatchToFilterQ) \
	op(ESynthModEnvBiasPatch::PatchToLFO1Gain) \
	op(ESynthModEnvBiasPatch::PatchToLFO2Gain) \
	op(ESynthModEnvBiasPatch::PatchToLFO1Freq) \
	op(ESynthModEnvBiasPatch::PatchToLFO2Freq) \
	op(ESynthModEnvBiasPatch::Count) 

enum class ESynthModEnvBiasPatch : uint8;
template<> struct TIsUEnumClass<ESynthModEnvBiasPatch> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynthModEnvBiasPatch>();
// ********** End Enum ESynthModEnvBiasPatch *******************************************************

// ********** Begin Enum ESynthFilterType **********************************************************
#define FOREACH_ENUM_ESYNTHFILTERTYPE(op) \
	op(ESynthFilterType::LowPass) \
	op(ESynthFilterType::HighPass) \
	op(ESynthFilterType::BandPass) \
	op(ESynthFilterType::BandStop) \
	op(ESynthFilterType::Count) 

enum class ESynthFilterType : uint8;
template<> struct TIsUEnumClass<ESynthFilterType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynthFilterType>();
// ********** End Enum ESynthFilterType ************************************************************

// ********** Begin Enum ESynthFilterAlgorithm *****************************************************
#define FOREACH_ENUM_ESYNTHFILTERALGORITHM(op) \
	op(ESynthFilterAlgorithm::OnePole) \
	op(ESynthFilterAlgorithm::StateVariable) \
	op(ESynthFilterAlgorithm::Ladder) \
	op(ESynthFilterAlgorithm::Count) 

enum class ESynthFilterAlgorithm : uint8;
template<> struct TIsUEnumClass<ESynthFilterAlgorithm> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynthFilterAlgorithm>();
// ********** End Enum ESynthFilterAlgorithm *******************************************************

// ********** Begin Enum ESynthStereoDelayMode *****************************************************
#define FOREACH_ENUM_ESYNTHSTEREODELAYMODE(op) \
	op(ESynthStereoDelayMode::Normal) \
	op(ESynthStereoDelayMode::Cross) \
	op(ESynthStereoDelayMode::PingPong) \
	op(ESynthStereoDelayMode::Count) 

enum class ESynthStereoDelayMode : uint8;
template<> struct TIsUEnumClass<ESynthStereoDelayMode> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynthStereoDelayMode>();
// ********** End Enum ESynthStereoDelayMode *******************************************************

// ********** Begin Enum ESynth1PatchSource ********************************************************
#define FOREACH_ENUM_ESYNTH1PATCHSOURCE(op) \
	op(ESynth1PatchSource::LFO1) \
	op(ESynth1PatchSource::LFO2) \
	op(ESynth1PatchSource::Envelope) \
	op(ESynth1PatchSource::BiasEnvelope) \
	op(ESynth1PatchSource::Count) 

enum class ESynth1PatchSource : uint8;
template<> struct TIsUEnumClass<ESynth1PatchSource> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynth1PatchSource>();
// ********** End Enum ESynth1PatchSource **********************************************************

// ********** Begin Enum ESynth1PatchDestination ***************************************************
#define FOREACH_ENUM_ESYNTH1PATCHDESTINATION(op) \
	op(ESynth1PatchDestination::Osc1Gain) \
	op(ESynth1PatchDestination::Osc1Frequency) \
	op(ESynth1PatchDestination::Osc1Pulsewidth) \
	op(ESynth1PatchDestination::Osc2Gain) \
	op(ESynth1PatchDestination::Osc2Frequency) \
	op(ESynth1PatchDestination::Osc2Pulsewidth) \
	op(ESynth1PatchDestination::FilterFrequency) \
	op(ESynth1PatchDestination::FilterQ) \
	op(ESynth1PatchDestination::Gain) \
	op(ESynth1PatchDestination::Pan) \
	op(ESynth1PatchDestination::LFO1Frequency) \
	op(ESynth1PatchDestination::LFO1Gain) \
	op(ESynth1PatchDestination::LFO2Frequency) \
	op(ESynth1PatchDestination::LFO2Gain) \
	op(ESynth1PatchDestination::Count) 

enum class ESynth1PatchDestination : uint8;
template<> struct TIsUEnumClass<ESynth1PatchDestination> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynth1PatchDestination>();
// ********** End Enum ESynth1PatchDestination *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
