// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/RichCurve.h"

#ifdef ENGINE_RichCurve_generated_h
#error "RichCurve.generated.h already included, missing '#pragma once' in RichCurve.h"
#endif
#define ENGINE_RichCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRichCurveKey *****************************************************
struct Z_Construct_UScriptStruct_FRichCurveKey_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRichCurveKey_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FRichCurveKey;
// ********** End ScriptStruct FRichCurveKey *******************************************************

// ********** Begin ScriptStruct FRichCurve ********************************************************
struct Z_Construct_UScriptStruct_FRichCurve_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRichCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FRealCurve Super;


struct FRichCurve;
// ********** End ScriptStruct FRichCurve **********************************************************

// ********** Begin ScriptStruct FCompressedRichCurve **********************************************
struct Z_Construct_UScriptStruct_FCompressedRichCurve_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_365_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompressedRichCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FCompressedRichCurve;
// ********** End ScriptStruct FCompressedRichCurve ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h

// ********** Begin Enum ERichCurveTangentMode *****************************************************
#define FOREACH_ENUM_ERICHCURVETANGENTMODE(op) \
	op(RCTM_Auto) \
	op(RCTM_User) \
	op(RCTM_Break) \
	op(RCTM_None) \
	op(RCTM_SmartAuto) 

enum ERichCurveTangentMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERichCurveTangentMode>();
// ********** End Enum ERichCurveTangentMode *******************************************************

// ********** Begin Enum ERichCurveTangentWeightMode ***********************************************
#define FOREACH_ENUM_ERICHCURVETANGENTWEIGHTMODE(op) \
	op(RCTWM_WeightedNone) \
	op(RCTWM_WeightedArrive) \
	op(RCTWM_WeightedLeave) \
	op(RCTWM_WeightedBoth) 

enum ERichCurveTangentWeightMode : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERichCurveTangentWeightMode>();
// ********** End Enum ERichCurveTangentWeightMode *************************************************

// ********** Begin Enum ERichCurveCompressionFormat ***********************************************
#define FOREACH_ENUM_ERICHCURVECOMPRESSIONFORMAT(op) \
	op(RCCF_Empty) \
	op(RCCF_Constant) \
	op(RCCF_Linear) \
	op(RCCF_Cubic) \
	op(RCCF_Mixed) \
	op(RCCF_Weighted) 

enum ERichCurveCompressionFormat : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERichCurveCompressionFormat>();
// ********** End Enum ERichCurveCompressionFormat *************************************************

// ********** Begin Enum ERichCurveKeyTimeCompressionFormat ****************************************
#define FOREACH_ENUM_ERICHCURVEKEYTIMECOMPRESSIONFORMAT(op) \
	op(RCKTCF_uint16) \
	op(RCKTCF_float32) 

enum ERichCurveKeyTimeCompressionFormat : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERichCurveKeyTimeCompressionFormat>();
// ********** End Enum ERichCurveKeyTimeCompressionFormat ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
