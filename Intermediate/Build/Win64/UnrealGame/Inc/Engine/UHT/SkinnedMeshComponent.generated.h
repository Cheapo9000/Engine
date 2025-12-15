// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SkinnedMeshComponent.h"

#ifdef ENGINE_SkinnedMeshComponent_generated_h
#error "SkinnedMeshComponent.generated.h already included, missing '#pragma once' in SkinnedMeshComponent.h"
#endif
#define ENGINE_SkinnedMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshDeformer;
class UMeshDeformerInstance;
class UPhysicsAsset;
class USkeletalMesh;
class USkinnedAsset;
class USkinnedMeshComponent;
enum class ESkinWeightProfileLayer : uint8;
struct FLinearColor;
struct FSkelMeshSkinWeightInfo;

// ********** Begin ScriptStruct FSkelMeshSkinWeightInfo *******************************************
struct Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_162_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSkelMeshSkinWeightInfo;
// ********** End ScriptStruct FSkelMeshSkinWeightInfo *********************************************

// ********** Begin ScriptStruct FSkelMeshComponentLODInfo *****************************************
struct Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSkelMeshComponentLODInfo;
// ********** End ScriptStruct FSkelMeshComponentLODInfo *******************************************

// ********** Begin ScriptStruct FVertexOffsetUsage ************************************************
struct Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_212_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FVertexOffsetUsage;
// ********** End ScriptStruct FVertexOffsetUsage **************************************************

// ********** Begin ScriptStruct FMeshDeformerInstanceSet ******************************************
struct Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_238_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshDeformerInstanceSet_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMeshDeformerInstanceSet;
// ********** End ScriptStruct FMeshDeformerInstanceSet ********************************************

// ********** Begin Class USkinnedMeshComponent ****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetRenderStatic); \
	DECLARE_FUNCTION(execIsMaterialSectionShown); \
	DECLARE_FUNCTION(execShowAllMaterialSections); \
	DECLARE_FUNCTION(execShowMaterialSection); \
	DECLARE_FUNCTION(execIsBoneHiddenByName); \
	DECLARE_FUNCTION(execUnHideBoneByName); \
	DECLARE_FUNCTION(execHideBoneByName); \
	DECLARE_FUNCTION(execFindClosestBone_K2); \
	DECLARE_FUNCTION(execTransformFromBoneSpace); \
	DECLARE_FUNCTION(execTransformToBoneSpace); \
	DECLARE_FUNCTION(execGetRefPoseTransform); \
	DECLARE_FUNCTION(execGetRefPosePosition); \
	DECLARE_FUNCTION(execBoneIsChildOf); \
	DECLARE_FUNCTION(execSetLeaderPoseComponent); \
	DECLARE_FUNCTION(execGetPredictedLODLevel); \
	DECLARE_FUNCTION(execIsUsingSkinWeightProfile); \
	DECLARE_FUNCTION(execGetCurrentSkinWeightProfileLayerNames); \
	DECLARE_FUNCTION(execGetCurrentSkinWeightProfileName); \
	DECLARE_FUNCTION(execUnloadSkinWeightProfile); \
	DECLARE_FUNCTION(execClearAllSkinWeightProfiles); \
	DECLARE_FUNCTION(execClearSkinWeightProfile); \
	DECLARE_FUNCTION(execSetSkinWeightProfile); \
	DECLARE_FUNCTION(execClearSkinWeightOverride); \
	DECLARE_FUNCTION(execSetSkinWeightOverride); \
	DECLARE_FUNCTION(execClearVertexColorOverride); \
	DECLARE_FUNCTION(execSetVertexColorOverride_LinearColor); \
	DECLARE_FUNCTION(execGetBoneTransform); \
	DECLARE_FUNCTION(execGetTwistAndSwingAngleOfDeltaRotationFromRefPose); \
	DECLARE_FUNCTION(execGetDeltaTransformFromRefPose); \
	DECLARE_FUNCTION(execGetParentBone); \
	DECLARE_FUNCTION(execGetAlwaysUseMeshDeformer); \
	DECLARE_FUNCTION(execSetAlwaysUseMeshDeformer); \
	DECLARE_FUNCTION(execUnsetMeshDeformer); \
	DECLARE_FUNCTION(execSetMeshDeformer); \
	DECLARE_FUNCTION(execGetSkinnedAsset); \
	DECLARE_FUNCTION(execSetSkinnedAssetAndUpdate); \
	DECLARE_FUNCTION(execGetSkeletalMesh_DEPRECATED); \
	DECLARE_FUNCTION(execGetSocketBoneName); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execGetBoneIndex); \
	DECLARE_FUNCTION(execGetNumBones); \
	DECLARE_FUNCTION(execSetCapsuleIndirectShadowMinVisibility); \
	DECLARE_FUNCTION(execSetCastCapsuleIndirectShadow); \
	DECLARE_FUNCTION(execSetCastCapsuleDirectShadow); \
	DECLARE_FUNCTION(execGetForcedLOD); \
	DECLARE_FUNCTION(execSetForcedLOD); \
	DECLARE_FUNCTION(execOverrideMinLOD); \
	DECLARE_FUNCTION(execSetMinLOD); \
	DECLARE_FUNCTION(execGetNumLODs); \
	DECLARE_FUNCTION(execSetPhysicsAsset); \
	DECLARE_FUNCTION(execGetMeshDeformerInstance);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_ACCESSORS \
static void SetSkeletalMesh_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkinnedMeshComponent, ENGINE_API)


struct Z_Construct_UClass_USkinnedMeshComponent_Statics;
ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_INCLASS \
private: \
	static void StaticRegisterNativesUSkinnedMeshComponent(); \
	friend struct ::Z_Construct_UClass_USkinnedMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USkinnedMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USkinnedMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_USkinnedMeshComponent, TEXT("/Script/Engine"), Z_Construct_UClass_USkinnedMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(USkinnedMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkinnedMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkinnedMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkinnedMeshComponent) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkinnedMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USkinnedMeshComponent(USkinnedMeshComponent&&) = delete; \
	USkinnedMeshComponent(const USkinnedMeshComponent&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_256_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_259_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USkinnedMeshComponent;

// ********** End Class USkinnedMeshComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h

// ********** Begin Enum EBoneVisibilityStatus *****************************************************
#define FOREACH_ENUM_EBONEVISIBILITYSTATUS(op) \
	op(BVS_HiddenByParent) \
	op(BVS_Visible) \
	op(BVS_ExplicitlyHidden) 

enum EBoneVisibilityStatus : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoneVisibilityStatus>();
// ********** End Enum EBoneVisibilityStatus *******************************************************

// ********** Begin Enum EPhysBodyOp ***************************************************************
#define FOREACH_ENUM_EPHYSBODYOP(op) \
	op(PBO_None) \
	op(PBO_Term) 

enum EPhysBodyOp : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPhysBodyOp>();
// ********** End Enum EPhysBodyOp *****************************************************************

// ********** Begin Enum EVisibilityBasedAnimTickOption ********************************************
#define FOREACH_ENUM_EVISIBILITYBASEDANIMTICKOPTION(op) \
	op(EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones) \
	op(EVisibilityBasedAnimTickOption::AlwaysTickPose) \
	op(EVisibilityBasedAnimTickOption::OnlyTickMontagesAndRefreshBonesWhenPlayingMontages) \
	op(EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered) \
	op(EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered) 

enum class EVisibilityBasedAnimTickOption : uint8;
template<> struct TIsUEnumClass<EVisibilityBasedAnimTickOption> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EVisibilityBasedAnimTickOption>();
// ********** End Enum EVisibilityBasedAnimTickOption **********************************************

// ********** Begin Enum EBoneSpaces ***************************************************************
#define FOREACH_ENUM_EBONESPACES(op) \
	op(EBoneSpaces::WorldSpace) \
	op(EBoneSpaces::ComponentSpace) 

namespace EBoneSpaces { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EBoneSpaces::Type>();
// ********** End Enum EBoneSpaces *****************************************************************

// ********** Begin Enum ESkinWeightProfileLayer ***************************************************
#define FOREACH_ENUM_ESKINWEIGHTPROFILELAYER(op) \
	op(ESkinWeightProfileLayer::Primary) \
	op(ESkinWeightProfileLayer::Secondary) 

enum class ESkinWeightProfileLayer : uint8;
template<> struct TIsUEnumClass<ESkinWeightProfileLayer> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkinWeightProfileLayer>();
// ********** End Enum ESkinWeightProfileLayer *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
