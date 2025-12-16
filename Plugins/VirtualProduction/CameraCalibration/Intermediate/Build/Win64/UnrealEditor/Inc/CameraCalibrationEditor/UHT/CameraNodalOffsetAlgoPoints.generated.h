// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Calibrators/CameraNodalOffsetAlgoPoints.h"

#ifdef CAMERACALIBRATIONEDITOR_CameraNodalOffsetAlgoPoints_generated_h
#error "CameraNodalOffsetAlgoPoints.generated.h already included, missing '#pragma once' in CameraNodalOffsetAlgoPoints.h"
#endif
#define CAMERACALIBRATIONEDITOR_CameraNodalOffsetAlgoPoints_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNodalOffsetPointsCalibratorPointData *****************************
struct Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FNodalOffsetPointsCalibratorPointData;
// ********** End ScriptStruct FNodalOffsetPointsCalibratorPointData *******************************

// ********** Begin ScriptStruct FNodalOffsetPointsCameraData **************************************
struct Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FNodalOffsetPointsCameraData;
// ********** End ScriptStruct FNodalOffsetPointsCameraData ****************************************

// ********** Begin ScriptStruct FNodalOffsetPointsRowData *****************************************
struct Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FNodalOffsetPointsRowData;
// ********** End ScriptStruct FNodalOffsetPointsRowData *******************************************

// ********** Begin Class UCameraNodalOffsetAlgoPoints *********************************************
struct Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics;
CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraNodalOffsetAlgoPoints(); \
	friend struct ::Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONEDITOR_API UClass* ::Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraNodalOffsetAlgoPoints, UCameraNodalOffsetAlgo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationEditor"), Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_NoRegister) \
	DECLARE_SERIALIZER(UCameraNodalOffsetAlgoPoints)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraNodalOffsetAlgoPoints(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraNodalOffsetAlgoPoints(UCameraNodalOffsetAlgoPoints&&) = delete; \
	UCameraNodalOffsetAlgoPoints(const UCameraNodalOffsetAlgoPoints&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraNodalOffsetAlgoPoints); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraNodalOffsetAlgoPoints); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraNodalOffsetAlgoPoints) \
	NO_API virtual ~UCameraNodalOffsetAlgoPoints();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_151_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraNodalOffsetAlgoPoints;

// ********** End Class UCameraNodalOffsetAlgoPoints ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
