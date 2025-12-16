// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Models/BrownConradyUDLensModel.h"

#ifdef CAMERACALIBRATIONCORE_BrownConradyUDLensModel_generated_h
#error "BrownConradyUDLensModel.generated.h already included, missing '#pragma once' in BrownConradyUDLensModel.h"
#endif
#define CAMERACALIBRATIONCORE_BrownConradyUDLensModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBrownConradyUDDistortionParameters *******************************
struct Z_Construct_UScriptStruct_FBrownConradyUDDistortionParameters_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_BrownConradyUDLensModel_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBrownConradyUDDistortionParameters_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


struct FBrownConradyUDDistortionParameters;
// ********** End ScriptStruct FBrownConradyUDDistortionParameters *********************************

// ********** Begin Class UBrownConradyUDLensModel *************************************************
struct Z_Construct_UClass_UBrownConradyUDLensModel_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UBrownConradyUDLensModel_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_BrownConradyUDLensModel_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBrownConradyUDLensModel(); \
	friend struct ::Z_Construct_UClass_UBrownConradyUDLensModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_UBrownConradyUDLensModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UBrownConradyUDLensModel, ULensModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_UBrownConradyUDLensModel_NoRegister) \
	DECLARE_SERIALIZER(UBrownConradyUDLensModel)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_BrownConradyUDLensModel_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMERACALIBRATIONCORE_API UBrownConradyUDLensModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBrownConradyUDLensModel(UBrownConradyUDLensModel&&) = delete; \
	UBrownConradyUDLensModel(const UBrownConradyUDLensModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, UBrownConradyUDLensModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrownConradyUDLensModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrownConradyUDLensModel) \
	CAMERACALIBRATIONCORE_API virtual ~UBrownConradyUDLensModel();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_BrownConradyUDLensModel_h_58_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_BrownConradyUDLensModel_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_BrownConradyUDLensModel_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_BrownConradyUDLensModel_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBrownConradyUDLensModel;

// ********** End Class UBrownConradyUDLensModel ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_BrownConradyUDLensModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
