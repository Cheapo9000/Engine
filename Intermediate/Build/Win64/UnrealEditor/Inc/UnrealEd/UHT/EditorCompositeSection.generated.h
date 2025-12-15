// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorCompositeSection.h"

#ifdef UNREALED_EditorCompositeSection_generated_h
#error "EditorCompositeSection.generated.h already included, missing '#pragma once' in EditorCompositeSection.h"
#endif
#define UNREALED_EditorCompositeSection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorCompositeSection **************************************************
struct Z_Construct_UClass_UEditorCompositeSection_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorCompositeSection_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUEditorCompositeSection(); \
	friend struct ::Z_Construct_UClass_UEditorCompositeSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorCompositeSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorCompositeSection, UEditorAnimBaseObj, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorCompositeSection_NoRegister) \
	DECLARE_SERIALIZER(UEditorCompositeSection)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorCompositeSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorCompositeSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorCompositeSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorCompositeSection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorCompositeSection(UEditorCompositeSection&&) = delete; \
	UEditorCompositeSection(const UEditorCompositeSection&) = delete; \
	UNREALED_API virtual ~UEditorCompositeSection();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorCompositeSection;

// ********** End Class UEditorCompositeSection ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorCompositeSection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
