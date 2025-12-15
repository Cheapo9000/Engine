// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/RealCurve.h"

#ifdef ENGINE_RealCurve_generated_h
#error "RealCurve.generated.h already included, missing '#pragma once' in RealCurve.h"
#endif
#define ENGINE_RealCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRealCurve ********************************************************
struct Z_Construct_UScriptStruct_FRealCurve_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FIndexedCurve Super;


struct FRealCurve;
// ********** End ScriptStruct FRealCurve **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_RealCurve_h

// ********** Begin Enum ERichCurveInterpMode ******************************************************
#define FOREACH_ENUM_ERICHCURVEINTERPMODE(op) \
	op(RCIM_Linear) \
	op(RCIM_Constant) \
	op(RCIM_Cubic) \
	op(RCIM_None) 

enum ERichCurveInterpMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERichCurveInterpMode>();
// ********** End Enum ERichCurveInterpMode ********************************************************

// ********** Begin Enum ERichCurveExtrapolation ***************************************************
#define FOREACH_ENUM_ERICHCURVEEXTRAPOLATION(op) \
	op(RCCE_Cycle) \
	op(RCCE_CycleWithOffset) \
	op(RCCE_Oscillate) \
	op(RCCE_Linear) \
	op(RCCE_Constant) \
	op(RCCE_None) 

enum ERichCurveExtrapolation : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERichCurveExtrapolation>();
// ********** End Enum ERichCurveExtrapolation *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
