// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SChaosVDTimelineWidget.h"

#ifdef CHAOSVD_SChaosVDTimelineWidget_generated_h
#error "SChaosVDTimelineWidget.generated.h already included, missing '#pragma once' in SChaosVDTimelineWidget.h"
#endif
#define CHAOSVD_SChaosVDTimelineWidget_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosVD_Source_ChaosVD_Private_Widgets_SChaosVDTimelineWidget_h

// ********** Begin Enum EChaosVDPlaybackButtonsID *************************************************
#define FOREACH_ENUM_ECHAOSVDPLAYBACKBUTTONSID(op) \
	op(EChaosVDPlaybackButtonsID::Play) \
	op(EChaosVDPlaybackButtonsID::Pause) \
	op(EChaosVDPlaybackButtonsID::Stop) \
	op(EChaosVDPlaybackButtonsID::Next) \
	op(EChaosVDPlaybackButtonsID::Prev) 

enum class EChaosVDPlaybackButtonsID : uint8;
template<> struct TIsUEnumClass<EChaosVDPlaybackButtonsID> { enum { Value = true }; };
template<> CHAOSVD_NON_ATTRIBUTED_API UEnum* StaticEnum<EChaosVDPlaybackButtonsID>();
// ********** End Enum EChaosVDPlaybackButtonsID ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
