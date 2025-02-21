// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOOSEREDITOR_ChooserEditorSettings_generated_h
#error "ChooserEditorSettings.generated.h already included, missing '#pragma once' in ChooserEditorSettings.h"
#endif
#define CHOOSEREDITOR_ChooserEditorSettings_generated_h

#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChooserEditorSettings(); \
	friend struct Z_Construct_UClass_UChooserEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UChooserEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChooserEditor"), NO_API) \
	DECLARE_SERIALIZER(UChooserEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChooserEditorSettings(UChooserEditorSettings&&); \
	UChooserEditorSettings(const UChooserEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChooserEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChooserEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChooserEditorSettings) \
	NO_API virtual ~UChooserEditorSettings();


#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h_11_PROLOG
#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOOSEREDITOR_API UClass* StaticClass<class UChooserEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
