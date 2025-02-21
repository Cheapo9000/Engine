// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVDPlaybackController.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVD_ChaosVDPlaybackController_generated_h
#error "ChaosVDPlaybackController.generated.h already included, missing '#pragma once' in ChaosVDPlaybackController.h"
#endif
#define CHAOSVD_ChaosVDPlaybackController_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_ChaosVDPlaybackController_h


#define FOREACH_ENUM_ECHAOSVDSYNCTIMELINESMODE(op) \
	op(EChaosVDSyncTimelinesMode::None) \
	op(EChaosVDSyncTimelinesMode::RecordedTimestamp) \
	op(EChaosVDSyncTimelinesMode::NetworkTick) 

enum class EChaosVDSyncTimelinesMode : uint8;
template<> struct TIsUEnumClass<EChaosVDSyncTimelinesMode> { enum { Value = true }; };
template<> CHAOSVD_API UEnum* StaticEnum<EChaosVDSyncTimelinesMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
