// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_GenerateCharacterMovementComponentTrajectory.h"

#ifdef UAFPOSESEARCH_RigUnit_GenerateCharacterMovementComponentTrajectory_generated_h
#error "RigUnit_GenerateCharacterMovementComponentTrajectory.generated.h already included, missing '#pragma once' in RigUnit_GenerateCharacterMovementComponentTrajectory.h"
#endif
#define UAFPOSESEARCH_RigUnit_GenerateCharacterMovementComponentTrajectory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GenerateCharacterMovementComponentTrajectory *************
struct Z_Construct_UScriptStruct_FRigUnit_GenerateCharacterMovementComponentTrajectory_Statics;

#define FRigUnit_GenerateCharacterMovementComponentTrajectory_Execute() \
	void FRigUnit_GenerateCharacterMovementComponentTrajectory::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UCharacterMovementComponent>& CharacterMovementComponent, \
		const float DeltaTime, \
		const float HistorySamplingInterval, \
		const int32 NumHistorySamples, \
		const float PredictionSamplingInterval, \
		const int32 NumPredictionSamples, \
		const FPoseSearchTrajectoryData& TrajectoryData, \
		FTransformTrajectory& InOutTrajectory, \
		float& InOutDesiredControllerYawLastUpdate \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_GenerateCharacterMovementComponentTrajectory_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GenerateCharacterMovementComponentTrajectory_Statics; \
	UAFPOSESEARCH_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UCharacterMovementComponent>& CharacterMovementComponent, \
		const float DeltaTime, \
		const float HistorySamplingInterval, \
		const int32 NumHistorySamples, \
		const float PredictionSamplingInterval, \
		const int32 NumPredictionSamples, \
		const FPoseSearchTrajectoryData& TrajectoryData, \
		FTransformTrajectory& InOutTrajectory, \
		float& InOutDesiredControllerYawLastUpdate \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<UCharacterMovementComponent>& CharacterMovementComponent = *(TObjectPtr<UCharacterMovementComponent>*)RigVMMemoryHandles[0].GetInputData(); \
		const float DeltaTime = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float HistorySamplingInterval = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const int32 NumHistorySamples = *(int32*)RigVMMemoryHandles[3].GetInputData(); \
		const float PredictionSamplingInterval = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const int32 NumPredictionSamples = *(int32*)RigVMMemoryHandles[5].GetInputData(); \
		const FPoseSearchTrajectoryData& TrajectoryData = *(FPoseSearchTrajectoryData*)RigVMMemoryHandles[6].GetInputData(); \
		FTransformTrajectory& InOutTrajectory = *(FTransformTrajectory*)RigVMMemoryHandles[7].GetOutputData(); \
		float& InOutDesiredControllerYawLastUpdate = *(float*)RigVMMemoryHandles[8].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			CharacterMovementComponent, \
			DeltaTime, \
			HistorySamplingInterval, \
			NumHistorySamples, \
			PredictionSamplingInterval, \
			NumPredictionSamples, \
			TrajectoryData, \
			InOutTrajectory, \
			InOutDesiredControllerYawLastUpdate \
		); \
	} \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_GenerateCharacterMovementComponentTrajectory;
// ********** End ScriptStruct FRigUnit_GenerateCharacterMovementComponentTrajectory ***************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFPoseSearch_Source_UAFPoseSearch_Private_RigUnit_GenerateCharacterMovementComponentTrajectory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
