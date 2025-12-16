// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/Script/DataLinkScriptNode.h"

#ifdef DATALINK_DataLinkScriptNode_generated_h
#error "DataLinkScriptNode.generated.h already included, missing '#pragma once' in DataLinkScriptNode.h"
#endif
#define DATALINK_DataLinkScriptNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInstancedStruct;

// ********** Begin ScriptStruct FDataLinkScriptPin ************************************************
struct Z_Construct_UScriptStruct_FDataLinkScriptPin_Statics;
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDataLinkScriptPin_Statics; \
	DATALINK_API static class UScriptStruct* StaticStruct();


struct FDataLinkScriptPin;
// ********** End ScriptStruct FDataLinkScriptPin **************************************************

// ********** Begin Class UDataLinkScriptNode ******************************************************
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputData); \
	DECLARE_FUNCTION(execFail); \
	DECLARE_FUNCTION(execSucceed);


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_33_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataLinkScriptNode_Statics;
	struct Z_Construct_UFunction_UDataLinkScriptNode_SucceedWildcard_Statics; \
	struct Z_Construct_UFunction_UDataLinkScriptNode_GetInputDataWildcard_Statics; \
DATALINK_API UClass* Z_Construct_UClass_UDataLinkScriptNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLinkScriptNode(); \
	friend struct ::Z_Construct_UClass_UDataLinkScriptNode_Statics; \
	friend struct ::Z_Construct_UFunction_UDataLinkScriptNode_SucceedWildcard_Statics; \
	friend struct ::Z_Construct_UFunction_UDataLinkScriptNode_GetInputDataWildcard_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATALINK_API UClass* ::Z_Construct_UClass_UDataLinkScriptNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataLinkScriptNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataLink"), Z_Construct_UClass_UDataLinkScriptNode_NoRegister) \
	DECLARE_SERIALIZER(UDataLinkScriptNode)


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATALINK_API UDataLinkScriptNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataLinkScriptNode(UDataLinkScriptNode&&) = delete; \
	UDataLinkScriptNode(const UDataLinkScriptNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATALINK_API, UDataLinkScriptNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLinkScriptNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLinkScriptNode) \
	DATALINK_API virtual ~UDataLinkScriptNode();


#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_30_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataLinkScriptNode;

// ********** End Class UDataLinkScriptNode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DataLink_Source_DataLink_Public_Nodes_Script_DataLinkScriptNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
