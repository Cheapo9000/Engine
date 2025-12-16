// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayCameras/LensCalibrationCameraNode.h"

#ifdef CAMERACALIBRATIONCORE_LensCalibrationCameraNode_generated_h
#error "LensCalibrationCameraNode.generated.h already included, missing '#pragma once' in LensCalibrationCameraNode.h"
#endif
#define CAMERACALIBRATIONCORE_LensCalibrationCameraNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULensCalibrationCameraNode ***********************************************
struct Z_Construct_UClass_ULensCalibrationCameraNode_Statics;
CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensCalibrationCameraNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_GameplayCameras_LensCalibrationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensCalibrationCameraNode(); \
	friend struct ::Z_Construct_UClass_ULensCalibrationCameraNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAMERACALIBRATIONCORE_API UClass* ::Z_Construct_UClass_ULensCalibrationCameraNode_NoRegister(); \
public: \
	DECLARE_CLASS2(ULensCalibrationCameraNode, UCameraNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CameraCalibrationCore"), Z_Construct_UClass_ULensCalibrationCameraNode_NoRegister) \
	DECLARE_SERIALIZER(ULensCalibrationCameraNode)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_GameplayCameras_LensCalibrationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAMERACALIBRATIONCORE_API ULensCalibrationCameraNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULensCalibrationCameraNode(ULensCalibrationCameraNode&&) = delete; \
	ULensCalibrationCameraNode(const ULensCalibrationCameraNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAMERACALIBRATIONCORE_API, ULensCalibrationCameraNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensCalibrationCameraNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensCalibrationCameraNode) \
	CAMERACALIBRATIONCORE_API virtual ~ULensCalibrationCameraNode();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_GameplayCameras_LensCalibrationCameraNode_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_GameplayCameras_LensCalibrationCameraNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_GameplayCameras_LensCalibrationCameraNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_GameplayCameras_LensCalibrationCameraNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULensCalibrationCameraNode;

// ********** End Class ULensCalibrationCameraNode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_GameplayCameras_LensCalibrationCameraNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
