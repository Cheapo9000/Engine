// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorState/EditorStateSubsystem.h"

#ifdef UNREALED_EditorStateSubsystem_generated_h
#error "EditorStateSubsystem.generated.h already included, missing '#pragma once' in EditorStateSubsystem.h"
#endif
#define UNREALED_EditorStateSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorStateSubsystem ****************************************************
struct Z_Construct_UClass_UEditorStateSubsystem_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorStateSubsystem_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorStateSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorStateSubsystem(); \
	friend struct ::Z_Construct_UClass_UEditorStateSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorStateSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorStateSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorStateSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEditorStateSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorStateSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorStateSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorStateSubsystem(UEditorStateSubsystem&&) = delete; \
	UEditorStateSubsystem(const UEditorStateSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorStateSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorStateSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorStateSubsystem) \
	UNREALED_API virtual ~UEditorStateSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorStateSubsystem_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorStateSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorStateSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorStateSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorStateSubsystem;

// ********** End Class UEditorStateSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorStateSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
