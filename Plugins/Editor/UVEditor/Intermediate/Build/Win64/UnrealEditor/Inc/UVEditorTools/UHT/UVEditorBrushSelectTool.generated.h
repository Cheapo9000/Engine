// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorBrushSelectTool.h"

#ifdef UVEDITORTOOLS_UVEditorBrushSelectTool_generated_h
#error "UVEditorBrushSelectTool.generated.h already included, missing '#pragma once' in UVEditorBrushSelectTool.h"
#endif
#define UVEDITORTOOLS_UVEditorBrushSelectTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVEditorBrushSelectToolProperties ***************************************
struct Z_Construct_UClass_UUVEditorBrushSelectToolProperties_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorBrushSelectToolProperties_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorBrushSelectToolProperties(); \
	friend struct ::Z_Construct_UClass_UUVEditorBrushSelectToolProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVEditorBrushSelectToolProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorBrushSelectToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVEditorBrushSelectToolProperties_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorBrushSelectToolProperties)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVEditorBrushSelectToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorBrushSelectToolProperties(UUVEditorBrushSelectToolProperties&&) = delete; \
	UUVEditorBrushSelectToolProperties(const UUVEditorBrushSelectToolProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVEditorBrushSelectToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorBrushSelectToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorBrushSelectToolProperties) \
	NO_API virtual ~UUVEditorBrushSelectToolProperties();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_20_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorBrushSelectToolProperties;

// ********** End Class UUVEditorBrushSelectToolProperties *****************************************

// ********** Begin Class UUVEditorBrushSelectTool *************************************************
struct Z_Construct_UClass_UUVEditorBrushSelectTool_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorBrushSelectTool_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorBrushSelectTool(); \
	friend struct ::Z_Construct_UClass_UUVEditorBrushSelectTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVEditorBrushSelectTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorBrushSelectTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVEditorBrushSelectTool_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorBrushSelectTool) \
	virtual UObject* _getUObject() const override { return const_cast<UUVEditorBrushSelectTool*>(this); }


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVEditorBrushSelectTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorBrushSelectTool(UUVEditorBrushSelectTool&&) = delete; \
	UUVEditorBrushSelectTool(const UUVEditorBrushSelectTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVEditorBrushSelectTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorBrushSelectTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVEditorBrushSelectTool) \
	UVEDITORTOOLS_API virtual ~UUVEditorBrushSelectTool();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_58_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorBrushSelectTool;

// ********** End Class UUVEditorBrushSelectTool ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorBrushSelectTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
