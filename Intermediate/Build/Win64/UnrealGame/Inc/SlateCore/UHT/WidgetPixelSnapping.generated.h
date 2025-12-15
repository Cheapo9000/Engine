// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/WidgetPixelSnapping.h"

#ifdef SLATECORE_WidgetPixelSnapping_generated_h
#error "WidgetPixelSnapping.generated.h already included, missing '#pragma once' in WidgetPixelSnapping.h"
#endif
#define SLATECORE_WidgetPixelSnapping_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Widgets_WidgetPixelSnapping_h

// ********** Begin Enum EWidgetPixelSnapping ******************************************************
#define FOREACH_ENUM_EWIDGETPIXELSNAPPING(op) \
	op(EWidgetPixelSnapping::Inherit) \
	op(EWidgetPixelSnapping::Disabled) \
	op(EWidgetPixelSnapping::SnapToPixel) 

enum class EWidgetPixelSnapping : uint8;
template<> struct TIsUEnumClass<EWidgetPixelSnapping> { enum { Value = true }; };
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWidgetPixelSnapping>();
// ********** End Enum EWidgetPixelSnapping ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
