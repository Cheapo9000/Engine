// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMAggregateNode.h"

#ifdef RIGVMDEVELOPER_RigVMAggregateNode_generated_h
#error "RigVMAggregateNode.generated.h already included, missing '#pragma once' in RigVMAggregateNode.h"
#endif
#define RIGVMDEVELOPER_RigVMAggregateNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMAggregateNode ******************************************************
struct Z_Construct_UClass_URigVMAggregateNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMAggregateNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMAggregateNode(); \
	friend struct ::Z_Construct_UClass_URigVMAggregateNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMAggregateNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMAggregateNode, URigVMCollapseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMAggregateNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMAggregateNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMAggregateNode(URigVMAggregateNode&&) = delete; \
	URigVMAggregateNode(const URigVMAggregateNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMAggregateNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMAggregateNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMAggregateNode) \
	RIGVMDEVELOPER_API virtual ~URigVMAggregateNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMAggregateNode;

// ********** End Class URigVMAggregateNode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
