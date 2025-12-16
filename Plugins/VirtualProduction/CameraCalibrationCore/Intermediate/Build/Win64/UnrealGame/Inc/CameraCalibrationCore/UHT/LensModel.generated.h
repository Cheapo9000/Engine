// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Models/LensModel.h"

#ifdef CAMERACALIBRATIONCORE_LensModel_generated_h
#error "LensModel.generated.h already included, missing '#pragma once' in LensModel.h"
#endif
#define CAMERACALIBRATIONCORE_LensModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULensModel ***************************************************************
struct Z_Construct_UClass_ULensModel_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensModel(); \
	friend struct ::Z_Construct_UClass_ULensModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_ULensModel_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensModel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_ULensModel_NoRegister) \
	DECLARE_SERIALIZER(ULensModel)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMERACALIBRATIONCORE_API ULensModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensModel(ULensModel&&) = delete; \
	ULensModel(const ULensModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, ULensModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensModel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensModel) \
	CAMERACALIBRATIONCORE_API virtual ~ULensModel();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensModel;

// ********** End Class ULensModel *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
