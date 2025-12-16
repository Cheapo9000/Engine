// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorToolBase.h"

#ifdef UVEDITORTOOLS_UVEditorToolBase_generated_h
#error "UVEditorToolBase.generated.h already included, missing '#pragma once' in UVEditorToolBase.h"
#endif
#define UVEDITORTOOLS_UVEditorToolBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UUVEditorGenericBuildableTool ****************************************
struct Z_Construct_UClass_UUVEditorGenericBuildableTool_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorGenericBuildableTool_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVEditorGenericBuildableTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorGenericBuildableTool(UUVEditorGenericBuildableTool&&) = delete; \
	UUVEditorGenericBuildableTool(const UUVEditorGenericBuildableTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVEditorGenericBuildableTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorGenericBuildableTool); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorGenericBuildableTool) \
	virtual ~UUVEditorGenericBuildableTool() = default;


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUVEditorGenericBuildableTool(); \
	friend struct ::Z_Construct_UClass_UUVEditorGenericBuildableTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UUVEditorGenericBuildableTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorGenericBuildableTool, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UUVEditorGenericBuildableTool_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorGenericBuildableTool)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUVEditorGenericBuildableTool() {} \
public: \
	typedef UUVEditorGenericBuildableTool UClassType; \
	typedef IUVEditorGenericBuildableTool ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_16_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorGenericBuildableTool;

// ********** End Interface UUVEditorGenericBuildableTool ******************************************

// ********** Begin Class UGenericUVEditorToolBuilder **********************************************
struct Z_Construct_UClass_UGenericUVEditorToolBuilder_Statics;
UVEDITORTOOLS_API UClass* Z_Construct_UClass_UGenericUVEditorToolBuilder_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenericUVEditorToolBuilder(); \
	friend struct ::Z_Construct_UClass_UGenericUVEditorToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITORTOOLS_API UClass* ::Z_Construct_UClass_UGenericUVEditorToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UGenericUVEditorToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), Z_Construct_UClass_UGenericUVEditorToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UGenericUVEditorToolBuilder)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UGenericUVEditorToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGenericUVEditorToolBuilder(UGenericUVEditorToolBuilder&&) = delete; \
	UGenericUVEditorToolBuilder(const UGenericUVEditorToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UGenericUVEditorToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericUVEditorToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericUVEditorToolBuilder) \
	UVEDITORTOOLS_API virtual ~UGenericUVEditorToolBuilder();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_38_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGenericUVEditorToolBuilder;

// ********** End Class UGenericUVEditorToolBuilder ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
