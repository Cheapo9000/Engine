// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SAudioOscilloscopePanelWidget.h"

#ifdef AUDIOWIDGETS_SAudioOscilloscopePanelWidget_generated_h
#error "SAudioOscilloscopePanelWidget.generated.h already included, missing '#pragma once' in SAudioOscilloscopePanelWidget.h"
#endif
#define AUDIOWIDGETS_SAudioOscilloscopePanelWidget_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_SAudioOscilloscopePanelWidget_h

// ********** Begin Enum EXAxisLabelsUnit **********************************************************
#define FOREACH_ENUM_EXAXISLABELSUNIT(op) \
	op(EXAxisLabelsUnit::Samples) \
	op(EXAxisLabelsUnit::Seconds) 

enum class EXAxisLabelsUnit : uint8;
template<> struct TIsUEnumClass<EXAxisLabelsUnit> { enum { Value = true }; };
template<> AUDIOWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EXAxisLabelsUnit>();
// ********** End Enum EXAxisLabelsUnit ************************************************************

// ********** Begin Enum EYAxisLabelsUnit **********************************************************
#define FOREACH_ENUM_EYAXISLABELSUNIT(op) \
	op(EYAxisLabelsUnit::Linear) \
	op(EYAxisLabelsUnit::Db) 

enum class EYAxisLabelsUnit : uint8;
template<> struct TIsUEnumClass<EYAxisLabelsUnit> { enum { Value = true }; };
template<> AUDIOWIDGETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EYAxisLabelsUnit>();
// ********** End Enum EYAxisLabelsUnit ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
