// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MonoVideoIngestDevice.h"

#ifdef MONOVIDEOINGESTDEVICE_MonoVideoIngestDevice_generated_h
#error "MonoVideoIngestDevice.generated.h already included, missing '#pragma once' in MonoVideoIngestDevice.h"
#endif
#define MONOVIDEOINGESTDEVICE_MonoVideoIngestDevice_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMonoVideoIngestDeviceSettings;

// ********** Begin Class UMonoVideoIngestDeviceSettings *******************************************
struct Z_Construct_UClass_UMonoVideoIngestDeviceSettings_Statics;
MONOVIDEOINGESTDEVICE_API UClass* Z_Construct_UClass_UMonoVideoIngestDeviceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonoVideoIngestDeviceSettings(); \
	friend struct ::Z_Construct_UClass_UMonoVideoIngestDeviceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MONOVIDEOINGESTDEVICE_API UClass* ::Z_Construct_UClass_UMonoVideoIngestDeviceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMonoVideoIngestDeviceSettings, ULiveLinkDeviceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonoVideoIngestDevice"), Z_Construct_UClass_UMonoVideoIngestDeviceSettings_NoRegister) \
	DECLARE_SERIALIZER(UMonoVideoIngestDeviceSettings)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMonoVideoIngestDeviceSettings(UMonoVideoIngestDeviceSettings&&) = delete; \
	UMonoVideoIngestDeviceSettings(const UMonoVideoIngestDeviceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonoVideoIngestDeviceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonoVideoIngestDeviceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMonoVideoIngestDeviceSettings) \
	NO_API virtual ~UMonoVideoIngestDeviceSettings();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMonoVideoIngestDeviceSettings;

// ********** End Class UMonoVideoIngestDeviceSettings *********************************************

// ********** Begin Class UMonoVideoIngestDevice ***************************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UMonoVideoIngestDevice_Statics;
MONOVIDEOINGESTDEVICE_API UClass* Z_Construct_UClass_UMonoVideoIngestDevice_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonoVideoIngestDevice(); \
	friend struct ::Z_Construct_UClass_UMonoVideoIngestDevice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MONOVIDEOINGESTDEVICE_API UClass* ::Z_Construct_UClass_UMonoVideoIngestDevice_NoRegister(); \
public: \
	DECLARE_CLASS2(UMonoVideoIngestDevice, UBaseIngestLiveLinkDevice, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonoVideoIngestDevice"), Z_Construct_UClass_UMonoVideoIngestDevice_NoRegister) \
	DECLARE_SERIALIZER(UMonoVideoIngestDevice) \
	virtual UObject* _getUObject() const override { return const_cast<UMonoVideoIngestDevice*>(this); }


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonoVideoIngestDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMonoVideoIngestDevice(UMonoVideoIngestDevice&&) = delete; \
	UMonoVideoIngestDevice(const UMonoVideoIngestDevice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonoVideoIngestDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonoVideoIngestDevice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonoVideoIngestDevice) \
	NO_API virtual ~UMonoVideoIngestDevice();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_64_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMonoVideoIngestDevice;

// ********** End Class UMonoVideoIngestDevice *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_MonoVideoIngestDevice_Private_MonoVideoIngestDevice_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
