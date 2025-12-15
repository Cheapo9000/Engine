// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorFunctionLibrary.h"

#ifdef BLUTILITY_EditorFunctionLibrary_generated_h
#error "EditorFunctionLibrary.generated.h already included, missing '#pragma once' in EditorFunctionLibrary.h"
#endif
#define BLUTILITY_EditorFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorFunctionLibrary ***************************************************
struct Z_Construct_UClass_UEditorFunctionLibrary_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorFunctionLibrary_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Private_EditorFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UEditorFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UEditorFunctionLibrary)


#define FID_Engine_Source_Editor_Blutility_Private_EditorFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorFunctionLibrary(UEditorFunctionLibrary&&) = delete; \
	UEditorFunctionLibrary(const UEditorFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFunctionLibrary); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFunctionLibrary) \
	BLUTILITY_API virtual ~UEditorFunctionLibrary();


#define FID_Engine_Source_Editor_Blutility_Private_EditorFunctionLibrary_h_12_PROLOG
#define FID_Engine_Source_Editor_Blutility_Private_EditorFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Private_EditorFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Private_EditorFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorFunctionLibrary;

// ********** End Class UEditorFunctionLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Private_EditorFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
