// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeProjectFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODEEDITOR_CodeProjectFactory_generated_h
#error "CodeProjectFactory.generated.h already included, missing '#pragma once' in CodeProjectFactory.h"
#endif
#define CODEEDITOR_CodeProjectFactory_generated_h

#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCodeProjectFactory(); \
	friend struct Z_Construct_UClass_UCodeProjectFactory_Statics; \
public: \
	DECLARE_CLASS(UCodeProjectFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeEditor"), NO_API) \
	DECLARE_SERIALIZER(UCodeProjectFactory)


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeProjectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeProjectFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeProjectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeProjectFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCodeProjectFactory(UCodeProjectFactory&&); \
	UCodeProjectFactory(const UCodeProjectFactory&); \
public: \
	NO_API virtual ~UCodeProjectFactory();


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_INCLASS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODEEDITOR_API UClass* StaticClass<class UCodeProjectFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
