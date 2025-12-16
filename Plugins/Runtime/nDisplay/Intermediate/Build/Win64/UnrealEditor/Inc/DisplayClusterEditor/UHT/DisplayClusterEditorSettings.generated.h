// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/DisplayClusterEditorSettings.h"

#ifdef DISPLAYCLUSTEREDITOR_DisplayClusterEditorSettings_generated_h
#error "DisplayClusterEditorSettings.generated.h already included, missing '#pragma once' in DisplayClusterEditorSettings.h"
#endif
#define DISPLAYCLUSTEREDITOR_DisplayClusterEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDisplayClusterEditorSettings ********************************************
struct Z_Construct_UClass_UDisplayClusterEditorSettings_Statics;
DISPLAYCLUSTEREDITOR_API UClass* Z_Construct_UClass_UDisplayClusterEditorSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterEditorSettings(); \
	friend struct ::Z_Construct_UClass_UDisplayClusterEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISPLAYCLUSTEREDITOR_API UClass* ::Z_Construct_UClass_UDisplayClusterEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDisplayClusterEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayClusterEditor"), Z_Construct_UClass_UDisplayClusterEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UDisplayClusterEditorSettings)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDisplayClusterEditorSettings(UDisplayClusterEditorSettings&&) = delete; \
	UDisplayClusterEditorSettings(const UDisplayClusterEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterEditorSettings) \
	NO_API virtual ~UDisplayClusterEditorSettings();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDisplayClusterEditorSettings;

// ********** End Class UDisplayClusterEditorSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_Settings_DisplayClusterEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
