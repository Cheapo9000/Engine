// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowOutlinerFactory.h"

#ifdef DATAFLOWEDITOR_DataflowOutlinerFactory_generated_h
#error "DataflowOutlinerFactory.generated.h already included, missing '#pragma once' in DataflowOutlinerFactory.h"
#endif
#define DATAFLOWEDITOR_DataflowOutlinerFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowObjectFactory ***************************************************
struct Z_Construct_UClass_UDataflowObjectFactory_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowObjectFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowOutlinerFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowObjectFactory(); \
	friend struct ::Z_Construct_UClass_UDataflowObjectFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowObjectFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowObjectFactory, UEditorDataStorageFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowObjectFactory_NoRegister) \
	DECLARE_SERIALIZER(UDataflowObjectFactory)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowOutlinerFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataflowObjectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowObjectFactory(UDataflowObjectFactory&&) = delete; \
	UDataflowObjectFactory(const UDataflowObjectFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowObjectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowObjectFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowObjectFactory)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowOutlinerFactory_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowOutlinerFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowOutlinerFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowOutlinerFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowObjectFactory;

// ********** End Class UDataflowObjectFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Private_Dataflow_DataflowOutlinerFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
