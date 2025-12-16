// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeProject.h"

#ifdef CODEEDITOR_CodeProject_generated_h
#error "CodeProject.generated.h already included, missing '#pragma once' in CodeProject.h"
#endif
#define CODEEDITOR_CodeProject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCodeProject *************************************************************
struct Z_Construct_UClass_UCodeProject_Statics;
CODEEDITOR_API UClass* Z_Construct_UClass_UCodeProject_NoRegister();

#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCodeProject(); \
	friend struct ::Z_Construct_UClass_UCodeProject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CODEEDITOR_API UClass* ::Z_Construct_UClass_UCodeProject_NoRegister(); \
public: \
	DECLARE_CLASS2(UCodeProject, UCodeProjectItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeEditor"), Z_Construct_UClass_UCodeProject_NoRegister) \
	DECLARE_SERIALIZER(UCodeProject)


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeProject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeProject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeProject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeProject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCodeProject(UCodeProject&&) = delete; \
	UCodeProject(const UCodeProject&) = delete; \
	NO_API virtual ~UCodeProject();


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_INCLASS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCodeProject;

// ********** End Class UCodeProject ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
