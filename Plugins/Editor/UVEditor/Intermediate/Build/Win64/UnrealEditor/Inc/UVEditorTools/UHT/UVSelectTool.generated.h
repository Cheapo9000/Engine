// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVSelectTool.h"

#ifdef UVEDITORTOOLS_UVSelectTool_generated_h
#error "UVSelectTool.generated.h already included, missing '#pragma once' in UVSelectTool.h"
#endif
#define UVEDITORTOOLS_UVSelectTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVSelectToolBuilder *****************************************************
struct Z_Construct_UClass_UUVSelectToolBuilder_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSelectToolBuilder_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVSelectToolBuilder(); \
	friend struct ::Z_Construct_UClass_UUVSelectToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVSelectToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVSelectToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVSelectToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UUVSelectToolBuilder)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVSelectToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVSelectToolBuilder(UUVSelectToolBuilder&&) = delete; \
	UUVSelectToolBuilder(const UUVSelectToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVSelectToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVSelectToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVSelectToolBuilder) \
	UVEDITORTOOLS_API virtual ~UUVSelectToolBuilder();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_25_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVSelectToolBuilder;

// ********** End Class UUVSelectToolBuilder *******************************************************

// ********** Begin Class UUVSelectTool ************************************************************
struct Z_Construct_UClass_UUVSelectTool_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSelectTool_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVSelectTool(); \
	friend struct ::Z_Construct_UClass_UUVSelectTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVSelectTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVSelectTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVSelectTool_NoRegister) \
	DECLARE_SERIALIZER(UUVSelectTool) \
	virtual UObject* _getUObject() const override { return const_cast<UUVSelectTool*>(this); }


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVSelectTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVSelectTool(UUVSelectTool&&) = delete; \
	UUVSelectTool(const UUVSelectTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVSelectTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVSelectTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVSelectTool) \
	UVEDITORTOOLS_API virtual ~UUVSelectTool();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_44_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVSelectTool;

// ********** End Class UUVSelectTool **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
