// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EaseCurveKeySelection.h"

#ifdef EASECURVETOOL_EaseCurveKeySelection_generated_h
#error "EaseCurveKeySelection.generated.h already included, missing '#pragma once' in EaseCurveKeySelection.h"
#endif
#define EASECURVETOOL_EaseCurveKeySelection_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_EaseCurveTool_Source_EaseCurveTool_Private_EaseCurveKeySelection_h

// ********** Begin Enum EEaseCurveToolError *******************************************************
#define FOREACH_ENUM_EEASECURVETOOLERROR(op) \
	op(EEaseCurveToolError::None) \
	op(EEaseCurveToolError::LastKey) \
	op(EEaseCurveToolError::SameValues) \
	op(EEaseCurveToolError::NoWeightedBrokenCubicTangents) 

enum class EEaseCurveToolError : uint8;
template<> struct TIsUEnumClass<EEaseCurveToolError> { enum { Value = true }; };
template<> EASECURVETOOL_NON_ATTRIBUTED_API UEnum* StaticEnum<EEaseCurveToolError>();
// ********** End Enum EEaseCurveToolError *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
