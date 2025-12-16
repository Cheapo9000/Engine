// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/AvaTransitionEditorSettings.h"

#ifdef AVALANCHETRANSITIONEDITOR_AvaTransitionEditorSettings_generated_h
#error "AvaTransitionEditorSettings.generated.h already included, missing '#pragma once' in AvaTransitionEditorSettings.h"
#endif
#define AVALANCHETRANSITIONEDITOR_AvaTransitionEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaTransitionEditorSettings *********************************************
struct Z_Construct_UClass_UAvaTransitionEditorSettings_Statics;
AVALANCHETRANSITIONEDITOR_API UClass* Z_Construct_UClass_UAvaTransitionEditorSettings_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransitionEditor_Public_Settings_AvaTransitionEditorSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaTransitionEditorSettings(); \
	friend struct ::Z_Construct_UClass_UAvaTransitionEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHETRANSITIONEDITOR_API UClass* ::Z_Construct_UClass_UAvaTransitionEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaTransitionEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheTransitionEditor"), Z_Construct_UClass_UAvaTransitionEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UAvaTransitionEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransitionEditor_Public_Settings_AvaTransitionEditorSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaTransitionEditorSettings(UAvaTransitionEditorSettings&&) = delete; \
	UAvaTransitionEditorSettings(const UAvaTransitionEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHETRANSITIONEDITOR_API, UAvaTransitionEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaTransitionEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaTransitionEditorSettings) \
	AVALANCHETRANSITIONEDITOR_API virtual ~UAvaTransitionEditorSettings();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransitionEditor_Public_Settings_AvaTransitionEditorSettings_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransitionEditor_Public_Settings_AvaTransitionEditorSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransitionEditor_Public_Settings_AvaTransitionEditorSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransitionEditor_Public_Settings_AvaTransitionEditorSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaTransitionEditorSettings;

// ********** End Class UAvaTransitionEditorSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheTransitionEditor_Public_Settings_AvaTransitionEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
