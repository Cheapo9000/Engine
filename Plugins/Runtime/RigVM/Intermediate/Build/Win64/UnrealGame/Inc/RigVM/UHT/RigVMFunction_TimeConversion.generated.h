// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Animation/RigVMFunction_TimeConversion.h"

#ifdef RIGVM_RigVMFunction_TimeConversion_generated_h
#error "RigVMFunction_TimeConversion.generated.h already included, missing '#pragma once' in RigVMFunction_TimeConversion.h"
#endif
#define RIGVM_RigVMFunction_TimeConversion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_FramesToSeconds ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics;

#define FRigVMFunction_FramesToSeconds_Execute() \
	void FRigVMFunction_FramesToSeconds::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Frames, \
		float& Seconds \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Frames, \
		float& Seconds \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Frames = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Seconds = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Frames, \
			Seconds \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


struct FRigVMFunction_FramesToSeconds;
// ********** End ScriptStruct FRigVMFunction_FramesToSeconds **************************************

// ********** Begin ScriptStruct FRigVMFunction_SecondsToFrames ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics;

#define FRigVMFunction_SecondsToFrames_Execute() \
	void FRigVMFunction_SecondsToFrames::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Seconds, \
		float& Frames \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Seconds, \
		float& Frames \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Seconds = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Frames = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Seconds, \
			Frames \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


struct FRigVMFunction_SecondsToFrames;
// ********** End ScriptStruct FRigVMFunction_SecondsToFrames **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
