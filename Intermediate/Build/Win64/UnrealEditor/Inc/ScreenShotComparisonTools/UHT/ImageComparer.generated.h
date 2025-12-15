// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageComparer.h"

#ifdef SCREENSHOTCOMPARISONTOOLS_ImageComparer_generated_h
#error "ImageComparer.generated.h already included, missing '#pragma once' in ImageComparer.h"
#endif
#define SCREENSHOTCOMPARISONTOOLS_ImageComparer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FImageTolerance ***************************************************
struct Z_Construct_UScriptStruct_FImageTolerance_Statics;
#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImageTolerance_Statics; \
	SCREENSHOTCOMPARISONTOOLS_API static class UScriptStruct* StaticStruct();


struct FImageTolerance;
// ********** End ScriptStruct FImageTolerance *****************************************************

// ********** Begin ScriptStruct FImageComparisonResult ********************************************
struct Z_Construct_UScriptStruct_FImageComparisonResult_Statics;
#define FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h_242_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FImageComparisonResult_Statics; \
	SCREENSHOTCOMPARISONTOOLS_API static class UScriptStruct* StaticStruct();


struct FImageComparisonResult;
// ********** End ScriptStruct FImageComparisonResult **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ImageComparer_h

// ********** Begin Enum EImageTolerancePreset *****************************************************
#define FOREACH_ENUM_EIMAGETOLERANCEPRESET(op) \
	op(EImageTolerancePreset::IgnoreNothing) \
	op(EImageTolerancePreset::IgnoreLess) \
	op(EImageTolerancePreset::IgnoreAntiAliasing) \
	op(EImageTolerancePreset::IgnoreColors) \
	op(EImageTolerancePreset::Custom) 

enum class EImageTolerancePreset : uint8;
template<> struct TIsUEnumClass<EImageTolerancePreset> { enum { Value = true }; };
template<> SCREENSHOTCOMPARISONTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EImageTolerancePreset>();
// ********** End Enum EImageTolerancePreset *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
