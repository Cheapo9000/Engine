// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/EditorBrushBuilder.h"

#ifdef UNREALED_EditorBrushBuilder_generated_h
#error "EditorBrushBuilder.generated.h already included, missing '#pragma once' in EditorBrushBuilder.h"
#endif
#define UNREALED_EditorBrushBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorBrushBuilder ******************************************************
struct Z_Construct_UClass_UEditorBrushBuilder_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorBrushBuilder(); \
	friend struct ::Z_Construct_UClass_UEditorBrushBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorBrushBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorBrushBuilder, UBrushBuilder, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorBrushBuilder_NoRegister) \
	DECLARE_SERIALIZER(UEditorBrushBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorBrushBuilder(UEditorBrushBuilder&&) = delete; \
	UEditorBrushBuilder(const UEditorBrushBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorBrushBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorBrushBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorBrushBuilder) \
	UNREALED_API virtual ~UEditorBrushBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorBrushBuilder;

// ********** End Class UEditorBrushBuilder ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Builders_EditorBrushBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
