// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueTemplateSettings.h"

#ifdef SOUNDCUETEMPLATES_SoundCueTemplateSettings_generated_h
#error "SoundCueTemplateSettings.generated.h already included, missing '#pragma once' in SoundCueTemplateSettings.h"
#endif
#define SOUNDCUETEMPLATES_SoundCueTemplateSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundCueTemplateQualitySettings **********************************
struct Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics;
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics; \
	SOUNDCUETEMPLATES_API static class UScriptStruct* StaticStruct();


struct FSoundCueTemplateQualitySettings;
// ********** End ScriptStruct FSoundCueTemplateQualitySettings ************************************

// ********** Begin Class USoundCueTemplateSettings ************************************************
struct Z_Construct_UClass_USoundCueTemplateSettings_Statics;
SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueTemplateSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueTemplateSettings(); \
	friend struct ::Z_Construct_UClass_USoundCueTemplateSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDCUETEMPLATES_API UClass* ::Z_Construct_UClass_USoundCueTemplateSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueTemplateSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoundCueTemplates"), Z_Construct_UClass_USoundCueTemplateSettings_NoRegister) \
	DECLARE_SERIALIZER(USoundCueTemplateSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDCUETEMPLATES_API USoundCueTemplateSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueTemplateSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDCUETEMPLATES_API, USoundCueTemplateSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueTemplateSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueTemplateSettings(USoundCueTemplateSettings&&) = delete; \
	USoundCueTemplateSettings(const USoundCueTemplateSettings&) = delete; \
	SOUNDCUETEMPLATES_API virtual ~USoundCueTemplateSettings();


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_40_PROLOG
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_43_INCLASS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueTemplateSettings;

// ********** End Class USoundCueTemplateSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
