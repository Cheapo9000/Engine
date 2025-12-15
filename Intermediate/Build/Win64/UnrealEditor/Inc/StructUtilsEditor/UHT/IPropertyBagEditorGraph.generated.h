// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPropertyBagEditorGraph.h"

#ifdef STRUCTUTILSEDITOR_IPropertyBagEditorGraph_generated_h
#error "IPropertyBagEditorGraph.generated.h already included, missing '#pragma once' in IPropertyBagEditorGraph.h"
#endif
#define STRUCTUTILSEDITOR_IPropertyBagEditorGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPropertyBagEdGraphDragAndDrop ***************************************
struct Z_Construct_UClass_UPropertyBagEdGraphDragAndDrop_Statics;
STRUCTUTILSEDITOR_API UClass* Z_Construct_UClass_UPropertyBagEdGraphDragAndDrop_NoRegister();

#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STRUCTUTILSEDITOR_API UPropertyBagEdGraphDragAndDrop(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyBagEdGraphDragAndDrop(UPropertyBagEdGraphDragAndDrop&&) = delete; \
	UPropertyBagEdGraphDragAndDrop(const UPropertyBagEdGraphDragAndDrop&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STRUCTUTILSEDITOR_API, UPropertyBagEdGraphDragAndDrop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBagEdGraphDragAndDrop); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBagEdGraphDragAndDrop) \
	virtual ~UPropertyBagEdGraphDragAndDrop() = default;


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPropertyBagEdGraphDragAndDrop(); \
	friend struct ::Z_Construct_UClass_UPropertyBagEdGraphDragAndDrop_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STRUCTUTILSEDITOR_API UClass* ::Z_Construct_UClass_UPropertyBagEdGraphDragAndDrop_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyBagEdGraphDragAndDrop, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StructUtilsEditor"), Z_Construct_UClass_UPropertyBagEdGraphDragAndDrop_NoRegister) \
	DECLARE_SERIALIZER(UPropertyBagEdGraphDragAndDrop)


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPropertyBagEdGraphDragAndDrop() {} \
public: \
	typedef UPropertyBagEdGraphDragAndDrop UClassType; \
	typedef IPropertyBagEdGraphDragAndDrop ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_29_PROLOG
#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyBagEdGraphDragAndDrop;

// ********** End Interface UPropertyBagEdGraphDragAndDrop *****************************************

// ********** Begin Interface UPropertyBagEdGraph **************************************************
struct Z_Construct_UClass_UPropertyBagEdGraph_Statics;
STRUCTUTILSEDITOR_API UClass* Z_Construct_UClass_UPropertyBagEdGraph_NoRegister();

#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STRUCTUTILSEDITOR_API UPropertyBagEdGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropertyBagEdGraph(UPropertyBagEdGraph&&) = delete; \
	UPropertyBagEdGraph(const UPropertyBagEdGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STRUCTUTILSEDITOR_API, UPropertyBagEdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyBagEdGraph); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyBagEdGraph) \
	virtual ~UPropertyBagEdGraph() = default;


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_63_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPropertyBagEdGraph(); \
	friend struct ::Z_Construct_UClass_UPropertyBagEdGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STRUCTUTILSEDITOR_API UClass* ::Z_Construct_UClass_UPropertyBagEdGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UPropertyBagEdGraph, UPropertyBagEdGraphDragAndDrop, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StructUtilsEditor"), Z_Construct_UClass_UPropertyBagEdGraph_NoRegister) \
	DECLARE_SERIALIZER(UPropertyBagEdGraph)


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_63_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_63_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_63_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_63_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPropertyBagEdGraph() {} \
public: \
	typedef UPropertyBagEdGraph UClassType; \
	typedef IPropertyBagEdGraph ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_60_PROLOG
#define FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h_63_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropertyBagEdGraph;

// ********** End Interface UPropertyBagEdGraph ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StructUtilsEditor_Public_IPropertyBagEditorGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
