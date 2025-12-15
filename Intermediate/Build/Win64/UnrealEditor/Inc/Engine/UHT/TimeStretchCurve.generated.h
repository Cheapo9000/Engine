// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/TimeStretchCurve.h"

#ifdef ENGINE_TimeStretchCurve_generated_h
#error "TimeStretchCurve.generated.h already included, missing '#pragma once' in TimeStretchCurve.h"
#endif
#define ENGINE_TimeStretchCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTimeStretchCurveMarker *******************************************
struct Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTimeStretchCurveMarker;
// ********** End ScriptStruct FTimeStretchCurveMarker *********************************************

// ********** Begin ScriptStruct FTimeStretchCurve *************************************************
struct Z_Construct_UScriptStruct_FTimeStretchCurve_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_198_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimeStretchCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTimeStretchCurve;
// ********** End ScriptStruct FTimeStretchCurve ***************************************************

// ********** Begin ScriptStruct FTimeStretchCurveInstance *****************************************
struct Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h_245_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTimeStretchCurveInstance;
// ********** End ScriptStruct FTimeStretchCurveInstance *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h

// ********** Begin Enum ETimeStretchCurveMapping **************************************************
#define FOREACH_ENUM_ETIMESTRETCHCURVEMAPPING(op) \
	op(ETimeStretchCurveMapping::T_Original) \
	op(ETimeStretchCurveMapping::T_TargetMin) \
	op(ETimeStretchCurveMapping::T_TargetMax) 

enum class ETimeStretchCurveMapping : uint8;
template<> struct TIsUEnumClass<ETimeStretchCurveMapping> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETimeStretchCurveMapping>();
// ********** End Enum ETimeStretchCurveMapping ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
