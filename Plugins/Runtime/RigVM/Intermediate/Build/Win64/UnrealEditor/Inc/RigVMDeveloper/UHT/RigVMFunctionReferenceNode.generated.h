// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMFunctionReferenceNode.h"

#ifdef RIGVMDEVELOPER_RigVMFunctionReferenceNode_generated_h
#error "RigVMFunctionReferenceNode.generated.h already included, missing '#pragma once' in RigVMFunctionReferenceNode.h"
#endif
#define RIGVMDEVELOPER_RigVMFunctionReferenceNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRigVMGraphFunctionHeader;

// ********** Begin Class URigVMFunctionReferenceNode **********************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetReferencedFunctionHeader_ForBlueprint);


struct Z_Construct_UClass_URigVMFunctionReferenceNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionReferenceNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMFunctionReferenceNode(); \
	friend struct ::Z_Construct_UClass_URigVMFunctionReferenceNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMFunctionReferenceNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMFunctionReferenceNode, URigVMLibraryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMFunctionReferenceNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMFunctionReferenceNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMFunctionReferenceNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMFunctionReferenceNode(URigVMFunctionReferenceNode&&) = delete; \
	URigVMFunctionReferenceNode(const URigVMFunctionReferenceNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMFunctionReferenceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMFunctionReferenceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMFunctionReferenceNode) \
	RIGVMDEVELOPER_API virtual ~URigVMFunctionReferenceNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMFunctionReferenceNode;

// ********** End Class URigVMFunctionReferenceNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReferenceNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
