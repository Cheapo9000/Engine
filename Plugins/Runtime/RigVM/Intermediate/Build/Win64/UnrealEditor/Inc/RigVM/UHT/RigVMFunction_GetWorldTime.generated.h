// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h"

#ifdef RIGVM_RigVMFunction_GetWorldTime_generated_h
#error "RigVMFunction_GetWorldTime.generated.h already included, missing '#pragma once' in RigVMFunction_GetWorldTime.h"
#endif
#define RIGVM_RigVMFunction_GetWorldTime_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_GetWorldTime ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics;

#define FRigVMFunction_GetWorldTime_Execute() \
	void FRigVMFunction_GetWorldTime::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Year, \
		float& Month, \
		float& Day, \
		float& WeekDay, \
		float& Hours, \
		float& Minutes, \
		float& Seconds, \
		float& OverallSeconds \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Year, \
		float& Month, \
		float& Day, \
		float& WeekDay, \
		float& Hours, \
		float& Minutes, \
		float& Seconds, \
		float& OverallSeconds \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Year = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		float& Month = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		float& Day = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		float& WeekDay = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		float& Hours = *(float*)RigVMMemoryHandles[4].GetOutputData(); \
		float& Minutes = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		float& Seconds = *(float*)RigVMMemoryHandles[6].GetOutputData(); \
		float& OverallSeconds = *(float*)RigVMMemoryHandles[7].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Year, \
			Month, \
			Day, \
			WeekDay, \
			Hours, \
			Minutes, \
			Seconds, \
			OverallSeconds \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


struct FRigVMFunction_GetWorldTime;
// ********** End ScriptStruct FRigVMFunction_GetWorldTime *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
