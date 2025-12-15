// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CheckAndroidDeviceProfileCommandlet.h"

#ifdef DEVICEPROFILESERVICES_CheckAndroidDeviceProfileCommandlet_generated_h
#error "CheckAndroidDeviceProfileCommandlet.generated.h already included, missing '#pragma once' in CheckAndroidDeviceProfileCommandlet.h"
#endif
#define DEVICEPROFILESERVICES_CheckAndroidDeviceProfileCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCheckAndroidDeviceProfileCommandlet *************************************
struct Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics;
DEVICEPROFILESERVICES_API UClass* Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_NoRegister();

#define FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckAndroidDeviceProfileCommandlet(); \
	friend struct ::Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEVICEPROFILESERVICES_API UClass* ::Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCheckAndroidDeviceProfileCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeviceProfileServices"), Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UCheckAndroidDeviceProfileCommandlet)


#define FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckAndroidDeviceProfileCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCheckAndroidDeviceProfileCommandlet(UCheckAndroidDeviceProfileCommandlet&&) = delete; \
	UCheckAndroidDeviceProfileCommandlet(const UCheckAndroidDeviceProfileCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckAndroidDeviceProfileCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckAndroidDeviceProfileCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckAndroidDeviceProfileCommandlet) \
	NO_API virtual ~UCheckAndroidDeviceProfileCommandlet();


#define FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_32_PROLOG
#define FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCheckAndroidDeviceProfileCommandlet;

// ********** End Class UCheckAndroidDeviceProfileCommandlet ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
