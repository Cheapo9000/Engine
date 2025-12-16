// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Harmonics/RigUnit_ChainHarmonics.h"

#ifdef CONTROLRIG_RigUnit_ChainHarmonics_generated_h
#error "RigUnit_ChainHarmonics.generated.h already included, missing '#pragma once' in RigUnit_ChainHarmonics.h"
#endif
#define CONTROLRIG_RigUnit_ChainHarmonics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ChainHarmonics_Reach *************************************
struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Reach_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ChainHarmonics_Reach;
// ********** End ScriptStruct FRigUnit_ChainHarmonics_Reach ***************************************

// ********** Begin ScriptStruct FRigUnit_ChainHarmonics_Wave **************************************
struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Wave_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ChainHarmonics_Wave;
// ********** End ScriptStruct FRigUnit_ChainHarmonics_Wave ****************************************

// ********** Begin ScriptStruct FRigUnit_ChainHarmonics_Pendulum **********************************
struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Pendulum_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ChainHarmonics_Pendulum;
// ********** End ScriptStruct FRigUnit_ChainHarmonics_Pendulum ************************************

// ********** Begin ScriptStruct FRigUnit_ChainHarmonics_WorkData **********************************
struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ChainHarmonics_WorkData;
// ********** End ScriptStruct FRigUnit_ChainHarmonics_WorkData ************************************

// ********** Begin ScriptStruct FRigUnit_ChainHarmonics *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics;

#define FRigUnit_ChainHarmonics_Execute() \
	void FRigUnit_ChainHarmonics::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& ChainRoot, \
		const FVector& Speed, \
		const FRigUnit_ChainHarmonics_Reach& Reach, \
		const FRigUnit_ChainHarmonics_Wave& Wave, \
		const FRuntimeFloatCurve& WaveCurve, \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum, \
		const bool bDrawDebug, \
		const FTransform& DrawWorldOffset, \
		FRigUnit_ChainHarmonics_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_183_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ChainHarmonics_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& ChainRoot, \
		const FVector& Speed, \
		const FRigUnit_ChainHarmonics_Reach& Reach, \
		const FRigUnit_ChainHarmonics_Wave& Wave, \
		const FRuntimeFloatCurve& WaveCurve, \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum, \
		const bool bDrawDebug, \
		const FTransform& DrawWorldOffset, \
		FRigUnit_ChainHarmonics_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& ChainRoot = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigUnit_ChainHarmonics_Reach& Reach = *(FRigUnit_ChainHarmonics_Reach*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_ChainHarmonics_Wave& Wave = *(FRigUnit_ChainHarmonics_Wave*)RigVMMemoryHandles[3].GetInputData(); \
		const FRuntimeFloatCurve& WaveCurve = *(FRuntimeFloatCurve*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum = *(FRigUnit_ChainHarmonics_Pendulum*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FTransform& DrawWorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetInputData(); \
		FRigUnit_ChainHarmonics_WorkData& WorkData = *(FRigUnit_ChainHarmonics_WorkData*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ChainRoot, \
			Speed, \
			Reach, \
			Wave, \
			WaveCurve, \
			Pendulum, \
			bDrawDebug, \
			DrawWorldOffset, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_ChainHarmonics;
// ********** End ScriptStruct FRigUnit_ChainHarmonics *********************************************

// ********** Begin ScriptStruct FRigUnit_ChainHarmonicsPerItem ************************************
struct Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics;

#define FRigUnit_ChainHarmonicsPerItem_Execute() \
	void FRigUnit_ChainHarmonicsPerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ChainRoot, \
		const FVector& Speed, \
		const FRigUnit_ChainHarmonics_Reach& Reach, \
		const FRigUnit_ChainHarmonics_Wave& Wave, \
		const FRuntimeFloatCurve& WaveCurve, \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum, \
		const bool bDrawDebug, \
		const FTransform& DrawWorldOffset, \
		FRigUnit_ChainHarmonics_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h_242_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ChainHarmonicsPerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& ChainRoot, \
		const FVector& Speed, \
		const FRigUnit_ChainHarmonics_Reach& Reach, \
		const FRigUnit_ChainHarmonics_Wave& Wave, \
		const FRuntimeFloatCurve& WaveCurve, \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum, \
		const bool bDrawDebug, \
		const FTransform& DrawWorldOffset, \
		FRigUnit_ChainHarmonics_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& ChainRoot = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigUnit_ChainHarmonics_Reach& Reach = *(FRigUnit_ChainHarmonics_Reach*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_ChainHarmonics_Wave& Wave = *(FRigUnit_ChainHarmonics_Wave*)RigVMMemoryHandles[3].GetInputData(); \
		const FRuntimeFloatCurve& WaveCurve = *(FRuntimeFloatCurve*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigUnit_ChainHarmonics_Pendulum& Pendulum = *(FRigUnit_ChainHarmonics_Pendulum*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FTransform& DrawWorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetInputData(); \
		FRigUnit_ChainHarmonics_WorkData& WorkData = *(FRigUnit_ChainHarmonics_WorkData*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ChainRoot, \
			Speed, \
			Reach, \
			Wave, \
			WaveCurve, \
			Pendulum, \
			bDrawDebug, \
			DrawWorldOffset, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_ChainHarmonicsPerItem;
// ********** End ScriptStruct FRigUnit_ChainHarmonicsPerItem **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Harmonics_RigUnit_ChainHarmonics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
