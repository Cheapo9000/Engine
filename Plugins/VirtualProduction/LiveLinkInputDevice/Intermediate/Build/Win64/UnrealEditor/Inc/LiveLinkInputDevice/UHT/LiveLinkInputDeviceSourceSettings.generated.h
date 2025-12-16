// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkInputDeviceSourceSettings.h"

#ifdef LIVELINKINPUTDEVICE_LiveLinkInputDeviceSourceSettings_generated_h
#error "LiveLinkInputDeviceSourceSettings.generated.h already included, missing '#pragma once' in LiveLinkInputDeviceSourceSettings.h"
#endif
#define LIVELINKINPUTDEVICE_LiveLinkInputDeviceSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkInputDeviceSourceSettings ***************************************
struct Z_Construct_UClass_ULiveLinkInputDeviceSourceSettings_Statics;
LIVELINKINPUTDEVICE_API UClass* Z_Construct_UClass_ULiveLinkInputDeviceSourceSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkInputDeviceSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkInputDeviceSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKINPUTDEVICE_API UClass* ::Z_Construct_UClass_ULiveLinkInputDeviceSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkInputDeviceSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkInputDevice"), Z_Construct_UClass_ULiveLinkInputDeviceSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkInputDeviceSourceSettings)


#define FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkInputDeviceSourceSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkInputDeviceSourceSettings(ULiveLinkInputDeviceSourceSettings&&) = delete; \
	ULiveLinkInputDeviceSourceSettings(const ULiveLinkInputDeviceSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkInputDeviceSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkInputDeviceSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkInputDeviceSourceSettings) \
	NO_API virtual ~ULiveLinkInputDeviceSourceSettings();


#define FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceSettings_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceSettings_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkInputDeviceSourceSettings;

// ********** End Class ULiveLinkInputDeviceSourceSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LiveLinkInputDevice_Source_LiveLinkInputDevice_Public_LiveLinkInputDeviceSourceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
