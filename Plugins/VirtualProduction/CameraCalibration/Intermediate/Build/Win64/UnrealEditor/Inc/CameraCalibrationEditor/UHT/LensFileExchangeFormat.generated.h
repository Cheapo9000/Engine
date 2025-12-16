// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensFileExchangeFormat.h"

#ifdef CAMERACALIBRATIONEDITOR_LensFileExchangeFormat_generated_h
#error "LensFileExchangeFormat.generated.h already included, missing '#pragma once' in LensFileExchangeFormat.h"
#endif
#define CAMERACALIBRATIONEDITOR_LensFileExchangeFormat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLensInfoExchange *************************************************
struct Z_Construct_UScriptStruct_FLensInfoExchange_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensInfoExchange_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLensInfoExchange;
// ********** End ScriptStruct FLensInfoExchange ***************************************************

// ********** Begin ScriptStruct FLensFileUserMetadataEntry ****************************************
struct Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FLensFileUserMetadataEntry;
// ********** End ScriptStruct FLensFileUserMetadataEntry ******************************************

// ********** Begin ScriptStruct FLensFileMetadata *************************************************
struct Z_Construct_UScriptStruct_FLensFileMetadata_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFileMetadata_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLensFileMetadata;
// ********** End ScriptStruct FLensFileMetadata ***************************************************

// ********** Begin ScriptStruct FLensFileSensorDimensions *****************************************
struct Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FLensFileSensorDimensions;
// ********** End ScriptStruct FLensFileSensorDimensions *******************************************

// ********** Begin ScriptStruct FLensFileImageDimensions ******************************************
struct Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FLensFileImageDimensions;
// ********** End ScriptStruct FLensFileImageDimensions ********************************************

// ********** Begin ScriptStruct FLensFileParameterTableRow ****************************************
struct Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FLensFileParameterTableRow;
// ********** End ScriptStruct FLensFileParameterTableRow ******************************************

// ********** Begin ScriptStruct FLensFileParameterTable *******************************************
struct Z_Construct_UScriptStruct_FLensFileParameterTable_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFileParameterTable_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FLensFileParameterTable;
// ********** End ScriptStruct FLensFileParameterTable *********************************************

// ********** Begin ScriptStruct FLensFileParameterTableImporter ***********************************
struct Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FLensFileParameterTableImporter;
// ********** End ScriptStruct FLensFileParameterTableImporter *************************************

// ********** Begin ScriptStruct FLensFileExchange *************************************************
struct Z_Construct_UScriptStruct_FLensFileExchange_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_158_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensFileExchange_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLensFileExchange;
// ********** End ScriptStruct FLensFileExchange ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h

// ********** Begin Enum ELensFileUnit *************************************************************
#define FOREACH_ENUM_ELENSFILEUNIT(op) \
	op(ELensFileUnit::Millimeters) \
	op(ELensFileUnit::Normalized) 

enum class ELensFileUnit;
template<> struct TIsUEnumClass<ELensFileUnit> { enum { Value = true }; };
template<> CAMERACALIBRATIONEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELensFileUnit>();
// ********** End Enum ELensFileUnit ***************************************************************

// ********** Begin Enum ENodalOffsetCoordinateSystem **********************************************
#define FOREACH_ENUM_ENODALOFFSETCOORDINATESYSTEM(op) \
	op(ENodalOffsetCoordinateSystem::OpenCV) 

enum class ENodalOffsetCoordinateSystem;
template<> struct TIsUEnumClass<ENodalOffsetCoordinateSystem> { enum { Value = true }; };
template<> CAMERACALIBRATIONEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ENodalOffsetCoordinateSystem>();
// ********** End Enum ENodalOffsetCoordinateSystem ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
