// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowEdNode.h"

#ifdef DATAFLOWENGINE_DataflowEdNode_generated_h
#error "DataflowEdNode.generated.h already included, missing '#pragma once' in DataflowEdNode.h"
#endif
#define DATAFLOWENGINE_DataflowEdNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowEdNode **********************************************************
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflowEdNode, DATAFLOWENGINE_API)


struct Z_Construct_UClass_UDataflowEdNode_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowEdNode_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUDataflowEdNode(); \
	friend struct ::Z_Construct_UClass_UDataflowEdNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowEdNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowEdNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowEdNode_NoRegister) \
	DECLARE_SERIALIZER(UDataflowEdNode) \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_28_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINE_API UDataflowEdNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowEdNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowEdNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEdNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowEdNode(UDataflowEdNode&&) = delete; \
	UDataflowEdNode(const UDataflowEdNode&) = delete;


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_25_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_28_INCLASS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowEdNode;

// ********** End Class UDataflowEdNode ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
