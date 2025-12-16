// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/DataLinkEdNode.h"

#ifdef DATALINKEDGRAPH_DataLinkEdNode_generated_h
#error "DataLinkEdNode.generated.h already included, missing '#pragma once' in DataLinkEdNode.h"
#endif
#define DATALINKEDGRAPH_DataLinkEdNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkEdNode **********************************************************
struct Z_Construct_UClass_UDataLinkEdNode_Statics;
DATALINKEDGRAPH_API UClass* Z_Construct_UClass_UDataLinkEdNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Nodes_DataLinkEdNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkEdNode(); \
	friend struct ::Z_Construct_UClass_UDataLinkEdNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKEDGRAPH_API UClass* ::Z_Construct_UClass_UDataLinkEdNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkEdNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkEdGraph"), Z_Construct_UClass_UDataLinkEdNode_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkEdNode)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Nodes_DataLinkEdNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKEDGRAPH_API UDataLinkEdNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkEdNode(UDataLinkEdNode&&) = delete; \
	UDataLinkEdNode(const UDataLinkEdNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKEDGRAPH_API, UDataLinkEdNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkEdNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkEdNode) \
	DATALINKEDGRAPH_API virtual ~UDataLinkEdNode();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Nodes_DataLinkEdNode_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Nodes_DataLinkEdNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Nodes_DataLinkEdNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Nodes_DataLinkEdNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkEdNode;

// ********** End Class UDataLinkEdNode ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Nodes_DataLinkEdNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
