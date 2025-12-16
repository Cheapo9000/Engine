// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EVCamTargetViewportID.h"

#ifdef VCAMCORE_EVCamTargetViewportID_generated_h
#error "EVCamTargetViewportID.generated.h already included, missing '#pragma once' in EVCamTargetViewportID.h"
#endif
#define VCAMCORE_EVCamTargetViewportID_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_VirtualCameraCore_Source_VCamCore_Public_EVCamTargetViewportID_h

// ********** Begin Enum EVCamTargetViewportID *****************************************************
#define FOREACH_ENUM_EVCAMTARGETVIEWPORTID(op) \
	op(EVCamTargetViewportID::Viewport1) \
	op(EVCamTargetViewportID::Viewport2) \
	op(EVCamTargetViewportID::Viewport3) \
	op(EVCamTargetViewportID::Viewport4) \
	op(EVCamTargetViewportID::Count) 

enum class EVCamTargetViewportID : uint8;
template<> struct TIsUEnumClass<EVCamTargetViewportID> { enum { Value = true }; };
template<> VCAMCORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVCamTargetViewportID>();
// ********** End Enum EVCamTargetViewportID *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
