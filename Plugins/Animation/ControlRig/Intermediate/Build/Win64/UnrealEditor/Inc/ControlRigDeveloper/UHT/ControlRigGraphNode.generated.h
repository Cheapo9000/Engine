// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/ControlRigGraphNode.h"

#ifdef CONTROLRIGDEVELOPER_ControlRigGraphNode_generated_h
#error "ControlRigGraphNode.generated.h already included, missing '#pragma once' in ControlRigGraphNode.h"
#endif
#define CONTROLRIGDEVELOPER_ControlRigGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigGraphNode *****************************************************
struct Z_Construct_UClass_UControlRigGraphNode_Statics;
CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraphNode_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigGraphNode(); \
	friend struct ::Z_Construct_UClass_UControlRigGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGDEVELOPER_API UClass* ::Z_Construct_UClass_UControlRigGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigGraphNode, URigVMEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigDeveloper"), Z_Construct_UClass_UControlRigGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UControlRigGraphNode)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigGraphNode(UControlRigGraphNode&&) = delete; \
	UControlRigGraphNode(const UControlRigGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGDEVELOPER_API, UControlRigGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigGraphNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigGraphNode) \
	CONTROLRIGDEVELOPER_API virtual ~UControlRigGraphNode();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_28_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigGraphNode;

// ********** End Class UControlRigGraphNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
