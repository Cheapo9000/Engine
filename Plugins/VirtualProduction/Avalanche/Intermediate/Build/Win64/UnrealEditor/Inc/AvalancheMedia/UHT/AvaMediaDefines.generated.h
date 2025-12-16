// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaMediaDefines.h"

#ifdef AVALANCHEMEDIA_AvaMediaDefines_generated_h
#error "AvaMediaDefines.generated.h already included, missing '#pragma once' in AvaMediaDefines.h"
#endif
#define AVALANCHEMEDIA_AvaMediaDefines_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaRundownPageListReference **************************************
struct Z_Construct_UScriptStruct_FAvaRundownPageListReference_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaDefines_h_360_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaRundownPageListReference_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaRundownPageListReference;
// ********** End ScriptStruct FAvaRundownPageListReference ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_AvaMediaDefines_h

// ********** Begin Enum EAvaBroadcastChannelState *************************************************
#define FOREACH_ENUM_EAVABROADCASTCHANNELSTATE(op) \
	op(EAvaBroadcastChannelState::Offline) \
	op(EAvaBroadcastChannelState::Idle) \
	op(EAvaBroadcastChannelState::Live) \
	op(EAvaBroadcastChannelState::Max) 

enum class EAvaBroadcastChannelState : uint8;
template<> struct TIsUEnumClass<EAvaBroadcastChannelState> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaBroadcastChannelState>();
// ********** End Enum EAvaBroadcastChannelState ***************************************************

// ********** Begin Enum EAvaBroadcastChannelType **************************************************
#define FOREACH_ENUM_EAVABROADCASTCHANNELTYPE(op) \
	op(EAvaBroadcastChannelType::Program) \
	op(EAvaBroadcastChannelType::Preview) 

enum class EAvaBroadcastChannelType : uint8;
template<> struct TIsUEnumClass<EAvaBroadcastChannelType> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaBroadcastChannelType>();
// ********** End Enum EAvaBroadcastChannelType ****************************************************

// ********** Begin Enum EAvaBroadcastOutputState **************************************************
#define FOREACH_ENUM_EAVABROADCASTOUTPUTSTATE(op) \
	op(EAvaBroadcastOutputState::Invalid) \
	op(EAvaBroadcastOutputState::Offline) \
	op(EAvaBroadcastOutputState::Idle) \
	op(EAvaBroadcastOutputState::Preparing) \
	op(EAvaBroadcastOutputState::Live) \
	op(EAvaBroadcastOutputState::Error) 

enum class EAvaBroadcastOutputState : uint8;
template<> struct TIsUEnumClass<EAvaBroadcastOutputState> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaBroadcastOutputState>();
// ********** End Enum EAvaBroadcastOutputState ****************************************************

// ********** Begin Enum EAvaBroadcastIssueSeverity ************************************************
#define FOREACH_ENUM_EAVABROADCASTISSUESEVERITY(op) \
	op(EAvaBroadcastIssueSeverity::None) \
	op(EAvaBroadcastIssueSeverity::Warnings) \
	op(EAvaBroadcastIssueSeverity::Errors) \
	op(EAvaBroadcastIssueSeverity::Max) 

enum class EAvaBroadcastIssueSeverity : uint8;
template<> struct TIsUEnumClass<EAvaBroadcastIssueSeverity> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaBroadcastIssueSeverity>();
// ********** End Enum EAvaBroadcastIssueSeverity **************************************************

// ********** Begin Enum EAvaBroadcastOutputOverrunAction ******************************************
#define FOREACH_ENUM_EAVABROADCASTOUTPUTOVERRUNACTION(op) \
	op(EAvaBroadcastOutputOverrunAction::Flush) \
	op(EAvaBroadcastOutputOverrunAction::Skip) 

enum class EAvaBroadcastOutputOverrunAction : uint8;
template<> struct TIsUEnumClass<EAvaBroadcastOutputOverrunAction> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaBroadcastOutputOverrunAction>();
// ********** End Enum EAvaBroadcastOutputOverrunAction ********************************************

// ********** Begin Enum EAvaPlayableStatus ********************************************************
#define FOREACH_ENUM_EAVAPLAYABLESTATUS(op) \
	op(EAvaPlayableStatus::Unknown) \
	op(EAvaPlayableStatus::Error) \
	op(EAvaPlayableStatus::Unloaded) \
	op(EAvaPlayableStatus::Loading) \
	op(EAvaPlayableStatus::Loaded) \
	op(EAvaPlayableStatus::Visible) 

enum class EAvaPlayableStatus : uint8;
template<> struct TIsUEnumClass<EAvaPlayableStatus> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlayableStatus>();
// ********** End Enum EAvaPlayableStatus **********************************************************

// ********** Begin Enum EAvaPlayableSequenceEventType *********************************************
#define FOREACH_ENUM_EAVAPLAYABLESEQUENCEEVENTTYPE(op) \
	op(EAvaPlayableSequenceEventType::None) \
	op(EAvaPlayableSequenceEventType::Started) \
	op(EAvaPlayableSequenceEventType::Paused) \
	op(EAvaPlayableSequenceEventType::Finished) 

enum class EAvaPlayableSequenceEventType : uint8;
template<> struct TIsUEnumClass<EAvaPlayableSequenceEventType> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlayableSequenceEventType>();
// ********** End Enum EAvaPlayableSequenceEventType ***********************************************

// ********** Begin Enum EAvaPlayableRCUpdateFlags *************************************************
#define FOREACH_ENUM_EAVAPLAYABLERCUPDATEFLAGS(op) \
	op(EAvaPlayableRCUpdateFlags::None) \
	op(EAvaPlayableRCUpdateFlags::ExecuteControllerBehaviors) \
	op(EAvaPlayableRCUpdateFlags::ControllerValuesAsEvents) 

enum class EAvaPlayableRCUpdateFlags : uint8;
template<> struct TIsUEnumClass<EAvaPlayableRCUpdateFlags> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlayableRCUpdateFlags>();
// ********** End Enum EAvaPlayableRCUpdateFlags ***************************************************

// ********** Begin Enum EAvaPlaybackAssetStatus ***************************************************
#define FOREACH_ENUM_EAVAPLAYBACKASSETSTATUS(op) \
	op(EAvaPlaybackAssetStatus::Unknown) \
	op(EAvaPlaybackAssetStatus::Missing) \
	op(EAvaPlaybackAssetStatus::MissingDependencies) \
	op(EAvaPlaybackAssetStatus::NeedsSync) \
	op(EAvaPlaybackAssetStatus::Available) 

enum class EAvaPlaybackAssetStatus;
template<> struct TIsUEnumClass<EAvaPlaybackAssetStatus> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlaybackAssetStatus>();
// ********** End Enum EAvaPlaybackAssetStatus *****************************************************

// ********** Begin Enum EAvaPlaybackStatus ********************************************************
#define FOREACH_ENUM_EAVAPLAYBACKSTATUS(op) \
	op(EAvaPlaybackStatus::Unknown) \
	op(EAvaPlaybackStatus::Missing) \
	op(EAvaPlaybackStatus::Syncing) \
	op(EAvaPlaybackStatus::Available) \
	op(EAvaPlaybackStatus::Loading) \
	op(EAvaPlaybackStatus::Loaded) \
	op(EAvaPlaybackStatus::Starting) \
	op(EAvaPlaybackStatus::Started) \
	op(EAvaPlaybackStatus::Stopping) \
	op(EAvaPlaybackStatus::Unloading) \
	op(EAvaPlaybackStatus::Error) 

enum class EAvaPlaybackStatus;
template<> struct TIsUEnumClass<EAvaPlaybackStatus> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlaybackStatus>();
// ********** End Enum EAvaPlaybackStatus **********************************************************

// ********** Begin Enum EAvaRundownPageListType ***************************************************
#define FOREACH_ENUM_EAVARUNDOWNPAGELISTTYPE(op) \
	op(EAvaRundownPageListType::Template) \
	op(EAvaRundownPageListType::Instance) \
	op(EAvaRundownPageListType::View) 

enum class EAvaRundownPageListType : uint8;
template<> struct TIsUEnumClass<EAvaRundownPageListType> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaRundownPageListType>();
// ********** End Enum EAvaRundownPageListType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
