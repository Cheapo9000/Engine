// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSceneVariantSetsFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeSceneVariantSetsFactoryNode_generated_h
#error "InterchangeSceneVariantSetsFactoryNode.generated.h already included, missing '#pragma once' in InterchangeSceneVariantSetsFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSceneVariantSetsFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSceneVariantSetsFactoryNode **********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCustomVariantSetUid); \
	DECLARE_FUNCTION(execAddCustomVariantSetUid); \
	DECLARE_FUNCTION(execGetCustomVariantSetUid); \
	DECLARE_FUNCTION(execGetCustomVariantSetUids); \
	DECLARE_FUNCTION(execGetCustomVariantSetUidCount);


struct Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneVariantSetsFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSceneVariantSetsFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSceneVariantSetsFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSceneVariantSetsFactoryNode(UInterchangeSceneVariantSetsFactoryNode&&) = delete; \
	UInterchangeSceneVariantSetsFactoryNode(const UInterchangeSceneVariantSetsFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeSceneVariantSetsFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneVariantSetsFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSceneVariantSetsFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeSceneVariantSetsFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSceneVariantSetsFactoryNode;

// ********** End Class UInterchangeSceneVariantSetsFactoryNode ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
