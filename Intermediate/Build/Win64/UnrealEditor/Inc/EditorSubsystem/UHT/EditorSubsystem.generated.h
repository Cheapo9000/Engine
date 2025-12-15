// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorSubsystem.h"

#ifdef EDITORSUBSYSTEM_EditorSubsystem_generated_h
#error "EditorSubsystem.generated.h already included, missing '#pragma once' in EditorSubsystem.h"
#endif
#define EDITORSUBSYSTEM_EditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorSubsystem *********************************************************
struct Z_Construct_UClass_UEditorSubsystem_Statics;
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem_NoRegister();

#define FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORSUBSYSTEM_API UClass* ::Z_Construct_UClass_UEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EditorSubsystem"), Z_Construct_UClass_UEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEditorSubsystem)


#define FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorSubsystem(UEditorSubsystem&&) = delete; \
	UEditorSubsystem(const UEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORSUBSYSTEM_API, UEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEditorSubsystem) \
	EDITORSUBSYSTEM_API virtual ~UEditorSubsystem();


#define FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_26_PROLOG
#define FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorSubsystem;

// ********** End Class UEditorSubsystem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
