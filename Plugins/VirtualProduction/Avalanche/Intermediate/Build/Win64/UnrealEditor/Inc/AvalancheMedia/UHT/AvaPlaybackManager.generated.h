// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/AvaPlaybackManager.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackManager_generated_h
#error "AvaPlaybackManager.generated.h already included, missing '#pragma once' in AvaPlaybackManager.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackManager_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackManager_h

// ********** Begin Enum EAvaPlaybackPackageEventFlags *********************************************
#define FOREACH_ENUM_EAVAPLAYBACKPACKAGEEVENTFLAGS(op) \
	op(EAvaPlaybackPackageEventFlags::None) \
	op(EAvaPlaybackPackageEventFlags::External) \
	op(EAvaPlaybackPackageEventFlags::Saved) \
	op(EAvaPlaybackPackageEventFlags::AssetDeleted) \
	op(EAvaPlaybackPackageEventFlags::All) 

enum class EAvaPlaybackPackageEventFlags : uint8;
template<> struct TIsUEnumClass<EAvaPlaybackPackageEventFlags> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlaybackPackageEventFlags>();
// ********** End Enum EAvaPlaybackPackageEventFlags ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
