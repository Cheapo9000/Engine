// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldBookmark/WorldBookmarkEditorSettings.h"

#ifdef WORLDBOOKMARK_WorldBookmarkEditorSettings_generated_h
#error "WorldBookmarkEditorSettings.generated.h already included, missing '#pragma once' in WorldBookmarkEditorSettings.h"
#endif
#define WORLDBOOKMARK_WorldBookmarkEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldBookmarkEditorSettings *********************************************
struct Z_Construct_UClass_UWorldBookmarkEditorSettings_Statics;
WORLDBOOKMARK_API UClass* Z_Construct_UClass_UWorldBookmarkEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldBookmarkEditorSettings(); \
	friend struct ::Z_Construct_UClass_UWorldBookmarkEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDBOOKMARK_API UClass* ::Z_Construct_UClass_UWorldBookmarkEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldBookmarkEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldBookmark"), Z_Construct_UClass_UWorldBookmarkEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UWorldBookmarkEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldBookmarkEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldBookmarkEditorSettings(UWorldBookmarkEditorSettings&&) = delete; \
	UWorldBookmarkEditorSettings(const UWorldBookmarkEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldBookmarkEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldBookmarkEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldBookmarkEditorSettings) \
	NO_API virtual ~UWorldBookmarkEditorSettings();


#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_12_PROLOG
#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldBookmarkEditorSettings;

// ********** End Class UWorldBookmarkEditorSettings ***********************************************

// ********** Begin Class UWorldBookmarkEditorPerProjectUserSettings *******************************
struct Z_Construct_UClass_UWorldBookmarkEditorPerProjectUserSettings_Statics;
WORLDBOOKMARK_API UClass* Z_Construct_UClass_UWorldBookmarkEditorPerProjectUserSettings_NoRegister();

#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldBookmarkEditorPerProjectUserSettings(); \
	friend struct ::Z_Construct_UClass_UWorldBookmarkEditorPerProjectUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDBOOKMARK_API UClass* ::Z_Construct_UClass_UWorldBookmarkEditorPerProjectUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldBookmarkEditorPerProjectUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldBookmark"), Z_Construct_UClass_UWorldBookmarkEditorPerProjectUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UWorldBookmarkEditorPerProjectUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldBookmarkEditorPerProjectUserSettings(UWorldBookmarkEditorPerProjectUserSettings&&) = delete; \
	UWorldBookmarkEditorPerProjectUserSettings(const UWorldBookmarkEditorPerProjectUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldBookmarkEditorPerProjectUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldBookmarkEditorPerProjectUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldBookmarkEditorPerProjectUserSettings) \
	NO_API virtual ~UWorldBookmarkEditorPerProjectUserSettings();


#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_36_PROLOG
#define FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldBookmarkEditorPerProjectUserSettings;

// ********** End Class UWorldBookmarkEditorPerProjectUserSettings *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldBookmark_Private_WorldBookmark_WorldBookmarkEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
