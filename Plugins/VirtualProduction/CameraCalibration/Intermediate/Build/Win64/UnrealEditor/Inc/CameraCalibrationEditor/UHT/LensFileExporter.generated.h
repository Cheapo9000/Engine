// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Exporters/LensFileExporter.h"

#ifdef CAMERACALIBRATIONEDITOR_LensFileExporter_generated_h
#error "LensFileExporter.generated.h already included, missing '#pragma once' in LensFileExporter.h"
#endif
#define CAMERACALIBRATIONEDITOR_LensFileExporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULensFileExporter ********************************************************
struct Z_Construct_UClass_ULensFileExporter_Statics;
CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensFileExporter_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULensFileExporter(); \
	friend struct ::Z_Construct_UClass_ULensFileExporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONEDITOR_API UClass* ::Z_Construct_UClass_ULensFileExporter_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensFileExporter, UExporter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CameraCalibrationEditor"), Z_Construct_UClass_ULensFileExporter_NoRegister) \
	DECLARE_SERIALIZER(ULensFileExporter)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULensFileExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensFileExporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULensFileExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensFileExporter); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensFileExporter(ULensFileExporter&&) = delete; \
	ULensFileExporter(const ULensFileExporter&) = delete; \
	NO_API virtual ~ULensFileExporter();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_15_INCLASS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensFileExporter;

// ********** End Class ULensFileExporter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
