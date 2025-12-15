// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityObject.h"

#ifdef BLUTILITY_EditorUtilityObject_generated_h
#error "EditorUtilityObject.generated.h already included, missing '#pragma once' in EditorUtilityObject.h"
#endif
#define BLUTILITY_EditorUtilityObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorUtilityObject *****************************************************
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UEditorUtilityObject_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityObject_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityObject(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityObject, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityObject_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityObject) \
	virtual UObject* _getUObject() const override { return const_cast<UEditorUtilityObject*>(this); }


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityObject); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityObject(UEditorUtilityObject&&) = delete; \
	UEditorUtilityObject(const UEditorUtilityObject&) = delete; \
	BLUTILITY_API virtual ~UEditorUtilityObject();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_19_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_22_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityObject;

// ********** End Class UEditorUtilityObject *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
