// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Harmonix/HarmonixPluginSettings.h"

#ifdef HARMONIX_HarmonixPluginSettings_generated_h
#error "HarmonixPluginSettings.generated.h already included, missing '#pragma once' in HarmonixPluginSettings.h"
#endif
#define HARMONIX_HarmonixPluginSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHarmonixPluginSettings **************************************************
struct Z_Construct_UClass_UHarmonixPluginSettings_Statics;
HARMONIX_API UClass* Z_Construct_UClass_UHarmonixPluginSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixPluginSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHarmonixPluginSettings(); \
	friend struct ::Z_Construct_UClass_UHarmonixPluginSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIX_API UClass* ::Z_Construct_UClass_UHarmonixPluginSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UHarmonixPluginSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Harmonix"), Z_Construct_UClass_UHarmonixPluginSettings_NoRegister) \
	DECLARE_SERIALIZER(UHarmonixPluginSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixPluginSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHarmonixPluginSettings(UHarmonixPluginSettings&&) = delete; \
	UHarmonixPluginSettings(const UHarmonixPluginSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIX_API, UHarmonixPluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHarmonixPluginSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHarmonixPluginSettings) \
	HARMONIX_API virtual ~UHarmonixPluginSettings();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixPluginSettings_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixPluginSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixPluginSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixPluginSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHarmonixPluginSettings;

// ********** End Class UHarmonixPluginSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_Harmonix_Public_Harmonix_HarmonixPluginSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
