// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/AvaPlaybackDefines.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaPlaybackDefines_generated_h
#error "AvaPlaybackDefines.generated.h already included, missing '#pragma once' in AvaPlaybackDefines.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackDefines_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackDefines_h


#define FOREACH_ENUM_EAVAPLAYBACKACTION(op) \
	op(EAvaPlaybackAction::None) \
	op(EAvaPlaybackAction::Load) \
	op(EAvaPlaybackAction::Start) \
	op(EAvaPlaybackAction::Stop) \
	op(EAvaPlaybackAction::Unload) \
	op(EAvaPlaybackAction::Status) \
	op(EAvaPlaybackAction::SetUserData) \
	op(EAvaPlaybackAction::GetUserData) 

enum class EAvaPlaybackAction;
template<> struct TIsUEnumClass<EAvaPlaybackAction> { enum { Value = true }; };
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaPlaybackAction>();

#define FOREACH_ENUM_EAVAPLAYBACKANIMACTION(op) \
	op(EAvaPlaybackAnimAction::None) \
	op(EAvaPlaybackAnimAction::Play) \
	op(EAvaPlaybackAnimAction::Continue) \
	op(EAvaPlaybackAnimAction::Stop) \
	op(EAvaPlaybackAnimAction::PreviewFrame) \
	op(EAvaPlaybackAnimAction::CameraCut) 

enum class EAvaPlaybackAnimAction;
template<> struct TIsUEnumClass<EAvaPlaybackAnimAction> { enum { Value = true }; };
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaPlaybackAnimAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
