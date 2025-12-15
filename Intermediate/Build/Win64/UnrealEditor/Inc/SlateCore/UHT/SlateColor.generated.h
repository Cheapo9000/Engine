// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styling/SlateColor.h"

#ifdef SLATECORE_SlateColor_generated_h
#error "SlateColor.generated.h already included, missing '#pragma once' in SlateColor.h"
#endif
#define SLATECORE_SlateColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSlateColor *******************************************************
struct Z_Construct_UScriptStruct_FSlateColor_Statics;
#define FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSlateColor_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


struct FSlateColor;
// ********** End ScriptStruct FSlateColor *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateColor_h

// ********** Begin Enum ESlateColorStylingMode ****************************************************
#define FOREACH_ENUM_ESLATECOLORSTYLINGMODE(op) \
	op(ESlateColorStylingMode::UseColor_Specified) \
	op(ESlateColorStylingMode::UseColor_ColorTable) \
	op(ESlateColorStylingMode::UseColor_Foreground) \
	op(ESlateColorStylingMode::UseColor_Foreground_Subdued) \
	op(ESlateColorStylingMode::UseColor_UseStyle) 

enum class ESlateColorStylingMode : uint8;
template<> struct TIsUEnumClass<ESlateColorStylingMode> { enum { Value = true }; };
template<> SLATECORE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESlateColorStylingMode>();
// ********** End Enum ESlateColorStylingMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
