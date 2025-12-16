// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetEditor/LensInfoStep.h"

#ifdef CAMERACALIBRATIONEDITOR_LensInfoStep_generated_h
#error "LensInfoStep.generated.h already included, missing '#pragma once' in LensInfoStep.h"
#endif
#define CAMERACALIBRATIONEDITOR_LensInfoStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULensInfoStep ************************************************************
struct Z_Construct_UClass_ULensInfoStep_Statics;
CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensInfoStep_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensInfoStep(); \
	friend struct ::Z_Construct_UClass_ULensInfoStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONEDITOR_API UClass* ::Z_Construct_UClass_ULensInfoStep_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensInfoStep, UCameraCalibrationStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationEditor"), Z_Construct_UClass_ULensInfoStep_NoRegister) \
	DECLARE_SERIALIZER(ULensInfoStep)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensInfoStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensInfoStep(ULensInfoStep&&) = delete; \
	ULensInfoStep(const ULensInfoStep&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensInfoStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensInfoStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensInfoStep) \
	NO_API virtual ~ULensInfoStep();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensInfoStep;

// ********** End Class ULensInfoStep **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
