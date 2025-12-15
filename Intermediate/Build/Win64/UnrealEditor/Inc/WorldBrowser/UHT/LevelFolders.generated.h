// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelFolders.h"

#ifdef WORLDBROWSER_LevelFolders_generated_h
#error "LevelFolders.generated.h already included, missing '#pragma once' in LevelFolders.h"
#endif
#define WORLDBROWSER_LevelFolders_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLevelFolderProps *************************************************
struct Z_Construct_UScriptStruct_FLevelFolderProps_Statics;
#define FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLevelFolderProps_Statics; \
	WORLDBROWSER_API static class UScriptStruct* StaticStruct();


struct FLevelFolderProps;
// ********** End ScriptStruct FLevelFolderProps ***************************************************

// ********** Begin Class UEditorLevelFolders ******************************************************
#define FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_51_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEditorLevelFolders, NO_API)


struct Z_Construct_UClass_UEditorLevelFolders_Statics;
WORLDBROWSER_API UClass* Z_Construct_UClass_UEditorLevelFolders_NoRegister();

#define FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorLevelFolders(); \
	friend struct ::Z_Construct_UClass_UEditorLevelFolders_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDBROWSER_API UClass* ::Z_Construct_UClass_UEditorLevelFolders_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorLevelFolders, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldBrowser"), Z_Construct_UClass_UEditorLevelFolders_NoRegister) \
	DECLARE_SERIALIZER(UEditorLevelFolders) \
	FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_51_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLevelFolders(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorLevelFolders(UEditorLevelFolders&&) = delete; \
	UEditorLevelFolders(const UEditorLevelFolders&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLevelFolders); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLevelFolders); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLevelFolders) \
	NO_API virtual ~UEditorLevelFolders();


#define FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_48_PROLOG
#define FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorLevelFolders;

// ********** End Class UEditorLevelFolders ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
