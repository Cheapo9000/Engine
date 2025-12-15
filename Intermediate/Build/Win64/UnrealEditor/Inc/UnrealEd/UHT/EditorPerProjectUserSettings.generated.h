// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/EditorPerProjectUserSettings.h"

#ifdef UNREALED_EditorPerProjectUserSettings_generated_h
#error "EditorPerProjectUserSettings.generated.h already included, missing '#pragma once' in EditorPerProjectUserSettings.h"
#endif
#define UNREALED_EditorPerProjectUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorPerProjectUserSettings ********************************************
struct Z_Construct_UClass_UEditorPerProjectUserSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorPerProjectUserSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEditorPerProjectUserSettings(); \
	friend struct ::Z_Construct_UClass_UEditorPerProjectUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorPerProjectUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorPerProjectUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorPerProjectUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorPerProjectUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorPerProjectUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorPerProjectUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorPerProjectUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorPerProjectUserSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorPerProjectUserSettings(UEditorPerProjectUserSettings&&) = delete; \
	UEditorPerProjectUserSettings(const UEditorPerProjectUserSettings&) = delete; \
	UNREALED_API virtual ~UEditorPerProjectUserSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_12_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_15_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorPerProjectUserSettings;

// ********** End Class UEditorPerProjectUserSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerProjectUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
