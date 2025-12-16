// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidMediaSettings.h"

#ifdef ANDROIDMEDIAFACTORY_AndroidMediaSettings_generated_h
#error "AndroidMediaSettings.generated.h already included, missing '#pragma once' in AndroidMediaSettings.h"
#endif
#define ANDROIDMEDIAFACTORY_AndroidMediaSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAndroidMediaSettings ****************************************************
struct Z_Construct_UClass_UAndroidMediaSettings_Statics;
ANDROIDMEDIAFACTORY_API UClass* Z_Construct_UClass_UAndroidMediaSettings_NoRegister();

#define FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaFactory_Public_AndroidMediaSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidMediaSettings(); \
	friend struct ::Z_Construct_UClass_UAndroidMediaSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDMEDIAFACTORY_API UClass* ::Z_Construct_UClass_UAndroidMediaSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidMediaSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidMediaFactory"), Z_Construct_UClass_UAndroidMediaSettings_NoRegister) \
	DECLARE_SERIALIZER(UAndroidMediaSettings)


#define FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaFactory_Public_AndroidMediaSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidMediaSettings(UAndroidMediaSettings&&) = delete; \
	UAndroidMediaSettings(const UAndroidMediaSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANDROIDMEDIAFACTORY_API, UAndroidMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAndroidMediaSettings) \
	ANDROIDMEDIAFACTORY_API virtual ~UAndroidMediaSettings();


#define FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaFactory_Public_AndroidMediaSettings_h_15_PROLOG
#define FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaFactory_Public_AndroidMediaSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaFactory_Public_AndroidMediaSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaFactory_Public_AndroidMediaSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidMediaSettings;

// ********** End Class UAndroidMediaSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AndroidMedia_Source_AndroidMediaFactory_Public_AndroidMediaSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
