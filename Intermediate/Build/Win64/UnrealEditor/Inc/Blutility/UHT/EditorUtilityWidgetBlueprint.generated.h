// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityWidgetBlueprint.h"

#ifdef BLUTILITY_EditorUtilityWidgetBlueprint_generated_h
#error "EditorUtilityWidgetBlueprint.generated.h already included, missing '#pragma once' in EditorUtilityWidgetBlueprint.h"
#endif
#define BLUTILITY_EditorUtilityWidgetBlueprint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorUtilityWidgetBlueprint ********************************************
struct Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityWidgetBlueprint(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityWidgetBlueprint, UWidgetBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityWidgetBlueprint)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityWidgetBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityWidgetBlueprint(UEditorUtilityWidgetBlueprint&&) = delete; \
	UEditorUtilityWidgetBlueprint(const UEditorUtilityWidgetBlueprint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityWidgetBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityWidgetBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityWidgetBlueprint) \
	BLUTILITY_API virtual ~UEditorUtilityWidgetBlueprint();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_38_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityWidgetBlueprint;

// ********** End Class UEditorUtilityWidgetBlueprint **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
