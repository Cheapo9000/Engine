// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorRecomputeUVsTool.h"

#ifdef UVEDITORTOOLS_UVEditorRecomputeUVsTool_generated_h
#error "UVEditorRecomputeUVsTool.generated.h already included, missing '#pragma once' in UVEditorRecomputeUVsTool.h"
#endif
#define UVEDITORTOOLS_UVEditorRecomputeUVsTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVEditorRecomputeUVsToolBuilder *****************************************
struct Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorRecomputeUVsToolBuilder(); \
	friend struct ::Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorRecomputeUVsToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVEditorRecomputeUVsToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorRecomputeUVsToolBuilder)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVEditorRecomputeUVsToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorRecomputeUVsToolBuilder(UUVEditorRecomputeUVsToolBuilder&&) = delete; \
	UUVEditorRecomputeUVsToolBuilder(const UUVEditorRecomputeUVsToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVEditorRecomputeUVsToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorRecomputeUVsToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorRecomputeUVsToolBuilder) \
	UVEDITORTOOLS_API virtual ~UUVEditorRecomputeUVsToolBuilder();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_30_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorRecomputeUVsToolBuilder;

// ********** End Class UUVEditorRecomputeUVsToolBuilder *******************************************

// ********** Begin Class UUVEditorRecomputeUVsTool ************************************************
struct Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorRecomputeUVsTool_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorRecomputeUVsTool(); \
	friend struct ::Z_Construct_UClass_UUVEditorRecomputeUVsTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVEditorRecomputeUVsTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorRecomputeUVsTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVEditorRecomputeUVsTool_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorRecomputeUVsTool) \
	virtual UObject* _getUObject() const override { return const_cast<UUVEditorRecomputeUVsTool*>(this); }


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVEditorRecomputeUVsTool(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorRecomputeUVsTool(UUVEditorRecomputeUVsTool&&) = delete; \
	UUVEditorRecomputeUVsTool(const UUVEditorRecomputeUVsTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVEditorRecomputeUVsTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorRecomputeUVsTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUVEditorRecomputeUVsTool) \
	UVEDITORTOOLS_API virtual ~UUVEditorRecomputeUVsTool();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_48_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorRecomputeUVsTool;

// ********** End Class UUVEditorRecomputeUVsTool **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorRecomputeUVsTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
