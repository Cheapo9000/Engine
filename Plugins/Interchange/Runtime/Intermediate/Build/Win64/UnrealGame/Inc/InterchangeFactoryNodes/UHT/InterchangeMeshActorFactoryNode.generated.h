// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshActorFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeMeshActorFactoryNode_generated_h
#error "InterchangeMeshActorFactoryNode.generated.h already included, missing '#pragma once' in InterchangeMeshActorFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeMeshActorFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeMeshActorFactoryNode *****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomAnimationAssetUidToPlay); \
	DECLARE_FUNCTION(execSetCustomAnimationAssetUidToPlay); \
	DECLARE_FUNCTION(execRemoveSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execSetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencies); \
	DECLARE_FUNCTION(execGetCustomInstancedAssetFactoryNodeUid); \
	DECLARE_FUNCTION(execSetCustomInstancedAssetFactoryNodeUid);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeMeshActorFactoryNode, INTERCHANGEFACTORYNODES_API)


struct Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMeshActorFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMeshActorFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMeshActorFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeMeshActorFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMeshActorFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_14_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMeshActorFactoryNode(UInterchangeMeshActorFactoryNode&&) = delete; \
	UInterchangeMeshActorFactoryNode(const UInterchangeMeshActorFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeMeshActorFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMeshActorFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMeshActorFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeMeshActorFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMeshActorFactoryNode;

// ********** End Class UInterchangeMeshActorFactoryNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshActorFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
