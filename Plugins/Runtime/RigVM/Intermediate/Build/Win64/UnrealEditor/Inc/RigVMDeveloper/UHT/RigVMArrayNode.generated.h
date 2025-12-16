// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMArrayNode.h"

#ifdef RIGVMDEVELOPER_RigVMArrayNode_generated_h
#error "RigVMArrayNode.generated.h already included, missing '#pragma once' in RigVMArrayNode.h"
#endif
#define RIGVMDEVELOPER_RigVMArrayNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ERigVMOpCode : uint8;

// ********** Begin Class UDEPRECATED_RigVMArrayNode ***********************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCPPTypeObject); \
	DECLARE_FUNCTION(execGetCPPType); \
	DECLARE_FUNCTION(execGetOpCode);


struct Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_RigVMArrayNode(); \
	friend struct ::Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UDEPRECATED_RigVMArrayNode, URigVMTemplateNode, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_NoRegister) \
	DECLARE_SERIALIZER(UDEPRECATED_RigVMArrayNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDEPRECATED_RigVMArrayNode(UDEPRECATED_RigVMArrayNode&&) = delete; \
	UDEPRECATED_RigVMArrayNode(const UDEPRECATED_RigVMArrayNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, UDEPRECATED_RigVMArrayNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_RigVMArrayNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDEPRECATED_RigVMArrayNode) \
	RIGVMDEVELOPER_API virtual ~UDEPRECATED_RigVMArrayNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDEPRECATED_RigVMArrayNode;

// ********** End Class UDEPRECATED_RigVMArrayNode *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
