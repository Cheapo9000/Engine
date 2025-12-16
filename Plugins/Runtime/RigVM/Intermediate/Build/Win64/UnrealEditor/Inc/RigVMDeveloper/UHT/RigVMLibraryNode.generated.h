// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMLibraryNode.h"

#ifdef RIGVMDEVELOPER_RigVMLibraryNode_generated_h
#error "RigVMLibraryNode.generated.h already included, missing '#pragma once' in RigVMLibraryNode.h"
#endif
#define RIGVMDEVELOPER_RigVMLibraryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMFunctionLibrary;
class URigVMGraph;
struct FRigVMVariant;
struct FRigVMVariantRef;

// ********** Begin Class URigVMLibraryNode ********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMatchingVariants); \
	DECLARE_FUNCTION(execGetFunctionVariantRef); \
	DECLARE_FUNCTION(execGetFunctionVariant); \
	DECLARE_FUNCTION(execGetContainedGraph); \
	DECLARE_FUNCTION(execGetLibrary);


struct Z_Construct_UClass_URigVMLibraryNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMLibraryNode(); \
	friend struct ::Z_Construct_UClass_URigVMLibraryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMLibraryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMLibraryNode, URigVMTemplateNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMLibraryNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMLibraryNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMLibraryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMLibraryNode(URigVMLibraryNode&&) = delete; \
	URigVMLibraryNode(const URigVMLibraryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMLibraryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMLibraryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMLibraryNode) \
	RIGVMDEVELOPER_API virtual ~URigVMLibraryNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMLibraryNode;

// ********** End Class URigVMLibraryNode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
