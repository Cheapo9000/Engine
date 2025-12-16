// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenCVHelper.h"

#ifdef OPENCVHELPER_OpenCVHelper_generated_h
#error "OpenCVHelper.generated.h already included, missing '#pragma once' in OpenCVHelper.h"
#endif
#define OPENCVHELPER_OpenCVHelper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOpenCVLensDistortionParametersBase *******************************
struct Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics;
#define FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h_196_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics; \
	OPENCVHELPER_API static class UScriptStruct* StaticStruct();


struct FOpenCVLensDistortionParametersBase;
// ********** End ScriptStruct FOpenCVLensDistortionParametersBase *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h

// ********** Begin Enum EArucoDictionary **********************************************************
#define FOREACH_ENUM_EARUCODICTIONARY(op) \
	op(EArucoDictionary::None) \
	op(EArucoDictionary::DICT_4X4_50) \
	op(EArucoDictionary::DICT_4X4_100) \
	op(EArucoDictionary::DICT_4X4_250) \
	op(EArucoDictionary::DICT_4X4_1000) \
	op(EArucoDictionary::DICT_5X5_50) \
	op(EArucoDictionary::DICT_5X5_100) \
	op(EArucoDictionary::DICT_5X5_250) \
	op(EArucoDictionary::DICT_5X5_1000) \
	op(EArucoDictionary::DICT_6X6_50) \
	op(EArucoDictionary::DICT_6X6_100) \
	op(EArucoDictionary::DICT_6X6_250) \
	op(EArucoDictionary::DICT_6X6_1000) \
	op(EArucoDictionary::DICT_7X7_50) \
	op(EArucoDictionary::DICT_7X7_100) \
	op(EArucoDictionary::DICT_7X7_250) \
	op(EArucoDictionary::DICT_7X7_1000) \
	op(EArucoDictionary::DICT_ARUCO_ORIGINAL) 

enum class EArucoDictionary : uint8;
template<> struct TIsUEnumClass<EArucoDictionary> { enum { Value = true }; };
template<> OPENCVHELPER_NON_ATTRIBUTED_API UEnum* StaticEnum<EArucoDictionary>();
// ********** End Enum EArucoDictionary ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
