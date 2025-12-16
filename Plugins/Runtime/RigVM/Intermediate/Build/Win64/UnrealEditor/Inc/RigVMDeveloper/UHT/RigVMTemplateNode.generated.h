// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMTemplateNode.h"

#ifdef RIGVMDEVELOPER_RigVMTemplateNode_generated_h
#error "RigVMTemplateNode.generated.h already included, missing '#pragma once' in RigVMTemplateNode.h"
#endif
#define RIGVMDEVELOPER_RigVMTemplateNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UScriptStruct;

// ********** Begin ScriptStruct FRigVMTemplatePreferredType ***************************************
struct Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMTemplatePreferredType;
// ********** End ScriptStruct FRigVMTemplatePreferredType *****************************************

// ********** Begin Class URigVMTemplateNode *******************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsFullyUnresolved); \
	DECLARE_FUNCTION(execIsResolved); \
	DECLARE_FUNCTION(execIsSingleton); \
	DECLARE_FUNCTION(execGetNotation); \
	DECLARE_FUNCTION(execGetScriptStruct);


struct Z_Construct_UClass_URigVMTemplateNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMTemplateNode(); \
	friend struct ::Z_Construct_UClass_URigVMTemplateNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMTemplateNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMTemplateNode, URigVMNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMTemplateNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMTemplateNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_75_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMTemplateNode(URigVMTemplateNode&&) = delete; \
	URigVMTemplateNode(const URigVMTemplateNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMTemplateNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMTemplateNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMTemplateNode) \
	RIGVMDEVELOPER_API virtual ~URigVMTemplateNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_72_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMTemplateNode;

// ********** End Class URigVMTemplateNode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
