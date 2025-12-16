// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkEdGraph.h"

#ifdef DATALINKEDGRAPH_DataLinkEdGraph_generated_h
#error "DataLinkEdGraph.generated.h already included, missing '#pragma once' in DataLinkEdGraph.h"
#endif
#define DATALINKEDGRAPH_DataLinkEdGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkEdGraph *********************************************************
struct Z_Construct_UClass_UDataLinkEdGraph_Statics;
DATALINKEDGRAPH_API UClass* Z_Construct_UClass_UDataLinkEdGraph_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraph_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkEdGraph(); \
	friend struct ::Z_Construct_UClass_UDataLinkEdGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKEDGRAPH_API UClass* ::Z_Construct_UClass_UDataLinkEdGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkEdGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkEdGraph"), Z_Construct_UClass_UDataLinkEdGraph_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkEdGraph)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraph_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkEdGraph(UDataLinkEdGraph&&) = delete; \
	UDataLinkEdGraph(const UDataLinkEdGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKEDGRAPH_API, UDataLinkEdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkEdGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLinkEdGraph) \
	DATALINKEDGRAPH_API virtual ~UDataLinkEdGraph();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraph_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraph_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraph_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraph_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkEdGraph;

// ********** End Class UDataLinkEdGraph ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
