// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorConfigBase.h"

#ifdef EDITORCONFIG_EditorConfigBase_generated_h
#error "EditorConfigBase.generated.h already included, missing '#pragma once' in EditorConfigBase.h"
#endif
#define EDITORCONFIG_EditorConfigBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorConfigBase ********************************************************
struct Z_Construct_UClass_UEditorConfigBase_Statics;
EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase_NoRegister();

#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorConfigBase(); \
	friend struct ::Z_Construct_UClass_UEditorConfigBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend EDITORCONFIG_API UClass* ::Z_Construct_UClass_UEditorConfigBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorConfigBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorConfig"), Z_Construct_UClass_UEditorConfigBase_NoRegister) \
	DECLARE_SERIALIZER(UEditorConfigBase)


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EDITORCONFIG_API UEditorConfigBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorConfigBase(UEditorConfigBase&&) = delete; \
	UEditorConfigBase(const UEditorConfigBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EDITORCONFIG_API, UEditorConfigBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorConfigBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorConfigBase) \
	EDITORCONFIG_API virtual ~UEditorConfigBase();


#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_14_PROLOG
#define FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorConfigBase;

// ********** End Class UEditorConfigBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_EditorConfig_Public_EditorConfigBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
