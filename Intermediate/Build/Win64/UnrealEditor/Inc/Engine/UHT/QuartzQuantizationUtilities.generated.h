// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/QuartzQuantizationUtilities.h"

#ifdef ENGINE_QuartzQuantizationUtilities_generated_h
#error "QuartzQuantizationUtilities.generated.h already included, missing '#pragma once' in QuartzQuantizationUtilities.h"
#endif
#define ENGINE_QuartzQuantizationUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EQuartzCommandDelegateSubType : uint8;
enum class EQuartzCommandQuantization : uint8;

// ********** Begin ScriptStruct FQuartzPulseOverrideStep ******************************************
struct Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FQuartzPulseOverrideStep;
// ********** End ScriptStruct FQuartzPulseOverrideStep ********************************************

// ********** Begin ScriptStruct FQuartzTimeSignature **********************************************
struct Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FQuartzTimeSignature;
// ********** End ScriptStruct FQuartzTimeSignature ************************************************

// ********** Begin ScriptStruct FQuartzTransportTimeStamp *****************************************
struct Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_143_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FQuartzTransportTimeStamp;
// ********** End ScriptStruct FQuartzTransportTimeStamp *******************************************

// ********** Begin Delegate FOnQuartzMetronomeEvent ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_218_DELEGATE \
ENGINE_API void FOnQuartzMetronomeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnQuartzMetronomeEvent, FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction);


// ********** End Delegate FOnQuartzMetronomeEvent *************************************************

// ********** Begin Delegate FOnQuartzMetronomeEventBP *********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_219_DELEGATE \
ENGINE_API void FOnQuartzMetronomeEventBP_DelegateWrapper(const FScriptDelegate& OnQuartzMetronomeEventBP, FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction);


// ********** End Delegate FOnQuartzMetronomeEventBP ***********************************************

// ********** Begin Delegate FOnQuartzCommandEvent *************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_221_DELEGATE \
ENGINE_API void FOnQuartzCommandEvent_DelegateWrapper(const FMulticastScriptDelegate& OnQuartzCommandEvent, EQuartzCommandDelegateSubType EventType, FName Name);


// ********** End Delegate FOnQuartzCommandEvent ***************************************************

// ********** Begin Delegate FOnQuartzCommandEventBP ***********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_222_DELEGATE \
ENGINE_API void FOnQuartzCommandEventBP_DelegateWrapper(const FScriptDelegate& OnQuartzCommandEventBP, EQuartzCommandDelegateSubType EventType, FName Name);


// ********** End Delegate FOnQuartzCommandEventBP *************************************************

// ********** Begin ScriptStruct FQuartzClockSettings **********************************************
struct Z_Construct_UScriptStruct_FQuartzClockSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_228_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQuartzClockSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FQuartzClockSettings;
// ********** End ScriptStruct FQuartzClockSettings ************************************************

// ********** Begin ScriptStruct FQuartzQuantizationBoundary ***************************************
struct Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_490_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FQuartzQuantizationBoundary;
// ********** End ScriptStruct FQuartzQuantizationBoundary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h

// ********** Begin Enum EQuartzCommandQuantization ************************************************
#define FOREACH_ENUM_EQUARTZCOMMANDQUANTIZATION(op) \
	op(EQuartzCommandQuantization::Bar) \
	op(EQuartzCommandQuantization::Beat) \
	op(EQuartzCommandQuantization::ThirtySecondNote) \
	op(EQuartzCommandQuantization::SixteenthNote) \
	op(EQuartzCommandQuantization::EighthNote) \
	op(EQuartzCommandQuantization::QuarterNote) \
	op(EQuartzCommandQuantization::HalfNote) \
	op(EQuartzCommandQuantization::WholeNote) \
	op(EQuartzCommandQuantization::DottedSixteenthNote) \
	op(EQuartzCommandQuantization::DottedEighthNote) \
	op(EQuartzCommandQuantization::DottedQuarterNote) \
	op(EQuartzCommandQuantization::DottedHalfNote) \
	op(EQuartzCommandQuantization::DottedWholeNote) \
	op(EQuartzCommandQuantization::SixteenthNoteTriplet) \
	op(EQuartzCommandQuantization::EighthNoteTriplet) \
	op(EQuartzCommandQuantization::QuarterNoteTriplet) \
	op(EQuartzCommandQuantization::HalfNoteTriplet) \
	op(EQuartzCommandQuantization::Tick) \
	op(EQuartzCommandQuantization::Count) \
	op(EQuartzCommandQuantization::None) 

enum class EQuartzCommandQuantization : uint8;
template<> struct TIsUEnumClass<EQuartzCommandQuantization> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EQuartzCommandQuantization>();
// ********** End Enum EQuartzCommandQuantization **************************************************

// ********** Begin Enum EQuartzTimeSignatureQuantization ******************************************
#define FOREACH_ENUM_EQUARTZTIMESIGNATUREQUANTIZATION(op) \
	op(EQuartzTimeSignatureQuantization::HalfNote) \
	op(EQuartzTimeSignatureQuantization::QuarterNote) \
	op(EQuartzTimeSignatureQuantization::EighthNote) \
	op(EQuartzTimeSignatureQuantization::SixteenthNote) \
	op(EQuartzTimeSignatureQuantization::ThirtySecondNote) \
	op(EQuartzTimeSignatureQuantization::Count) 

enum class EQuartzTimeSignatureQuantization : uint8;
template<> struct TIsUEnumClass<EQuartzTimeSignatureQuantization> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EQuartzTimeSignatureQuantization>();
// ********** End Enum EQuartzTimeSignatureQuantization ********************************************

// ********** Begin Enum EQuartzDelegateType *******************************************************
#define FOREACH_ENUM_EQUARTZDELEGATETYPE(op) \
	op(EQuartzDelegateType::MetronomeTick) \
	op(EQuartzDelegateType::CommandEvent) \
	op(EQuartzDelegateType::Count) 

enum class EQuartzDelegateType : uint8;
template<> struct TIsUEnumClass<EQuartzDelegateType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EQuartzDelegateType>();
// ********** End Enum EQuartzDelegateType *********************************************************

// ********** Begin Enum EQuarztQuantizationReference **********************************************
#define FOREACH_ENUM_EQUARZTQUANTIZATIONREFERENCE(op) \
	op(EQuarztQuantizationReference::BarRelative) \
	op(EQuarztQuantizationReference::TransportRelative) \
	op(EQuarztQuantizationReference::CurrentTimeRelative) \
	op(EQuarztQuantizationReference::Count) 

enum class EQuarztQuantizationReference : uint8;
template<> struct TIsUEnumClass<EQuarztQuantizationReference> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EQuarztQuantizationReference>();
// ********** End Enum EQuarztQuantizationReference ************************************************

// ********** Begin Enum EQuartzCommandDelegateSubType *********************************************
#define FOREACH_ENUM_EQUARTZCOMMANDDELEGATESUBTYPE(op) \
	op(EQuartzCommandDelegateSubType::CommandOnFailedToQueue) \
	op(EQuartzCommandDelegateSubType::CommandOnQueued) \
	op(EQuartzCommandDelegateSubType::CommandOnCanceled) \
	op(EQuartzCommandDelegateSubType::CommandOnAboutToStart) \
	op(EQuartzCommandDelegateSubType::CommandOnStarted) \
	op(EQuartzCommandDelegateSubType::Count) 

enum class EQuartzCommandDelegateSubType : uint8;
template<> struct TIsUEnumClass<EQuartzCommandDelegateSubType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EQuartzCommandDelegateSubType>();
// ********** End Enum EQuartzCommandDelegateSubType ***********************************************

// ********** Begin Enum EQuartzCommandType ********************************************************
#define FOREACH_ENUM_EQUARTZCOMMANDTYPE(op) \
	op(EQuartzCommandType::PlaySound) \
	op(EQuartzCommandType::QueueSoundToPlay) \
	op(EQuartzCommandType::RetriggerSound) \
	op(EQuartzCommandType::TickRateChange) \
	op(EQuartzCommandType::TransportReset) \
	op(EQuartzCommandType::StartOtherClock) \
	op(EQuartzCommandType::Notify) \
	op(EQuartzCommandType::Custom) 

enum class EQuartzCommandType : uint8;
template<> struct TIsUEnumClass<EQuartzCommandType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EQuartzCommandType>();
// ********** End Enum EQuartzCommandType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
