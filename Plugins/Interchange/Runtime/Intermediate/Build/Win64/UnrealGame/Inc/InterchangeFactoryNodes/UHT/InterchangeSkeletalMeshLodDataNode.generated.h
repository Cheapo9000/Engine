// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSkeletalMeshLodDataNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeSkeletalMeshLodDataNode_generated_h
#error "InterchangeSkeletalMeshLodDataNode.generated.h already included, missing '#pragma once' in InterchangeSkeletalMeshLodDataNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSkeletalMeshLodDataNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSkeletalMeshLodDataNode **************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveAllMeshes); \
	DECLARE_FUNCTION(execRemoveMeshUid); \
	DECLARE_FUNCTION(execAddMeshUid); \
	DECLARE_FUNCTION(execGetMeshUids); \
	DECLARE_FUNCTION(execGetMeshUidsCount); \
	DECLARE_FUNCTION(execSetCustomSkeletonUid); \
	DECLARE_FUNCTION(execGetCustomSkeletonUid);


struct Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkeletalMeshLodDataNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSkeletalMeshLodDataNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSkeletalMeshLodDataNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSkeletalMeshLodDataNode(UInterchangeSkeletalMeshLodDataNode&&) = delete; \
	UInterchangeSkeletalMeshLodDataNode(const UInterchangeSkeletalMeshLodDataNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeSkeletalMeshLodDataNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkeletalMeshLodDataNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSkeletalMeshLodDataNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeSkeletalMeshLodDataNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_26_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSkeletalMeshLodDataNode;

// ********** End Class UInterchangeSkeletalMeshLodDataNode ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
