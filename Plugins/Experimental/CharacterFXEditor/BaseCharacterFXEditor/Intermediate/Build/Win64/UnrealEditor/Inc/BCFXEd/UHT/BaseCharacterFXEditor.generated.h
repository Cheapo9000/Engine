// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseCharacterFXEditor.h"

#ifdef BASECHARACTERFXEDITOR_BaseCharacterFXEditor_generated_h
#error "BaseCharacterFXEditor.generated.h already included, missing '#pragma once' in BaseCharacterFXEditor.h"
#endif
#define BASECHARACTERFXEDITOR_BaseCharacterFXEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseCharacterFXEditor ***************************************************
struct Z_Construct_UClass_UBaseCharacterFXEditor_Statics;
BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditor_NoRegister();

#define FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCharacterFXEditor(); \
	friend struct ::Z_Construct_UClass_UBaseCharacterFXEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BASECHARACTERFXEDITOR_API UClass* ::Z_Construct_UClass_UBaseCharacterFXEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseCharacterFXEditor, UAssetEditor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BaseCharacterFXEditor"), Z_Construct_UClass_UBaseCharacterFXEditor_NoRegister) \
	DECLARE_SERIALIZER(UBaseCharacterFXEditor)


#define FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BASECHARACTERFXEDITOR_API UBaseCharacterFXEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseCharacterFXEditor(UBaseCharacterFXEditor&&) = delete; \
	UBaseCharacterFXEditor(const UBaseCharacterFXEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BASECHARACTERFXEDITOR_API, UBaseCharacterFXEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCharacterFXEditor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseCharacterFXEditor) \
	BASECHARACTERFXEDITOR_API virtual ~UBaseCharacterFXEditor();


#define FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseCharacterFXEditor;

// ********** End Class UBaseCharacterFXEditor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CharacterFXEditor_BaseCharacterFXEditor_Source_BaseCharacterFXEditor_Public_BaseCharacterFXEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
