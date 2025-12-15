// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassEntityEditorSubsystem.h"

#ifdef MASSENTITYEDITOR_MassEntityEditorSubsystem_generated_h
#error "MassEntityEditorSubsystem.generated.h already included, missing '#pragma once' in MassEntityEditorSubsystem.h"
#endif
#define MASSENTITYEDITOR_MassEntityEditorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassEntityEditorSubsystem ***********************************************
struct Z_Construct_UClass_UMassEntityEditorSubsystem_Statics;
MASSENTITYEDITOR_API UClass* Z_Construct_UClass_UMassEntityEditorSubsystem_NoRegister();

#define FID_Engine_Source_Editor_MassEntityEditor_Public_MassEntityEditorSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassEntityEditorSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassEntityEditorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSENTITYEDITOR_API UClass* ::Z_Construct_UClass_UMassEntityEditorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassEntityEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassEntityEditor"), Z_Construct_UClass_UMassEntityEditorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassEntityEditorSubsystem)


#define FID_Engine_Source_Editor_MassEntityEditor_Public_MassEntityEditorSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassEntityEditorSubsystem(UMassEntityEditorSubsystem&&) = delete; \
	UMassEntityEditorSubsystem(const UMassEntityEditorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSENTITYEDITOR_API, UMassEntityEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassEntityEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassEntityEditorSubsystem)


#define FID_Engine_Source_Editor_MassEntityEditor_Public_MassEntityEditorSubsystem_h_18_PROLOG
#define FID_Engine_Source_Editor_MassEntityEditor_Public_MassEntityEditorSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MassEntityEditor_Public_MassEntityEditorSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MassEntityEditor_Public_MassEntityEditorSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassEntityEditorSubsystem;

// ********** End Class UMassEntityEditorSubsystem *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MassEntityEditor_Public_MassEntityEditorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
