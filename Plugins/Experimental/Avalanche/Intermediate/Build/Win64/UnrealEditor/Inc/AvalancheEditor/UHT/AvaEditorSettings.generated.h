// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEEDITOR_AvaEditorSettings_generated_h
#error "AvaEditorSettings.generated.h already included, missing '#pragma once' in AvaEditorSettings.h"
#endif
#define AVALANCHEEDITOR_AvaEditorSettings_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheEditor_Private_AvaEditorSettings_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaEditorSettings(); \
	friend struct Z_Construct_UClass_UAvaEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UAvaEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheEditor"), NO_API) \
	DECLARE_SERIALIZER(UAvaEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheEditor_Private_AvaEditorSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaEditorSettings(UAvaEditorSettings&&); \
	UAvaEditorSettings(const UAvaEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaEditorSettings)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheEditor_Private_AvaEditorSettings_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheEditor_Private_AvaEditorSettings_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheEditor_Private_AvaEditorSettings_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheEditor_Private_AvaEditorSettings_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEEDITOR_API UClass* StaticClass<class UAvaEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheEditor_Private_AvaEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
