// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/EditorSkeletonNotifyObj.h"

#ifdef UNREALED_EditorSkeletonNotifyObj_generated_h
#error "EditorSkeletonNotifyObj.generated.h already included, missing '#pragma once' in EditorSkeletonNotifyObj.h"
#endif
#define UNREALED_EditorSkeletonNotifyObj_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorSkeletonNotifyObj *************************************************
struct Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorSkeletonNotifyObj_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorSkeletonNotifyObj_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUEditorSkeletonNotifyObj(); \
	friend struct ::Z_Construct_UClass_UEditorSkeletonNotifyObj_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorSkeletonNotifyObj_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorSkeletonNotifyObj, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorSkeletonNotifyObj_NoRegister) \
	DECLARE_SERIALIZER(UEditorSkeletonNotifyObj)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorSkeletonNotifyObj_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorSkeletonNotifyObj(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorSkeletonNotifyObj) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorSkeletonNotifyObj); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorSkeletonNotifyObj); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorSkeletonNotifyObj(UEditorSkeletonNotifyObj&&) = delete; \
	UEditorSkeletonNotifyObj(const UEditorSkeletonNotifyObj&) = delete; \
	UNREALED_API virtual ~UEditorSkeletonNotifyObj();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorSkeletonNotifyObj_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorSkeletonNotifyObj_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorSkeletonNotifyObj_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorSkeletonNotifyObj_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorSkeletonNotifyObj;

// ********** End Class UEditorSkeletonNotifyObj ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Animation_EditorSkeletonNotifyObj_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
