// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensDistortionModelHandlerBase.h"

#ifdef CAMERACALIBRATIONCORE_LensDistortionModelHandlerBase_generated_h
#error "LensDistortionModelHandlerBase.generated.h already included, missing '#pragma once' in LensDistortionModelHandlerBase.h"
#endif
#define CAMERACALIBRATIONCORE_LensDistortionModelHandlerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class ULensModel;
class UTextureRenderTarget2D;
struct FLensDistortionState;

// ********** Begin ScriptStruct FLensDistortionState **********************************************
struct Z_Construct_UScriptStruct_FLensDistortionState_Statics;
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLensDistortionState_Statics; \
	CAMERACALIBRATIONCORE_API static class UScriptStruct* StaticStruct();


struct FLensDistortionState;
// ********** End ScriptStruct FLensDistortionState ************************************************

// ********** Begin Class ULensDistortionModelHandlerBase ******************************************
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDistortionDisplacementMap); \
	DECLARE_FUNCTION(execGetUndistortionDisplacementMap); \
	DECLARE_FUNCTION(execSetDistortionState); \
	DECLARE_FUNCTION(execIsModelSupported);


struct Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensDistortionModelHandlerBase(); \
	friend struct ::Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensDistortionModelHandlerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister) \
	DECLARE_SERIALIZER(ULensDistortionModelHandlerBase)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_49_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensDistortionModelHandlerBase(ULensDistortionModelHandlerBase&&) = delete; \
	ULensDistortionModelHandlerBase(const ULensDistortionModelHandlerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, ULensDistortionModelHandlerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionModelHandlerBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULensDistortionModelHandlerBase) \
	CAMERACALIBRATIONCORE_API virtual ~ULensDistortionModelHandlerBase();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_46_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensDistortionModelHandlerBase;

// ********** End Class ULensDistortionModelHandlerBase ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
