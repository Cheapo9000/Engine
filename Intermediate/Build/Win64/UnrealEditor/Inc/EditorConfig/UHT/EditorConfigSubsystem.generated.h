// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorConfigSubsystem.h"

#ifdef EDITORCONFIG_EditorConfigSubsystem_generated_h
#error "EditorConfigSubsystem.generated.h already included, missing '#pragma once' in EditorConfigSubsystem.h"
#endif
#define EDITORCONFIG_EditorConfigSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorConfigSubsystem ***************************************************
struct Z_Construct_UClass_UEditorConfigSubsystem_Statics;
EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigSubsystem_NoRegister();

#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorConfigSubsystem(); \
	friend struct ::Z_Construct_UClass_UEditorConfigSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORCONFIG_API UClass* ::Z_Construct_UClass_UEditorConfigSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorConfigSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorConfig"), Z_Construct_UClass_UEditorConfigSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEditorConfigSubsystem)


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorConfigSubsystem(UEditorConfigSubsystem&&) = delete; \
	UEditorConfigSubsystem(const UEditorConfigSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORCONFIG_API, UEditorConfigSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorConfigSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorConfigSubsystem) \
	EDITORCONFIG_API virtual ~UEditorConfigSubsystem();


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_14_PROLOG
#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorConfigSubsystem;

// ********** End Class UEditorConfigSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
