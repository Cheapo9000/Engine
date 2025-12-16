// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidCameraRuntimeSettings.h"

#ifdef ANDROIDCAMERAEDITOR_AndroidCameraRuntimeSettings_generated_h
#error "AndroidCameraRuntimeSettings.generated.h already included, missing '#pragma once' in AndroidCameraRuntimeSettings.h"
#endif
#define ANDROIDCAMERAEDITOR_AndroidCameraRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAndroidCameraRuntimeSettings ********************************************
struct Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics;
ANDROIDCAMERAEDITOR_API UClass* Z_Construct_UClass_UAndroidCameraRuntimeSettings_NoRegister();

#define FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidCameraRuntimeSettings(); \
	friend struct ::Z_Construct_UClass_UAndroidCameraRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDCAMERAEDITOR_API UClass* ::Z_Construct_UClass_UAndroidCameraRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidCameraRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidCameraEditor"), Z_Construct_UClass_UAndroidCameraRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UAndroidCameraRuntimeSettings)


#define FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidCameraRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidCameraRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidCameraRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidCameraRuntimeSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidCameraRuntimeSettings(UAndroidCameraRuntimeSettings&&) = delete; \
	UAndroidCameraRuntimeSettings(const UAndroidCameraRuntimeSettings&) = delete; \
	NO_API virtual ~UAndroidCameraRuntimeSettings();


#define FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_14_PROLOG
#define FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_17_INCLASS \
	FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidCameraRuntimeSettings;

// ********** End Class UAndroidCameraRuntimeSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraEditor_Public_AndroidCameraRuntimeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
