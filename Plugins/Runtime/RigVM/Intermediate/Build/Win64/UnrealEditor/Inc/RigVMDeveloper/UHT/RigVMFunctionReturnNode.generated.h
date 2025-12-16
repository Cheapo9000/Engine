// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMFunctionReturnNode.h"

#ifdef RIGVMDEVELOPER_RigVMFunctionReturnNode_generated_h
#error "RigVMFunctionReturnNode.generated.h already included, missing '#pragma once' in RigVMFunctionReturnNode.h"
#endif
#define RIGVMDEVELOPER_RigVMFunctionReturnNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMFunctionReturnNode *************************************************
struct Z_Construct_UClass_URigVMFunctionReturnNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionReturnNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMFunctionReturnNode(); \
	friend struct ::Z_Construct_UClass_URigVMFunctionReturnNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMFunctionReturnNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMFunctionReturnNode, URigVMFunctionInterfaceNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMFunctionReturnNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMFunctionReturnNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMFunctionReturnNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMFunctionReturnNode(URigVMFunctionReturnNode&&) = delete; \
	URigVMFunctionReturnNode(const URigVMFunctionReturnNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMFunctionReturnNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMFunctionReturnNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMFunctionReturnNode) \
	RIGVMDEVELOPER_API virtual ~URigVMFunctionReturnNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMFunctionReturnNode;

// ********** End Class URigVMFunctionReturnNode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
