// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataLinkEdGraphSchema.h"

#ifdef DATALINKEDGRAPH_DataLinkEdGraphSchema_generated_h
#error "DataLinkEdGraphSchema.generated.h already included, missing '#pragma once' in DataLinkEdGraphSchema.h"
#endif
#define DATALINKEDGRAPH_DataLinkEdGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataLinkEdGraphSchema ***************************************************
struct Z_Construct_UClass_UDataLinkEdGraphSchema_Statics;
DATALINKEDGRAPH_API UClass* Z_Construct_UClass_UDataLinkEdGraphSchema_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraphSchema_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkEdGraphSchema(); \
	friend struct ::Z_Construct_UClass_UDataLinkEdGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINKEDGRAPH_API UClass* ::Z_Construct_UClass_UDataLinkEdGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkEdGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataLinkEdGraph"), Z_Construct_UClass_UDataLinkEdGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkEdGraphSchema)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraphSchema_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINKEDGRAPH_API UDataLinkEdGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkEdGraphSchema(UDataLinkEdGraphSchema&&) = delete; \
	UDataLinkEdGraphSchema(const UDataLinkEdGraphSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINKEDGRAPH_API, UDataLinkEdGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkEdGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkEdGraphSchema) \
	DATALINKEDGRAPH_API virtual ~UDataLinkEdGraphSchema();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraphSchema_h_8_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraphSchema_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraphSchema_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraphSchema_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkEdGraphSchema;

// ********** End Class UDataLinkEdGraphSchema *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLinkEdGraph_Public_DataLinkEdGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
