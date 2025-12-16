// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLevelFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeLevelFactoryNode_generated_h
#error "InterchangeLevelFactoryNode.generated.h already included, missing '#pragma once' in InterchangeLevelFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeLevelFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeLevelFactoryNode *********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomCreateWorldPartitionLevel); \
	DECLARE_FUNCTION(execGetCustomCreateWorldPartitionLevel); \
	DECLARE_FUNCTION(execSetCustomShouldCreateLevel); \
	DECLARE_FUNCTION(execGetCustomShouldCreateLevel); \
	DECLARE_FUNCTION(execSetCustomSceneImportAssetFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomSceneImportAssetFactoryNodeUid); \
	DECLARE_FUNCTION(execRemoveCustomActorFactoryNodeUid); \
	DECLARE_FUNCTION(execAddCustomActorFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomActorFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomActorFactoryNodeUids); \
	DECLARE_FUNCTION(execGetCustomActorFactoryNodeUidCount);


struct Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLevelFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeLevelFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeLevelFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeLevelFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeLevelFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeLevelFactoryNode(UInterchangeLevelFactoryNode&&) = delete; \
	UInterchangeLevelFactoryNode(const UInterchangeLevelFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeLevelFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLevelFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLevelFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeLevelFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeLevelFactoryNode;

// ********** End Class UInterchangeLevelFactoryNode ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
