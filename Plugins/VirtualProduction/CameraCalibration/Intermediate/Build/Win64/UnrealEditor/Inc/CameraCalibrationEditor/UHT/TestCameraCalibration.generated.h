// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestCameraCalibration.h"

#ifdef CAMERACALIBRATIONEDITOR_TestCameraCalibration_generated_h
#error "TestCameraCalibration.generated.h already included, missing '#pragma once' in TestCameraCalibration.h"
#endif
#define CAMERACALIBRATIONEDITOR_TestCameraCalibration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutoCalibrationTest *****************************************************
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunTests);


struct Z_Construct_UClass_UAutoCalibrationTest_Statics;
CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UAutoCalibrationTest_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoCalibrationTest(); \
	friend struct ::Z_Construct_UClass_UAutoCalibrationTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONEDITOR_API UClass* ::Z_Construct_UClass_UAutoCalibrationTest_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutoCalibrationTest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationEditor"), Z_Construct_UClass_UAutoCalibrationTest_NoRegister) \
	DECLARE_SERIALIZER(UAutoCalibrationTest)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoCalibrationTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutoCalibrationTest(UAutoCalibrationTest&&) = delete; \
	UAutoCalibrationTest(const UAutoCalibrationTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoCalibrationTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoCalibrationTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoCalibrationTest) \
	NO_API virtual ~UAutoCalibrationTest();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutoCalibrationTest;

// ********** End Class UAutoCalibrationTest *******************************************************

// ********** Begin ScriptStruct FCalibrationDatasetImage ******************************************
struct Z_Construct_UScriptStruct_FCalibrationDatasetImage_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCalibrationDatasetImage_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FCalibrationDatasetImage;
// ********** End ScriptStruct FCalibrationDatasetImage ********************************************

// ********** Begin ScriptStruct FLocationRotation *************************************************
struct Z_Construct_UScriptStruct_FLocationRotation_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLocationRotation_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FLocationRotation;
// ********** End ScriptStruct FLocationRotation ***************************************************

// ********** Begin ScriptStruct FCameraProfile ****************************************************
struct Z_Construct_UScriptStruct_FCameraProfile_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCameraProfile_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FCameraProfile;
// ********** End ScriptStruct FCameraProfile ******************************************************

// ********** Begin ScriptStruct FCheckerboardProfile **********************************************
struct Z_Construct_UScriptStruct_FCheckerboardProfile_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCheckerboardProfile_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FCheckerboardProfile;
// ********** End ScriptStruct FCheckerboardProfile ************************************************

// ********** Begin ScriptStruct FSolverSettings ***************************************************
struct Z_Construct_UScriptStruct_FSolverSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSolverSettings_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FSolverSettings;
// ********** End ScriptStruct FSolverSettings *****************************************************

// ********** Begin ScriptStruct FCalibrationTest **************************************************
struct Z_Construct_UScriptStruct_FCalibrationTest_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCalibrationTest_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FCalibrationTest;
// ********** End ScriptStruct FCalibrationTest ****************************************************

// ********** Begin ScriptStruct FCalibrationTestSet ***********************************************
struct Z_Construct_UScriptStruct_FCalibrationTestSet_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h_193_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCalibrationTestSet_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FCalibrationTestSet;
// ********** End ScriptStruct FCalibrationTestSet *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_TestCameraCalibration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
