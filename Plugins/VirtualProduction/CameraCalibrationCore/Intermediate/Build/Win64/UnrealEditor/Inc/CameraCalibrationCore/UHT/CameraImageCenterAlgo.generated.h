// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraImageCenterAlgo.h"

#ifdef CAMERACALIBRATIONCORE_CameraImageCenterAlgo_generated_h
#error "CameraImageCenterAlgo.generated.h already included, missing '#pragma once' in CameraImageCenterAlgo.h"
#endif
#define CAMERACALIBRATIONCORE_CameraImageCenterAlgo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCameraImageCenterAlgo ***************************************************
struct Z_Construct_UClass_UCameraImageCenterAlgo_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraImageCenterAlgo_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraImageCenterAlgo(); \
	friend struct ::Z_Construct_UClass_UCameraImageCenterAlgo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_UCameraImageCenterAlgo_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraImageCenterAlgo, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_UCameraImageCenterAlgo_NoRegister) \
	DECLARE_SERIALIZER(UCameraImageCenterAlgo)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMERACALIBRATIONCORE_API UCameraImageCenterAlgo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraImageCenterAlgo(UCameraImageCenterAlgo&&) = delete; \
	UCameraImageCenterAlgo(const UCameraImageCenterAlgo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, UCameraImageCenterAlgo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraImageCenterAlgo); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraImageCenterAlgo) \
	CAMERACALIBRATIONCORE_API virtual ~UCameraImageCenterAlgo();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_24_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraImageCenterAlgo;

// ********** End Class UCameraImageCenterAlgo *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
