// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/Effects/Settings/DelaySettings.h"

#ifdef HARMONIXDSP_DelaySettings_generated_h
#error "DelaySettings.generated.h already included, missing '#pragma once' in DelaySettings.h"
#endif
#define HARMONIXDSP_DelaySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDelaySettings ****************************************************
struct Z_Construct_UScriptStruct_FDelaySettings_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_DelaySettings_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDelaySettings_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FDelaySettings;
// ********** End ScriptStruct FDelaySettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_Effects_Settings_DelaySettings_h

// ********** Begin Enum EDelayStereoType **********************************************************
#define FOREACH_ENUM_EDELAYSTEREOTYPE(op) \
	op(EDelayStereoType::Default) \
	op(EDelayStereoType::CustomSpread) \
	op(EDelayStereoType::PingPongForceLR) \
	op(EDelayStereoType::PingPongSum) \
	op(EDelayStereoType::PingPongIndividual) \
	op(EDelayStereoType::Num) 

enum class EDelayStereoType : uint8;
template<> struct TIsUEnumClass<EDelayStereoType> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EDelayStereoType>();
// ********** End Enum EDelayStereoType ************************************************************

// ********** Begin Enum EDelayFilterType **********************************************************
#define FOREACH_ENUM_EDELAYFILTERTYPE(op) \
	op(EDelayFilterType::LowPass) \
	op(EDelayFilterType::HighPass) \
	op(EDelayFilterType::BandPass) \
	op(EDelayFilterType::Num) 

enum class EDelayFilterType : uint8;
template<> struct TIsUEnumClass<EDelayFilterType> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EDelayFilterType>();
// ********** End Enum EDelayFilterType ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
