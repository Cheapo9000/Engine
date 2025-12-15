// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorState/WorldEditorState.h"

#ifdef UNREALED_WorldEditorState_generated_h
#error "WorldEditorState.generated.h already included, missing '#pragma once' in WorldEditorState.h"
#endif
#define UNREALED_WorldEditorState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldEditorState ********************************************************
struct Z_Construct_UClass_UWorldEditorState_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldEditorState_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWorldEditorState(); \
	friend struct ::Z_Construct_UClass_UWorldEditorState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldEditorState_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldEditorState, UEditorState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldEditorState_NoRegister) \
	DECLARE_SERIALIZER(UWorldEditorState)


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldEditorState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldEditorState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldEditorState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldEditorState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldEditorState(UWorldEditorState&&) = delete; \
	UWorldEditorState(const UWorldEditorState&) = delete; \
	UNREALED_API virtual ~UWorldEditorState();


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_13_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldEditorState;

// ********** End Class UWorldEditorState **********************************************************

// ********** Begin Class UWorldDependantEditorState ***********************************************
struct Z_Construct_UClass_UWorldDependantEditorState_Statics;
UNREALED_API UClass* Z_Construct_UClass_UWorldDependantEditorState_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUWorldDependantEditorState(); \
	friend struct ::Z_Construct_UClass_UWorldDependantEditorState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UWorldDependantEditorState_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldDependantEditorState, UEditorState, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UWorldDependantEditorState_NoRegister) \
	DECLARE_SERIALIZER(UWorldDependantEditorState)


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UWorldDependantEditorState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldDependantEditorState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UWorldDependantEditorState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldDependantEditorState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldDependantEditorState(UWorldDependantEditorState&&) = delete; \
	UWorldDependantEditorState(const UWorldDependantEditorState&) = delete; \
	UNREALED_API virtual ~UWorldDependantEditorState();


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_29_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_32_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldDependantEditorState;

// ********** End Class UWorldDependantEditorState *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_EditorState_WorldEditorState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
