// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureEncodingSettingsPrivate.h"

#ifdef ENGINE_TextureEncodingSettingsPrivate_generated_h
#error "TextureEncodingSettingsPrivate.generated.h already included, missing '#pragma once' in TextureEncodingSettingsPrivate.h"
#endif
#define ENGINE_TextureEncodingSettingsPrivate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureEncodingProjectSettings ******************************************
struct Z_Construct_UClass_UTextureEncodingProjectSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingProjectSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTextureEncodingProjectSettings(); \
	friend struct ::Z_Construct_UClass_UTextureEncodingProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextureEncodingProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureEncodingProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextureEncodingProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UTextureEncodingProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureEncodingProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureEncodingProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureEncodingProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureEncodingProjectSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureEncodingProjectSettings(UTextureEncodingProjectSettings&&) = delete; \
	UTextureEncodingProjectSettings(const UTextureEncodingProjectSettings&) = delete; \
	ENGINE_API virtual ~UTextureEncodingProjectSettings();


#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureEncodingProjectSettings;

// ********** End Class UTextureEncodingProjectSettings ********************************************

// ********** Begin Class UTextureEncodingUserSettings *********************************************
struct Z_Construct_UClass_UTextureEncodingUserSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingUserSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_INCLASS \
private: \
	static void StaticRegisterNativesUTextureEncodingUserSettings(); \
	friend struct ::Z_Construct_UClass_UTextureEncodingUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTextureEncodingUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureEncodingUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTextureEncodingUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UTextureEncodingUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureEncodingUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureEncodingUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureEncodingUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureEncodingUserSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureEncodingUserSettings(UTextureEncodingUserSettings&&) = delete; \
	UTextureEncodingUserSettings(const UTextureEncodingUserSettings&) = delete; \
	ENGINE_API virtual ~UTextureEncodingUserSettings();


#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_125_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_131_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureEncodingUserSettings;

// ********** End Class UTextureEncodingUserSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
