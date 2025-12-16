// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeArchiveIngestDevice.h"

#ifdef TAKEARCHIVEINGESTDEVICE_TakeArchiveIngestDevice_generated_h
#error "TakeArchiveIngestDevice.generated.h already included, missing '#pragma once' in TakeArchiveIngestDevice.h"
#endif
#define TAKEARCHIVEINGESTDEVICE_TakeArchiveIngestDevice_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTakeArchiveIngestDeviceSettings;

// ********** Begin Class UTakeArchiveIngestDeviceSettings *****************************************
struct Z_Construct_UClass_UTakeArchiveIngestDeviceSettings_Statics;
TAKEARCHIVEINGESTDEVICE_API UClass* Z_Construct_UClass_UTakeArchiveIngestDeviceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeArchiveIngestDeviceSettings(); \
	friend struct ::Z_Construct_UClass_UTakeArchiveIngestDeviceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKEARCHIVEINGESTDEVICE_API UClass* ::Z_Construct_UClass_UTakeArchiveIngestDeviceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeArchiveIngestDeviceSettings, ULiveLinkDeviceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeArchiveIngestDevice"), Z_Construct_UClass_UTakeArchiveIngestDeviceSettings_NoRegister) \
	DECLARE_SERIALIZER(UTakeArchiveIngestDeviceSettings)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeArchiveIngestDeviceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeArchiveIngestDeviceSettings(UTakeArchiveIngestDeviceSettings&&) = delete; \
	UTakeArchiveIngestDeviceSettings(const UTakeArchiveIngestDeviceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeArchiveIngestDeviceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeArchiveIngestDeviceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeArchiveIngestDeviceSettings) \
	NO_API virtual ~UTakeArchiveIngestDeviceSettings();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_19_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeArchiveIngestDeviceSettings;

// ********** End Class UTakeArchiveIngestDeviceSettings *******************************************

// ********** Begin Class UTakeArchiveIngestDevice *************************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_UTakeArchiveIngestDevice_Statics;
TAKEARCHIVEINGESTDEVICE_API UClass* Z_Construct_UClass_UTakeArchiveIngestDevice_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeArchiveIngestDevice(); \
	friend struct ::Z_Construct_UClass_UTakeArchiveIngestDevice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TAKEARCHIVEINGESTDEVICE_API UClass* ::Z_Construct_UClass_UTakeArchiveIngestDevice_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeArchiveIngestDevice, UBaseIngestLiveLinkDevice, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TakeArchiveIngestDevice"), Z_Construct_UClass_UTakeArchiveIngestDevice_NoRegister) \
	DECLARE_SERIALIZER(UTakeArchiveIngestDevice) \
	virtual UObject* _getUObject() const override { return const_cast<UTakeArchiveIngestDevice*>(this); }


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeArchiveIngestDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeArchiveIngestDevice(UTakeArchiveIngestDevice&&) = delete; \
	UTakeArchiveIngestDevice(const UTakeArchiveIngestDevice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeArchiveIngestDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeArchiveIngestDevice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeArchiveIngestDevice) \
	NO_API virtual ~UTakeArchiveIngestDevice();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_34_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeArchiveIngestDevice;

// ********** End Class UTakeArchiveIngestDevice ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_TakeArchiveIngestDevice_Private_TakeArchiveIngestDevice_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
