// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeProject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODEEDITOR_CodeProject_generated_h
#error "CodeProject.generated.h already included, missing '#pragma once' in CodeProject.h"
#endif
#define CODEEDITOR_CodeProject_generated_h

#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCodeProject(); \
	friend struct Z_Construct_UClass_UCodeProject_Statics; \
public: \
	DECLARE_CLASS(UCodeProject, UCodeProjectItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeEditor"), NO_API) \
	DECLARE_SERIALIZER(UCodeProject)


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeProject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeProject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeProject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeProject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCodeProject(UCodeProject&&); \
	UCodeProject(const UCodeProject&); \
public: \
	NO_API virtual ~UCodeProject();


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_INCLASS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODEEDITOR_API UClass* StaticClass<class UCodeProject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
