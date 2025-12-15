// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/BlueprintEditorProjectSettings.h"

#ifdef UNREALED_BlueprintEditorProjectSettings_generated_h
#error "BlueprintEditorProjectSettings.generated.h already included, missing '#pragma once' in BlueprintEditorProjectSettings.h"
#endif
#define UNREALED_BlueprintEditorProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBlueprintEditorProjectSettings ******************************************
struct Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UBlueprintEditorProjectSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEditorProjectSettings(); \
	friend struct ::Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UBlueprintEditorProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UBlueprintEditorProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintEditorProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UBlueprintEditorProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UBlueprintEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorProjectSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintEditorProjectSettings(UBlueprintEditorProjectSettings&&) = delete; \
	UBlueprintEditorProjectSettings(const UBlueprintEditorProjectSettings&) = delete; \
	UNREALED_API virtual ~UBlueprintEditorProjectSettings();


#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintEditorProjectSettings;

// ********** End Class UBlueprintEditorProjectSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
