// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrackingAlignmentCalibrationProfile.h"

#ifdef TRACKINGALIGNMENT_TrackingAlignmentCalibrationProfile_generated_h
#error "TrackingAlignmentCalibrationProfile.generated.h already included, missing '#pragma once' in TrackingAlignmentCalibrationProfile.h"
#endif
#define TRACKINGALIGNMENT_TrackingAlignmentCalibrationProfile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTrackingAlignmentSample;

// ********** Begin Class UTrackingAlignmentCalibrationProfile *************************************
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearSamples); \
	DECLARE_FUNCTION(execRemoveSample); \
	DECLARE_FUNCTION(execCaptureSample);


struct Z_Construct_UClass_UTrackingAlignmentCalibrationProfile_Statics;
TRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignmentCalibrationProfile_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrackingAlignmentCalibrationProfile(); \
	friend struct ::Z_Construct_UClass_UTrackingAlignmentCalibrationProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRACKINGALIGNMENT_API UClass* ::Z_Construct_UClass_UTrackingAlignmentCalibrationProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrackingAlignmentCalibrationProfile, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrackingAlignment"), Z_Construct_UClass_UTrackingAlignmentCalibrationProfile_NoRegister) \
	DECLARE_SERIALIZER(UTrackingAlignmentCalibrationProfile)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRACKINGALIGNMENT_API UTrackingAlignmentCalibrationProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrackingAlignmentCalibrationProfile(UTrackingAlignmentCalibrationProfile&&) = delete; \
	UTrackingAlignmentCalibrationProfile(const UTrackingAlignmentCalibrationProfile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRACKINGALIGNMENT_API, UTrackingAlignmentCalibrationProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackingAlignmentCalibrationProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackingAlignmentCalibrationProfile) \
	TRACKINGALIGNMENT_API virtual ~UTrackingAlignmentCalibrationProfile();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrackingAlignmentCalibrationProfile;

// ********** End Class UTrackingAlignmentCalibrationProfile ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
