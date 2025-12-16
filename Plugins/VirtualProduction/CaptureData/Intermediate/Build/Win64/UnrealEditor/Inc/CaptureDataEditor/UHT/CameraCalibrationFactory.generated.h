// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraCalibrationFactory.h"

#ifdef CAPTUREDATAEDITOR_CameraCalibrationFactory_generated_h
#error "CameraCalibrationFactory.generated.h already included, missing '#pragma once' in CameraCalibrationFactory.h"
#endif
#define CAPTUREDATAEDITOR_CameraCalibrationFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraCalibrationFactory ************************************************
struct Z_Construct_UClass_UCameraCalibrationFactory_Statics;
CAPTUREDATAEDITOR_API UClass* Z_Construct_UClass_UCameraCalibrationFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CameraCalibrationFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraCalibrationFactory(); \
	friend struct ::Z_Construct_UClass_UCameraCalibrationFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREDATAEDITOR_API UClass* ::Z_Construct_UClass_UCameraCalibrationFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraCalibrationFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureDataEditor"), Z_Construct_UClass_UCameraCalibrationFactory_NoRegister) \
	DECLARE_SERIALIZER(UCameraCalibrationFactory)


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CameraCalibrationFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraCalibrationFactory(UCameraCalibrationFactory&&) = delete; \
	UCameraCalibrationFactory(const UCameraCalibrationFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraCalibrationFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraCalibrationFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraCalibrationFactory) \
	NO_API virtual ~UCameraCalibrationFactory();


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CameraCalibrationFactory_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CameraCalibrationFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CameraCalibrationFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CameraCalibrationFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraCalibrationFactory;

// ********** End Class UCameraCalibrationFactory **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataEditor_Public_CameraCalibrationFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
