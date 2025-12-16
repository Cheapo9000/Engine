// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkFaceDevice.h"

#ifdef CPSLIVELINKDEVICE_LiveLinkFaceDevice_generated_h
#error "LiveLinkFaceDevice.generated.h already included, missing '#pragma once' in LiveLinkFaceDevice.h"
#endif
#define CPSLIVELINKDEVICE_LiveLinkFaceDevice_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULiveLinkFaceDeviceSettings;

// ********** Begin Class ULiveLinkFaceDeviceSettings **********************************************
struct Z_Construct_UClass_ULiveLinkFaceDeviceSettings_Statics;
CPSLIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkFaceDeviceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkFaceDeviceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkFaceDeviceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPSLIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkFaceDeviceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkFaceDeviceSettings, ULiveLinkDeviceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPSLiveLinkDevice"), Z_Construct_UClass_ULiveLinkFaceDeviceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkFaceDeviceSettings)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkFaceDeviceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkFaceDeviceSettings(ULiveLinkFaceDeviceSettings&&) = delete; \
	ULiveLinkFaceDeviceSettings(const ULiveLinkFaceDeviceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkFaceDeviceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFaceDeviceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkFaceDeviceSettings) \
	NO_API virtual ~ULiveLinkFaceDeviceSettings();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_23_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkFaceDeviceSettings;

// ********** End Class ULiveLinkFaceDeviceSettings ************************************************

// ********** Begin Class ULiveLinkFaceDevice ******************************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSettings);


struct Z_Construct_UClass_ULiveLinkFaceDevice_Statics;
CPSLIVELINKDEVICE_API UClass* Z_Construct_UClass_ULiveLinkFaceDevice_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkFaceDevice(); \
	friend struct ::Z_Construct_UClass_ULiveLinkFaceDevice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPSLIVELINKDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkFaceDevice_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkFaceDevice, UBaseIngestLiveLinkDevice, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPSLiveLinkDevice"), Z_Construct_UClass_ULiveLinkFaceDevice_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkFaceDevice) \
	virtual UObject* _getUObject() const override { return const_cast<ULiveLinkFaceDevice*>(this); }


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkFaceDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkFaceDevice(ULiveLinkFaceDevice&&) = delete; \
	ULiveLinkFaceDevice(const ULiveLinkFaceDevice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkFaceDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkFaceDevice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkFaceDevice) \
	NO_API virtual ~ULiveLinkFaceDevice();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_43_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkFaceDevice;

// ********** End Class ULiveLinkFaceDevice ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerDevices_Source_CPSLiveLinkDevice_Public_LiveLinkFaceDevice_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
