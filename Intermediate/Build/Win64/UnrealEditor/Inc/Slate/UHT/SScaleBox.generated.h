// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Layout/SScaleBox.h"

#ifdef SLATE_SScaleBox_generated_h
#error "SScaleBox.generated.h already included, missing '#pragma once' in SScaleBox.h"
#endif
#define SLATE_SScaleBox_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Slate_Public_Widgets_Layout_SScaleBox_h

// ********** Begin Enum EStretchDirection *********************************************************
#define FOREACH_ENUM_ESTRETCHDIRECTION(op) \
	op(EStretchDirection::Both) \
	op(EStretchDirection::DownOnly) \
	op(EStretchDirection::UpOnly) 

namespace EStretchDirection { enum Type : int; }
template<> SLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStretchDirection::Type>();
// ********** End Enum EStretchDirection ***********************************************************

// ********** Begin Enum EStretch ******************************************************************
#define FOREACH_ENUM_ESTRETCH(op) \
	op(EStretch::None) \
	op(EStretch::Fill) \
	op(EStretch::ScaleToFit) \
	op(EStretch::ScaleToFitX) \
	op(EStretch::ScaleToFitY) \
	op(EStretch::ScaleToFill) \
	op(EStretch::ScaleBySafeZone) \
	op(EStretch::UserSpecified) \
	op(EStretch::UserSpecifiedWithClipping) 

namespace EStretch { enum Type : int; }
template<> SLATE_NON_ATTRIBUTED_API UEnum* StaticEnum<EStretch::Type>();
// ********** End Enum EStretch ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
