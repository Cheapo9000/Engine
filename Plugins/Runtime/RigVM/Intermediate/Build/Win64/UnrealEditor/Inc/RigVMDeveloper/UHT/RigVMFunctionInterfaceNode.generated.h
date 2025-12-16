// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMFunctionInterfaceNode.h"

#ifdef RIGVMDEVELOPER_RigVMFunctionInterfaceNode_generated_h
#error "RigVMFunctionInterfaceNode.generated.h already included, missing '#pragma once' in RigVMFunctionInterfaceNode.h"
#endif
#define RIGVMDEVELOPER_RigVMFunctionInterfaceNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMFunctionInterfaceNode **********************************************
struct Z_Construct_UClass_URigVMFunctionInterfaceNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionInterfaceNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionInterfaceNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMFunctionInterfaceNode(); \
	friend struct ::Z_Construct_UClass_URigVMFunctionInterfaceNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMFunctionInterfaceNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMFunctionInterfaceNode, URigVMTemplateNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMFunctionInterfaceNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMFunctionInterfaceNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionInterfaceNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMFunctionInterfaceNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMFunctionInterfaceNode(URigVMFunctionInterfaceNode&&) = delete; \
	URigVMFunctionInterfaceNode(const URigVMFunctionInterfaceNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMFunctionInterfaceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMFunctionInterfaceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMFunctionInterfaceNode) \
	RIGVMDEVELOPER_API virtual ~URigVMFunctionInterfaceNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionInterfaceNode_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionInterfaceNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionInterfaceNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionInterfaceNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMFunctionInterfaceNode;

// ********** End Class URigVMFunctionInterfaceNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionInterfaceNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
