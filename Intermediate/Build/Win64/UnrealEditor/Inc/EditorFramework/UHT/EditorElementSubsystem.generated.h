// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/EditorElementSubsystem.h"

#ifdef EDITORFRAMEWORK_EditorElementSubsystem_generated_h
#error "EditorElementSubsystem.generated.h already included, missing '#pragma once' in EditorElementSubsystem.h"
#endif
#define EDITORFRAMEWORK_EditorElementSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorElementSubsystem **************************************************
struct Z_Construct_UClass_UEditorElementSubsystem_Statics;
EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UEditorElementSubsystem_NoRegister();

#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorElementSubsystem(); \
	friend struct ::Z_Construct_UClass_UEditorElementSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORFRAMEWORK_API UClass* ::Z_Construct_UClass_UEditorElementSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorElementSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/EditorFramework"), Z_Construct_UClass_UEditorElementSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEditorElementSubsystem)


#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORFRAMEWORK_API UEditorElementSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorElementSubsystem(UEditorElementSubsystem&&) = delete; \
	UEditorElementSubsystem(const UEditorElementSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORFRAMEWORK_API, UEditorElementSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorElementSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorElementSubsystem) \
	EDITORFRAMEWORK_API virtual ~UEditorElementSubsystem();


#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_22_PROLOG
#define FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorElementSubsystem;

// ********** End Class UEditorElementSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
