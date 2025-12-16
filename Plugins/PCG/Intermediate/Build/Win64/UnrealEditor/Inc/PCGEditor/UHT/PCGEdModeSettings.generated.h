// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorMode/PCGEdModeSettings.h"

#ifdef PCGEDITOR_PCGEdModeSettings_generated_h
#error "PCGEdModeSettings.generated.h already included, missing '#pragma once' in PCGEdModeSettings.h"
#endif
#define PCGEDITOR_PCGEdModeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGPerInteractiveToolSettingSettings *****************************
struct Z_Construct_UScriptStruct_FPCGPerInteractiveToolSettingSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdModeSettings_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGPerInteractiveToolSettingSettings_Statics; \
	PCGEDITOR_API static class UScriptStruct* StaticStruct();


struct FPCGPerInteractiveToolSettingSettings;
// ********** End ScriptStruct FPCGPerInteractiveToolSettingSettings *******************************

// ********** Begin Class UPCGEditorModeSettings ***************************************************
struct Z_Construct_UClass_UPCGEditorModeSettings_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorModeSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdModeSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorModeSettings(); \
	friend struct ::Z_Construct_UClass_UPCGEditorModeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorModeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorModeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorModeSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorModeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdModeSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorModeSettings(UPCGEditorModeSettings&&) = delete; \
	UPCGEditorModeSettings(const UPCGEditorModeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGEditorModeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorModeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEditorModeSettings) \
	NO_API virtual ~UPCGEditorModeSettings();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdModeSettings_h_27_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdModeSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdModeSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdModeSettings_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorModeSettings;

// ********** End Class UPCGEditorModeSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_EditorMode_PCGEdModeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
