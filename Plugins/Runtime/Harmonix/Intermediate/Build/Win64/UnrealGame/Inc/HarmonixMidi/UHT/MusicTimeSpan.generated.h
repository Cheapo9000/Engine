// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMidi/MusicTimeSpan.h"

#ifdef HARMONIXMIDI_MusicTimeSpan_generated_h
#error "MusicTimeSpan.generated.h already included, missing '#pragma once' in MusicTimeSpan.h"
#endif
#define HARMONIXMIDI_MusicTimeSpan_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMusicalTimeSpan **************************************************
struct Z_Construct_UScriptStruct_FMusicalTimeSpan_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MusicTimeSpan_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMusicalTimeSpan_Statics; \
	HARMONIXMIDI_API static class UScriptStruct* StaticStruct();


struct FMusicalTimeSpan;
// ********** End ScriptStruct FMusicalTimeSpan ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MusicTimeSpan_h

// ********** Begin Enum EMusicTimeSpanOffsetUnits *************************************************
#define FOREACH_ENUM_EMUSICTIMESPANOFFSETUNITS(op) \
	op(EMusicTimeSpanOffsetUnits::Ms) \
	op(EMusicTimeSpanOffsetUnits::Bars) \
	op(EMusicTimeSpanOffsetUnits::Beats) \
	op(EMusicTimeSpanOffsetUnits::ThirtySecondNotes) \
	op(EMusicTimeSpanOffsetUnits::SixteenthNotes) \
	op(EMusicTimeSpanOffsetUnits::EighthNotes) \
	op(EMusicTimeSpanOffsetUnits::QuarterNotes) \
	op(EMusicTimeSpanOffsetUnits::HalfNotes) \
	op(EMusicTimeSpanOffsetUnits::WholeNotes) \
	op(EMusicTimeSpanOffsetUnits::DottedSixteenthNotes) \
	op(EMusicTimeSpanOffsetUnits::DottedEighthNotes) \
	op(EMusicTimeSpanOffsetUnits::DottedQuarterNotes) \
	op(EMusicTimeSpanOffsetUnits::DottedHalfNotes) \
	op(EMusicTimeSpanOffsetUnits::DottedWholeNotes) \
	op(EMusicTimeSpanOffsetUnits::SixteenthNoteTriplets) \
	op(EMusicTimeSpanOffsetUnits::EighthNoteTriplets) \
	op(EMusicTimeSpanOffsetUnits::QuarterNoteTriplets) \
	op(EMusicTimeSpanOffsetUnits::HalfNoteTriplets) 

enum class EMusicTimeSpanOffsetUnits : uint8;
template<> struct TIsUEnumClass<EMusicTimeSpanOffsetUnits> { enum { Value = true }; };
template<> HARMONIXMIDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicTimeSpanOffsetUnits>();
// ********** End Enum EMusicTimeSpanOffsetUnits ***************************************************

// ********** Begin Enum EMusicTimeSpanLengthUnits *************************************************
#define FOREACH_ENUM_EMUSICTIMESPANLENGTHUNITS(op) \
	op(EMusicTimeSpanLengthUnits::Bars) \
	op(EMusicTimeSpanLengthUnits::Beats) \
	op(EMusicTimeSpanLengthUnits::ThirtySecondNotes) \
	op(EMusicTimeSpanLengthUnits::SixteenthNotes) \
	op(EMusicTimeSpanLengthUnits::EighthNotes) \
	op(EMusicTimeSpanLengthUnits::QuarterNotes) \
	op(EMusicTimeSpanLengthUnits::HalfNotes) \
	op(EMusicTimeSpanLengthUnits::WholeNotes) \
	op(EMusicTimeSpanLengthUnits::DottedSixteenthNotes) \
	op(EMusicTimeSpanLengthUnits::DottedEighthNotes) \
	op(EMusicTimeSpanLengthUnits::DottedQuarterNotes) \
	op(EMusicTimeSpanLengthUnits::DottedHalfNotes) \
	op(EMusicTimeSpanLengthUnits::DottedWholeNotes) \
	op(EMusicTimeSpanLengthUnits::SixteenthNoteTriplets) \
	op(EMusicTimeSpanLengthUnits::EighthNoteTriplets) \
	op(EMusicTimeSpanLengthUnits::QuarterNoteTriplets) \
	op(EMusicTimeSpanLengthUnits::HalfNoteTriplets) 

enum class EMusicTimeSpanLengthUnits : uint8;
template<> struct TIsUEnumClass<EMusicTimeSpanLengthUnits> { enum { Value = true }; };
template<> HARMONIXMIDI_NON_ATTRIBUTED_API UEnum* StaticEnum<EMusicTimeSpanLengthUnits>();
// ********** End Enum EMusicTimeSpanLengthUnits ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
