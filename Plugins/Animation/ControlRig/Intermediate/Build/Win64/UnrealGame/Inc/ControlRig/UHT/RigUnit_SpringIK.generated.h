// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_SpringIK.h"

#ifdef CONTROLRIG_RigUnit_SpringIK_generated_h
#error "RigUnit_SpringIK.generated.h already included, missing '#pragma once' in RigUnit_SpringIK.h"
#endif
#define CONTROLRIG_RigUnit_SpringIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SpringIK_DebugSettings ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SpringIK_DebugSettings;
// ********** End ScriptStruct FRigUnit_SpringIK_DebugSettings *************************************

// ********** Begin ScriptStruct FRigUnit_SpringIK_WorkData ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SpringIK_WorkData;
// ********** End ScriptStruct FRigUnit_SpringIK_WorkData ******************************************

// ********** Begin ScriptStruct FRigUnit_SpringIK *************************************************
struct Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics;

#define FRigUnit_SpringIK_Execute() \
	void FRigUnit_SpringIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const float HierarchyStrength, \
		const float EffectorStrength, \
		const float EffectorRatio, \
		const float RootStrength, \
		const float RootRatio, \
		const float Damping, \
		const FVector& PoleVector, \
		const bool bFlipPolePlane, \
		const EControlRigVectorKind PoleVectorKind, \
		const FName& PoleVectorSpace, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const bool bLiveSimulation, \
		const int32 Iterations, \
		const bool bLimitLocalPosition, \
		const bool bPropagateToChildren, \
		const FRigUnit_SpringIK_DebugSettings& DebugSettings, \
		FRigUnit_SpringIK_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const float HierarchyStrength, \
		const float EffectorStrength, \
		const float EffectorRatio, \
		const float RootStrength, \
		const float RootRatio, \
		const float Damping, \
		const FVector& PoleVector, \
		const bool bFlipPolePlane, \
		const EControlRigVectorKind PoleVectorKind, \
		const FName& PoleVectorSpace, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const bool bLiveSimulation, \
		const int32 Iterations, \
		const bool bLimitLocalPosition, \
		const bool bPropagateToChildren, \
		const FRigUnit_SpringIK_DebugSettings& DebugSettings, \
		FRigUnit_SpringIK_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const float HierarchyStrength = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float EffectorStrength = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float EffectorRatio = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float RootStrength = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const float RootRatio = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		const float Damping = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		const FVector& PoleVector = *(FVector*)RigVMMemoryHandles[8].GetInputData(); \
		const bool bFlipPolePlane = *(bool*)RigVMMemoryHandles[9].GetInputData(); \
		const EControlRigVectorKind PoleVectorKind = *(EControlRigVectorKind*)RigVMMemoryHandles[10].GetInputData(); \
		const FName& PoleVectorSpace = *(FName*)RigVMMemoryHandles[11].GetInputData(); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[12].GetInputData(); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[13].GetInputData(); \
		const bool bLiveSimulation = *(bool*)RigVMMemoryHandles[14].GetInputData(); \
		const int32 Iterations = *(int32*)RigVMMemoryHandles[15].GetInputData(); \
		const bool bLimitLocalPosition = *(bool*)RigVMMemoryHandles[16].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[17].GetInputData(); \
		const FRigUnit_SpringIK_DebugSettings& DebugSettings = *(FRigUnit_SpringIK_DebugSettings*)RigVMMemoryHandles[18].GetInputData(); \
		FRigUnit_SpringIK_WorkData& WorkData = *(FRigUnit_SpringIK_WorkData*)RigVMMemoryHandles[19].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EndBone, \
			HierarchyStrength, \
			EffectorStrength, \
			EffectorRatio, \
			RootStrength, \
			RootRatio, \
			Damping, \
			PoleVector, \
			bFlipPolePlane, \
			PoleVectorKind, \
			PoleVectorSpace, \
			PrimaryAxis, \
			SecondaryAxis, \
			bLiveSimulation, \
			Iterations, \
			bLimitLocalPosition, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_SpringIK;
// ********** End ScriptStruct FRigUnit_SpringIK ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
