// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/OnlineTurnBasedInterface.h"

#ifdef ONLINESUBSYSTEM_OnlineTurnBasedInterface_generated_h
#error "OnlineTurnBasedInterface.generated.h already included, missing '#pragma once' in OnlineTurnBasedInterface.h"
#endif
#define ONLINESUBSYSTEM_OnlineTurnBasedInterface_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineTurnBasedInterface_h

// ********** Begin Enum EMPMatchOutcome ***********************************************************
#define FOREACH_ENUM_EMPMATCHOUTCOME(op) \
	op(EMPMatchOutcome::None) \
	op(EMPMatchOutcome::Quit) \
	op(EMPMatchOutcome::Won) \
	op(EMPMatchOutcome::Lost) \
	op(EMPMatchOutcome::Tied) \
	op(EMPMatchOutcome::TimeExpired) \
	op(EMPMatchOutcome::First) \
	op(EMPMatchOutcome::Second) \
	op(EMPMatchOutcome::Third) \
	op(EMPMatchOutcome::Fourth) 

namespace EMPMatchOutcome { enum Outcome : int; }
template<> ONLINESUBSYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EMPMatchOutcome::Outcome>();
// ********** End Enum EMPMatchOutcome *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
