// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataflowEditorTools/DataflowEditorToolBuilder.h"

#ifdef DATAFLOWEDITOR_DataflowEditorToolBuilder_generated_h
#error "DataflowEditorToolBuilder.generated.h already included, missing '#pragma once' in DataflowEditorToolBuilder.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorToolBuilder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDataflowEditorToolBuilder *******************************************
struct Z_Construct_UClass_UDataflowEditorToolBuilder_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowEditorToolBuilder_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWEDITOR_API UDataflowEditorToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowEditorToolBuilder(UDataflowEditorToolBuilder&&) = delete; \
	UDataflowEditorToolBuilder(const UDataflowEditorToolBuilder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowEditorToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEditorToolBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowEditorToolBuilder) \
	virtual ~UDataflowEditorToolBuilder() = default;


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowEditorToolBuilder(); \
	friend struct ::Z_Construct_UClass_UDataflowEditorToolBuilder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowEditorToolBuilder_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowEditorToolBuilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowEditorToolBuilder_NoRegister) \
	DECLARE_SERIALIZER(UDataflowEditorToolBuilder)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataflowEditorToolBuilder() {} \
public: \
	typedef UDataflowEditorToolBuilder UClassType; \
	typedef IDataflowEditorToolBuilder ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowEditorToolBuilder;

// ********** End Interface UDataflowEditorToolBuilder *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
