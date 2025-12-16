// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSceneNode.h"

#ifdef INTERCHANGENODES_InterchangeSceneNode_generated_h
#error "InterchangeSceneNode.generated.h already included, missing '#pragma once' in InterchangeSceneNode.h"
#endif
#define INTERCHANGENODES_InterchangeSceneNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
enum class EInterchangeAnimationPayLoadType : uint8;

// ********** Begin Class UInterchangeSceneNode ****************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomIsSceneRoot); \
	DECLARE_FUNCTION(execSetCustomIsSceneRoot); \
	DECLARE_FUNCTION(execGetComponentUids); \
	DECLARE_FUNCTION(execAddComponentUid); \
	DECLARE_FUNCTION(execGetCustomGlobalMatrixForT0Rebinding); \
	DECLARE_FUNCTION(execSetCustomGlobalMatrixForT0Rebinding); \
	DECLARE_FUNCTION(execGetAnimationCurveTypeForCurveName); \
	DECLARE_FUNCTION(execSetAnimationCurveTypeForCurveName); \
	DECLARE_FUNCTION(execGetCustomHasBindPose); \
	DECLARE_FUNCTION(execSetCustomHasBindPose); \
	DECLARE_FUNCTION(execGetGlobalBindPoseReferenceForMeshUID); \
	DECLARE_FUNCTION(execSetGlobalBindPoseReferenceForMeshUIDs); \
	DECLARE_FUNCTION(execGetCustomAnimationAssetUidToPlay); \
	DECLARE_FUNCTION(execSetCustomAnimationAssetUidToPlay); \
	DECLARE_FUNCTION(execGetMorphTargetCurveWeights); \
	DECLARE_FUNCTION(execSetMorphTargetCurveWeight); \
	DECLARE_FUNCTION(execRemoveSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execSetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencies); \
	DECLARE_FUNCTION(execGetCustomTimeZeroGlobalTransform); \
	DECLARE_FUNCTION(execSetCustomTimeZeroLocalTransform); \
	DECLARE_FUNCTION(execGetCustomTimeZeroLocalTransform); \
	DECLARE_FUNCTION(execGetCustomBindPoseGlobalTransform); \
	DECLARE_FUNCTION(execSetCustomBindPoseLocalTransform); \
	DECLARE_FUNCTION(execGetCustomBindPoseLocalTransform); \
	DECLARE_FUNCTION(execSetCustomActorVisibility); \
	DECLARE_FUNCTION(execGetCustomActorVisibility); \
	DECLARE_FUNCTION(execSetCustomComponentVisibility); \
	DECLARE_FUNCTION(execGetCustomComponentVisibility); \
	DECLARE_FUNCTION(execSetCustomPivotNodeTransform); \
	DECLARE_FUNCTION(execGetCustomPivotNodeTransform); \
	DECLARE_FUNCTION(execSetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomGeometricTransform); \
	DECLARE_FUNCTION(execGetCustomGlobalTransform); \
	DECLARE_FUNCTION(execSetCustomLocalTransform); \
	DECLARE_FUNCTION(execGetCustomLocalTransform); \
	DECLARE_FUNCTION(execSetCustomAssetInstanceUid); \
	DECLARE_FUNCTION(execGetCustomAssetInstanceUid); \
	DECLARE_FUNCTION(execRemoveSpecializedType); \
	DECLARE_FUNCTION(execAddSpecializedType); \
	DECLARE_FUNCTION(execGetSpecializedTypes); \
	DECLARE_FUNCTION(execGetSpecializedType); \
	DECLARE_FUNCTION(execGetSpecializedTypeCount); \
	DECLARE_FUNCTION(execIsSpecializedTypeContains);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_47_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSceneNode, INTERCHANGENODES_API)


struct Z_Construct_UClass_UInterchangeSceneNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSceneNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeSceneNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSceneNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeSceneNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSceneNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_47_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSceneNode(UInterchangeSceneNode&&) = delete; \
	UInterchangeSceneNode(const UInterchangeSceneNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeSceneNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSceneNode) \
	INTERCHANGENODES_API virtual ~UInterchangeSceneNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_44_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSceneNode;

// ********** End Class UInterchangeSceneNode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
