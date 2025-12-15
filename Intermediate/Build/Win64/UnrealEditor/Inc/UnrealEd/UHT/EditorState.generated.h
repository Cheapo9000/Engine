// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorState/EditorState.h"

#ifdef UNREALED_EditorState_generated_h
#error "EditorState.generated.h already included, missing '#pragma once' in EditorState.h"
#endif
#define UNREALED_EditorState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorState *************************************************************
struct Z_Construct_UClass_UEditorState_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorState_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorState(); \
	friend struct ::Z_Construct_UClass_UEditorState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorState_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorState_NoRegister) \
	DECLARE_SERIALIZER(UEditorState)


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorState_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorState(UEditorState&&) = delete; \
	UEditorState(const UEditorState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorState) \
	UNREALED_API virtual ~UEditorState();


#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorState_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorState;

// ********** End Class UEditorState ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_EditorState_EditorState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
