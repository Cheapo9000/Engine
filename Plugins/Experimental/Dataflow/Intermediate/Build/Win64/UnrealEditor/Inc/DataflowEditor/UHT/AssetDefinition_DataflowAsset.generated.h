// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dataflow/AssetDefinition_DataflowAsset.h"

#ifdef DATAFLOWEDITOR_AssetDefinition_DataflowAsset_generated_h
#error "AssetDefinition_DataflowAsset.generated.h already included, missing '#pragma once' in AssetDefinition_DataflowAsset.h"
#endif
#define DATAFLOWEDITOR_AssetDefinition_DataflowAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDataflowNodeData *************************************************
struct Z_Construct_UScriptStruct_FDataflowNodeData_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowNodeData_Statics; \
	DATAFLOWEDITOR_API static class UScriptStruct* StaticStruct();


struct FDataflowNodeData;
// ********** End ScriptStruct FDataflowNodeData ***************************************************

// ********** Begin ScriptStruct FDataflowCommentNodeData ******************************************
struct Z_Construct_UScriptStruct_FDataflowCommentNodeData_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowCommentNodeData_Statics; \
	DATAFLOWEDITOR_API static class UScriptStruct* StaticStruct();


struct FDataflowCommentNodeData;
// ********** End ScriptStruct FDataflowCommentNodeData ********************************************

// ********** Begin ScriptStruct FDataflowConnectionData *******************************************
struct Z_Construct_UScriptStruct_FDataflowConnectionData_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowConnectionData_Statics; \
	DATAFLOWEDITOR_API static class UScriptStruct* StaticStruct();


struct FDataflowConnectionData;
// ********** End ScriptStruct FDataflowConnectionData *********************************************

// ********** Begin ScriptStruct FDataflowCopyPasteContent *****************************************
struct Z_Construct_UScriptStruct_FDataflowCopyPasteContent_Statics;
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_95_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataflowCopyPasteContent_Statics; \
	DATAFLOWEDITOR_API static class UScriptStruct* StaticStruct();


struct FDataflowCopyPasteContent;
// ********** End ScriptStruct FDataflowCopyPasteContent *******************************************

// ********** Begin Class UAssetDefinition_DataflowAsset *******************************************
struct Z_Construct_UClass_UAssetDefinition_DataflowAsset_Statics;
DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_DataflowAsset_NoRegister();

#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition_DataflowAsset(); \
	friend struct ::Z_Construct_UClass_UAssetDefinition_DataflowAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAFLOWEDITOR_API UClass* ::Z_Construct_UClass_UAssetDefinition_DataflowAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetDefinition_DataflowAsset, UAssetDefinitionDefault, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataflowEditor"), Z_Construct_UClass_UAssetDefinition_DataflowAsset_NoRegister) \
	DECLARE_SERIALIZER(UAssetDefinition_DataflowAsset)


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition_DataflowAsset(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetDefinition_DataflowAsset(UAssetDefinition_DataflowAsset&&) = delete; \
	UAssetDefinition_DataflowAsset(const UAssetDefinition_DataflowAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition_DataflowAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition_DataflowAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition_DataflowAsset) \
	NO_API virtual ~UAssetDefinition_DataflowAsset();


#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_108_PROLOG
#define FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetDefinition_DataflowAsset;

// ********** End Class UAssetDefinition_DataflowAsset *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_AssetDefinition_DataflowAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
