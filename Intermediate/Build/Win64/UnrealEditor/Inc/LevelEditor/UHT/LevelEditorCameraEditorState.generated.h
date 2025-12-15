// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelEditorCameraEditorState.h"

#ifdef LEVELEDITOR_LevelEditorCameraEditorState_generated_h
#error "LevelEditorCameraEditorState.generated.h already included, missing '#pragma once' in LevelEditorCameraEditorState.h"
#endif
#define LEVELEDITOR_LevelEditorCameraEditorState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULevelEditorCameraEditorState ********************************************
struct Z_Construct_UClass_ULevelEditorCameraEditorState_Statics;
LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorCameraEditorState_NoRegister();

#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorCameraEditorState_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULevelEditorCameraEditorState(); \
	friend struct ::Z_Construct_UClass_ULevelEditorCameraEditorState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELEDITOR_API UClass* ::Z_Construct_UClass_ULevelEditorCameraEditorState_NoRegister(); \
public: \
	DECLARE_CLASS2(ULevelEditorCameraEditorState, UWorldDependantEditorState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelEditor"), Z_Construct_UClass_ULevelEditorCameraEditorState_NoRegister) \
	DECLARE_SERIALIZER(ULevelEditorCameraEditorState)


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorCameraEditorState_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELEDITOR_API ULevelEditorCameraEditorState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelEditorCameraEditorState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELEDITOR_API, ULevelEditorCameraEditorState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelEditorCameraEditorState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULevelEditorCameraEditorState(ULevelEditorCameraEditorState&&) = delete; \
	ULevelEditorCameraEditorState(const ULevelEditorCameraEditorState&) = delete; \
	LEVELEDITOR_API virtual ~ULevelEditorCameraEditorState();


#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorCameraEditorState_h_11_PROLOG
#define FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorCameraEditorState_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorCameraEditorState_h_14_INCLASS \
	FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorCameraEditorState_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULevelEditorCameraEditorState;

// ********** End Class ULevelEditorCameraEditorState **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorCameraEditorState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
