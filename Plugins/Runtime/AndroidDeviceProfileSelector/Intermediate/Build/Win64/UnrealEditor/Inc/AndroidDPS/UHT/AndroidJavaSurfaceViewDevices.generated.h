// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidJavaSurfaceViewDevices.h"

#ifdef ANDROIDDEVICEPROFILESELECTOR_AndroidJavaSurfaceViewDevices_generated_h
#error "AndroidJavaSurfaceViewDevices.generated.h already included, missing '#pragma once' in AndroidJavaSurfaceViewDevices.h"
#endif
#define ANDROIDDEVICEPROFILESELECTOR_AndroidJavaSurfaceViewDevices_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FJavaSurfaceViewDevice ********************************************
struct Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics;
#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_10_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics; \
	ANDROIDDEVICEPROFILESELECTOR_API static class UScriptStruct* StaticStruct();


struct FJavaSurfaceViewDevice;
// ********** End ScriptStruct FJavaSurfaceViewDevice **********************************************

// ********** Begin Class UAndroidJavaSurfaceViewDevices *******************************************
struct Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics;
ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_NoRegister();

#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidJavaSurfaceViewDevices(); \
	friend struct ::Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDDEVICEPROFILESELECTOR_API UClass* ::Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidJavaSurfaceViewDevices, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidDeviceProfileSelector"), Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_NoRegister) \
	DECLARE_SERIALIZER(UAndroidJavaSurfaceViewDevices) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidJavaSurfaceViewDevices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidJavaSurfaceViewDevices) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidJavaSurfaceViewDevices); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidJavaSurfaceViewDevices); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidJavaSurfaceViewDevices(UAndroidJavaSurfaceViewDevices&&) = delete; \
	UAndroidJavaSurfaceViewDevices(const UAndroidJavaSurfaceViewDevices&) = delete; \
	NO_API virtual ~UAndroidJavaSurfaceViewDevices();


#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_22_INCLASS \
	FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidJavaSurfaceViewDevices;

// ********** End Class UAndroidJavaSurfaceViewDevices *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
