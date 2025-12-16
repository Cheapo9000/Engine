// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SynthKnobStyle.h"

#ifdef SYNTHESIS_SynthKnobStyle_generated_h
#error "SynthKnobStyle.generated.h already included, missing '#pragma once' in SynthKnobStyle.h"
#endif
#define SYNTHESIS_SynthKnobStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSynthKnobStyle ***************************************************
struct Z_Construct_UScriptStruct_FSynthKnobStyle_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSynthKnobStyle_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct(); \
	typedef FSlateWidgetStyle Super;


struct FSynthKnobStyle;
// ********** End ScriptStruct FSynthKnobStyle *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h

// ********** Begin Enum ESynthKnobSize ************************************************************
#define FOREACH_ENUM_ESYNTHKNOBSIZE(op) \
	op(ESynthKnobSize::Medium) \
	op(ESynthKnobSize::Large) \
	op(ESynthKnobSize::Count) 

enum class ESynthKnobSize : uint8;
template<> struct TIsUEnumClass<ESynthKnobSize> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESynthKnobSize>();
// ********** End Enum ESynthKnobSize **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
