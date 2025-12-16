// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeCommonPipelineDataFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeCommonPipelineDataFactoryNode_generated_h
#error "InterchangeCommonPipelineDataFactoryNode.generated.h already included, missing '#pragma once' in InterchangeCommonPipelineDataFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeCommonPipelineDataFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;

// ********** Begin Class UInterchangeCommonPipelineDataFactoryNode ********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBakePivotMeshes); \
	DECLARE_FUNCTION(execGetBakePivotMeshes); \
	DECLARE_FUNCTION(execSetBakeMeshes); \
	DECLARE_FUNCTION(execGetBakeMeshes); \
	DECLARE_FUNCTION(execSetCustomGlobalOffsetTransform); \
	DECLARE_FUNCTION(execGetCustomGlobalOffsetTransform);


struct Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeCommonPipelineDataFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeCommonPipelineDataFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeCommonPipelineDataFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeCommonPipelineDataFactoryNode(UInterchangeCommonPipelineDataFactoryNode&&) = delete; \
	UInterchangeCommonPipelineDataFactoryNode(const UInterchangeCommonPipelineDataFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeCommonPipelineDataFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeCommonPipelineDataFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeCommonPipelineDataFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeCommonPipelineDataFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_15_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeCommonPipelineDataFactoryNode;

// ********** End Class UInterchangeCommonPipelineDataFactoryNode **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
