// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidSDKSettings.h"

#ifdef ANDROIDPLATFORMEDITOR_AndroidSDKSettings_generated_h
#error "AndroidSDKSettings.generated.h already included, missing '#pragma once' in AndroidSDKSettings.h"
#endif
#define ANDROIDPLATFORMEDITOR_AndroidSDKSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAndroidSDKSettings ******************************************************
struct Z_Construct_UClass_UAndroidSDKSettings_Statics;
ANDROIDPLATFORMEDITOR_API UClass* Z_Construct_UClass_UAndroidSDKSettings_NoRegister();

#define FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidSDKSettings(); \
	friend struct ::Z_Construct_UClass_UAndroidSDKSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDPLATFORMEDITOR_API UClass* ::Z_Construct_UClass_UAndroidSDKSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidSDKSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_GlobalUserConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidPlatformEditor"), Z_Construct_UClass_UAndroidSDKSettings_NoRegister) \
	DECLARE_SERIALIZER(UAndroidSDKSettings)


#define FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANDROIDPLATFORMEDITOR_API UAndroidSDKSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidSDKSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANDROIDPLATFORMEDITOR_API, UAndroidSDKSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidSDKSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidSDKSettings(UAndroidSDKSettings&&) = delete; \
	UAndroidSDKSettings(const UAndroidSDKSettings&) = delete; \
	ANDROIDPLATFORMEDITOR_API virtual ~UAndroidSDKSettings();


#define FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_19_PROLOG
#define FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_23_INCLASS \
	FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidSDKSettings;

// ********** End Class UAndroidSDKSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
