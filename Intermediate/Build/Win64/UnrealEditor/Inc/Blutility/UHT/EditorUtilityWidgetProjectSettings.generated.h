// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityWidgetProjectSettings.h"

#ifdef BLUTILITY_EditorUtilityWidgetProjectSettings_generated_h
#error "EditorUtilityWidgetProjectSettings.generated.h already included, missing '#pragma once' in EditorUtilityWidgetProjectSettings.h"
#endif
#define BLUTILITY_EditorUtilityWidgetProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorUtilityWidgetProjectSettings **************************************
struct Z_Construct_UClass_UEditorUtilityWidgetProjectSettings_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetProjectSettings_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityWidgetProjectSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityWidgetProjectSettings(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityWidgetProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityWidgetProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityWidgetProjectSettings, UWidgetEditingProjectSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityWidgetProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityWidgetProjectSettings)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityWidgetProjectSettings_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityWidgetProjectSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityWidgetProjectSettings(UEditorUtilityWidgetProjectSettings&&) = delete; \
	UEditorUtilityWidgetProjectSettings(const UEditorUtilityWidgetProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityWidgetProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityWidgetProjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorUtilityWidgetProjectSettings) \
	BLUTILITY_API virtual ~UEditorUtilityWidgetProjectSettings();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityWidgetProjectSettings_h_25_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityWidgetProjectSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityWidgetProjectSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityWidgetProjectSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityWidgetProjectSettings;

// ********** End Class UEditorUtilityWidgetProjectSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_EditorUtilityWidgetProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
