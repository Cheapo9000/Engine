// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StereoVideoIngestDevice.h"

#ifdef STEREOVIDEOINGESTDEVICE_StereoVideoIngestDevice_generated_h
#error "StereoVideoIngestDevice.generated.h already included, missing '#pragma once' in StereoVideoIngestDevice.h"
#endif
#define STEREOVIDEOINGESTDEVICE_StereoVideoIngestDevice_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStereoVideoIngestDeviceSettings;

// ********** Begin Class UStereoVideoIngestDeviceSettings *****************************************
struct Z_Construct_UClass_UStereoVideoIngestDeviceSettings_Statics;
STEREOVIDEOINGESTDEVICE_API UClass* Z_Construct_UClass_UStereoVideoIngestDeviceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoVideoIngestDeviceSettings(); \
	friend struct ::Z_Construct_UClass_UStereoVideoIngestDeviceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEREOVIDEOINGESTDEVICE_API UClass* ::Z_Construct_UClass_UStereoVideoIngestDeviceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UStereoVideoIngestDeviceSettings, ULiveLinkDeviceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StereoVideoIngestDevice"), Z_Construct_UClass_UStereoVideoIngestDeviceSettings_NoRegister) \
	DECLARE_SERIALIZER(UStereoVideoIngestDeviceSettings)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStereoVideoIngestDeviceSettings(UStereoVideoIngestDeviceSettings&&) = delete; \
	UStereoVideoIngestDeviceSettings(const UStereoVideoIngestDeviceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoVideoIngestDeviceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoVideoIngestDeviceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoVideoIngestDeviceSettings) \
	NO_API virtual ~UStereoVideoIngestDeviceSettings();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStereoVideoIngestDeviceSettings;

// ********** End Class UStereoVideoIngestDeviceSettings *******************************************

// ********** Begin Class UStereoVideoIngestDevice *************************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UStereoVideoIngestDevice_Statics;
STEREOVIDEOINGESTDEVICE_API UClass* Z_Construct_UClass_UStereoVideoIngestDevice_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoVideoIngestDevice(); \
	friend struct ::Z_Construct_UClass_UStereoVideoIngestDevice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEREOVIDEOINGESTDEVICE_API UClass* ::Z_Construct_UClass_UStereoVideoIngestDevice_NoRegister(); \
public: \
	DECLARE_CLASS2(UStereoVideoIngestDevice, UBaseIngestLiveLinkDevice, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StereoVideoIngestDevice"), Z_Construct_UClass_UStereoVideoIngestDevice_NoRegister) \
	DECLARE_SERIALIZER(UStereoVideoIngestDevice) \
	virtual UObject* _getUObject() const override { return const_cast<UStereoVideoIngestDevice*>(this); }


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_93_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStereoVideoIngestDevice(UStereoVideoIngestDevice&&) = delete; \
	UStereoVideoIngestDevice(const UStereoVideoIngestDevice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoVideoIngestDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoVideoIngestDevice); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoVideoIngestDevice)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_89_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_93_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStereoVideoIngestDevice;

// ********** End Class UStereoVideoIngestDevice ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_StereoVideoIngestDevice_Private_StereoVideoIngestDevice_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
