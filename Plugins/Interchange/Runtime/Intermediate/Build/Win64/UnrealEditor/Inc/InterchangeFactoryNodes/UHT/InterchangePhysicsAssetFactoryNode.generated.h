// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangePhysicsAssetFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangePhysicsAssetFactoryNode_generated_h
#error "InterchangePhysicsAssetFactoryNode.generated.h already included, missing '#pragma once' in InterchangePhysicsAssetFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangePhysicsAssetFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;

// ********** Begin Class UInterchangePhysicsAssetFactoryNode **************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomSkeletalMeshUid); \
	DECLARE_FUNCTION(execGetCustomSkeletalMeshUid); \
	DECLARE_FUNCTION(execInitializePhysicsAssetNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangePhysicsAssetFactoryNode, INTERCHANGEFACTORYNODES_API)


struct Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePhysicsAssetFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePhysicsAssetFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePhysicsAssetFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_20_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangePhysicsAssetFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePhysicsAssetFactoryNode(UInterchangePhysicsAssetFactoryNode&&) = delete; \
	UInterchangePhysicsAssetFactoryNode(const UInterchangePhysicsAssetFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangePhysicsAssetFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePhysicsAssetFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangePhysicsAssetFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangePhysicsAssetFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_17_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePhysicsAssetFactoryNode;

// ********** End Class UInterchangePhysicsAssetFactoryNode ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangePhysicsAssetFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
