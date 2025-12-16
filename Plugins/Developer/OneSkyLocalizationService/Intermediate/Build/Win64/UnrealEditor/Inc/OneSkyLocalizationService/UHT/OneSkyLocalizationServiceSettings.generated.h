// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OneSkyLocalizationServiceSettings.h"

#ifdef ONESKYLOCALIZATIONSERVICE_OneSkyLocalizationServiceSettings_generated_h
#error "OneSkyLocalizationServiceSettings.generated.h already included, missing '#pragma once' in OneSkyLocalizationServiceSettings.h"
#endif
#define ONESKYLOCALIZATIONSERVICE_OneSkyLocalizationServiceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOneSkyLocalizationTargetSetting **********************************
struct Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics;
#define FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOneSkyLocalizationTargetSetting_Statics; \
	ONESKYLOCALIZATIONSERVICE_API static class UScriptStruct* StaticStruct();


struct FOneSkyLocalizationTargetSetting;
// ********** End ScriptStruct FOneSkyLocalizationTargetSetting ************************************

// ********** Begin Class UOneSkyLocalizationTargetSettings ****************************************
struct Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics;
ONESKYLOCALIZATIONSERVICE_API UClass* Z_Construct_UClass_UOneSkyLocalizationTargetSettings_NoRegister();

#define FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUOneSkyLocalizationTargetSettings(); \
	friend struct ::Z_Construct_UClass_UOneSkyLocalizationTargetSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONESKYLOCALIZATIONSERVICE_API UClass* ::Z_Construct_UClass_UOneSkyLocalizationTargetSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOneSkyLocalizationTargetSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OneSkyLocalizationService"), Z_Construct_UClass_UOneSkyLocalizationTargetSettings_NoRegister) \
	DECLARE_SERIALIZER(UOneSkyLocalizationTargetSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("LocalizationServiceSettings");} \



#define FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOneSkyLocalizationTargetSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOneSkyLocalizationTargetSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOneSkyLocalizationTargetSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOneSkyLocalizationTargetSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOneSkyLocalizationTargetSettings(UOneSkyLocalizationTargetSettings&&) = delete; \
	UOneSkyLocalizationTargetSettings(const UOneSkyLocalizationTargetSettings&) = delete; \
	NO_API virtual ~UOneSkyLocalizationTargetSettings();


#define FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_38_PROLOG
#define FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_41_INCLASS \
	FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOneSkyLocalizationTargetSettings;

// ********** End Class UOneSkyLocalizationTargetSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_OneSkyLocalizationService_Source_OneSkyLocalizationService_Private_OneSkyLocalizationServiceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
