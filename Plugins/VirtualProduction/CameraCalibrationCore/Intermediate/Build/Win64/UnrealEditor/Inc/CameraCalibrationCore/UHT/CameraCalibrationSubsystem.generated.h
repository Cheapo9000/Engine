// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraCalibrationSubsystem.h"

#ifdef CAMERACALIBRATIONCORE_CameraCalibrationSubsystem_generated_h
#error "CameraCalibrationSubsystem.generated.h already included, missing '#pragma once' in CameraCalibrationSubsystem.h"
#endif
#define CAMERACALIBRATIONCORE_CameraCalibrationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraCalibrationStep;
class UCameraImageCenterAlgo;
class UCameraNodalOffsetAlgo;
class UCineCameraComponent;
class UClass;
class ULensDistortionModelHandlerBase;
class ULensFile;
class ULensModel;
class UMaterialInterface;
struct FDistortionHandlerPicker;
struct FLensFilePicker;

// ********** Begin Class UCameraCalibrationSubsystem **********************************************
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraCalibrationStep); \
	DECLARE_FUNCTION(execGetCameraCalibrationSteps); \
	DECLARE_FUNCTION(execGetOverlayMaterialNames); \
	DECLARE_FUNCTION(execGetOverlayMaterial); \
	DECLARE_FUNCTION(execGetCameraImageCenterAlgos); \
	DECLARE_FUNCTION(execGetCameraImageCenterAlgo); \
	DECLARE_FUNCTION(execGetCameraNodalOffsetAlgos); \
	DECLARE_FUNCTION(execGetCameraNodalOffsetAlgo); \
	DECLARE_FUNCTION(execGetRegisteredLensModel); \
	DECLARE_FUNCTION(execUnregisterDistortionModelHandler); \
	DECLARE_FUNCTION(execFindOrCreateDistortionModelHandler); \
	DECLARE_FUNCTION(execFindDistortionModelHandler); \
	DECLARE_FUNCTION(execGetDistortionModelHandlers); \
	DECLARE_FUNCTION(execGetLensFile); \
	DECLARE_FUNCTION(execSetDefaultLensFile); \
	DECLARE_FUNCTION(execGetDefaultLensFile);


struct Z_Construct_UClass_UCameraCalibrationSubsystem_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraCalibrationSubsystem(); \
	friend struct ::Z_Construct_UClass_UCameraCalibrationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_UCameraCalibrationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraCalibrationSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_UCameraCalibrationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCameraCalibrationSubsystem)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMERACALIBRATIONCORE_API UCameraCalibrationSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraCalibrationSubsystem(UCameraCalibrationSubsystem&&) = delete; \
	UCameraCalibrationSubsystem(const UCameraCalibrationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, UCameraCalibrationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraCalibrationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCameraCalibrationSubsystem) \
	CAMERACALIBRATIONCORE_API virtual ~UCameraCalibrationSubsystem();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_28_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraCalibrationSubsystem;

// ********** End Class UCameraCalibrationSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
