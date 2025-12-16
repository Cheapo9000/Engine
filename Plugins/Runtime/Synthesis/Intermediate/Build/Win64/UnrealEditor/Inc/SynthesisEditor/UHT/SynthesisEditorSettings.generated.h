// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthesisEditorSettings.h"

#ifdef SYNTHESISEDITOR_SynthesisEditorSettings_generated_h
#error "SynthesisEditorSettings.generated.h already included, missing '#pragma once' in SynthesisEditorSettings.h"
#endif
#define SYNTHESISEDITOR_SynthesisEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USynthesisEditorSettings *************************************************
struct Z_Construct_UClass_USynthesisEditorSettings_Statics;
SYNTHESISEDITOR_API UClass* Z_Construct_UClass_USynthesisEditorSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthesisEditorSettings(); \
	friend struct ::Z_Construct_UClass_USynthesisEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESISEDITOR_API UClass* ::Z_Construct_UClass_USynthesisEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USynthesisEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/SynthesisEditor"), Z_Construct_UClass_USynthesisEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(USynthesisEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USynthesisEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynthesisEditorSettings(USynthesisEditorSettings&&) = delete; \
	USynthesisEditorSettings(const USynthesisEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USynthesisEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthesisEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthesisEditorSettings) \
	NO_API virtual ~USynthesisEditorSettings();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynthesisEditorSettings;

// ********** End Class USynthesisEditorSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
