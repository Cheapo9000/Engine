// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorParentPlayerListObj.h"

#ifdef UNREALED_EditorParentPlayerListObj_generated_h
#error "EditorParentPlayerListObj.generated.h already included, missing '#pragma once' in EditorParentPlayerListObj.h"
#endif
#define UNREALED_EditorParentPlayerListObj_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorParentPlayerListObj ***********************************************
struct Z_Construct_UClass_UEditorParentPlayerListObj_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorParentPlayerListObj_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUEditorParentPlayerListObj(); \
	friend struct ::Z_Construct_UClass_UEditorParentPlayerListObj_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorParentPlayerListObj_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorParentPlayerListObj, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorParentPlayerListObj_NoRegister) \
	DECLARE_SERIALIZER(UEditorParentPlayerListObj)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorParentPlayerListObj(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorParentPlayerListObj) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorParentPlayerListObj); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorParentPlayerListObj); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorParentPlayerListObj(UEditorParentPlayerListObj&&) = delete; \
	UEditorParentPlayerListObj(const UEditorParentPlayerListObj&) = delete; \
	UNREALED_API virtual ~UEditorParentPlayerListObj();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorParentPlayerListObj;

// ********** End Class UEditorParentPlayerListObj *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorParentPlayerListObj_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
