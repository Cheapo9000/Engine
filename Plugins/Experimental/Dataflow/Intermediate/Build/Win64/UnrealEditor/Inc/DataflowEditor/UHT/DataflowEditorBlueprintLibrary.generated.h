// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/DataflowEditorBlueprintLibrary.h"

#ifdef DATAFLOWEDITOR_DataflowEditorBlueprintLibrary_generated_h
#error "DataflowEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in DataflowEditorBlueprintLibrary.h"
#endif
#define DATAFLOWEDITOR_DataflowEditorBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataflow;

// ********** Begin Class UDataflowEditorBlueprintLibrary ******************************************
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDataflowNodeProperty); \
	DECLARE_FUNCTION(execAddDataflowFromClipboardContent); \
	DECLARE_FUNCTION(execConnectDataflowNodes); \
	DECLARE_FUNCTION(execAddDataflowNode);


struct Z_Construct_UClass_UDataflowEditorBlueprintLibrary_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowEditorBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataflowEditorBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UDataflowEditorBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UDataflowEditorBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataflowEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UDataflowEditorBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDataflowEditorBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAFLOWEDITOR_API UDataflowEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataflowEditorBlueprintLibrary(UDataflowEditorBlueprintLibrary&&) = delete; \
	UDataflowEditorBlueprintLibrary(const UDataflowEditorBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAFLOWEDITOR_API, UDataflowEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataflowEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataflowEditorBlueprintLibrary) \
	DATAFLOWEDITOR_API virtual ~UDataflowEditorBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorBlueprintLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorBlueprintLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataflowEditorBlueprintLibrary;

// ********** End Class UDataflowEditorBlueprintLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowEditorBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
