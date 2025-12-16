// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMParameterNode.h"

#ifdef RIGVMDEVELOPER_RigVMParameterNode_generated_h
#error "RigVMParameterNode.generated.h already included, missing '#pragma once' in RigVMParameterNode.h"
#endif
#define RIGVMDEVELOPER_RigVMParameterNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FRigVMGraphParameterDescription;

// ********** Begin ScriptStruct FRigVMGraphParameterDescription ***********************************
struct Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMGraphParameterDescription;
// ********** End ScriptStruct FRigVMGraphParameterDescription *************************************

// ********** Begin Class URigVMParameterNode ******************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetParameterDescription); \
	DECLARE_FUNCTION(execGetDefaultValue); \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execIsInput); \
	DECLARE_FUNCTION(execGetParameterName);


struct Z_Construct_UClass_URigVMParameterNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMParameterNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMParameterNode(); \
	friend struct ::Z_Construct_UClass_URigVMParameterNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMParameterNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMParameterNode, URigVMNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMParameterNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMParameterNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_94_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMParameterNode(URigVMParameterNode&&) = delete; \
	URigVMParameterNode(const URigVMParameterNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMParameterNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMParameterNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMParameterNode) \
	RIGVMDEVELOPER_API virtual ~URigVMParameterNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_91_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMParameterNode;

// ********** End Class URigVMParameterNode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
