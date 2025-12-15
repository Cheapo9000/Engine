// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityBlueprintFactory.h"

#ifdef BLUTILITY_EditorUtilityBlueprintFactory_generated_h
#error "EditorUtilityBlueprintFactory.generated.h already included, missing '#pragma once' in EditorUtilityBlueprintFactory.h"
#endif
#define BLUTILITY_EditorUtilityBlueprintFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorUtilityBlueprintFactory *******************************************
struct Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityBlueprintFactory_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityBlueprintFactory(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityBlueprintFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityBlueprintFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityBlueprintFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityBlueprintFactory_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityBlueprintFactory)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityBlueprintFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityBlueprintFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityBlueprintFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityBlueprintFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityBlueprintFactory(UEditorUtilityBlueprintFactory&&) = delete; \
	UEditorUtilityBlueprintFactory(const UEditorUtilityBlueprintFactory&) = delete; \
	BLUTILITY_API virtual ~UEditorUtilityBlueprintFactory();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_26_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_29_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityBlueprintFactory;

// ********** End Class UEditorUtilityBlueprintFactory *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityBlueprintFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
