// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChooserEditorSettings.h"

#ifdef CHOOSEREDITOR_ChooserEditorSettings_generated_h
#error "ChooserEditorSettings.generated.h already included, missing '#pragma once' in ChooserEditorSettings.h"
#endif
#define CHOOSEREDITOR_ChooserEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UChooserEditorSettings ***************************************************
struct Z_Construct_UClass_UChooserEditorSettings_Statics;
CHOOSEREDITOR_API UClass* Z_Construct_UClass_UChooserEditorSettings_NoRegister();

#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChooserEditorSettings(); \
	friend struct ::Z_Construct_UClass_UChooserEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHOOSEREDITOR_API UClass* ::Z_Construct_UClass_UChooserEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UChooserEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChooserEditor"), Z_Construct_UClass_UChooserEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UChooserEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChooserEditorSettings(UChooserEditorSettings&&) = delete; \
	UChooserEditorSettings(const UChooserEditorSettings&) = delete; \
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


class UChooserEditorSettings;

// ********** End Class UChooserEditorSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Chooser_Source_ChooserEditor_Private_ChooserEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
