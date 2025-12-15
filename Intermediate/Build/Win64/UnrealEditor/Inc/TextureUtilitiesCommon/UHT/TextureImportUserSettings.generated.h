// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureImportUserSettings.h"

#ifdef TEXTUREUTILITIESCOMMON_TextureImportUserSettings_generated_h
#error "TextureImportUserSettings.generated.h already included, missing '#pragma once' in TextureImportUserSettings.h"
#endif
#define TEXTUREUTILITIESCOMMON_TextureImportUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTextureImportUserSettings ***********************************************
struct Z_Construct_UClass_UTextureImportUserSettings_Statics;
TEXTUREUTILITIESCOMMON_API UClass* Z_Construct_UClass_UTextureImportUserSettings_NoRegister();

#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTextureImportUserSettings(); \
	friend struct ::Z_Construct_UClass_UTextureImportUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREUTILITIESCOMMON_API UClass* ::Z_Construct_UClass_UTextureImportUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextureImportUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureUtilitiesCommon"), Z_Construct_UClass_UTextureImportUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UTextureImportUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREUTILITIESCOMMON_API UTextureImportUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureImportUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREUTILITIESCOMMON_API, UTextureImportUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureImportUserSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextureImportUserSettings(UTextureImportUserSettings&&) = delete; \
	UTextureImportUserSettings(const UTextureImportUserSettings&) = delete; \
	TEXTUREUTILITIESCOMMON_API virtual ~UTextureImportUserSettings();


#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_16_PROLOG
#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_19_INCLASS \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextureImportUserSettings;

// ********** End Class UTextureImportUserSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
