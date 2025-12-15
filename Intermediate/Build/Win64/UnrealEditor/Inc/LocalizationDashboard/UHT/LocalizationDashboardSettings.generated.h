// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocalizationDashboardSettings.h"

#ifdef LOCALIZATIONDASHBOARD_LocalizationDashboardSettings_generated_h
#error "LocalizationDashboardSettings.generated.h already included, missing '#pragma once' in LocalizationDashboardSettings.h"
#endif
#define LOCALIZATIONDASHBOARD_LocalizationDashboardSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULocalizationDashboardSettings *******************************************
struct Z_Construct_UClass_ULocalizationDashboardSettings_Statics;
LOCALIZATIONDASHBOARD_API UClass* Z_Construct_UClass_ULocalizationDashboardSettings_NoRegister();

#define FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalizationDashboardSettings(); \
	friend struct ::Z_Construct_UClass_ULocalizationDashboardSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LOCALIZATIONDASHBOARD_API UClass* ::Z_Construct_UClass_ULocalizationDashboardSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULocalizationDashboardSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LocalizationDashboard"), Z_Construct_UClass_ULocalizationDashboardSettings_NoRegister) \
	DECLARE_SERIALIZER(ULocalizationDashboardSettings)


#define FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocalizationDashboardSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalizationDashboardSettings(ULocalizationDashboardSettings&&) = delete; \
	ULocalizationDashboardSettings(const ULocalizationDashboardSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalizationDashboardSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalizationDashboardSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalizationDashboardSettings) \
	NO_API virtual ~ULocalizationDashboardSettings();


#define FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_11_PROLOG
#define FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalizationDashboardSettings;

// ********** End Class ULocalizationDashboardSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
