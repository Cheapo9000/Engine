// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstanceEditorSettings.h"

#ifdef LEVELINSTANCEEDITOR_LevelInstanceEditorSettings_generated_h
#error "LevelInstanceEditorSettings.generated.h already included, missing '#pragma once' in LevelInstanceEditorSettings.h"
#endif
#define LEVELINSTANCEEDITOR_LevelInstanceEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelInstanceEditorSettings *********************************************
struct Z_Construct_UClass_ULevelInstanceEditorSettings_Statics;
LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelInstanceEditorSettings(); \
	friend struct ::Z_Construct_UClass_ULevelInstanceEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELINSTANCEEDITOR_API UClass* ::Z_Construct_UClass_ULevelInstanceEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelInstanceEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelInstanceEditor"), Z_Construct_UClass_ULevelInstanceEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelInstanceEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelInstanceEditorSettings(ULevelInstanceEditorSettings&&) = delete; \
	ULevelInstanceEditorSettings(const ULevelInstanceEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelInstanceEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelInstanceEditorSettings) \
	NO_API virtual ~ULevelInstanceEditorSettings();


#define FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_13_PROLOG
#define FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelInstanceEditorSettings;

// ********** End Class ULevelInstanceEditorSettings ***********************************************

// ********** Begin Class ULevelInstanceEditorPerProjectUserSettings *******************************
struct Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics;
LEVELINSTANCEEDITOR_API UClass* Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_NoRegister();

#define FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelInstanceEditorPerProjectUserSettings(); \
	friend struct ::Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELINSTANCEEDITOR_API UClass* ::Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelInstanceEditorPerProjectUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelInstanceEditor"), Z_Construct_UClass_ULevelInstanceEditorPerProjectUserSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelInstanceEditorPerProjectUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelInstanceEditorPerProjectUserSettings(ULevelInstanceEditorPerProjectUserSettings&&) = delete; \
	ULevelInstanceEditorPerProjectUserSettings(const ULevelInstanceEditorPerProjectUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelInstanceEditorPerProjectUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceEditorPerProjectUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelInstanceEditorPerProjectUserSettings) \
	NO_API virtual ~ULevelInstanceEditorPerProjectUserSettings();


#define FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_35_PROLOG
#define FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelInstanceEditorPerProjectUserSettings;

// ********** End Class ULevelInstanceEditorPerProjectUserSettings *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LevelInstanceEditor_Public_LevelInstanceEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
