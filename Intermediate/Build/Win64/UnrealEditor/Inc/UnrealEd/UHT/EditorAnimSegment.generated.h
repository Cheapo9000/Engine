// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorAnimSegment.h"

#ifdef UNREALED_EditorAnimSegment_generated_h
#error "EditorAnimSegment.generated.h already included, missing '#pragma once' in EditorAnimSegment.h"
#endif
#define UNREALED_EditorAnimSegment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorAnimSegment *******************************************************
struct Z_Construct_UClass_UEditorAnimSegment_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorAnimSegment_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAnimSegment(); \
	friend struct ::Z_Construct_UClass_UEditorAnimSegment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorAnimSegment_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorAnimSegment, UEditorAnimBaseObj, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorAnimSegment_NoRegister) \
	DECLARE_SERIALIZER(UEditorAnimSegment)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorAnimSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAnimSegment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorAnimSegment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAnimSegment); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorAnimSegment(UEditorAnimSegment&&) = delete; \
	UEditorAnimSegment(const UEditorAnimSegment&) = delete; \
	UNREALED_API virtual ~UEditorAnimSegment();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_20_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorAnimSegment;

// ********** End Class UEditorAnimSegment *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimSegment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
