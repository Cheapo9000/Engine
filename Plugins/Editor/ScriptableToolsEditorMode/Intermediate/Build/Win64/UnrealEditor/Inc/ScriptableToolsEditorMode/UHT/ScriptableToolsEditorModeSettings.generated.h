// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptableToolsEditorModeSettings.h"

#ifdef SCRIPTABLETOOLSEDITORMODE_ScriptableToolsEditorModeSettings_generated_h
#error "ScriptableToolsEditorModeSettings.generated.h already included, missing '#pragma once' in ScriptableToolsEditorModeSettings.h"
#endif
#define SCRIPTABLETOOLSEDITORMODE_ScriptableToolsEditorModeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScriptableToolsModeCustomizationSettings ********************************
struct Z_Construct_UClass_UScriptableToolsModeCustomizationSettings_Statics;
SCRIPTABLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UScriptableToolsModeCustomizationSettings_NoRegister();

#define FID_Engine_Plugins_Editor_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorModeSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptableToolsModeCustomizationSettings(); \
	friend struct ::Z_Construct_UClass_UScriptableToolsModeCustomizationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCRIPTABLETOOLSEDITORMODE_API UClass* ::Z_Construct_UClass_UScriptableToolsModeCustomizationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UScriptableToolsModeCustomizationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptableToolsEditorMode"), Z_Construct_UClass_UScriptableToolsModeCustomizationSettings_NoRegister) \
	DECLARE_SERIALIZER(UScriptableToolsModeCustomizationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorModeSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTABLETOOLSEDITORMODE_API UScriptableToolsModeCustomizationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScriptableToolsModeCustomizationSettings(UScriptableToolsModeCustomizationSettings&&) = delete; \
	UScriptableToolsModeCustomizationSettings(const UScriptableToolsModeCustomizationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTABLETOOLSEDITORMODE_API, UScriptableToolsModeCustomizationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptableToolsModeCustomizationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptableToolsModeCustomizationSettings) \
	SCRIPTABLETOOLSEDITORMODE_API virtual ~UScriptableToolsModeCustomizationSettings();


#define FID_Engine_Plugins_Editor_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorModeSettings_h_14_PROLOG
#define FID_Engine_Plugins_Editor_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorModeSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorModeSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorModeSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScriptableToolsModeCustomizationSettings;

// ********** End Class UScriptableToolsModeCustomizationSettings **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ScriptableToolsEditorMode_Source_ScriptableToolsEditorMode_Public_ScriptableToolsEditorModeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
