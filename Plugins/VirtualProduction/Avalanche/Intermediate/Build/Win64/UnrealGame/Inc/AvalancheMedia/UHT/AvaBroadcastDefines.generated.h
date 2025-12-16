// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Broadcast/AvaBroadcastDefines.h"

#ifdef AVALANCHEMEDIA_AvaBroadcastDefines_generated_h
#error "AvaBroadcastDefines.generated.h already included, missing '#pragma once' in AvaBroadcastDefines.h"
#endif
#define AVALANCHEMEDIA_AvaBroadcastDefines_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Broadcast_AvaBroadcastDefines_h

// ********** Begin Enum EAvaBroadcastAction *******************************************************
#define FOREACH_ENUM_EAVABROADCASTACTION(op) \
	op(EAvaBroadcastAction::None) \
	op(EAvaBroadcastAction::Start) \
	op(EAvaBroadcastAction::Stop) \
	op(EAvaBroadcastAction::UpdateConfig) \
	op(EAvaBroadcastAction::DeleteChannel) 

enum class EAvaBroadcastAction;
template<> struct TIsUEnumClass<EAvaBroadcastAction> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaBroadcastAction>();
// ********** End Enum EAvaBroadcastAction *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
