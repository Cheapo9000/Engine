// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/InterchangeSourceNode.h"

#ifdef INTERCHANGECORE_InterchangeSourceNode_generated_h
#error "InterchangeSourceNode.generated.h already included, missing '#pragma once' in InterchangeSourceNode.h"
#endif
#define INTERCHANGECORE_InterchangeSourceNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
class UInterchangeSourceNode;

// ********** Begin Class UInterchangeSourceNode ***************************************************
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomAllowSceneRootAsJoint); \
	DECLARE_FUNCTION(execGetCustomAllowSceneRootAsJoint); \
	DECLARE_FUNCTION(execSetCustomNaniteTriangleThreshold); \
	DECLARE_FUNCTION(execGetCustomNaniteTriangleThreshold); \
	DECLARE_FUNCTION(execSetCustomSkeletalMeshFrontAxis); \
	DECLARE_FUNCTION(execGetCustomSkeletalMeshFrontAxis); \
	DECLARE_FUNCTION(execSetCustomReimportStrategyFlags); \
	DECLARE_FUNCTION(execGetCustomReimportStrategyFlags); \
	DECLARE_FUNCTION(execSetCustomUseAssetTypeSubPathSuffix); \
	DECLARE_FUNCTION(execGetCustomUseAssetTypeSubPathSuffix); \
	DECLARE_FUNCTION(execSetCustomSubPathPrefix); \
	DECLARE_FUNCTION(execGetCustomSubPathPrefix); \
	DECLARE_FUNCTION(execSetCustomUseLegacySkeletalMeshBakeTransform); \
	DECLARE_FUNCTION(execGetCustomUseLegacySkeletalMeshBakeTransform); \
	DECLARE_FUNCTION(execSetCustomAxisConversionInverseTransform); \
	DECLARE_FUNCTION(execGetCustomAxisConversionInverseTransform); \
	DECLARE_FUNCTION(execGetExtraInformation); \
	DECLARE_FUNCTION(execRemoveExtraInformation); \
	DECLARE_FUNCTION(execSetExtraInformation); \
	DECLARE_FUNCTION(execSetCustomImportUnusedMaterial); \
	DECLARE_FUNCTION(execGetCustomImportUnusedMaterial); \
	DECLARE_FUNCTION(execSetCustomAnimatedTimeEnd); \
	DECLARE_FUNCTION(execGetCustomAnimatedTimeEnd); \
	DECLARE_FUNCTION(execSetCustomAnimatedTimeStart); \
	DECLARE_FUNCTION(execGetCustomAnimatedTimeStart); \
	DECLARE_FUNCTION(execSetCustomSourceTimelineEnd); \
	DECLARE_FUNCTION(execGetCustomSourceTimelineEnd); \
	DECLARE_FUNCTION(execSetCustomSourceTimelineStart); \
	DECLARE_FUNCTION(execGetCustomSourceTimelineStart); \
	DECLARE_FUNCTION(execSetCustomSourceFrameRateDenominator); \
	DECLARE_FUNCTION(execGetCustomSourceFrameRateDenominator); \
	DECLARE_FUNCTION(execSetCustomSourceFrameRateNumerator); \
	DECLARE_FUNCTION(execGetCustomSourceFrameRateNumerator); \
	DECLARE_FUNCTION(execGetUniqueInstance); \
	DECLARE_FUNCTION(execInitializeSourceNode);


struct Z_Construct_UClass_UInterchangeSourceNode_Statics;
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceNode_NoRegister();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSourceNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSourceNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGECORE_API UClass* ::Z_Construct_UClass_UInterchangeSourceNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSourceNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), Z_Construct_UClass_UInterchangeSourceNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSourceNode)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSourceNode(UInterchangeSourceNode&&) = delete; \
	UInterchangeSourceNode(const UInterchangeSourceNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeSourceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSourceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSourceNode) \
	INTERCHANGECORE_API virtual ~UInterchangeSourceNode();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_31_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSourceNode;

// ********** End Class UInterchangeSourceNode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
