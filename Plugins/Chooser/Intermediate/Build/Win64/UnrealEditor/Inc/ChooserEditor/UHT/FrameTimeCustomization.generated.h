// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrameTimeCustomization.h"

#ifdef CHOOSEREDITOR_FrameTimeCustomization_generated_h
#error "FrameTimeCustomization.generated.h already included, missing '#pragma once' in FrameTimeCustomization.h"
#endif
#define CHOOSEREDITOR_FrameTimeCustomization_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_FrameTimeCustomization_h

// ********** Begin Enum ETimeFloatFormat **********************************************************
#define FOREACH_ENUM_ETIMEFLOATFORMAT(op) \
	op(ETimeFloatFormat::Frames) \
	op(ETimeFloatFormat::Seconds) 

enum class ETimeFloatFormat;
template<> struct TIsUEnumClass<ETimeFloatFormat> { enum { Value = true }; };
template<> CHOOSEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimeFloatFormat>();
// ********** End Enum ETimeFloatFormat ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
