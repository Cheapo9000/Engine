// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSceneComponentFactoryNodes.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeSceneComponentFactoryNodes_generated_h
#error "InterchangeSceneComponentFactoryNodes.generated.h already included, missing '#pragma once' in InterchangeSceneComponentFactoryNodes.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSceneComponentFactoryNodes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSceneComponentFactoryNode ************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomComponentVisibility); \
	DECLARE_FUNCTION(execGetCustomComponentVisibility); \
	DECLARE_FUNCTION(execSetCustomLocalTransform); \
	DECLARE_FUNCTION(execGetCustomLocalTransform); \
	DECLARE_FUNCTION(execGetComponentUids); \
	DECLARE_FUNCTION(execAddComponentUid);


struct Z_Construct_UClass_UInterchangeSceneComponentFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSceneComponentFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneComponentFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSceneComponentFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeSceneComponentFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSceneComponentFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeSceneComponentFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSceneComponentFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSceneComponentFactoryNode(UInterchangeSceneComponentFactoryNode&&) = delete; \
	UInterchangeSceneComponentFactoryNode(const UInterchangeSceneComponentFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeSceneComponentFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneComponentFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSceneComponentFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeSceneComponentFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSceneComponentFactoryNode;

// ********** End Class UInterchangeSceneComponentFactoryNode **************************************

// ********** Begin Class UInterchangeInstancedStaticMeshComponentFactoryNode **********************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomHierarchicalISM); \
	DECLARE_FUNCTION(execGetCustomHierarchicalISM); \
	DECLARE_FUNCTION(execSetCustomInstancedAssetUid); \
	DECLARE_FUNCTION(execGetCustomInstancedAssetUid); \
	DECLARE_FUNCTION(execGetInstanceTransforms); \
	DECLARE_FUNCTION(execAddInstanceTransforms); \
	DECLARE_FUNCTION(execAddInstanceTransform);


struct Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeInstancedStaticMeshComponentFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeInstancedStaticMeshComponentFactoryNode, UInterchangeSceneComponentFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeInstancedStaticMeshComponentFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeInstancedStaticMeshComponentFactoryNode(UInterchangeInstancedStaticMeshComponentFactoryNode&&) = delete; \
	UInterchangeInstancedStaticMeshComponentFactoryNode(const UInterchangeInstancedStaticMeshComponentFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeInstancedStaticMeshComponentFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeInstancedStaticMeshComponentFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeInstancedStaticMeshComponentFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeInstancedStaticMeshComponentFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_56_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeInstancedStaticMeshComponentFactoryNode;

// ********** End Class UInterchangeInstancedStaticMeshComponentFactoryNode ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneComponentFactoryNodes_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
