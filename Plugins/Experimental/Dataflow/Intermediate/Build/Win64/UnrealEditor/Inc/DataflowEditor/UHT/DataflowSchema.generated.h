// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowSchema.h"

#ifdef DATAFLOWEDITOR_DataflowSchema_generated_h
#error "DataflowSchema.generated.h already included, missing '#pragma once' in DataflowSchema.h"
#endif
#define DATAFLOWEDITOR_DataflowSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataflowSchema **********************************************************
struct Z_Construct_UClass_UDataflowSchema_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowSchema_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowSchema(); \
	friend struct ::Z_Construct_UClass_UDataflowSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowSchema_NoRegister) \
	DECLARE_SERIALIZER(UDataflowSchema)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowSchema(UDataflowSchema&&) = delete; \
	UDataflowSchema(const UDataflowSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowSchema); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataflowSchema) \
	DATAFLOWEDITOR_API virtual ~UDataflowSchema();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_20_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowSchema;

// ********** End Class UDataflowSchema ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
