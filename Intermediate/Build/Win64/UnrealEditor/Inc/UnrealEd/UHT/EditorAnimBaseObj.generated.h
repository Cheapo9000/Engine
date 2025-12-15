// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorAnimBaseObj.h"

#ifdef UNREALED_EditorAnimBaseObj_generated_h
#error "EditorAnimBaseObj.generated.h already included, missing '#pragma once' in EditorAnimBaseObj.h"
#endif
#define UNREALED_EditorAnimBaseObj_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorAnimBaseObj *******************************************************
struct Z_Construct_UClass_UEditorAnimBaseObj_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorAnimBaseObj_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAnimBaseObj(); \
	friend struct ::Z_Construct_UClass_UEditorAnimBaseObj_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorAnimBaseObj_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorAnimBaseObj, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorAnimBaseObj_NoRegister) \
	DECLARE_SERIALIZER(UEditorAnimBaseObj)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorAnimBaseObj(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAnimBaseObj) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorAnimBaseObj); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAnimBaseObj); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorAnimBaseObj(UEditorAnimBaseObj&&) = delete; \
	UEditorAnimBaseObj(const UEditorAnimBaseObj&) = delete; \
	UNREALED_API virtual ~UEditorAnimBaseObj();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_21_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorAnimBaseObj;

// ********** End Class UEditorAnimBaseObj *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorAnimBaseObj_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
