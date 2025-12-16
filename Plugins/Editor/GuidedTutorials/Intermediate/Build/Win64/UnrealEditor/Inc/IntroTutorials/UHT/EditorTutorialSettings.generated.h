// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorTutorialSettings.h"

#ifdef INTROTUTORIALS_EditorTutorialSettings_generated_h
#error "EditorTutorialSettings.generated.h already included, missing '#pragma once' in EditorTutorialSettings.h"
#endif
#define INTROTUTORIALS_EditorTutorialSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTutorialContext **************************************************
struct Z_Construct_UScriptStruct_FTutorialContext_Statics;
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTutorialContext_Statics; \
	INTROTUTORIALS_API static class UScriptStruct* StaticStruct();


struct FTutorialContext;
// ********** End ScriptStruct FTutorialContext ****************************************************

// ********** Begin Class UEditorTutorialSettings **************************************************
struct Z_Construct_UClass_UEditorTutorialSettings_Statics;
INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorialSettings_NoRegister();

#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUEditorTutorialSettings(); \
	friend struct ::Z_Construct_UClass_UEditorTutorialSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTROTUTORIALS_API UClass* ::Z_Construct_UClass_UEditorTutorialSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorTutorialSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IntroTutorials"), Z_Construct_UClass_UEditorTutorialSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorTutorialSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("GuidedTutorials");} \



#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorTutorialSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorTutorialSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorTutorialSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorTutorialSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorTutorialSettings(UEditorTutorialSettings&&) = delete; \
	UEditorTutorialSettings(const UEditorTutorialSettings&) = delete; \
	NO_API virtual ~UEditorTutorialSettings();


#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_36_PROLOG
#define FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_39_INCLASS \
	FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorTutorialSettings;

// ********** End Class UEditorTutorialSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Private_EditorTutorialSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
