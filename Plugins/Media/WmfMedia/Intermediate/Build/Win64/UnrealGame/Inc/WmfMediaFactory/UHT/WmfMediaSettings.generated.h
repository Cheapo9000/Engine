// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WmfMediaSettings.h"

#ifdef WMFMEDIAFACTORY_WmfMediaSettings_generated_h
#error "WmfMediaSettings.generated.h already included, missing '#pragma once' in WmfMediaSettings.h"
#endif
#define WMFMEDIAFACTORY_WmfMediaSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWmfMediaSettings ********************************************************
struct Z_Construct_UClass_UWmfMediaSettings_Statics;
WMFMEDIAFACTORY_API UClass* Z_Construct_UClass_UWmfMediaSettings_NoRegister();

#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWmfMediaSettings(); \
	friend struct ::Z_Construct_UClass_UWmfMediaSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WMFMEDIAFACTORY_API UClass* ::Z_Construct_UClass_UWmfMediaSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWmfMediaSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WmfMediaFactory"), Z_Construct_UClass_UWmfMediaSettings_NoRegister) \
	DECLARE_SERIALIZER(UWmfMediaSettings)


#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWmfMediaSettings(UWmfMediaSettings&&) = delete; \
	UWmfMediaSettings(const UWmfMediaSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WMFMEDIAFACTORY_API, UWmfMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWmfMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWmfMediaSettings) \
	WMFMEDIAFACTORY_API virtual ~UWmfMediaSettings();


#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_14_PROLOG
#define FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWmfMediaSettings;

// ********** End Class UWmfMediaSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaFactory_Public_WmfMediaSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
