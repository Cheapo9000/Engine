// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraCalibrationStep.h"

#ifdef CAMERACALIBRATIONCORE_CameraCalibrationStep_generated_h
#error "CameraCalibrationStep.generated.h already included, missing '#pragma once' in CameraCalibrationStep.h"
#endif
#define CAMERACALIBRATIONCORE_CameraCalibrationStep_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraCalibrationStep ***************************************************
struct Z_Construct_UClass_UCameraCalibrationStep_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationStep_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationStep_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraCalibrationStep(); \
	friend struct ::Z_Construct_UClass_UCameraCalibrationStep_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_UCameraCalibrationStep_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraCalibrationStep, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_UCameraCalibrationStep_NoRegister) \
	DECLARE_SERIALIZER(UCameraCalibrationStep)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationStep_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMERACALIBRATIONCORE_API UCameraCalibrationStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraCalibrationStep(UCameraCalibrationStep&&) = delete; \
	UCameraCalibrationStep(const UCameraCalibrationStep&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, UCameraCalibrationStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraCalibrationStep); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraCalibrationStep) \
	CAMERACALIBRATIONCORE_API virtual ~UCameraCalibrationStep();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationStep_h_22_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationStep_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationStep_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationStep_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraCalibrationStep;

// ********** End Class UCameraCalibrationStep *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationStep_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
