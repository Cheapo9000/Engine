// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowBlueprintLibrary.h"

#ifdef DATAFLOWENGINE_DataflowBlueprintLibrary_generated_h
#error "DataflowBlueprintLibrary.generated.h already included, missing '#pragma once' in DataflowBlueprintLibrary.h"
#endif
#define DATAFLOWENGINE_DataflowBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataflow;
class UObject;

// ********** Begin Class UDataflowBlueprintLibrary ************************************************
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOverrideDataflowVariableObjectArray); \
	DECLARE_FUNCTION(execOverrideDataflowVariableObject); \
	DECLARE_FUNCTION(execOverrideDataflowVariableFloatArray); \
	DECLARE_FUNCTION(execOverrideDataflowVariableFloat); \
	DECLARE_FUNCTION(execOverrideDataflowVariableIntArray); \
	DECLARE_FUNCTION(execOverrideDataflowVariableInt); \
	DECLARE_FUNCTION(execOverrideDataflowVariableBoolArray); \
	DECLARE_FUNCTION(execOverrideDataflowVariableBool); \
	DECLARE_FUNCTION(execRegenerateAssetFromDataflow); \
	DECLARE_FUNCTION(execEvaluateTerminalNodeByName);


struct Z_Construct_UClass_UDataflowBlueprintLibrary_Statics;
DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowBlueprintLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UDataflowBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWENGINE_API UClass* ::Z_Construct_UClass_UDataflowBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEngine"), Z_Construct_UClass_UDataflowBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDataflowBlueprintLibrary)


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWENGINE_API UDataflowBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowBlueprintLibrary(UDataflowBlueprintLibrary&&) = delete; \
	UDataflowBlueprintLibrary(const UDataflowBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWENGINE_API, UDataflowBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowBlueprintLibrary) \
	DATAFLOWENGINE_API virtual ~UDataflowBlueprintLibrary();


#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_10_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowBlueprintLibrary;

// ********** End Class UDataflowBlueprintLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
