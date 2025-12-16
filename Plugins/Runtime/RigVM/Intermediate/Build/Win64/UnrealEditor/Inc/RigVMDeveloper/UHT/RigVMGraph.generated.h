// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMGraph.h"

#ifdef RIGVMDEVELOPER_RigVMGraph_generated_h
#error "RigVMGraph.generated.h already included, missing '#pragma once' in RigVMGraph.h"
#endif
#define RIGVMDEVELOPER_RigVMGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class URigVMFunctionEntryNode;
class URigVMFunctionLibrary;
class URigVMFunctionReturnNode;
class URigVMGraph;
class URigVMLink;
class URigVMNode;
class URigVMPin;
class URigVMSchema;
struct FRigVMGraphVariableDescription;

// ********** Begin Class URigVMGraph **************************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSchemaClass); \
	DECLARE_FUNCTION(execGetSchemaClass); \
	DECLARE_FUNCTION(execGetSchema); \
	DECLARE_FUNCTION(execGetOutputArguments); \
	DECLARE_FUNCTION(execGetInputArguments); \
	DECLARE_FUNCTION(execGetLocalVariables); \
	DECLARE_FUNCTION(execSetDefaultFunctionLibrary); \
	DECLARE_FUNCTION(execGetDefaultFunctionLibrary); \
	DECLARE_FUNCTION(execIsTopLevelGraph); \
	DECLARE_FUNCTION(execIsNodeHighlighted); \
	DECLARE_FUNCTION(execGetSelectNodes); \
	DECLARE_FUNCTION(execIsNodeSelected); \
	DECLARE_FUNCTION(execFindLink); \
	DECLARE_FUNCTION(execFindPin); \
	DECLARE_FUNCTION(execFindNode); \
	DECLARE_FUNCTION(execFindNodeByName); \
	DECLARE_FUNCTION(execGetGraphName); \
	DECLARE_FUNCTION(execGetNodePath); \
	DECLARE_FUNCTION(execGetVariableDescriptions); \
	DECLARE_FUNCTION(execGetEventNames); \
	DECLARE_FUNCTION(execGetReturnNode); \
	DECLARE_FUNCTION(execGetEntryNode); \
	DECLARE_FUNCTION(execIsRootGraph); \
	DECLARE_FUNCTION(execGetGraphDepth); \
	DECLARE_FUNCTION(execGetRootGraph); \
	DECLARE_FUNCTION(execGetParentGraph); \
	DECLARE_FUNCTION(execGetContainedGraphs); \
	DECLARE_FUNCTION(execContainsLink); \
	DECLARE_FUNCTION(execGetLinks); \
	DECLARE_FUNCTION(execGetNodes);


struct Z_Construct_UClass_URigVMGraph_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMGraph(); \
	friend struct ::Z_Construct_UClass_URigVMGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMGraph_NoRegister) \
	DECLARE_SERIALIZER(URigVMGraph)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMGraph(URigVMGraph&&) = delete; \
	URigVMGraph(const URigVMGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMGraph) \
	RIGVMDEVELOPER_API virtual ~URigVMGraph();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_30_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMGraph;

// ********** End Class URigVMGraph ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
