// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeImportHelper.h"

#ifdef LANDSCAPEEDITOR_LandscapeImportHelper_generated_h
#error "LandscapeImportHelper.generated.h already included, missing '#pragma once' in LandscapeImportHelper.h"
#endif
#define LANDSCAPEEDITOR_LandscapeImportHelper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandscapeImportFileDescriptor ************************************
struct Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics;
#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


struct FLandscapeImportFileDescriptor;
// ********** End ScriptStruct FLandscapeImportFileDescriptor **************************************

// ********** Begin ScriptStruct FLandscapeImportResolution ****************************************
struct Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics;
#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


struct FLandscapeImportResolution;
// ********** End ScriptStruct FLandscapeImportResolution ******************************************

// ********** Begin ScriptStruct FLandscapeImportDescriptor ****************************************
struct Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics;
#define FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics; \
	LANDSCAPEEDITOR_API static class UScriptStruct* StaticStruct();


struct FLandscapeImportDescriptor;
// ********** End ScriptStruct FLandscapeImportDescriptor ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h

// ********** Begin Enum ELandscapeImportTransformType *********************************************
#define FOREACH_ENUM_ELANDSCAPEIMPORTTRANSFORMTYPE(op) \
	op(ELandscapeImportTransformType::None) \
	op(ELandscapeImportTransformType::ExpandOffset) \
	op(ELandscapeImportTransformType::ExpandCentered) \
	op(ELandscapeImportTransformType::Resample) \
	op(ELandscapeImportTransformType::Subregion) 

enum class ELandscapeImportTransformType : int8;
template<> struct TIsUEnumClass<ELandscapeImportTransformType> { enum { Value = true }; };
template<> LANDSCAPEEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeImportTransformType>();
// ********** End Enum ELandscapeImportTransformType ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
