// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrackingAlignmentBPLibrary.h"

#ifdef TRACKINGALIGNMENT_TrackingAlignmentBPLibrary_generated_h
#error "TrackingAlignmentBPLibrary.generated.h already included, missing '#pragma once' in TrackingAlignmentBPLibrary.h"
#endif
#define TRACKINGALIGNMENT_TrackingAlignmentBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTrackingAlignmentCalibrationProfile;
struct FTrackingAlignmentActors;

// ********** Begin Class UTrackingAlignmentFunctionLibrary ****************************************
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindAndUpdateOriginActor); \
	DECLARE_FUNCTION(execGetAlignedTrackerBOrigin); \
	DECLARE_FUNCTION(execGetMinimumRequiredTrackerAligmentSampleCount);


struct Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics;
TRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrackingAlignmentFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRACKINGALIGNMENT_API UClass* ::Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrackingAlignmentFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrackingAlignment"), Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTrackingAlignmentFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRACKINGALIGNMENT_API UTrackingAlignmentFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrackingAlignmentFunctionLibrary(UTrackingAlignmentFunctionLibrary&&) = delete; \
	UTrackingAlignmentFunctionLibrary(const UTrackingAlignmentFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRACKINGALIGNMENT_API, UTrackingAlignmentFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackingAlignmentFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackingAlignmentFunctionLibrary) \
	TRACKINGALIGNMENT_API virtual ~UTrackingAlignmentFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrackingAlignmentFunctionLibrary;

// ********** End Class UTrackingAlignmentFunctionLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
