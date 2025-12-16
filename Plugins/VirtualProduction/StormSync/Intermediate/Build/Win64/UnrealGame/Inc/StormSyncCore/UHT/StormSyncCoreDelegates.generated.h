// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StormSyncCoreDelegates.h"

#ifdef STORMSYNCCORE_StormSyncCoreDelegates_generated_h
#error "StormSyncCoreDelegates.generated.h already included, missing '#pragma once' in StormSyncCoreDelegates.h"
#endif
#define STORMSYNCCORE_StormSyncCoreDelegates_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StormSync_Source_StormSyncCore_Public_StormSyncCoreDelegates_h

// ********** Begin Enum EStormSyncConnectedDeviceState ********************************************
#define FOREACH_ENUM_ESTORMSYNCCONNECTEDDEVICESTATE(op) \
	op(EStormSyncConnectedDeviceState::State_Active) \
	op(EStormSyncConnectedDeviceState::State_Unresponsive) \
	op(EStormSyncConnectedDeviceState::State_Disconnected) 

enum class EStormSyncConnectedDeviceState : uint8;
template<> struct TIsUEnumClass<EStormSyncConnectedDeviceState> { enum { Value = true }; };
template<> STORMSYNCCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStormSyncConnectedDeviceState>();
// ********** End Enum EStormSyncConnectedDeviceState **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
