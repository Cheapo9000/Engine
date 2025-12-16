// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/AvaRundownPage.h"

#ifdef AVALANCHEMEDIA_AvaRundownPage_generated_h
#error "AvaRundownPage.generated.h already included, missing '#pragma once' in AvaRundownPage.h"
#endif
#define AVALANCHEMEDIA_AvaRundownPage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAvaRundownChannelPageStatus **************************************
struct Z_Construct_UScriptStruct_FAvaRundownChannelPageStatus_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundownPage_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaRundownChannelPageStatus_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaRundownChannelPageStatus;
// ********** End ScriptStruct FAvaRundownChannelPageStatus ****************************************

// ********** Begin ScriptStruct FAvaRundownPageCommandData ****************************************
struct Z_Construct_UScriptStruct_FAvaRundownPageCommandData_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundownPage_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaRundownPageCommandData_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaRundownPageCommandData;
// ********** End ScriptStruct FAvaRundownPageCommandData ******************************************

// ********** Begin ScriptStruct FAvaRundownPage ***************************************************
struct Z_Construct_UScriptStruct_FAvaRundownPage_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundownPage_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaRundownPage_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAvaRundownPage;
// ********** End ScriptStruct FAvaRundownPage *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundownPage_h

// ********** Begin Enum EAvaRundownPageStatus *****************************************************
#define FOREACH_ENUM_EAVARUNDOWNPAGESTATUS(op) \
	op(EAvaRundownPageStatus::Unknown) \
	op(EAvaRundownPageStatus::Offline) \
	op(EAvaRundownPageStatus::Missing) \
	op(EAvaRundownPageStatus::NeedsSync) \
	op(EAvaRundownPageStatus::Syncing) \
	op(EAvaRundownPageStatus::Available) \
	op(EAvaRundownPageStatus::Loading) \
	op(EAvaRundownPageStatus::Loaded) \
	op(EAvaRundownPageStatus::Playing) \
	op(EAvaRundownPageStatus::Previewing) \
	op(EAvaRundownPageStatus::Error) 

enum class EAvaRundownPageStatus : uint8;
template<> struct TIsUEnumClass<EAvaRundownPageStatus> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaRundownPageStatus>();
// ********** End Enum EAvaRundownPageStatus *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
