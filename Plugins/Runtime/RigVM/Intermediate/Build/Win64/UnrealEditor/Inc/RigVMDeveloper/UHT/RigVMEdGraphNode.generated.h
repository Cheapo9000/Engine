// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/RigVMEdGraphNode.h"

#ifdef RIGVMDEVELOPER_RigVMEdGraphNode_generated_h
#error "RigVMEdGraphNode.generated.h already included, missing '#pragma once' in RigVMEdGraphNode.h"
#endif
#define RIGVMDEVELOPER_RigVMEdGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigVMEdGraphNode ********************************************************
struct Z_Construct_UClass_URigVMEdGraphNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEdGraphNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMEdGraphNode(); \
	friend struct ::Z_Construct_UClass_URigVMEdGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMEdGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMEdGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMEdGraphNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMEdGraphNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMEdGraphNode(URigVMEdGraphNode&&) = delete; \
	URigVMEdGraphNode(const URigVMEdGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMEdGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMEdGraphNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMEdGraphNode) \
	RIGVMDEVELOPER_API virtual ~URigVMEdGraphNode();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMEdGraphNode;

// ********** End Class URigVMEdGraphNode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_EdGraph_RigVMEdGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
