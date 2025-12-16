// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/MusicSeekRequest.h"

#ifdef HARMONIXMETASOUND_MusicSeekRequest_generated_h
#error "MusicSeekRequest.generated.h already included, missing '#pragma once' in MusicSeekRequest.h"
#endif
#define HARMONIXMETASOUND_MusicSeekRequest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMusicSeekTarget **************************************************
struct Z_Construct_UScriptStruct_FMusicSeekTarget_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicSeekRequest_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMusicSeekTarget_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FMusicSeekTarget;
// ********** End ScriptStruct FMusicSeekTarget ****************************************************

// ********** Begin ScriptStruct FMusicSeekRequest *************************************************
struct Z_Construct_UScriptStruct_FMusicSeekRequest_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicSeekRequest_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMusicSeekRequest_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FMusicSeekRequest;
// ********** End ScriptStruct FMusicSeekRequest ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MusicSeekRequest_h

// ********** Begin Enum ESeekPointType ************************************************************
#define FOREACH_ENUM_ESEEKPOINTTYPE(op) \
	op(ESeekPointType::BarBeat) \
	op(ESeekPointType::Millisecond) 

enum class ESeekPointType : uint8;
template<> struct TIsUEnumClass<ESeekPointType> { enum { Value = true }; };
template<> HARMONIXMETASOUND_NON_ATTRIBUTED_API UEnum* StaticEnum<ESeekPointType>();
// ********** End Enum ESeekPointType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
