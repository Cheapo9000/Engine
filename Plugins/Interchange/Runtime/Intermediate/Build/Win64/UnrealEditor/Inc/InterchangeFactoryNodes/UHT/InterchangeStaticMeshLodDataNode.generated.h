// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeStaticMeshLodDataNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeStaticMeshLodDataNode_generated_h
#error "InterchangeStaticMeshLodDataNode.generated.h already included, missing '#pragma once' in InterchangeStaticMeshLodDataNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeStaticMeshLodDataNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeMeshCollision : uint8;

// ********** Begin Class UInterchangeStaticMeshLodDataNode ****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetImportCollision); \
	DECLARE_FUNCTION(execGetImportCollision); \
	DECLARE_FUNCTION(execSetForceCollisionPrimitiveGeneration); \
	DECLARE_FUNCTION(execGetForceCollisionPrimitiveGeneration); \
	DECLARE_FUNCTION(execSetImportCollisionType); \
	DECLARE_FUNCTION(execGetImportCollisionType); \
	DECLARE_FUNCTION(execSetOneConvexHullPerUCX); \
	DECLARE_FUNCTION(execGetOneConvexHullPerUCX); \
	DECLARE_FUNCTION(execRemoveAllConvexCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveConvexCollisionMeshUid); \
	DECLARE_FUNCTION(execAddConvexCollisionMeshUids); \
	DECLARE_FUNCTION(execAddConvexCollisionMeshUid); \
	DECLARE_FUNCTION(execGetConvexColliderRenderMeshUid); \
	DECLARE_FUNCTION(execGetConvexCollisionMeshUids); \
	DECLARE_FUNCTION(execGetConvexCollisionMeshMap); \
	DECLARE_FUNCTION(execGetConvexCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllSphereCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveSphereCollisionMeshUid); \
	DECLARE_FUNCTION(execAddSphereCollisionMeshUids); \
	DECLARE_FUNCTION(execAddSphereCollisionMeshUid); \
	DECLARE_FUNCTION(execGetSphereColliderRenderMeshUid); \
	DECLARE_FUNCTION(execGetSphereCollisionMeshUids); \
	DECLARE_FUNCTION(execGetSphereCollisionMeshMap); \
	DECLARE_FUNCTION(execGetSphereCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllCapsuleCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveCapsuleCollisionMeshUid); \
	DECLARE_FUNCTION(execAddCapsuleCollisionMeshUids); \
	DECLARE_FUNCTION(execAddCapsuleCollisionMeshUid); \
	DECLARE_FUNCTION(execGetCapsuleColliderRenderMeshUid); \
	DECLARE_FUNCTION(execGetCapsuleCollisionMeshUids); \
	DECLARE_FUNCTION(execGetCapsuleCollisionMeshMap); \
	DECLARE_FUNCTION(execGetCapsuleCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllBoxCollisionMeshes); \
	DECLARE_FUNCTION(execRemoveBoxCollisionMeshUid); \
	DECLARE_FUNCTION(execAddBoxCollisionMeshUids); \
	DECLARE_FUNCTION(execAddBoxCollisionMeshUid); \
	DECLARE_FUNCTION(execGetBoxColliderRenderMeshUid); \
	DECLARE_FUNCTION(execGetBoxCollisionMeshUids); \
	DECLARE_FUNCTION(execGetBoxCollisionMeshMap); \
	DECLARE_FUNCTION(execGetBoxCollisionMeshUidsCount); \
	DECLARE_FUNCTION(execRemoveAllMeshes); \
	DECLARE_FUNCTION(execRemoveMeshUid); \
	DECLARE_FUNCTION(execAddMeshUid); \
	DECLARE_FUNCTION(execGetMeshUids); \
	DECLARE_FUNCTION(execGetMeshUidsCount);


struct Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeStaticMeshLodDataNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeStaticMeshLodDataNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeStaticMeshLodDataNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeStaticMeshLodDataNode(UInterchangeStaticMeshLodDataNode&&) = delete; \
	UInterchangeStaticMeshLodDataNode(const UInterchangeStaticMeshLodDataNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeStaticMeshLodDataNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStaticMeshLodDataNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeStaticMeshLodDataNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeStaticMeshLodDataNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_31_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeStaticMeshLodDataNode;

// ********** End Class UInterchangeStaticMeshLodDataNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshLodDataNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
