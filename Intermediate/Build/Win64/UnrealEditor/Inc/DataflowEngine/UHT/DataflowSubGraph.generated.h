// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSubGraph.h"

#ifdef DATAFLOWENGINE_DataflowSubGraph_generated_h
#error "DataflowSubGraph.generated.h already included, missing '#pragma once' in DataflowSubGraph.h"
#endif
#define DATAFLOWENGINE_DataflowSubGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowSubGraph ********************************************************
struct Z_Construct_UClass_UDataflowSubGraph_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowSubGraph_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowSubGraph_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUDataflowSubGraph(); \
	friend struct ::Z_Construct_UClass_UDataflowSubGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowSubGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowSubGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowSubGraph_NoRegister) \
	DECLARE_SERIALIZER(UDataflowSubGraph)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowSubGraph_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINE_API UDataflowSubGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowSubGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowSubGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSubGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowSubGraph(UDataflowSubGraph&&) = delete; \
	UDataflowSubGraph(const UDataflowSubGraph&) = delete; \
	DATAFLOWENGINE_API virtual ~UDataflowSubGraph();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowSubGraph_h_21_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowSubGraph_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowSubGraph_h_24_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowSubGraph_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowSubGraph;

// ********** End Class UDataflowSubGraph **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowSubGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
