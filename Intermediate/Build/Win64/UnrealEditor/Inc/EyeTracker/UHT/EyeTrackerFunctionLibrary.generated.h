// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EyeTrackerFunctionLibrary.h"

#ifdef EYETRACKER_EyeTrackerFunctionLibrary_generated_h
#error "EyeTrackerFunctionLibrary.generated.h already included, missing '#pragma once' in EyeTrackerFunctionLibrary.h"
#endif
#define EYETRACKER_EyeTrackerFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FEyeTrackerGazeData;
struct FEyeTrackerStereoGazeData;

// ********** Begin Class UEyeTrackerFunctionLibrary ***********************************************
#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEyeTrackedPlayer); \
	DECLARE_FUNCTION(execGetStereoGazeData); \
	DECLARE_FUNCTION(execGetGazeData); \
	DECLARE_FUNCTION(execIsStereoGazeDataAvailable); \
	DECLARE_FUNCTION(execIsEyeTrackerConnected);


struct Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics;
EYETRACKER_API UClass* Z_Construct_UClass_UEyeTrackerFunctionLibrary_NoRegister();

#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEyeTrackerFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EYETRACKER_API UClass* ::Z_Construct_UClass_UEyeTrackerFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEyeTrackerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EyeTracker"), Z_Construct_UClass_UEyeTrackerFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEyeTrackerFunctionLibrary)


#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EYETRACKER_API UEyeTrackerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEyeTrackerFunctionLibrary(UEyeTrackerFunctionLibrary&&) = delete; \
	UEyeTrackerFunctionLibrary(const UEyeTrackerFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EYETRACKER_API, UEyeTrackerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEyeTrackerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEyeTrackerFunctionLibrary) \
	EYETRACKER_API virtual ~UEyeTrackerFunctionLibrary();


#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_14_PROLOG
#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEyeTrackerFunctionLibrary;

// ********** End Class UEyeTrackerFunctionLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
