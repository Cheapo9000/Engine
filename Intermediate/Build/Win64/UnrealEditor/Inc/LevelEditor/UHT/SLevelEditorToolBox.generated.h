// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SLevelEditorToolBox.h"

#ifdef LEVELEDITOR_SLevelEditorToolBox_generated_h
#error "SLevelEditorToolBox.generated.h already included, missing '#pragma once' in SLevelEditorToolBox.h"
#endif
#define LEVELEDITOR_SLevelEditorToolBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelEditorUISubsystem **************************************************
struct Z_Construct_UClass_ULevelEditorUISubsystem_Statics;
LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorUISubsystem_NoRegister();

#define FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelEditorUISubsystem(); \
	friend struct ::Z_Construct_UClass_ULevelEditorUISubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELEDITOR_API UClass* ::Z_Construct_UClass_ULevelEditorUISubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelEditorUISubsystem, UAssetEditorUISubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelEditor"), Z_Construct_UClass_ULevelEditorUISubsystem_NoRegister) \
	DECLARE_SERIALIZER(ULevelEditorUISubsystem)


#define FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelEditorUISubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelEditorUISubsystem(ULevelEditorUISubsystem&&) = delete; \
	ULevelEditorUISubsystem(const ULevelEditorUISubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelEditorUISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelEditorUISubsystem) \
	NO_API virtual ~ULevelEditorUISubsystem();


#define FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_26_PROLOG
#define FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelEditorUISubsystem;

// ********** End Class ULevelEditorUISubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LevelEditor_Private_SLevelEditorToolBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
