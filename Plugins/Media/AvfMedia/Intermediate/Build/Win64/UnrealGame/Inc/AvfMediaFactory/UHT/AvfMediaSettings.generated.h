// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvfMediaSettings.h"

#ifdef AVFMEDIAFACTORY_AvfMediaSettings_generated_h
#error "AvfMediaSettings.generated.h already included, missing '#pragma once' in AvfMediaSettings.h"
#endif
#define AVFMEDIAFACTORY_AvfMediaSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvfMediaSettings ********************************************************
struct Z_Construct_UClass_UAvfMediaSettings_Statics;
AVFMEDIAFACTORY_API UClass* Z_Construct_UClass_UAvfMediaSettings_NoRegister();

#define FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvfMediaSettings(); \
	friend struct ::Z_Construct_UClass_UAvfMediaSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVFMEDIAFACTORY_API UClass* ::Z_Construct_UClass_UAvfMediaSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvfMediaSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvfMediaFactory"), Z_Construct_UClass_UAvfMediaSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvfMediaSettings)


#define FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvfMediaSettings(UAvfMediaSettings&&) = delete; \
	UAvfMediaSettings(const UAvfMediaSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVFMEDIAFACTORY_API, UAvfMediaSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvfMediaSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvfMediaSettings) \
	AVFMEDIAFACTORY_API virtual ~UAvfMediaSettings();


#define FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_16_PROLOG
#define FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvfMediaSettings;

// ********** End Class UAvfMediaSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
