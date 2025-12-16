// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidCameraSettings.h"

#ifdef ANDROIDCAMERAFACTORY_AndroidCameraSettings_generated_h
#error "AndroidCameraSettings.generated.h already included, missing '#pragma once' in AndroidCameraSettings.h"
#endif
#define ANDROIDCAMERAFACTORY_AndroidCameraSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAndroidCameraSettings ***************************************************
struct Z_Construct_UClass_UAndroidCameraSettings_Statics;
ANDROIDCAMERAFACTORY_API UClass* Z_Construct_UClass_UAndroidCameraSettings_NoRegister();

#define FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidCameraSettings(); \
	friend struct ::Z_Construct_UClass_UAndroidCameraSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDCAMERAFACTORY_API UClass* ::Z_Construct_UClass_UAndroidCameraSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidCameraSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidCameraFactory"), Z_Construct_UClass_UAndroidCameraSettings_NoRegister) \
	DECLARE_SERIALIZER(UAndroidCameraSettings)


#define FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidCameraSettings(UAndroidCameraSettings&&) = delete; \
	UAndroidCameraSettings(const UAndroidCameraSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidCameraSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidCameraSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAndroidCameraSettings) \
	NO_API virtual ~UAndroidCameraSettings();


#define FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_15_PROLOG
#define FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidCameraSettings;

// ********** End Class UAndroidCameraSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AndroidCamera_Source_AndroidCameraFactory_Public_AndroidCameraSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
