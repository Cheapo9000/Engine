// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMFunctionEntryNode.h"

#ifdef RIGVMDEVELOPER_RigVMFunctionEntryNode_generated_h
#error "RigVMFunctionEntryNode.generated.h already included, missing '#pragma once' in RigVMFunctionEntryNode.h"
#endif
#define RIGVMDEVELOPER_RigVMFunctionEntryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMFunctionEntryNode **************************************************
struct Z_Construct_UClass_URigVMFunctionEntryNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionEntryNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionEntryNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMFunctionEntryNode(); \
	friend struct ::Z_Construct_UClass_URigVMFunctionEntryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMFunctionEntryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMFunctionEntryNode, URigVMFunctionInterfaceNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMFunctionEntryNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMFunctionEntryNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionEntryNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMFunctionEntryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMFunctionEntryNode(URigVMFunctionEntryNode&&) = delete; \
	URigVMFunctionEntryNode(const URigVMFunctionEntryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMFunctionEntryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMFunctionEntryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMFunctionEntryNode) \
	RIGVMDEVELOPER_API virtual ~URigVMFunctionEntryNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionEntryNode_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionEntryNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionEntryNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionEntryNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMFunctionEntryNode;

// ********** End Class URigVMFunctionEntryNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionEntryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
