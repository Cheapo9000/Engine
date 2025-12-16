// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditor.h"

#ifdef UVEDITOR_UVEditor_generated_h
#error "UVEditor.generated.h already included, missing '#pragma once' in UVEditor.h"
#endif
#define UVEDITOR_UVEditor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVEditor ****************************************************************
struct Z_Construct_UClass_UUVEditor_Statics;
UVEDITOR_API UClass* Z_Construct_UClass_UUVEditor_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditor_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditor(); \
	friend struct ::Z_Construct_UClass_UUVEditor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITOR_API UClass* ::Z_Construct_UClass_UUVEditor_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditor, UAssetEditor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UVEditor"), Z_Construct_UClass_UUVEditor_NoRegister) \
	DECLARE_SERIALIZER(UUVEditor)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditor_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITOR_API UUVEditor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditor(UUVEditor&&) = delete; \
	UUVEditor(const UUVEditor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITOR_API, UUVEditor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVEditor) \
	UVEDITOR_API virtual ~UUVEditor();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditor_h_36_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditor_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditor_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditor_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditor;

// ********** End Class UUVEditor ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
