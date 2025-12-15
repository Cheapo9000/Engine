// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorAnimCompositeSegment.h"

#ifdef UNREALED_EditorAnimCompositeSegment_generated_h
#error "EditorAnimCompositeSegment.generated.h already included, missing '#pragma once' in EditorAnimCompositeSegment.h"
#endif
#define UNREALED_EditorAnimCompositeSegment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorAnimCompositeSegment **********************************************
struct Z_Construct_UClass_UEditorAnimCompositeSegment_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorAnimCompositeSegment_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAnimCompositeSegment(); \
	friend struct ::Z_Construct_UClass_UEditorAnimCompositeSegment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorAnimCompositeSegment_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorAnimCompositeSegment, UEditorAnimBaseObj, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorAnimCompositeSegment_NoRegister) \
	DECLARE_SERIALIZER(UEditorAnimCompositeSegment)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorAnimCompositeSegment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAnimCompositeSegment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorAnimCompositeSegment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAnimCompositeSegment); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorAnimCompositeSegment(UEditorAnimCompositeSegment&&) = delete; \
	UEditorAnimCompositeSegment(const UEditorAnimCompositeSegment&) = delete; \
	UNREALED_API virtual ~UEditorAnimCompositeSegment();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_20_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_23_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorAnimCompositeSegment;

// ********** End Class UEditorAnimCompositeSegment ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimCompositeSegment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
