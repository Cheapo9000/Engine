// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionTrackedDeviceFunctionLibrary.h"

#ifdef XRBASE_MotionTrackedDeviceFunctionLibrary_generated_h
#error "MotionTrackedDeviceFunctionLibrary.generated.h already included, missing '#pragma once' in MotionTrackedDeviceFunctionLibrary.h"
#endif
#define XRBASE_MotionTrackedDeviceFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMotionControllerComponent;
enum class EControllerHand : uint8;

// ********** Begin Class UMotionTrackedDeviceFunctionLibrary **************************************
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsMotionSourceTracking); \
	DECLARE_FUNCTION(execGetActiveTrackingSystemName); \
	DECLARE_FUNCTION(execEnumerateMotionSources); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfControllersForPlayer); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfAllControllers); \
	DECLARE_FUNCTION(execDisableMotionTrackingForComponent); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfSource); \
	DECLARE_FUNCTION(execDisableMotionTrackingOfDevice); \
	DECLARE_FUNCTION(execEnableMotionTrackingForComponent); \
	DECLARE_FUNCTION(execEnableMotionTrackingOfSource); \
	DECLARE_FUNCTION(execEnableMotionTrackingOfDevice); \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForComponent); \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForSource); \
	DECLARE_FUNCTION(execIsMotionTrackingEnabledForDevice); \
	DECLARE_FUNCTION(execGetMotionTrackingEnabledControllerCount); \
	DECLARE_FUNCTION(execGetMaximumMotionTrackedControllerCount); \
	DECLARE_FUNCTION(execSetIsControllerMotionTrackingEnabledByDefault); \
	DECLARE_FUNCTION(execIsMotionTrackedDeviceCountManagementNecessary);


struct Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics;
XRBASE_API UClass* Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend XRBASE_API UClass* ::Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionTrackedDeviceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/XRBase"), Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMotionTrackedDeviceFunctionLibrary)


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	XRBASE_API UMotionTrackedDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrackedDeviceFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(XRBASE_API, UMotionTrackedDeviceFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrackedDeviceFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionTrackedDeviceFunctionLibrary(UMotionTrackedDeviceFunctionLibrary&&) = delete; \
	UMotionTrackedDeviceFunctionLibrary(const UMotionTrackedDeviceFunctionLibrary&) = delete; \
	XRBASE_API virtual ~UMotionTrackedDeviceFunctionLibrary();


#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionTrackedDeviceFunctionLibrary;

// ********** End Class UMotionTrackedDeviceFunctionLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_XRBase_Source_XRBase_Public_MotionTrackedDeviceFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
