// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/TemplateSequenceEditorSettings.h"

#ifdef TEMPLATESEQUENCEEDITOR_TemplateSequenceEditorSettings_generated_h
#error "TemplateSequenceEditorSettings.generated.h already included, missing '#pragma once' in TemplateSequenceEditorSettings.h"
#endif
#define TEMPLATESEQUENCEEDITOR_TemplateSequenceEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTemplateSequenceEditorSettings ******************************************
struct Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics;
TEMPLATESEQUENCEEDITOR_API UClass* Z_Construct_UClass_UTemplateSequenceEditorSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTemplateSequenceEditorSettings(); \
	friend struct ::Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMPLATESEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_UTemplateSequenceEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTemplateSequenceEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TemplateSequenceEditor"), Z_Construct_UClass_UTemplateSequenceEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UTemplateSequenceEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTemplateSequenceEditorSettings(UTemplateSequenceEditorSettings&&) = delete; \
	UTemplateSequenceEditorSettings(const UTemplateSequenceEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateSequenceEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateSequenceEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateSequenceEditorSettings) \
	NO_API virtual ~UTemplateSequenceEditorSettings();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_10_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTemplateSequenceEditorSettings;

// ********** End Class UTemplateSequenceEditorSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
