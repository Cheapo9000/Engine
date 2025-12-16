// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_SendEvent.h"

#ifdef CONTROLRIG_RigUnit_SendEvent_generated_h
#error "RigUnit_SendEvent.generated.h already included, missing '#pragma once' in RigUnit_SendEvent.h"
#endif
#define CONTROLRIG_RigUnit_SendEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SendEvent ************************************************
struct Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics;

#define FRigUnit_SendEvent_Execute() \
	void FRigUnit_SendEvent::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const ERigEvent Event, \
		const FRigElementKey& Item, \
		const float OffsetInSeconds, \
		const bool bEnable, \
		const bool bOnlyDuringInteraction \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SendEvent_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const ERigEvent Event, \
		const FRigElementKey& Item, \
		const float OffsetInSeconds, \
		const bool bEnable, \
		const bool bOnlyDuringInteraction \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const ERigEvent Event = *(ERigEvent*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const float OffsetInSeconds = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bEnable = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bOnlyDuringInteraction = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Event, \
			Item, \
			OffsetInSeconds, \
			bEnable, \
			bOnlyDuringInteraction \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SendEvent;
// ********** End ScriptStruct FRigUnit_SendEvent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SendEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
