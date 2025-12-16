// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSceneComponentNodes.h"

#ifdef INTERCHANGENODES_InterchangeSceneComponentNodes_generated_h
#error "InterchangeSceneComponentNodes.generated.h already included, missing '#pragma once' in InterchangeSceneComponentNodes.h"
#endif
#define INTERCHANGENODES_InterchangeSceneComponentNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
class UInterchangeSceneNode;

// ********** Begin Class UInterchangeSceneComponentNode *******************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetParentSceneNodeAndTransform); \
	DECLARE_FUNCTION(execSetCustomComponentVisibility); \
	DECLARE_FUNCTION(execGetCustomComponentVisibility); \
	DECLARE_FUNCTION(execSetCustomLocalTransform); \
	DECLARE_FUNCTION(execGetCustomLocalTransform); \
	DECLARE_FUNCTION(execGetComponentUids); \
	DECLARE_FUNCTION(execAddComponentUid);


struct Z_Construct_UClass_UInterchangeSceneComponentNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneComponentNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneComponentNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSceneComponentNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeSceneComponentNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSceneComponentNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeSceneComponentNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSceneComponentNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSceneComponentNode(UInterchangeSceneComponentNode&&) = delete; \
	UInterchangeSceneComponentNode(const UInterchangeSceneComponentNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeSceneComponentNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneComponentNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSceneComponentNode) \
	INTERCHANGENODES_API virtual ~UInterchangeSceneComponentNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSceneComponentNode;

// ********** End Class UInterchangeSceneComponentNode *********************************************

// ********** Begin Class UInterchangeInstancedStaticMeshComponentNode *****************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomInstancedAssetUid); \
	DECLARE_FUNCTION(execGetCustomInstancedAssetUid); \
	DECLARE_FUNCTION(execGetInstanceTransforms); \
	DECLARE_FUNCTION(execAddInstanceTransforms); \
	DECLARE_FUNCTION(execAddInstanceTransform);


struct Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeInstancedStaticMeshComponentNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeInstancedStaticMeshComponentNode, UInterchangeSceneComponentNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeInstancedStaticMeshComponentNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_72_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeInstancedStaticMeshComponentNode(UInterchangeInstancedStaticMeshComponentNode&&) = delete; \
	UInterchangeInstancedStaticMeshComponentNode(const UInterchangeInstancedStaticMeshComponentNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeInstancedStaticMeshComponentNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeInstancedStaticMeshComponentNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeInstancedStaticMeshComponentNode) \
	INTERCHANGENODES_API virtual ~UInterchangeInstancedStaticMeshComponentNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_69_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeInstancedStaticMeshComponentNode;

// ********** End Class UInterchangeInstancedStaticMeshComponentNode *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneComponentNodes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
