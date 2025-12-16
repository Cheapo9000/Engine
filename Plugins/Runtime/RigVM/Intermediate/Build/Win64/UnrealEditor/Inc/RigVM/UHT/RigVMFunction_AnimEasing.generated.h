// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Animation/RigVMFunction_AnimEasing.h"

#ifdef RIGVM_RigVMFunction_AnimEasing_generated_h
#error "RigVMFunction_AnimEasing.generated.h already included, missing '#pragma once' in RigVMFunction_AnimEasing.h"
#endif
#define RIGVM_RigVMFunction_AnimEasing_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_AnimEasingType *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AnimEasingType_Statics;

#define FRigVMFunction_AnimEasingType_Execute() \
	void FRigVMFunction_AnimEasingType::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		ERigVMAnimEasingType& Type \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEasing_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AnimEasingType_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		ERigVMAnimEasingType& Type \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		ERigVMAnimEasingType& Type = *(ERigVMAnimEasingType*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Type \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


struct FRigVMFunction_AnimEasingType;
// ********** End ScriptStruct FRigVMFunction_AnimEasingType ***************************************

// ********** Begin ScriptStruct FRigVMFunction_AnimEasing *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AnimEasing_Statics;

#define FRigVMFunction_AnimEasing_Execute() \
	void FRigVMFunction_AnimEasing::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const ERigVMAnimEasingType Type, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEasing_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AnimEasing_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const ERigVMAnimEasingType Type, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMAnimEasingType Type = *(ERigVMAnimEasingType*)RigVMMemoryHandles[1].GetInputData(); \
		const float SourceMinimum = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float SourceMaximum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float TargetMinimum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float TargetMaximum = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Type, \
			SourceMinimum, \
			SourceMaximum, \
			TargetMinimum, \
			TargetMaximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


struct FRigVMFunction_AnimEasing;
// ********** End ScriptStruct FRigVMFunction_AnimEasing *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEasing_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
