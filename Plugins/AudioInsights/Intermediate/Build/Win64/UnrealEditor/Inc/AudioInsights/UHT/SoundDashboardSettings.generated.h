// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/SoundDashboardSettings.h"

#ifdef AUDIOINSIGHTS_SoundDashboardSettings_generated_h
#error "SoundDashboardSettings.generated.h already included, missing '#pragma once' in SoundDashboardSettings.h"
#endif
#define AUDIOINSIGHTS_SoundDashboardSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundDashboardVisibleColumns *************************************
struct Z_Construct_UScriptStruct_FSoundDashboardVisibleColumns_Statics;
#define FID_Engine_Plugins_AudioInsights_Source_AudioInsights_Public_Settings_SoundDashboardSettings_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundDashboardVisibleColumns_Statics; \
	AUDIOINSIGHTS_API static class UScriptStruct* StaticStruct(); \
	typedef FVisibleColumnsSettings Super;


struct FSoundDashboardVisibleColumns;
// ********** End ScriptStruct FSoundDashboardVisibleColumns ***************************************

// ********** Begin ScriptStruct FSoundPlotsDashboardPlotRanges ************************************
struct Z_Construct_UScriptStruct_FSoundPlotsDashboardPlotRanges_Statics;
#define FID_Engine_Plugins_AudioInsights_Source_AudioInsights_Public_Settings_SoundDashboardSettings_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundPlotsDashboardPlotRanges_Statics; \
	AUDIOINSIGHTS_API static class UScriptStruct* StaticStruct();


struct FSoundPlotsDashboardPlotRanges;
// ********** End ScriptStruct FSoundPlotsDashboardPlotRanges **************************************

// ********** Begin ScriptStruct FSoundDashboardSettings *******************************************
struct Z_Construct_UScriptStruct_FSoundDashboardSettings_Statics;
#define FID_Engine_Plugins_AudioInsights_Source_AudioInsights_Public_Settings_SoundDashboardSettings_h_193_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundDashboardSettings_Statics; \
	AUDIOINSIGHTS_API static class UScriptStruct* StaticStruct();


struct FSoundDashboardSettings;
// ********** End ScriptStruct FSoundDashboardSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioInsights_Source_AudioInsights_Public_Settings_SoundDashboardSettings_h

// ********** Begin Enum EAudioAmplitudeDisplayMode ************************************************
#define FOREACH_ENUM_EAUDIOAMPLITUDEDISPLAYMODE(op) \
	op(EAudioAmplitudeDisplayMode::Decibels) \
	op(EAudioAmplitudeDisplayMode::Linear) 

enum class EAudioAmplitudeDisplayMode : uint8;
template<> struct TIsUEnumClass<EAudioAmplitudeDisplayMode> { enum { Value = true }; };
template<> AUDIOINSIGHTS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioAmplitudeDisplayMode>();
// ********** End Enum EAudioAmplitudeDisplayMode **************************************************

// ********** Begin Enum ESoundDashboardTreeViewingOptions *****************************************
#define FOREACH_ENUM_ESOUNDDASHBOARDTREEVIEWINGOPTIONS(op) \
	op(ESoundDashboardTreeViewingOptions::FullTree) \
	op(ESoundDashboardTreeViewingOptions::ActiveSounds) \
	op(ESoundDashboardTreeViewingOptions::FlatList) 

enum class ESoundDashboardTreeViewingOptions : uint8;
template<> struct TIsUEnumClass<ESoundDashboardTreeViewingOptions> { enum { Value = true }; };
template<> AUDIOINSIGHTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundDashboardTreeViewingOptions>();
// ********** End Enum ESoundDashboardTreeViewingOptions *******************************************

// ********** Begin Enum ESoundDashboardAutoExpandOptions ******************************************
#define FOREACH_ENUM_ESOUNDDASHBOARDAUTOEXPANDOPTIONS(op) \
	op(ESoundDashboardAutoExpandOptions::Categories) \
	op(ESoundDashboardAutoExpandOptions::Everything) \
	op(ESoundDashboardAutoExpandOptions::Nothing) 

enum class ESoundDashboardAutoExpandOptions : uint8;
template<> struct TIsUEnumClass<ESoundDashboardAutoExpandOptions> { enum { Value = true }; };
template<> AUDIOINSIGHTS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundDashboardAutoExpandOptions>();
// ********** End Enum ESoundDashboardAutoExpandOptions ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
