// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDPlaybackController.h"

#ifdef CHAOSVD_ChaosVDPlaybackController_generated_h
#error "ChaosVDPlaybackController.generated.h already included, missing '#pragma once' in ChaosVDPlaybackController.h"
#endif
#define CHAOSVD_ChaosVDPlaybackController_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Public_ChaosVDPlaybackController_h

// ********** Begin Enum EChaosVDSyncTimelinesMode *************************************************
#define FOREACH_ENUM_ECHAOSVDSYNCTIMELINESMODE(op) \
	op(EChaosVDSyncTimelinesMode::None) \
	op(EChaosVDSyncTimelinesMode::RecordedTimestamp) \
	op(EChaosVDSyncTimelinesMode::NetworkTick) \
	op(EChaosVDSyncTimelinesMode::Manual) 

enum class EChaosVDSyncTimelinesMode : uint8;
template<> struct TIsUEnumClass<EChaosVDSyncTimelinesMode> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDSyncTimelinesMode>();
// ********** End Enum EChaosVDSyncTimelinesMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
