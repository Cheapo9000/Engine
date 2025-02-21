// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorToolBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UVEDITORTOOLS_UVEditorToolBase_generated_h
#error "UVEditorToolBase.generated.h already included, missing '#pragma once' in UVEditorToolBase.h"
#endif
#define UVEDITORTOOLS_UVEditorToolBase_generated_h

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITORTOOLS_API UUVEditorGenericBuildableTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUVEditorGenericBuildableTool(UUVEditorGenericBuildableTool&&); \
	UUVEditorGenericBuildableTool(const UUVEditorGenericBuildableTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITORTOOLS_API, UUVEditorGenericBuildableTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorGenericBuildableTool); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorGenericBuildableTool) \
	UVEDITORTOOLS_API virtual ~UUVEditorGenericBuildableTool();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUVEditorGenericBuildableTool(); \
	friend struct Z_Construct_UClass_UUVEditorGenericBuildableTool_Statics; \
public: \
	DECLARE_CLASS(UUVEditorGenericBuildableTool, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UVEditorTools"), UVEDITORTOOLS_API) \
	DECLARE_SERIALIZER(UUVEditorGenericBuildableTool)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUVEditorGenericBuildableTool() {} \
public: \
	typedef UUVEditorGenericBuildableTool UClassType; \
	typedef IUVEditorGenericBuildableTool ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_14_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITORTOOLS_API UClass* StaticClass<class UUVEditorGenericBuildableTool>();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGenericUVEditorToolBuilder(); \
	friend struct Z_Construct_UClass_UGenericUVEditorToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UGenericUVEditorToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditorTools"), NO_API) \
	DECLARE_SERIALIZER(UGenericUVEditorToolBuilder)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericUVEditorToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGenericUVEditorToolBuilder(UGenericUVEditorToolBuilder&&); \
	UGenericUVEditorToolBuilder(const UGenericUVEditorToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericUVEditorToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericUVEditorToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericUVEditorToolBuilder) \
	NO_API virtual ~UGenericUVEditorToolBuilder();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_36_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UVEDITORTOOLS_API UClass* StaticClass<class UGenericUVEditorToolBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditorTools_Public_UVEditorToolBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
