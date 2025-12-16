// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/Nodes/RigVMCommentNode.h"

#ifdef RIGVMDEVELOPER_RigVMCommentNode_generated_h
#error "RigVMCommentNode.generated.h already included, missing '#pragma once' in RigVMCommentNode.h"
#endif
#define RIGVMDEVELOPER_RigVMCommentNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMCommentNode ********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCommentColorBubble); \
	DECLARE_FUNCTION(execGetCommentBubbleVisible); \
	DECLARE_FUNCTION(execGetCommentFontSize); \
	DECLARE_FUNCTION(execGetCommentText);


struct Z_Construct_UClass_URigVMCommentNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMCommentNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMCommentNode(); \
	friend struct ::Z_Construct_UClass_URigVMCommentNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMCommentNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMCommentNode, URigVMNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMCommentNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMCommentNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMCommentNode(URigVMCommentNode&&) = delete; \
	URigVMCommentNode(const URigVMCommentNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMCommentNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMCommentNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMCommentNode) \
	RIGVMDEVELOPER_API virtual ~URigVMCommentNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMCommentNode;

// ********** End Class URigVMCommentNode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCommentNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
