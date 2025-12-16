// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSkeletonFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeSkeletonFactoryNode_generated_h
#error "InterchangeSkeletonFactoryNode.generated.h already included, missing '#pragma once' in InterchangeSkeletonFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSkeletonFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;

// ********** Begin Class UInterchangeSkeletonFactoryNode ******************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomSkeletalMeshFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomSkeletalMeshFactoryNodeUid); \
	DECLARE_FUNCTION(execSetCustomUseTimeZeroForBindPose); \
	DECLARE_FUNCTION(execGetCustomUseTimeZeroForBindPose); \
	DECLARE_FUNCTION(execSetCustomRootJointUid); \
	DECLARE_FUNCTION(execGetCustomRootJointUid); \
	DECLARE_FUNCTION(execInitializeSkeletonNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSkeletonFactoryNode, INTERCHANGEFACTORYNODES_API)


struct Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkeletonFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSkeletonFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSkeletonFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_19_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeSkeletonFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSkeletonFactoryNode(UInterchangeSkeletonFactoryNode&&) = delete; \
	UInterchangeSkeletonFactoryNode(const UInterchangeSkeletonFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeSkeletonFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkeletonFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSkeletonFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeSkeletonFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_16_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSkeletonFactoryNode;

// ********** End Class UInterchangeSkeletonFactoryNode ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
