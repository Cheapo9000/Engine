// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeProjectFactory.h"

#ifdef CODEEDITOR_CodeProjectFactory_generated_h
#error "CodeProjectFactory.generated.h already included, missing '#pragma once' in CodeProjectFactory.h"
#endif
#define CODEEDITOR_CodeProjectFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCodeProjectFactory ******************************************************
struct Z_Construct_UClass_UCodeProjectFactory_Statics;
CODEEDITOR_API UClass* Z_Construct_UClass_UCodeProjectFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCodeProjectFactory(); \
	friend struct ::Z_Construct_UClass_UCodeProjectFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CODEEDITOR_API UClass* ::Z_Construct_UClass_UCodeProjectFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UCodeProjectFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeEditor"), Z_Construct_UClass_UCodeProjectFactory_NoRegister) \
	DECLARE_SERIALIZER(UCodeProjectFactory)


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeProjectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeProjectFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeProjectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeProjectFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCodeProjectFactory(UCodeProjectFactory&&) = delete; \
	UCodeProjectFactory(const UCodeProjectFactory&) = delete; \
	NO_API virtual ~UCodeProjectFactory();


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_INCLASS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCodeProjectFactory;

// ********** End Class UCodeProjectFactory ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
