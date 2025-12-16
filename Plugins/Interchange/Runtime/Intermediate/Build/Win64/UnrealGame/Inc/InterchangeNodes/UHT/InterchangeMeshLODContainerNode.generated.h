// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshLODContainerNode.h"

#ifdef INTERCHANGENODES_InterchangeMeshLODContainerNode_generated_h
#error "InterchangeMeshLODContainerNode.generated.h already included, missing '#pragma once' in InterchangeMeshLODContainerNode.h"
#endif
#define INTERCHANGENODES_InterchangeMeshLODContainerNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeMeshLODContainerNode *****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshLODContainerNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetMeshLODNodeUids); \
	DECLARE_FUNCTION(execRemoveMeshLODNodeUid); \
	DECLARE_FUNCTION(execGetMeshLODNodeUids); \
	DECLARE_FUNCTION(execAddMeshLODNodeUid);


struct Z_Construct_UClass_UInterchangeMeshLODContainerNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMeshLODContainerNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshLODContainerNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMeshLODContainerNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMeshLODContainerNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeMeshLODContainerNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMeshLODContainerNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeMeshLODContainerNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMeshLODContainerNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshLODContainerNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMeshLODContainerNode(UInterchangeMeshLODContainerNode&&) = delete; \
	UInterchangeMeshLODContainerNode(const UInterchangeMeshLODContainerNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeMeshLODContainerNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMeshLODContainerNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMeshLODContainerNode) \
	INTERCHANGENODES_API virtual ~UInterchangeMeshLODContainerNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshLODContainerNode_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshLODContainerNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshLODContainerNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshLODContainerNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshLODContainerNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMeshLODContainerNode;

// ********** End Class UInterchangeMeshLODContainerNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshLODContainerNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
