// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_ChainInfo.h"

#ifdef CONTROLRIG_RigUnit_ChainInfo_generated_h
#error "RigUnit_ChainInfo.generated.h already included, missing '#pragma once' in RigUnit_ChainInfo.h"
#endif
#define CONTROLRIG_RigUnit_ChainInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ChainInfo_Segment ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_ChainInfo_Segment_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ChainInfo_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ChainInfo_Segment_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ChainInfo_Segment;
// ********** End ScriptStruct FRigUnit_ChainInfo_Segment ******************************************

// ********** Begin ScriptStruct FRigUnit_ChainInfo_SegmentInfo ************************************
struct Z_Construct_UScriptStruct_FRigUnit_ChainInfo_SegmentInfo_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ChainInfo_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ChainInfo_SegmentInfo_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ChainInfo_SegmentInfo;
// ********** End ScriptStruct FRigUnit_ChainInfo_SegmentInfo **************************************

// ********** Begin ScriptStruct FRigUnit_ChainInfo ************************************************
struct Z_Construct_UScriptStruct_FRigUnit_ChainInfo_Statics;

#define FRigUnit_ChainInfo_Execute() \
	void FRigUnit_ChainInfo::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const float Param, \
		const bool bCalculateStretch, \
		const bool bInitial, \
		const bool bDebug, \
		const float DebugScale, \
		FTransform& InterpolatedTransform, \
		float& ChainLength, \
		float& ParamLength, \
		float& ChainStretchFactor, \
		FRigUnit_ChainInfo_SegmentInfo& SegmentInfo, \
		TArray<FCachedRigElement>& CachedElements \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ChainInfo_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ChainInfo_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const float Param, \
		const bool bCalculateStretch, \
		const bool bInitial, \
		const bool bDebug, \
		const float DebugScale, \
		FTransform& InterpolatedTransform, \
		float& ChainLength, \
		float& ParamLength, \
		float& ChainStretchFactor, \
		FRigUnit_ChainInfo_SegmentInfo& SegmentInfo, \
		TArray<FCachedRigElement>& CachedElements \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const float Param = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bCalculateStretch = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bDebug = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const float DebugScale = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		FTransform& InterpolatedTransform = *(FTransform*)RigVMMemoryHandles[6].GetOutputData(); \
		float& ChainLength = *(float*)RigVMMemoryHandles[7].GetOutputData(); \
		float& ParamLength = *(float*)RigVMMemoryHandles[8].GetOutputData(); \
		float& ChainStretchFactor = *(float*)RigVMMemoryHandles[9].GetOutputData(); \
		FRigUnit_ChainInfo_SegmentInfo& SegmentInfo = *(FRigUnit_ChainInfo_SegmentInfo*)RigVMMemoryHandles[10].GetOutputData(); \
		TArray<FCachedRigElement>& CachedElements = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[11].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Param, \
			bCalculateStretch, \
			bInitial, \
			bDebug, \
			DebugScale, \
			InterpolatedTransform, \
			ChainLength, \
			ParamLength, \
			ChainStretchFactor, \
			SegmentInfo, \
			CachedElements \
		); \
	} \
	typedef FRigUnit_HighlevelBase Super;


struct FRigUnit_ChainInfo;
// ********** End ScriptStruct FRigUnit_ChainInfo **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ChainInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
