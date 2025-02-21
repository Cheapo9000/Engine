// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playable/AvaPlayableRemoteControl.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaPlayableRemoteControl_generated_h
#error "AvaPlayableRemoteControl.generated.h already included, missing '#pragma once' in AvaPlayableRemoteControl.h"
#endif
#define AVALANCHEMEDIA_AvaPlayableRemoteControl_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Internal_Playable_AvaPlayableRemoteControl_h


#define FOREACH_ENUM_EAVAPLAYABLEREMOTECONTROLRESULT(op) \
	op(EAvaPlayableRemoteControlResult::Completed) \
	op(EAvaPlayableRemoteControlResult::UpToDate) \
	op(EAvaPlayableRemoteControlResult::InvalidParameter) \
	op(EAvaPlayableRemoteControlResult::ReadAccessDenied) \
	op(EAvaPlayableRemoteControlResult::WriteAccessDenied) \
	op(EAvaPlayableRemoteControlResult::ReadPropertyFailed) \
	op(EAvaPlayableRemoteControlResult::WritePropertyFailed) 

enum class EAvaPlayableRemoteControlResult : int8;
template<> struct TIsUEnumClass<EAvaPlayableRemoteControlResult> { enum { Value = true }; };
template<> AVALANCHEMEDIA_API UEnum* StaticEnum<EAvaPlayableRemoteControlResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
