// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Models/SphericalLensModel.h"

#ifdef CAMERACALIBRATIONCORE_SphericalLensModel_generated_h
#error "SphericalLensModel.generated.h already included, missing '#pragma once' in SphericalLensModel.h"
#endif
#define CAMERACALIBRATIONCORE_SphericalLensModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSphericalDistortionParameters ************************************
struct Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


struct FSphericalDistortionParameters;
// ********** End ScriptStruct FSphericalDistortionParameters **************************************

// ********** Begin Class USphericalLensModel ******************************************************
struct Z_Construct_UClass_USphericalLensModel_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_USphericalLensModel_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSphericalLensModel(); \
	friend struct ::Z_Construct_UClass_USphericalLensModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_USphericalLensModel_NoRegister(); \
public: \
	DECLARE_CLASS2(USphericalLensModel, ULensModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_USphericalLensModel_NoRegister) \
	DECLARE_SERIALIZER(USphericalLensModel)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMERACALIBRATIONCORE_API USphericalLensModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USphericalLensModel(USphericalLensModel&&) = delete; \
	USphericalLensModel(const USphericalLensModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, USphericalLensModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphericalLensModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USphericalLensModel) \
	CAMERACALIBRATIONCORE_API virtual ~USphericalLensModel();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_47_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USphericalLensModel;

// ********** End Class USphericalLensModel ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
