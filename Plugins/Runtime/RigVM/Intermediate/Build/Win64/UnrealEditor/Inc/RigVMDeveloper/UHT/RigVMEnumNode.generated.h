// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMEnumNode.h"

#ifdef RIGVMDEVELOPER_RigVMEnumNode_generated_h
#error "RigVMEnumNode.generated.h already included, missing '#pragma once' in RigVMEnumNode.h"
#endif
#define RIGVMDEVELOPER_RigVMEnumNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
class UObject;

// ********** Begin Class URigVMEnumNode ***********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execGetEnum);


struct Z_Construct_UClass_URigVMEnumNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEnumNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMEnumNode(); \
	friend struct ::Z_Construct_UClass_URigVMEnumNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMEnumNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMEnumNode, URigVMNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMEnumNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMEnumNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMEnumNode(URigVMEnumNode&&) = delete; \
	URigVMEnumNode(const URigVMEnumNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMEnumNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEnumNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMEnumNode) \
	RIGVMDEVELOPER_API virtual ~URigVMEnumNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMEnumNode;

// ********** End Class URigVMEnumNode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
