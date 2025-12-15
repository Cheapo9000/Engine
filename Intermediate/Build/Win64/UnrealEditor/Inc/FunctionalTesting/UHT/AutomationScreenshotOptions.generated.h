// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationScreenshotOptions.h"

#ifdef FUNCTIONALTESTING_AutomationScreenshotOptions_generated_h
#error "AutomationScreenshotOptions.generated.h already included, missing '#pragma once' in AutomationScreenshotOptions.h"
#endif
#define FUNCTIONALTESTING_AutomationScreenshotOptions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FComparisonToleranceAmount ****************************************
struct Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FComparisonToleranceAmount;
// ********** End ScriptStruct FComparisonToleranceAmount ******************************************

// ********** Begin ScriptStruct FAutomationScreenshotOptions **************************************
struct Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FAutomationScreenshotOptions;
// ********** End ScriptStruct FAutomationScreenshotOptions ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h

// ********** Begin Enum EComparisonTolerance ******************************************************
#define FOREACH_ENUM_ECOMPARISONTOLERANCE(op) \
	op(EComparisonTolerance::Zero) \
	op(EComparisonTolerance::Low) \
	op(EComparisonTolerance::Medium) \
	op(EComparisonTolerance::High) \
	op(EComparisonTolerance::Custom) 

enum class EComparisonTolerance : uint8;
template<> struct TIsUEnumClass<EComparisonTolerance> { enum { Value = true }; };
template<> FUNCTIONALTESTING_NON_ATTRIBUTED_API UEnum* StaticEnum<EComparisonTolerance>();
// ********** End Enum EComparisonTolerance ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
