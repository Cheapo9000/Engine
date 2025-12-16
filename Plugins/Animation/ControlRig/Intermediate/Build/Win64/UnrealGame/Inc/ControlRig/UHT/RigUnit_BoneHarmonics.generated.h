// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h"

#ifdef CONTROLRIG_RigUnit_BoneHarmonics_generated_h
#error "RigUnit_BoneHarmonics.generated.h already included, missing '#pragma once' in RigUnit_BoneHarmonics.h"
#endif
#define CONTROLRIG_RigUnit_BoneHarmonics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_BoneHarmonics_BoneTarget *********************************
struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_BoneHarmonics_BoneTarget;
// ********** End ScriptStruct FRigUnit_BoneHarmonics_BoneTarget ***********************************

// ********** Begin ScriptStruct FRigUnit_Harmonics_TargetItem *************************************
struct Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_Harmonics_TargetItem;
// ********** End ScriptStruct FRigUnit_Harmonics_TargetItem ***************************************

// ********** Begin ScriptStruct FRigUnit_BoneHarmonics_WorkData ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_BoneHarmonics_WorkData;
// ********** End ScriptStruct FRigUnit_BoneHarmonics_WorkData *************************************

// ********** Begin ScriptStruct FRigUnit_BoneHarmonics ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics;

#define FRigUnit_BoneHarmonics_Execute() \
	void FRigUnit_BoneHarmonics::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_BoneHarmonics_BoneTarget>& Bones, \
		const FVector& WaveSpeed, \
		const FVector& WaveFrequency, \
		const FVector& WaveAmplitude, \
		const FVector& WaveOffset, \
		const FVector& WaveNoise, \
		const ERigVMAnimEasingType WaveEase, \
		const float WaveMinimum, \
		const float WaveMaximum, \
		const EEulerRotationOrder RotationOrder, \
		const bool bPropagateToChildren, \
		FRigUnit_BoneHarmonics_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_BoneHarmonics_BoneTarget>& Bones, \
		const FVector& WaveSpeed, \
		const FVector& WaveFrequency, \
		const FVector& WaveAmplitude, \
		const FVector& WaveOffset, \
		const FVector& WaveNoise, \
		const ERigVMAnimEasingType WaveEase, \
		const float WaveMinimum, \
		const float WaveMaximum, \
		const EEulerRotationOrder RotationOrder, \
		const bool bPropagateToChildren, \
		FRigUnit_BoneHarmonics_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_BoneHarmonics_BoneTarget>& Bones = *(TArray<FRigUnit_BoneHarmonics_BoneTarget>*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& WaveSpeed = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& WaveFrequency = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& WaveAmplitude = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const FVector& WaveOffset = *(FVector*)RigVMMemoryHandles[4].GetInputData(); \
		const FVector& WaveNoise = *(FVector*)RigVMMemoryHandles[5].GetInputData(); \
		const ERigVMAnimEasingType WaveEase = *(ERigVMAnimEasingType*)RigVMMemoryHandles[6].GetInputData(); \
		const float WaveMinimum = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		const float WaveMaximum = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[9].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[10].GetInputData(); \
		FRigUnit_BoneHarmonics_WorkData& WorkData = *(FRigUnit_BoneHarmonics_WorkData*)RigVMMemoryHandles[11].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Bones, \
			WaveSpeed, \
			WaveFrequency, \
			WaveAmplitude, \
			WaveOffset, \
			WaveNoise, \
			WaveEase, \
			WaveMinimum, \
			WaveMaximum, \
			RotationOrder, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_BoneHarmonics;
// ********** End ScriptStruct FRigUnit_BoneHarmonics **********************************************

// ********** Begin ScriptStruct FRigUnit_ItemHarmonics ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics;

#define FRigUnit_ItemHarmonics_Execute() \
	void FRigUnit_ItemHarmonics::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_Harmonics_TargetItem>& Targets, \
		const FVector& WaveSpeed, \
		const FVector& WaveFrequency, \
		const FVector& WaveAmplitude, \
		const FVector& WaveOffset, \
		const FVector& WaveNoise, \
		const ERigVMAnimEasingType WaveEase, \
		const float WaveMinimum, \
		const float WaveMaximum, \
		const EEulerRotationOrder RotationOrder, \
		FRigUnit_BoneHarmonics_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_Harmonics_TargetItem>& Targets, \
		const FVector& WaveSpeed, \
		const FVector& WaveFrequency, \
		const FVector& WaveAmplitude, \
		const FVector& WaveOffset, \
		const FVector& WaveNoise, \
		const ERigVMAnimEasingType WaveEase, \
		const float WaveMinimum, \
		const float WaveMaximum, \
		const EEulerRotationOrder RotationOrder, \
		FRigUnit_BoneHarmonics_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_Harmonics_TargetItem>& Targets = *(TArray<FRigUnit_Harmonics_TargetItem>*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& WaveSpeed = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& WaveFrequency = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& WaveAmplitude = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const FVector& WaveOffset = *(FVector*)RigVMMemoryHandles[4].GetInputData(); \
		const FVector& WaveNoise = *(FVector*)RigVMMemoryHandles[5].GetInputData(); \
		const ERigVMAnimEasingType WaveEase = *(ERigVMAnimEasingType*)RigVMMemoryHandles[6].GetInputData(); \
		const float WaveMinimum = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		const float WaveMaximum = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[9].GetInputData(); \
		FRigUnit_BoneHarmonics_WorkData& WorkData = *(FRigUnit_BoneHarmonics_WorkData*)RigVMMemoryHandles[10].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Targets, \
			WaveSpeed, \
			WaveFrequency, \
			WaveAmplitude, \
			WaveOffset, \
			WaveNoise, \
			WaveEase, \
			WaveMinimum, \
			WaveMaximum, \
			RotationOrder, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_ItemHarmonics;
// ********** End ScriptStruct FRigUnit_ItemHarmonics **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
