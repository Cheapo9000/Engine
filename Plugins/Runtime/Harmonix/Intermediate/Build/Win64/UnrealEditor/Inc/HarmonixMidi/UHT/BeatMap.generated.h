// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMidi/BeatMap.h"

#ifdef HARMONIXMIDI_BeatMap_generated_h
#error "BeatMap.generated.h already included, missing '#pragma once' in BeatMap.h"
#endif
#define HARMONIXMIDI_BeatMap_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBeatMapPoint *****************************************************
struct Z_Construct_UScriptStruct_FBeatMapPoint_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_BeatMap_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBeatMapPoint_Statics; \
	HARMONIXMIDI_API static class UScriptStruct* StaticStruct(); \
	typedef FMusicMapTimespanBase Super;


struct FBeatMapPoint;
// ********** End ScriptStruct FBeatMapPoint *******************************************************

// ********** Begin ScriptStruct FPulseBar *********************************************************
struct Z_Construct_UScriptStruct_FPulseBar_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_BeatMap_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPulseBar_Statics; \
	HARMONIXMIDI_API static class UScriptStruct* StaticStruct();


struct FPulseBar;
// ********** End ScriptStruct FPulseBar ***********************************************************

// ********** Begin ScriptStruct FBeatMap **********************************************************
struct Z_Construct_UScriptStruct_FBeatMap_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_BeatMap_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBeatMap_Statics; \
	HARMONIXMIDI_API static class UScriptStruct* StaticStruct();


struct FBeatMap;
// ********** End ScriptStruct FBeatMap ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_BeatMap_h

// ********** Begin Enum EMusicalBeatType **********************************************************
#define FOREACH_ENUM_EMUSICALBEATTYPE(op) \
	op(EMusicalBeatType::Downbeat) \
	op(EMusicalBeatType::Strong) \
	op(EMusicalBeatType::Normal) 

enum class EMusicalBeatType : uint8;
template<> struct TIsUEnumClass<EMusicalBeatType> { enum { Value = true }; };
template<> HARMONIXMIDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicalBeatType>();
// ********** End Enum EMusicalBeatType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
