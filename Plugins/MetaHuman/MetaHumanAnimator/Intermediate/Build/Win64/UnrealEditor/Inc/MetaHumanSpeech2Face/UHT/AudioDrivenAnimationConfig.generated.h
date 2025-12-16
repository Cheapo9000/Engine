// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioDrivenAnimationConfig.h"

#ifdef METAHUMANSPEECH2FACE_AudioDrivenAnimationConfig_generated_h
#error "AudioDrivenAnimationConfig.generated.h already included, missing '#pragma once' in AudioDrivenAnimationConfig.h"
#endif
#define METAHUMANSPEECH2FACE_AudioDrivenAnimationConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAudioDrivenAnimationModels ***************************************
struct Z_Construct_UScriptStruct_FAudioDrivenAnimationModels_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanSpeech2Face_Public_AudioDrivenAnimationConfig_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioDrivenAnimationModels_Statics; \
	METAHUMANSPEECH2FACE_API static class UScriptStruct* StaticStruct();


struct FAudioDrivenAnimationModels;
// ********** End ScriptStruct FAudioDrivenAnimationModels *****************************************

// ********** Begin ScriptStruct FAudioDrivenAnimationSolveOverrides *******************************
struct Z_Construct_UScriptStruct_FAudioDrivenAnimationSolveOverrides_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanSpeech2Face_Public_AudioDrivenAnimationConfig_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioDrivenAnimationSolveOverrides_Statics; \
	METAHUMANSPEECH2FACE_API static class UScriptStruct* StaticStruct();


struct FAudioDrivenAnimationSolveOverrides;
// ********** End ScriptStruct FAudioDrivenAnimationSolveOverrides *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanAnimator_Source_MetaHumanSpeech2Face_Public_AudioDrivenAnimationConfig_h

// ********** Begin Enum EAudioDrivenAnimationOutputControls ***************************************
#define FOREACH_ENUM_EAUDIODRIVENANIMATIONOUTPUTCONTROLS(op) \
	op(EAudioDrivenAnimationOutputControls::FullFace) \
	op(EAudioDrivenAnimationOutputControls::MouthOnly) 

enum class EAudioDrivenAnimationOutputControls : uint8;
template<> struct TIsUEnumClass<EAudioDrivenAnimationOutputControls> { enum { Value = true }; };
template<> METAHUMANSPEECH2FACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioDrivenAnimationOutputControls>();
// ********** End Enum EAudioDrivenAnimationOutputControls *****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
