// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_ProfilingBracket.h"

#ifdef CONTROLRIG_RigUnit_ProfilingBracket_generated_h
#error "RigUnit_ProfilingBracket.generated.h already included, missing '#pragma once' in RigUnit_ProfilingBracket.h"
#endif
#define CONTROLRIG_RigUnit_ProfilingBracket_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_StartProfilingTimer **************************************
struct Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics;

#define FRigUnit_StartProfilingTimer_Execute() \
	void FRigUnit_StartProfilingTimer::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_ProfilingBracket_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[0].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigUnit_StartProfilingTimer;
// ********** End ScriptStruct FRigUnit_StartProfilingTimer ****************************************

// ********** Begin ScriptStruct FRigUnit_EndProfilingTimer ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics;

#define FRigUnit_EndProfilingTimer_Execute() \
	void FRigUnit_EndProfilingTimer::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 NumberOfMeasurements, \
		const FString& Prefix, \
		float& AccumulatedTime, \
		int32& MeasurementsLeft, \
		bool& bIsInitialized, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_ProfilingBracket_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const int32 NumberOfMeasurements, \
		const FString& Prefix, \
		float& AccumulatedTime, \
		int32& MeasurementsLeft, \
		bool& bIsInitialized, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 NumberOfMeasurements = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Prefix = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		float& AccumulatedTime = *(float*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& MeasurementsLeft = *(int32*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			NumberOfMeasurements, \
			Prefix, \
			AccumulatedTime, \
			MeasurementsLeft, \
			bIsInitialized, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigUnit_EndProfilingTimer;
// ********** End ScriptStruct FRigUnit_EndProfilingTimer ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_ProfilingBracket_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
