// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMidi/SongMaps.h"

#ifdef HARMONIXMIDI_SongMaps_generated_h
#error "SongMaps.generated.h already included, missing '#pragma once' in SongMaps.h"
#endif
#define HARMONIXMIDI_SongMaps_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSongLengthData ***************************************************
struct Z_Construct_UScriptStruct_FSongLengthData_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_SongMaps_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSongLengthData_Statics; \
	HARMONIXMIDI_API static class UScriptStruct* StaticStruct();


struct FSongLengthData;
// ********** End ScriptStruct FSongLengthData *****************************************************

// ********** Begin ScriptStruct FSongMaps *********************************************************
struct Z_Construct_UScriptStruct_FSongMaps_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_SongMaps_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSongMaps_Statics; \
	HARMONIXMIDI_API static class UScriptStruct* StaticStruct();


struct FSongMaps;
// ********** End ScriptStruct FSongMaps ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_SongMaps_h

// ********** Begin Enum EMidiFileQuantizeDirection ************************************************
#define FOREACH_ENUM_EMIDIFILEQUANTIZEDIRECTION(op) \
	op(EMidiFileQuantizeDirection::Nearest) \
	op(EMidiFileQuantizeDirection::Up) \
	op(EMidiFileQuantizeDirection::Down) 

enum class EMidiFileQuantizeDirection : uint8;
template<> struct TIsUEnumClass<EMidiFileQuantizeDirection> { enum { Value = true }; };
template<> HARMONIXMIDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EMidiFileQuantizeDirection>();
// ********** End Enum EMidiFileQuantizeDirection **************************************************

// ********** Begin Enum EMidiClockSubdivisionQuantization *****************************************
#define FOREACH_ENUM_EMIDICLOCKSUBDIVISIONQUANTIZATION(op) \
	op(EMidiClockSubdivisionQuantization::Bar) \
	op(EMidiClockSubdivisionQuantization::Beat) \
	op(EMidiClockSubdivisionQuantization::ThirtySecondNote) \
	op(EMidiClockSubdivisionQuantization::SixteenthNote) \
	op(EMidiClockSubdivisionQuantization::EighthNote) \
	op(EMidiClockSubdivisionQuantization::QuarterNote) \
	op(EMidiClockSubdivisionQuantization::HalfNote) \
	op(EMidiClockSubdivisionQuantization::WholeNote) \
	op(EMidiClockSubdivisionQuantization::DottedSixteenthNote) \
	op(EMidiClockSubdivisionQuantization::DottedEighthNote) \
	op(EMidiClockSubdivisionQuantization::DottedQuarterNote) \
	op(EMidiClockSubdivisionQuantization::DottedHalfNote) \
	op(EMidiClockSubdivisionQuantization::DottedWholeNote) \
	op(EMidiClockSubdivisionQuantization::SixteenthNoteTriplet) \
	op(EMidiClockSubdivisionQuantization::EighthNoteTriplet) \
	op(EMidiClockSubdivisionQuantization::QuarterNoteTriplet) \
	op(EMidiClockSubdivisionQuantization::HalfNoteTriplet) \
	op(EMidiClockSubdivisionQuantization::None) 

enum class EMidiClockSubdivisionQuantization : uint8;
template<> struct TIsUEnumClass<EMidiClockSubdivisionQuantization> { enum { Value = true }; };
template<> HARMONIXMIDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EMidiClockSubdivisionQuantization>();
// ********** End Enum EMidiClockSubdivisionQuantization *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
