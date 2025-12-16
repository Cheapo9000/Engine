// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayAbilitiesDeveloperSettings.h"

#ifdef GAMEPLAYABILITIES_GameplayAbilitiesDeveloperSettings_generated_h
#error "GameplayAbilitiesDeveloperSettings.generated.h already included, missing '#pragma once' in GameplayAbilitiesDeveloperSettings.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbilitiesDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameplayAbilitiesDeveloperSettings **************************************
struct Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayAbilitiesDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayAbilitiesDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameplayAbilitiesDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayAbilitiesDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayAbilitiesDeveloperSettings(UGameplayAbilitiesDeveloperSettings&&) = delete; \
	UGameplayAbilitiesDeveloperSettings(const UGameplayAbilitiesDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayAbilitiesDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilitiesDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilitiesDeveloperSettings) \
	GAMEPLAYABILITIES_API virtual ~UGameplayAbilitiesDeveloperSettings();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayAbilitiesDeveloperSettings;

// ********** End Class UGameplayAbilitiesDeveloperSettings ****************************************

// ********** Begin Class UGameplayAbilitiesEditorDeveloperSettings ********************************
struct Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics;
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayAbilitiesEditorDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYABILITIES_API UClass* ::Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayAbilitiesEditorDeveloperSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameplayAbilitiesEditorDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYABILITIES_API UGameplayAbilitiesEditorDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayAbilitiesEditorDeveloperSettings(UGameplayAbilitiesEditorDeveloperSettings&&) = delete; \
	UGameplayAbilitiesEditorDeveloperSettings(const UGameplayAbilitiesEditorDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYABILITIES_API, UGameplayAbilitiesEditorDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbilitiesEditorDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbilitiesEditorDeveloperSettings) \
	GAMEPLAYABILITIES_API virtual ~UGameplayAbilitiesEditorDeveloperSettings();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_135_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayAbilitiesEditorDeveloperSettings;

// ********** End Class UGameplayAbilitiesEditorDeveloperSettings **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
