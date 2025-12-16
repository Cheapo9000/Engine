// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAnimSequenceFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeAnimSequenceFactoryNode_generated_h
#error "InterchangeAnimSequenceFactoryNode.generated.h already included, missing '#pragma once' in InterchangeAnimSequenceFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeAnimSequenceFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
struct FInterchangeAnimationPayLoadKey;
struct FSoftObjectPath;

// ********** Begin Class UInterchangeAnimSequenceFactoryNode **************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimationPayloadKeysForMorphTargetNodeUids); \
	DECLARE_FUNCTION(execGetMorphTargetNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execSetAnimationPayloadKeysForSceneNodeUids); \
	DECLARE_FUNCTION(execGetSceneNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execSetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execGetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingNonCurveCustomAttributes); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingNonCurveCustomAttributes); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingCustomAttributeCurves); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingCustomAttributeCurves); \
	DECLARE_FUNCTION(execRemoveAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execSetAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveNames); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveNamesCount); \
	DECLARE_FUNCTION(execRemoveAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execSetAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixes); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixesCount); \
	DECLARE_FUNCTION(execSetCustomMaterialDriveParameterOnCustomAttribute); \
	DECLARE_FUNCTION(execGetCustomMaterialDriveParameterOnCustomAttribute); \
	DECLARE_FUNCTION(execRemoveAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execSetAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveNames); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveNamesCount); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingMorphTargetCurves); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingMorphTargetCurves); \
	DECLARE_FUNCTION(execSetCustomRemoveCurveRedundantKeys); \
	DECLARE_FUNCTION(execGetCustomRemoveCurveRedundantKeys); \
	DECLARE_FUNCTION(execSetCustomAddCurveMetadataToSkeleton); \
	DECLARE_FUNCTION(execGetCustomAddCurveMetadataToSkeleton); \
	DECLARE_FUNCTION(execSetCustomDoNotImportCurveWithZero); \
	DECLARE_FUNCTION(execGetCustomDoNotImportCurveWithZero); \
	DECLARE_FUNCTION(execSetCustomImportAttributeCurves); \
	DECLARE_FUNCTION(execGetCustomImportAttributeCurves); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksRangeStop); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksRangeStop); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksRangeStart); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksRangeStart); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksSampleRate); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksSampleRate); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracks); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracks); \
	DECLARE_FUNCTION(execSetCustomSkeletonFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomSkeletonFactoryNodeUid); \
	DECLARE_FUNCTION(execInitializeAnimSequenceNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_38_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeAnimSequenceFactoryNode, INTERCHANGEFACTORYNODES_API)


struct Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimSequenceFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeAnimSequenceFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeAnimSequenceFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_38_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeAnimSequenceFactoryNode(UInterchangeAnimSequenceFactoryNode&&) = delete; \
	UInterchangeAnimSequenceFactoryNode(const UInterchangeAnimSequenceFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeAnimSequenceFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimSequenceFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimSequenceFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeAnimSequenceFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_35_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeAnimSequenceFactoryNode;

// ********** End Class UInterchangeAnimSequenceFactoryNode ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
