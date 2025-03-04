// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVSelectTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UVEDITORTOOLS_UVSelectTool_generated_h
#error "UVSelectTool.generated.h already included, missing '#pragma once' in UVSelectTool.h"
#endif
#define UVEDITORTOOLS_UVSelectTool_generated_h

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVSelectToolBuilder(); \
	friend struct Z_Construct_UClass_UUVSelectToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UUVSelectToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), NO_API) \
	DECLARE_SERIALIZER(UUVSelectToolBuilder)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVSelectToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVSelectToolBuilder(UUVSelectToolBuilder&&); \
	UUVSelectToolBuilder(const UUVSelectToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVSelectToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVSelectToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVSelectToolBuilder) \
	NO_API virtual ~UUVSelectToolBuilder();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_23_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITORTOOLS_API UClass* StaticClass<class UUVSelectToolBuilder>();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVSelectTool(); \
	friend struct Z_Construct_UClass_UUVSelectTool_Statics; \
public: \
	DECLARE_CLASS(UUVSelectTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), NO_API) \
	DECLARE_SERIALIZER(UUVSelectTool) \
	virtual UObject* _getUObject() const override { return const_cast<UUVSelectTool*>(this); }


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVSelectTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVSelectTool(UUVSelectTool&&); \
	UUVSelectTool(const UUVSelectTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVSelectTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVSelectTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVSelectTool) \
	NO_API virtual ~UUVSelectTool();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_42_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITORTOOLS_API UClass* StaticClass<class UUVSelectTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVSelectTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
