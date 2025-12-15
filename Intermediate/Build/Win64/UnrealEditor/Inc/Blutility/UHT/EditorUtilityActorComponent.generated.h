// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityActorComponent.h"

#ifdef BLUTILITY_EditorUtilityActorComponent_generated_h
#error "EditorUtilityActorComponent.generated.h already included, missing '#pragma once' in EditorUtilityActorComponent.h"
#endif
#define BLUTILITY_EditorUtilityActorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorUtilityActorComponent *********************************************
struct Z_Construct_UClass_UEditorUtilityActorComponent_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityActorComponent_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityActorComponent(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityActorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityActorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityActorComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityActorComponent_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityActorComponent)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityActorComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityActorComponent(UEditorUtilityActorComponent&&) = delete; \
	UEditorUtilityActorComponent(const UEditorUtilityActorComponent&) = delete; \
	BLUTILITY_API virtual ~UEditorUtilityActorComponent();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_18_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityActorComponent;

// ********** End Class UEditorUtilityActorComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
