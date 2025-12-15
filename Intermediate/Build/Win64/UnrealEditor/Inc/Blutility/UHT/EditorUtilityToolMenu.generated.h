// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityToolMenu.h"

#ifdef BLUTILITY_EditorUtilityToolMenu_generated_h
#error "EditorUtilityToolMenu.generated.h already included, missing '#pragma once' in EditorUtilityToolMenu.h"
#endif
#define BLUTILITY_EditorUtilityToolMenu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorUtilityToolMenuEntry **********************************************
struct Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityToolMenuEntry_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityToolMenuEntry(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityToolMenuEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityToolMenuEntry, UToolMenuEntryScript, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityToolMenuEntry_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityToolMenuEntry) \
	virtual UObject* _getUObject() const override { return const_cast<UEditorUtilityToolMenuEntry*>(this); }


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityToolMenuEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityToolMenuEntry(UEditorUtilityToolMenuEntry&&) = delete; \
	UEditorUtilityToolMenuEntry(const UEditorUtilityToolMenuEntry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityToolMenuEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityToolMenuEntry); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityToolMenuEntry) \
	BLUTILITY_API virtual ~UEditorUtilityToolMenuEntry();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_13_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityToolMenuEntry;

// ********** End Class UEditorUtilityToolMenuEntry ************************************************

// ********** Begin Class UEditorUtilityToolMenuSection ********************************************
struct Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics;
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityToolMenuSection_NoRegister();

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityToolMenuSection(); \
	friend struct ::Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUTILITY_API UClass* ::Z_Construct_UClass_UEditorUtilityToolMenuSection_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorUtilityToolMenuSection, UToolMenuSectionDynamic, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), Z_Construct_UClass_UEditorUtilityToolMenuSection_NoRegister) \
	DECLARE_SERIALIZER(UEditorUtilityToolMenuSection) \
	virtual UObject* _getUObject() const override { return const_cast<UEditorUtilityToolMenuSection*>(this); }


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UEditorUtilityToolMenuSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorUtilityToolMenuSection(UEditorUtilityToolMenuSection&&) = delete; \
	UEditorUtilityToolMenuSection(const UEditorUtilityToolMenuSection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UEditorUtilityToolMenuSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityToolMenuSection); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityToolMenuSection) \
	BLUTILITY_API virtual ~UEditorUtilityToolMenuSection();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_31_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorUtilityToolMenuSection;

// ********** End Class UEditorUtilityToolMenuSection **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
