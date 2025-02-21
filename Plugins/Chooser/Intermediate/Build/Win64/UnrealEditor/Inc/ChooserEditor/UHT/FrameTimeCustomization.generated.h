// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FrameTimeCustomization.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSEREDITOR_FrameTimeCustomization_generated_h
#error "FrameTimeCustomization.generated.h already included, missing '#pragma once' in FrameTimeCustomization.h"
#endif
#define CHOOSEREDITOR_FrameTimeCustomization_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_FrameTimeCustomization_h


#define FOREACH_ENUM_ETIMEFLOATFORMAT(op) \
	op(ETimeFloatFormat::Frames) \
	op(ETimeFloatFormat::Seconds) 

enum class ETimeFloatFormat;
template<> struct TIsUEnumClass<ETimeFloatFormat> { enum { Value = true }; };
template<> CHOOSEREDITOR_API UEnum* StaticEnum<ETimeFloatFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
