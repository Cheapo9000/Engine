// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeadMountedDisplayFunctionLibrary.h"

#ifdef XRBASE_HeadMountedDisplayFunctionLibrary_generated_h
#error "HeadMountedDisplayFunctionLibrary.generated.h already included, missing '#pragma once' in HeadMountedDisplayFunctionLibrary.h"
#endif
#define XRBASE_HeadMountedDisplayFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture;
enum class EControllerHand : uint8;
enum class ESpectatorScreenMode : uint8;
enum class EXRControllerPoseType : uint8;
enum class EXRSpaceType : uint8;
enum class EXRTrackedDeviceType : uint8;
struct FKey;
struct FLinearColor;
struct FTimespan;
struct FXRDeviceId;
struct FXRHandTrackingState;
struct FXRHMDData;
struct FXRMotionControllerState;

// ********** Begin Delegate FXRDeviceOnDisconnectDelegate *****************************************
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_14_DELEGATE \
XRBASE_API void FXRDeviceOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& XRDeviceOnDisconnectDelegate, const FString& OutReason);


// ********** End Delegate FXRDeviceOnDisconnectDelegate *******************************************

// ********** Begin Delegate FXRTimedInputActionDelegate *******************************************
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_15_DELEGATE \
XRBASE_API void FXRTimedInputActionDelegate_DelegateWrapper(const FScriptDelegate& XRTimedInputActionDelegate, const float Value, const FTimespan Time);


// ********** End Delegate FXRTimedInputActionDelegate *********************************************

// ********** Begin Class UHeadMountedDisplayFunctionLibrary ***************************************
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_20_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBreakKey); \
	DECLARE_FUNCTION(execGetPlayAreaRect); \
	DECLARE_FUNCTION(execGetTrackingOriginTransform); \
	DECLARE_FUNCTION(execGetPlayAreaBounds); \
	DECLARE_FUNCTION(execGetControllerTransformForTime2); \
	DECLARE_FUNCTION(execClearXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRTimedInputActionDelegate); \
	DECLARE_FUNCTION(execSetXRDisconnectDelegate); \
	DECLARE_FUNCTION(execDisconnectRemoteXRDevice); \
	DECLARE_FUNCTION(execConnectRemoteXRDevice); \
	DECLARE_FUNCTION(execGetCurrentInteractionProfile); \
	DECLARE_FUNCTION(execGetHandTrackingState); \
	DECLARE_FUNCTION(execGetMotionControllerState); \
	DECLARE_FUNCTION(execGetHMDData); \
	DECLARE_FUNCTION(execIsDeviceTracking); \
	DECLARE_FUNCTION(execGetDeviceWorldPose); \
	DECLARE_FUNCTION(execGetDevicePose); \
	DECLARE_FUNCTION(execEnumerateTrackedDevices); \
	DECLARE_FUNCTION(execSetHMDColorScaleAndBias); \
	DECLARE_FUNCTION(execSetSpectatorScreenModeTexturePlusEyeLayout); \
	DECLARE_FUNCTION(execSetSpectatorScreenTexture); \
	DECLARE_FUNCTION(execSetSpectatorScreenMode); \
	DECLARE_FUNCTION(execIsSpectatorScreenModeControllable); \
	DECLARE_FUNCTION(execGetVRFocusState); \
	DECLARE_FUNCTION(execUpdateExternalTrackingHMDPosition); \
	DECLARE_FUNCTION(execCalibrateExternalTrackingToHMD); \
	DECLARE_FUNCTION(execGetTrackingToWorldTransform); \
	DECLARE_FUNCTION(execGetTrackingOrigin); \
	DECLARE_FUNCTION(execSetTrackingOrigin); \
	DECLARE_FUNCTION(execGetWorldToMetersScale); \
	DECLARE_FUNCTION(execSetWorldToMetersScale); \
	DECLARE_FUNCTION(execGetPixelDensity); \
	DECLARE_FUNCTION(execGetXRSecondaryScreenPercentage); \
	DECLARE_FUNCTION(execSetClippingPlanes); \
	DECLARE_FUNCTION(execResetOrientationAndPosition); \
	DECLARE_FUNCTION(execGetTrackingSensorParameters); \
	DECLARE_FUNCTION(execGetNumOfTrackingSensors); \
	DECLARE_FUNCTION(execHasValidTrackingPosition); \
	DECLARE_FUNCTION(execGetOrientationAndPosition); \
	DECLARE_FUNCTION(execGetHMDWornState); \
	DECLARE_FUNCTION(execGetVersionString); \
	DECLARE_FUNCTION(execGetXRSystemFlags); \
	DECLARE_FUNCTION(execGetHMDDeviceName); \
	DECLARE_FUNCTION(execEnableHMD); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayConnected); \
	DECLARE_FUNCTION(execIsHeadMountedDisplayEnabled);


struct Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics;
XRBASE_API UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUHeadMountedDisplayFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRBASE_API UClass* ::Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UHeadMountedDisplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRBase"), Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UHeadMountedDisplayFunctionLibrary)


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	XRBASE_API UHeadMountedDisplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeadMountedDisplayFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(XRBASE_API, UHeadMountedDisplayFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeadMountedDisplayFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHeadMountedDisplayFunctionLibrary(UHeadMountedDisplayFunctionLibrary&&) = delete; \
	UHeadMountedDisplayFunctionLibrary(const UHeadMountedDisplayFunctionLibrary&) = delete; \
	XRBASE_API virtual ~UHeadMountedDisplayFunctionLibrary();


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHeadMountedDisplayFunctionLibrary;

// ********** End Class UHeadMountedDisplayFunctionLibrary *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_HeadMountedDisplayFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
