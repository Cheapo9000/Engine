// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Animation/AnimBulkCurves.h"
#include "Animation/AnimNode_CustomProperty.h"
#include "Rigs/RigHierarchyPoseAdapter.h"
#include "Rigs/RigHierarchy.h"
#include "AnimNode_ControlRigBase.generated.h"

class UNodeMappingContainer;
class UControlRig;

/** Struct defining the settings to override when driving a control rig */
USTRUCT()
struct CONTROLRIG_API FControlRigIOSettings
{
	GENERATED_BODY()

	FControlRigIOSettings()
		: bUpdatePose(true)
		, bUpdateCurves(true)
	{}

	static FControlRigIOSettings MakeEnabled()
	{
		return FControlRigIOSettings();
	}

	static FControlRigIOSettings MakeDisabled()
	{
		FControlRigIOSettings Settings;
		Settings.bUpdatePose = Settings.bUpdateCurves = false;
		return Settings;
	}

	UPROPERTY()
	bool bUpdatePose;

	UPROPERTY()
	bool bUpdateCurves;
};

USTRUCT()
struct CONTROLRIG_API FControlRigAnimNodeEventName
{
	GENERATED_BODY()

	FControlRigAnimNodeEventName()
	: EventName(NAME_None)
	{}

	UPROPERTY(EditAnywhere, Category = Links)
	FName EventName;	
};

class CONTROLRIG_API FAnimNode_ControlRig_PoseAdapter : public FRigHierarchyPoseAdapter
{
public:

	FAnimNode_ControlRig_PoseAdapter()
	: bTransferInLocalSpace(true)
	, LastTopologyVersion(UINT32_MAX)
	, bRequiresResetPoseToInitial(true)
	, Hierarchy(nullptr)
	, bEnabled(true)
	{
	}
	
protected:

	virtual void PostLinked(URigHierarchy* InHierarchy) override;
	virtual void PreUnlinked(URigHierarchy* InHierarchy) override;

	void ConvertToLocalPose();
	void ConvertToGlobalPose();
	const FTransform& GetLocalTransform(int32 InIndex);
	const FTransform& GetGlobalTransform(int32 InIndex);
	
	void UpdateDirtyStates(const TOptional<bool> InLocalIsPrimary = TOptional<bool>());
	void ComputeDependentTransforms();
	void MarkDependentsDirty();
	
	void UnlinkTransformStorage();

	bool bTransferInLocalSpace;

	TArray<int32> ParentPoseIndices;
	TArray<bool> RequiresHierarchyForSpaceConversion;
	TArray<FTransform> LocalPose;
	TArray<FTransform> GlobalPose;
	TArray<bool> LocalPoseIsDirty;
	TArray<bool> GlobalPoseIsDirty;
	TArray<int32> PoseCurveToHierarchyCurve;
	TArray<bool> HierarchyCurveCopied;
	TMap<FName, int32> HierarchyCurveLookup;
	uint32 LastTopologyVersion;
	bool bRequiresResetPoseToInitial;
	TArray<int32> BonesToResetToInitial;

	TMap<uint16, uint16> ElementIndexToPoseIndex;
	TArray<int32> PoseIndexToElementIndex;

	struct FDependentTransform
	{
		FDependentTransform()
			: KeyAndIndex()
			, TransformType(ERigTransformType::InitialLocal)
			, StorageType(ERigTransformStorageType::Pose)
			, DirtyState(nullptr)
		{}
		
		FDependentTransform(const FRigElementKeyAndIndex& InKeyAndIndex, ERigTransformType::Type InTransformType, ERigTransformStorageType::Type InStorageType, FRigLocalAndGlobalDirtyState* InDirtyState)
			: KeyAndIndex(InKeyAndIndex)
			, TransformType(InTransformType)
			, StorageType(InStorageType)
			, DirtyState(InDirtyState)
		{}

		FRigElementKeyAndIndex KeyAndIndex;
		ERigTransformType::Type TransformType;
		ERigTransformStorageType::Type StorageType;
		FRigLocalAndGlobalDirtyState* DirtyState;
	};
	TArray<FDependentTransform> Dependents;

	URigHierarchy* Hierarchy;
	bool bEnabled;;

	friend struct FAnimNode_ControlRigBase;
};

/**
 * Animation node that allows animation ControlRig output to be used in an animation graph
 */
USTRUCT()
struct CONTROLRIG_API FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
	GENERATED_BODY()

	FAnimNode_ControlRigBase();

	/* return Control Rig of current object */
	virtual UControlRig* GetControlRig() const PURE_VIRTUAL(FAnimNode_ControlRigBase::GetControlRig, return nullptr; );
	virtual TSubclassOf<UControlRig> GetControlRigClass() const PURE_VIRTUAL(FAnimNode_ControlRigBase::GetControlRigClass, return nullptr; );
	
	// FAnimNode_Base interface
	virtual void OnInitializeAnimInstance(const FAnimInstanceProxy* InProxy, const UAnimInstance* InAnimInstance) override;
	virtual bool NeedsOnInitializeAnimInstance() const override { return true; }
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;

protected:

	void UpdateInputOutputMappingIfRequired(UControlRig* InControlRig, const FBoneContainer& RequiredBones); 

	UPROPERTY(EditAnywhere, Category = Links)
	FPoseLink Source;

	/**
	 * If this is checked the rig's pose needs to be reset to its initial
	 * prior to evaluating the rig.
	 */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = Settings)
	bool bResetInputPoseToInitial;

	/**
	 * If this is checked the bone pose coming from the AnimBP will be
	 * transferred into the Control Rig.
	 */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = Settings)
	bool bTransferInputPose;

	/**
	 * If this is checked the curves coming from the AnimBP will be
	 * transferred into the Control Rig.
	 */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = Settings)
	bool bTransferInputCurves;

	/**
	 * Transferring the pose in global space guarantees a global pose match,
	 * while transferring in local space ensures a match of the local transforms.
	 * In general transforms only differ if the hierarchy topology differs
	 * between the Control Rig and the skeleton used in the AnimBP.
	 * Note: Turning this off can potentially improve performance.
	 */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = Settings)
	bool bTransferPoseInGlobalSpace;

	/**
	 * An inclusive list of bones to transfer as part
	 * of the input pose transfer phase.
	 * If this list is empty all bones will be transferred.
	 */
	UPROPERTY()
	TArray<FBoneReference> InputBonesToTransfer;

	/**
	 * An inclusive list of bones to transfer as part
	 * of the output pose transfer phase.
	 * If this list is empty all bones will be transferred.
	 */
	UPROPERTY()
	TArray<FBoneReference> OutputBonesToTransfer;

	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = Settings)
	TArray<TObjectPtr<UAssetUserData>> AssetUserData;

	TMap<FName, int32> InputToControlIndex;
	
	/** Node Mapping Container */
	UPROPERTY(transient)
	TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer;

	UPROPERTY(transient)
	FControlRigIOSettings InputSettings;

	UPROPERTY(transient)
	FControlRigIOSettings OutputSettings;

	/** Complete mapping from skeleton to control rig bone index */
	TArray<TPair<uint16, uint16>> ControlRigBoneInputMappingByIndex;
	TArray<TPair<uint16, uint16>> ControlRigBoneOutputMappingByIndex;

	/** Complete mapping from skeleton to curve name */
	TArray<TPair<uint16, FName>> ControlRigCurveMappingByIndex;

	/** Rig Hierarchy bone name to required array index mapping */
	TMap<FName, uint16> ControlRigBoneInputMappingByName;
	TMap<FName, uint16> ControlRigBoneOutputMappingByName;

	/** Rig Curve name to Curve mapping */
	TMap<FName, FName> ControlRigCurveMappingByName;
	
	TSharedPtr<FAnimNode_ControlRig_PoseAdapter> PoseAdapter;

	UPROPERTY(transient)
	bool bExecute;

	// The below is alpha value support for control rig
	float InternalBlendAlpha;

	// The customized event queue to run
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = Settings)
	TArray<FControlRigAnimNodeEventName> EventQueue;

	bool bClearEventQueueRequired = false;

	virtual bool CanExecute();
	// update input/output to control rig
	virtual void UpdateInput(UControlRig* ControlRig, FPoseContext& InOutput);
	virtual void UpdateOutput(UControlRig* ControlRig, FPoseContext& InOutput);
	virtual UClass* GetTargetClass() const override;
	
	// execute control rig on the input pose and outputs the result
	void ExecuteControlRig(FPoseContext& InOutput);

	void QueueControlRigDrawInstructions(UControlRig* ControlRig, FAnimInstanceProxy* Proxy) const;

	TArray<TObjectPtr<UAssetUserData>> GetAssetUserData() const { return AssetUserData; }
	void UpdateGetAssetUserDataDelegate(UControlRig* InControlRig) const;

	bool bControlRigRequiresInitialization;
	bool bEnablePoseAdapter;
	uint16 LastBonesSerialNumberForCacheBones;
	TWeakObjectPtr<const UAnimInstance> WeakAnimInstanceObject;

	friend struct FControlRigSequencerAnimInstanceProxy;
	friend struct FControlRigLayerInstanceProxy;
};
template<>
struct TStructOpsTypeTraits<FAnimNode_ControlRigBase> : public TStructOpsTypeTraitsBase2<FAnimNode_ControlRigBase>
{
	enum
	{
		WithPureVirtual = true,
	};
};
