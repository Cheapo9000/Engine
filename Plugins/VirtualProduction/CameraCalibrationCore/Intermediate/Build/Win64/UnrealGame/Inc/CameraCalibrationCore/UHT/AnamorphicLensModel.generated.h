// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Models/AnamorphicLensModel.h"

#ifdef CAMERACALIBRATIONCORE_AnamorphicLensModel_generated_h
#error "AnamorphicLensModel.generated.h already included, missing '#pragma once' in AnamorphicLensModel.h"
#endif
#define CAMERACALIBRATIONCORE_AnamorphicLensModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnamorphicDistortionParameters ***********************************
struct Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAnamorphicDistortionParameters_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


struct FAnamorphicDistortionParameters;
// ********** End ScriptStruct FAnamorphicDistortionParameters *************************************

// ********** Begin Class UAnamorphicLensModel *****************************************************
struct Z_Construct_UClass_UAnamorphicLensModel_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UAnamorphicLensModel_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnamorphicLensModel(); \
	friend struct ::Z_Construct_UClass_UAnamorphicLensModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_UAnamorphicLensModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnamorphicLensModel, ULensModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_UAnamorphicLensModel_NoRegister) \
	DECLARE_SERIALIZER(UAnamorphicLensModel)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMERACALIBRATIONCORE_API UAnamorphicLensModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnamorphicLensModel(UAnamorphicLensModel&&) = delete; \
	UAnamorphicLensModel(const UAnamorphicLensModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, UAnamorphicLensModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnamorphicLensModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnamorphicLensModel) \
	CAMERACALIBRATIONCORE_API virtual ~UAnamorphicLensModel();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_82_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnamorphicLensModel;

// ********** End Class UAnamorphicLensModel *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_AnamorphicLensModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
