// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Broadcast/AvaBroadcastDefines.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaBroadcastDefines_generated_h
#error "AvaBroadcastDefines.generated.h already included, missing '#pragma once' in AvaBroadcastDefines.h"
#endif
#define AVALANCHEMEDIA_AvaBroadcastDefines_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastDefines_h


#define FOREACH_ENUM_EAVABROADCASTACTION(op) \
	op(EAvaBroadcastAction::None) \
	op(EAvaBroadcastAction::Start) \
	op(EAvaBroadcastAction::Stop) \
	op(EAvaBroadcastAction::UpdateConfig) \
	op(EAvaBroadcastAction::DeleteChannel) 

enum class EAvaBroadcastAction;
template<> struct TIsUEnumClass<EAvaBroadcastAction> { enum { Value = true }; };
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaBroadcastAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
