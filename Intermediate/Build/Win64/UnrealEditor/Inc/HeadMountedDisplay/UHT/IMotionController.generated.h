// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMotionController.h"

#ifdef HEADMOUNTEDDISPLAY_IMotionController_generated_h
#error "IMotionController.generated.h already included, missing '#pragma once' in IMotionController.h"
#endif
#define HEADMOUNTEDDISPLAY_IMotionController_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IMotionController_h

// ********** Begin Enum ETrackingStatus ***********************************************************
#define FOREACH_ENUM_ETRACKINGSTATUS(op) \
	op(ETrackingStatus::NotTracked) \
	op(ETrackingStatus::InertialOnly) \
	op(ETrackingStatus::Tracked) 

enum class ETrackingStatus : uint8;
template<> struct TIsUEnumClass<ETrackingStatus> { enum { Value = true }; };
template<> HEADMOUNTEDDISPLAY_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrackingStatus>();
// ********** End Enum ETrackingStatus *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
