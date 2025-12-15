// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionEditorState.h"

#ifdef WORLDPARTITIONEDITOR_WorldPartitionEditorState_generated_h
#error "WorldPartitionEditorState.generated.h already included, missing '#pragma once' in WorldPartitionEditorState.h"
#endif
#define WORLDPARTITIONEDITOR_WorldPartitionEditorState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionEditorState ***********************************************
struct Z_Construct_UClass_UWorldPartitionEditorState_Statics;
WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UWorldPartitionEditorState_NoRegister();

#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorState_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionEditorState(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionEditorState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDPARTITIONEDITOR_API UClass* ::Z_Construct_UClass_UWorldPartitionEditorState_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionEditorState, UWorldDependantEditorState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldPartitionEditor"), Z_Construct_UClass_UWorldPartitionEditorState_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionEditorState)


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorState_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDPARTITIONEDITOR_API UWorldPartitionEditorState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionEditorState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDPARTITIONEDITOR_API, UWorldPartitionEditorState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionEditorState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionEditorState(UWorldPartitionEditorState&&) = delete; \
	UWorldPartitionEditorState(const UWorldPartitionEditorState&) = delete; \
	WORLDPARTITIONEDITOR_API virtual ~UWorldPartitionEditorState();


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorState_h_8_PROLOG
#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorState_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorState_h_11_INCLASS \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorState_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionEditorState;

// ********** End Class UWorldPartitionEditorState *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
