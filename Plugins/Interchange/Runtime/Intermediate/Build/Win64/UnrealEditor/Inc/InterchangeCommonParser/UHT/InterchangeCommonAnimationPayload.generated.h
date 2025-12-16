// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeCommonAnimationPayload.h"

#ifdef INTERCHANGECOMMONPARSER_InterchangeCommonAnimationPayload_generated_h
#error "InterchangeCommonAnimationPayload.generated.h already included, missing '#pragma once' in InterchangeCommonAnimationPayload.h"
#endif
#define INTERCHANGECOMMONPARSER_InterchangeCommonAnimationPayload_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInterchangeCurveKey **********************************************
struct Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_175_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics; \
	INTERCHANGECOMMONPARSER_API static class UScriptStruct* StaticStruct();


struct FInterchangeCurveKey;
// ********** End ScriptStruct FInterchangeCurveKey ************************************************

// ********** Begin ScriptStruct FInterchangeCurve *************************************************
struct Z_Construct_UScriptStruct_FInterchangeCurve_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_233_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeCurve_Statics; \
	INTERCHANGECOMMONPARSER_API static class UScriptStruct* StaticStruct();


struct FInterchangeCurve;
// ********** End ScriptStruct FInterchangeCurve ***************************************************

// ********** Begin ScriptStruct FInterchangeStepCurve *********************************************
struct Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics;
#define FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_258_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics; \
	INTERCHANGECOMMONPARSER_API static class UScriptStruct* StaticStruct();


struct FInterchangeStepCurve;
// ********** End ScriptStruct FInterchangeStepCurve ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h

// ********** Begin Enum EInterchangeCurveInterpMode ***********************************************
#define FOREACH_ENUM_EINTERCHANGECURVEINTERPMODE(op) \
	op(EInterchangeCurveInterpMode::Linear) \
	op(EInterchangeCurveInterpMode::Constant) \
	op(EInterchangeCurveInterpMode::Cubic) \
	op(EInterchangeCurveInterpMode::None) 

enum class EInterchangeCurveInterpMode : uint8;
template<> struct TIsUEnumClass<EInterchangeCurveInterpMode> { enum { Value = true }; };
template<> INTERCHANGECOMMONPARSER_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeCurveInterpMode>();
// ********** End Enum EInterchangeCurveInterpMode *************************************************

// ********** Begin Enum EInterchangeCurveTangentMode **********************************************
#define FOREACH_ENUM_EINTERCHANGECURVETANGENTMODE(op) \
	op(EInterchangeCurveTangentMode::Auto) \
	op(EInterchangeCurveTangentMode::User) \
	op(EInterchangeCurveTangentMode::Break) \
	op(EInterchangeCurveTangentMode::None) 

enum class EInterchangeCurveTangentMode : uint8;
template<> struct TIsUEnumClass<EInterchangeCurveTangentMode> { enum { Value = true }; };
template<> INTERCHANGECOMMONPARSER_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeCurveTangentMode>();
// ********** End Enum EInterchangeCurveTangentMode ************************************************

// ********** Begin Enum EInterchangeCurveTangentWeightMode ****************************************
#define FOREACH_ENUM_EINTERCHANGECURVETANGENTWEIGHTMODE(op) \
	op(EInterchangeCurveTangentWeightMode::WeightedNone) \
	op(EInterchangeCurveTangentWeightMode::WeightedArrive) \
	op(EInterchangeCurveTangentWeightMode::WeightedLeave) \
	op(EInterchangeCurveTangentWeightMode::WeightedBoth) 

enum class EInterchangeCurveTangentWeightMode : uint8;
template<> struct TIsUEnumClass<EInterchangeCurveTangentWeightMode> { enum { Value = true }; };
template<> INTERCHANGECOMMONPARSER_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeCurveTangentWeightMode>();
// ********** End Enum EInterchangeCurveTangentWeightMode ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
