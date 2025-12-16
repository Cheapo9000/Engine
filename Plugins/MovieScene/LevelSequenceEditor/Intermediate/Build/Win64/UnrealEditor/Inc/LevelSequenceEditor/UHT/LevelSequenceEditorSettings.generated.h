// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/LevelSequenceEditorSettings.h"

#ifdef LEVELSEQUENCEEDITOR_LevelSequenceEditorSettings_generated_h
#error "LevelSequenceEditorSettings.generated.h already included, missing '#pragma once' in LevelSequenceEditorSettings.h"
#endif
#define LEVELSEQUENCEEDITOR_LevelSequenceEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLevelSequencePropertyTrackSettings *******************************
struct Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics;
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics; \
	LEVELSEQUENCEEDITOR_API static class UScriptStruct* StaticStruct();


struct FLevelSequencePropertyTrackSettings;
// ********** End ScriptStruct FLevelSequencePropertyTrackSettings *********************************

// ********** Begin ScriptStruct FLevelSequenceTrackSettings ***************************************
struct Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics;
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics; \
	LEVELSEQUENCEEDITOR_API static class UScriptStruct* StaticStruct();


struct FLevelSequenceTrackSettings;
// ********** End ScriptStruct FLevelSequenceTrackSettings *****************************************

// ********** Begin Class ULevelSequenceEditorSettings *********************************************
struct Z_Construct_UClass_ULevelSequenceEditorSettings_Statics;
LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceEditorSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceEditorSettings(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_ULevelSequenceEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), Z_Construct_UClass_ULevelSequenceEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceEditorSettings(ULevelSequenceEditorSettings&&) = delete; \
	ULevelSequenceEditorSettings(const ULevelSequenceEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCEEDITOR_API, ULevelSequenceEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceEditorSettings) \
	LEVELSEQUENCEEDITOR_API virtual ~ULevelSequenceEditorSettings();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_54_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceEditorSettings;

// ********** End Class ULevelSequenceEditorSettings ***********************************************

// ********** Begin Class ULevelSequenceWithShotsSettings ******************************************
struct Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics;
LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceWithShotsSettings_NoRegister();

#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_84_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceWithShotsSettings(); \
	friend struct ::Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELSEQUENCEEDITOR_API UClass* ::Z_Construct_UClass_ULevelSequenceWithShotsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelSequenceWithShotsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequenceEditor"), Z_Construct_UClass_ULevelSequenceWithShotsSettings_NoRegister) \
	DECLARE_SERIALIZER(ULevelSequenceWithShotsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELSEQUENCEEDITOR_API ULevelSequenceWithShotsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceWithShotsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELSEQUENCEEDITOR_API, ULevelSequenceWithShotsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceWithShotsSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelSequenceWithShotsSettings(ULevelSequenceWithShotsSettings&&) = delete; \
	ULevelSequenceWithShotsSettings(const ULevelSequenceWithShotsSettings&) = delete; \
	LEVELSEQUENCEEDITOR_API virtual ~ULevelSequenceWithShotsSettings();


#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_80_PROLOG
#define FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_84_INCLASS \
	FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelSequenceWithShotsSettings;

// ********** End Class ULevelSequenceWithShotsSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_Misc_LevelSequenceEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
