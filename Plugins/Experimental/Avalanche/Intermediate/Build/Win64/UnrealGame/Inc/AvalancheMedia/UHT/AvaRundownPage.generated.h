// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rundown/AvaRundownPage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaRundownPage_generated_h
#error "AvaRundownPage.generated.h already included, missing '#pragma once' in AvaRundownPage.h"
#endif
#define AVALANCHEMEDIA_AvaRundownPage_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundownPage_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaRundownChannelPageStatus_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMEDIA_API UScriptStruct* StaticStruct<struct FAvaRundownChannelPageStatus>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundownPage_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaRundownPage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AVALANCHEMEDIA_API UScriptStruct* StaticStruct<struct FAvaRundownPage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Rundown_AvaRundownPage_h


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
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaRundownPageStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
