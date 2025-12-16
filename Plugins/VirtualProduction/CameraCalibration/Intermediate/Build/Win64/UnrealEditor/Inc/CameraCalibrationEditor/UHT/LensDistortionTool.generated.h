// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetEditor/LensDistortionTool.h"

#ifdef CAMERACALIBRATIONEDITOR_LensDistortionTool_generated_h
#error "LensDistortionTool.generated.h already included, missing '#pragma once' in LensDistortionTool.h"
#endif
#define CAMERACALIBRATIONEDITOR_LensDistortionTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCalibrationRow ***************************************************
struct Z_Construct_UScriptStruct_FCalibrationRow_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCalibrationRow_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FCalibrationRow;
// ********** End ScriptStruct FCalibrationRow *****************************************************

// ********** Begin ScriptStruct FCalibrationDataset ***********************************************
struct Z_Construct_UScriptStruct_FCalibrationDataset_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCalibrationDataset_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FCalibrationDataset;
// ********** End ScriptStruct FCalibrationDataset *************************************************

// ********** Begin ScriptStruct FLensCaptureSettings **********************************************
struct Z_Construct_UScriptStruct_FLensCaptureSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensCaptureSettings_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FLensCaptureSettings;
// ********** End ScriptStruct FLensCaptureSettings ************************************************

// ********** Begin ScriptStruct FLensSolverSettings ***********************************************
struct Z_Construct_UScriptStruct_FLensSolverSettings_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_125_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensSolverSettings_Statics; \
	CAMERACALIBRATIONEDITOR_API static class UScriptStruct* StaticStruct();


struct FLensSolverSettings;
// ********** End ScriptStruct FLensSolverSettings *************************************************

// ********** Begin Class ULensDistortionTool ******************************************************
struct Z_Construct_UClass_ULensDistortionTool_Statics;
CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensDistortionTool_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensDistortionTool(); \
	friend struct ::Z_Construct_UClass_ULensDistortionTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONEDITOR_API UClass* ::Z_Construct_UClass_ULensDistortionTool_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensDistortionTool, UCameraCalibrationStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationEditor"), Z_Construct_UClass_ULensDistortionTool_NoRegister) \
	DECLARE_SERIALIZER(ULensDistortionTool)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensDistortionTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensDistortionTool(ULensDistortionTool&&) = delete; \
	ULensDistortionTool(const ULensDistortionTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensDistortionTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionTool) \
	NO_API virtual ~ULensDistortionTool();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_171_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_174_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensDistortionTool;

// ********** End Class ULensDistortionTool ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h

// ********** Begin Enum ECalibrationPattern *******************************************************
#define FOREACH_ENUM_ECALIBRATIONPATTERN(op) \
	op(ECalibrationPattern::Checkerboard) \
	op(ECalibrationPattern::Aruco) \
	op(ECalibrationPattern::Points) 

enum class ECalibrationPattern : uint8;
template<> struct TIsUEnumClass<ECalibrationPattern> { enum { Value = true }; };
template<> CAMERACALIBRATIONEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECalibrationPattern>();
// ********** End Enum ECalibrationPattern *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
