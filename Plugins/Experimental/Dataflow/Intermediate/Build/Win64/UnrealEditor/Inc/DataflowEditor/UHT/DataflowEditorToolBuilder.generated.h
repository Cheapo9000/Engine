// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataflowEditorTools/DataflowEditorToolBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATAFLOWEDITOR_DataflowEditorToolBuilder_generated_h
#error "DataflowEditorToolBuilder.generated.h already included, missing '#pragma once' in DataflowEditorToolBuilder.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorToolBuilder_generated_h

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWEDITOR_API UDataflowEditorToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataflowEditorToolBuilder(UDataflowEditorToolBuilder&&); \
	UDataflowEditorToolBuilder(const UDataflowEditorToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowEditorToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEditorToolBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowEditorToolBuilder) \
	DATAFLOWEDITOR_API virtual ~UDataflowEditorToolBuilder();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataflowEditorToolBuilder(); \
	friend struct Z_Construct_UClass_UDataflowEditorToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UDataflowEditorToolBuilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DataflowEditor"), DATAFLOWEDITOR_API) \
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


template<> DATAFLOWEDITOR_API UClass* StaticClass<class UDataflowEditorToolBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_DataflowEditorTools_DataflowEditorToolBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
