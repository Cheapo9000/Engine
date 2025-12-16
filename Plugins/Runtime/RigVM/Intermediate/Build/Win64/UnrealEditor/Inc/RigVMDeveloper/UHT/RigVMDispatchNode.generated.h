// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMDispatchNode.h"

#ifdef RIGVMDEVELOPER_RigVMDispatchNode_generated_h
#error "RigVMDispatchNode.generated.h already included, missing '#pragma once' in RigVMDispatchNode.h"
#endif
#define RIGVMDEVELOPER_RigVMDispatchNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMDispatchNode *******************************************************
struct Z_Construct_UClass_URigVMDispatchNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMDispatchNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMDispatchNode(); \
	friend struct ::Z_Construct_UClass_URigVMDispatchNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMDispatchNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMDispatchNode, URigVMTemplateNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMDispatchNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMDispatchNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMDispatchNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMDispatchNode(URigVMDispatchNode&&) = delete; \
	URigVMDispatchNode(const URigVMDispatchNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMDispatchNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMDispatchNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMDispatchNode) \
	RIGVMDEVELOPER_API virtual ~URigVMDispatchNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_31_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMDispatchNode;

// ********** End Class URigVMDispatchNode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
