// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaMediaEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIAEDITOR_AvaMediaEditorSettings_generated_h
#error "AvaMediaEditorSettings.generated.h already included, missing '#pragma once' in AvaMediaEditorSettings.h"
#endif
#define AVALANCHEMEDIAEDITOR_AvaMediaEditorSettings_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMediaEditor_Private_AvaMediaEditorSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMediaEditorSettings(); \
	friend struct Z_Construct_UClass_UAvaMediaEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UAvaMediaEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheMediaEditor"), NO_API) \
	DECLARE_SERIALIZER(UAvaMediaEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMediaEditor_Private_AvaMediaEditorSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaMediaEditorSettings(UAvaMediaEditorSettings&&); \
	UAvaMediaEditorSettings(const UAvaMediaEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaMediaEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMediaEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMediaEditorSettings) \
	NO_API virtual ~UAvaMediaEditorSettings();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMediaEditor_Private_AvaMediaEditorSettings_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMediaEditor_Private_AvaMediaEditorSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMediaEditor_Private_AvaMediaEditorSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMediaEditor_Private_AvaMediaEditorSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIAEDITOR_API UClass* StaticClass<class UAvaMediaEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMediaEditor_Private_AvaMediaEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
