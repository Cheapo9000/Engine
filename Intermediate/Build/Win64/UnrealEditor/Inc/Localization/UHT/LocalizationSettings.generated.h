// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocalizationSettings.h"

#ifdef LOCALIZATION_LocalizationSettings_generated_h
#error "LocalizationSettings.generated.h already included, missing '#pragma once' in LocalizationSettings.h"
#endif
#define LOCALIZATION_LocalizationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULocalizationSettings ****************************************************
struct Z_Construct_UClass_ULocalizationSettings_Statics;
LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationSettings_NoRegister();

#define FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalizationSettings(); \
	friend struct ::Z_Construct_UClass_ULocalizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOCALIZATION_API UClass* ::Z_Construct_UClass_ULocalizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocalizationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Localization"), Z_Construct_UClass_ULocalizationSettings_NoRegister) \
	DECLARE_SERIALIZER(ULocalizationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalizationSettings(ULocalizationSettings&&) = delete; \
	ULocalizationSettings(const ULocalizationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LOCALIZATION_API, ULocalizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizationSettings) \
	LOCALIZATION_API virtual ~ULocalizationSettings();


#define FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_22_PROLOG
#define FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalizationSettings;

// ********** End Class ULocalizationSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
