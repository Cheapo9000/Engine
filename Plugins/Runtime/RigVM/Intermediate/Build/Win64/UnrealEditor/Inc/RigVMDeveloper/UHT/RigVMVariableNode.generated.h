// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMVariableNode.h"

#ifdef RIGVMDEVELOPER_RigVMVariableNode_generated_h
#error "RigVMVariableNode.generated.h already included, missing '#pragma once' in RigVMVariableNode.h"
#endif
#define RIGVMDEVELOPER_RigVMVariableNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FRigVMGraphVariableDescription;

// ********** Begin Class URigVMVariableNode *******************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVariableDescription); \
	DECLARE_FUNCTION(execGetDefaultValue); \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execIsInputArgument); \
	DECLARE_FUNCTION(execIsLocalVariable); \
	DECLARE_FUNCTION(execIsExternalVariable); \
	DECLARE_FUNCTION(execIsGetter); \
	DECLARE_FUNCTION(execGetVariableName);


struct Z_Construct_UClass_URigVMVariableNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMVariableNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMVariableNode(); \
	friend struct ::Z_Construct_UClass_URigVMVariableNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMVariableNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMVariableNode, URigVMNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMVariableNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMVariableNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMVariableNode(URigVMVariableNode&&) = delete; \
	URigVMVariableNode(const URigVMVariableNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMVariableNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMVariableNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMVariableNode) \
	RIGVMDEVELOPER_API virtual ~URigVMVariableNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMVariableNode;

// ********** End Class URigVMVariableNode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
