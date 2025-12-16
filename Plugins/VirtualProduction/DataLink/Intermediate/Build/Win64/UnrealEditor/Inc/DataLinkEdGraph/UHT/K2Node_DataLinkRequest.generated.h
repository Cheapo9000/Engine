// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/K2Node_DataLinkRequest.h"

#ifdef DATALINKEDGRAPH_K2Node_DataLinkRequest_generated_h
#error "K2Node_DataLinkRequest.generated.h already included, missing '#pragma once' in K2Node_DataLinkRequest.h"
#endif
#define DATALINKEDGRAPH_K2Node_DataLinkRequest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_DataLinkRequest **************************************************
struct Z_Construct_UClass_UK2Node_DataLinkRequest_Statics;
DATALINKEDGRAPH_API UClass* Z_Construct_UClass_UK2Node_DataLinkRequest_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Blueprint_K2Node_DataLinkRequest_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK2Node_DataLinkRequest(); \
	friend struct ::Z_Construct_UClass_UK2Node_DataLinkRequest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKEDGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_DataLinkRequest_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_DataLinkRequest, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkEdGraph"), Z_Construct_UClass_UK2Node_DataLinkRequest_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_DataLinkRequest)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Blueprint_K2Node_DataLinkRequest_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKEDGRAPH_API UK2Node_DataLinkRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_DataLinkRequest(UK2Node_DataLinkRequest&&) = delete; \
	UK2Node_DataLinkRequest(const UK2Node_DataLinkRequest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKEDGRAPH_API, UK2Node_DataLinkRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_DataLinkRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_DataLinkRequest) \
	DATALINKEDGRAPH_API virtual ~UK2Node_DataLinkRequest();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Blueprint_K2Node_DataLinkRequest_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Blueprint_K2Node_DataLinkRequest_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Blueprint_K2Node_DataLinkRequest_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Blueprint_K2Node_DataLinkRequest_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_DataLinkRequest;

// ********** End Class UK2Node_DataLinkRequest ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_Blueprint_K2Node_DataLinkRequest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
