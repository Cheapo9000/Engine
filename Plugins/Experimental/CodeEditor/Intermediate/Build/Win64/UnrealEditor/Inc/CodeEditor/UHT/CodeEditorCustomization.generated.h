// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeEditorCustomization.h"

#ifdef CODEEDITOR_CodeEditorCustomization_generated_h
#error "CodeEditorCustomization.generated.h already included, missing '#pragma once' in CodeEditorCustomization.h"
#endif
#define CODEEDITOR_CodeEditorCustomization_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCodeEditorTextCustomization **************************************
struct Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics;
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_10_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCodeEditorTextCustomization_Statics; \
	CODEEDITOR_API static class UScriptStruct* StaticStruct();


struct FCodeEditorTextCustomization;
// ********** End ScriptStruct FCodeEditorTextCustomization ****************************************

// ********** Begin ScriptStruct FCodeEditorControlCustomization ***********************************
struct Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics;
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCodeEditorControlCustomization_Statics; \
	CODEEDITOR_API static class UScriptStruct* StaticStruct();


struct FCodeEditorControlCustomization;
// ********** End ScriptStruct FCodeEditorControlCustomization *************************************

// ********** Begin Class UCodeEditorCustomization *************************************************
struct Z_Construct_UClass_UCodeEditorCustomization_Statics;
CODEEDITOR_API UClass* Z_Construct_UClass_UCodeEditorCustomization_NoRegister();

#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUCodeEditorCustomization(); \
	friend struct ::Z_Construct_UClass_UCodeEditorCustomization_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CODEEDITOR_API UClass* ::Z_Construct_UClass_UCodeEditorCustomization_NoRegister(); \
public: \
	DECLARE_CLASS2(UCodeEditorCustomization, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeEditor"), Z_Construct_UClass_UCodeEditorCustomization_NoRegister) \
	DECLARE_SERIALIZER(UCodeEditorCustomization) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCodeEditorCustomization(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCodeEditorCustomization) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCodeEditorCustomization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCodeEditorCustomization); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCodeEditorCustomization(UCodeEditorCustomization&&) = delete; \
	UCodeEditorCustomization(const UCodeEditorCustomization&) = delete; \
	NO_API virtual ~UCodeEditorCustomization();


#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_42_INCLASS \
	FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCodeEditorCustomization;

// ********** End Class UCodeEditorCustomization ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeEditorCustomization_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
