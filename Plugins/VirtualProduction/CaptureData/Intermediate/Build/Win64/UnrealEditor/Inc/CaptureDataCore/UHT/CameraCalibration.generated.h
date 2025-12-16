// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraCalibration.h"

#ifdef CAPTUREDATACORE_CameraCalibration_generated_h
#error "CameraCalibration.generated.h already included, missing '#pragma once' in CameraCalibration.h"
#endif
#define CAPTUREDATACORE_CameraCalibration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FExtendedLensFile *************************************************
struct Z_Construct_UScriptStruct_FExtendedLensFile_Statics;
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_CameraCalibration_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FExtendedLensFile_Statics; \
	CAPTUREDATACORE_API static class UScriptStruct* StaticStruct();


struct FExtendedLensFile;
// ********** End ScriptStruct FExtendedLensFile ***************************************************

// ********** Begin ScriptStruct FStereoPair *******************************************************
struct Z_Construct_UScriptStruct_FStereoPair_Statics;
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_CameraCalibration_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStereoPair_Statics; \
	CAPTUREDATACORE_API static class UScriptStruct* StaticStruct();


struct FStereoPair;
// ********** End ScriptStruct FStereoPair *********************************************************

// ********** Begin Class UCameraCalibration *******************************************************
struct Z_Construct_UClass_UCameraCalibration_Statics;
CAPTUREDATACORE_API UClass* Z_Construct_UClass_UCameraCalibration_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_CameraCalibration_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraCalibration(); \
	friend struct ::Z_Construct_UClass_UCameraCalibration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREDATACORE_API UClass* ::Z_Construct_UClass_UCameraCalibration_NoRegister(); \
public: \
	DECLARE_CLASS2(UCameraCalibration, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureDataCore"), Z_Construct_UClass_UCameraCalibration_NoRegister) \
	DECLARE_SERIALIZER(UCameraCalibration)


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_CameraCalibration_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAPTUREDATACORE_API UCameraCalibration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCameraCalibration(UCameraCalibration&&) = delete; \
	UCameraCalibration(const UCameraCalibration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAPTUREDATACORE_API, UCameraCalibration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraCalibration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraCalibration) \
	CAPTUREDATACORE_API virtual ~UCameraCalibration();


#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_CameraCalibration_h_85_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_CameraCalibration_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_CameraCalibration_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_CameraCalibration_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCameraCalibration;

// ********** End Class UCameraCalibration *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureData_Source_CaptureDataCore_Public_CameraCalibration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
