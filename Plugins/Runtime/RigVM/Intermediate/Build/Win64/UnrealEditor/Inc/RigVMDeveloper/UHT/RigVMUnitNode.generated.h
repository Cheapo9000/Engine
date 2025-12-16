// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMUnitNode.h"

#ifdef RIGVMDEVELOPER_RigVMUnitNode_generated_h
#error "RigVMUnitNode.generated.h already included, missing '#pragma once' in RigVMUnitNode.h"
#endif
#define RIGVMDEVELOPER_RigVMUnitNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMUnitNode ***********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStructDefaultValue); \
	DECLARE_FUNCTION(execGetMethodName);


struct Z_Construct_UClass_URigVMUnitNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMUnitNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMUnitNode(); \
	friend struct ::Z_Construct_UClass_URigVMUnitNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMUnitNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMUnitNode, URigVMTemplateNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMUnitNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMUnitNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMUnitNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMUnitNode(URigVMUnitNode&&) = delete; \
	URigVMUnitNode(const URigVMUnitNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMUnitNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMUnitNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMUnitNode) \
	RIGVMDEVELOPER_API virtual ~URigVMUnitNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMUnitNode;

// ********** End Class URigVMUnitNode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMUnitNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
