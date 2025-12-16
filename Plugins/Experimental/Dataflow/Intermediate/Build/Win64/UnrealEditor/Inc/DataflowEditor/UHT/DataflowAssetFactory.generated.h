// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowAssetFactory.h"

#ifdef DATAFLOWEDITOR_DataflowAssetFactory_generated_h
#error "DataflowAssetFactory.generated.h already included, missing '#pragma once' in DataflowAssetFactory.h"
#endif
#define DATAFLOWEDITOR_DataflowAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowAssetFactory ****************************************************
struct Z_Construct_UClass_UDataflowAssetFactory_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowAssetFactory_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowAssetFactory(); \
	friend struct ::Z_Construct_UClass_UDataflowAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UDataflowAssetFactory)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowAssetFactory(UDataflowAssetFactory&&) = delete; \
	UDataflowAssetFactory(const UDataflowAssetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataflowAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowAssetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowAssetFactory) \
	NO_API virtual ~UDataflowAssetFactory();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_9_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowAssetFactory;

// ********** End Class UDataflowAssetFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
