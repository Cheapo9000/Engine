// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioEditorSettings.h"

#ifdef AUDIOEDITOR_AudioEditorSettings_generated_h
#error "AudioEditorSettings.generated.h already included, missing '#pragma once' in AudioEditorSettings.h"
#endif
#define AUDIOEDITOR_AudioEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAudioPlatform ****************************************************
struct Z_Construct_UScriptStruct_FAudioPlatform_Statics;
#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioPlatform_Statics; \
	AUDIOEDITOR_API static class UScriptStruct* StaticStruct();


struct FAudioPlatform;
// ********** End ScriptStruct FAudioPlatform ******************************************************

// ********** Begin Class UAudioEditorSettings *****************************************************
#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllowedMenuPositions);


struct Z_Construct_UClass_UAudioEditorSettings_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UAudioEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioEditorSettings(); \
	friend struct ::Z_Construct_UClass_UAudioEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UAudioEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UAudioEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UAudioEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API UAudioEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioEditorSettings(UAudioEditorSettings&&) = delete; \
	UAudioEditorSettings(const UAudioEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, UAudioEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioEditorSettings) \
	AUDIOEDITOR_API virtual ~UAudioEditorSettings();


#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_53_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioEditorSettings;

// ********** End Class UAudioEditorSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
