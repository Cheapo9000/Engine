// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraLensDistortionAlgo.h"

#ifdef CAMERACALIBRATIONCORE_CameraLensDistortionAlgo_generated_h
#error "CameraLensDistortionAlgo.generated.h already included, missing '#pragma once' in CameraLensDistortionAlgo.h"
#endif
#define CAMERACALIBRATIONCORE_CameraLensDistortionAlgo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraLensDistortionAlgo ************************************************
struct Z_Construct_UClass_UCameraLensDistortionAlgo_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgo_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraLensDistortionAlgo(); \
	friend struct ::Z_Construct_UClass_UCameraLensDistortionAlgo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_UCameraLensDistortionAlgo_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraLensDistortionAlgo, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_UCameraLensDistortionAlgo_NoRegister) \
	DECLARE_SERIALIZER(UCameraLensDistortionAlgo)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMERACALIBRATIONCORE_API UCameraLensDistortionAlgo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraLensDistortionAlgo(UCameraLensDistortionAlgo&&) = delete; \
	UCameraLensDistortionAlgo(const UCameraLensDistortionAlgo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, UCameraLensDistortionAlgo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraLensDistortionAlgo); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraLensDistortionAlgo) \
	CAMERACALIBRATIONCORE_API virtual ~UCameraLensDistortionAlgo();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_34_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraLensDistortionAlgo;

// ********** End Class UCameraLensDistortionAlgo **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
