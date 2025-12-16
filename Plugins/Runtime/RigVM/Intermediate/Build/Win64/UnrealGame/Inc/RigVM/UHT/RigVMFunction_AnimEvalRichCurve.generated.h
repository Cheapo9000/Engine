// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Animation/RigVMFunction_AnimEvalRichCurve.h"

#ifdef RIGVM_RigVMFunction_AnimEvalRichCurve_generated_h
#error "RigVMFunction_AnimEvalRichCurve.generated.h already included, missing '#pragma once' in RigVMFunction_AnimEvalRichCurve.h"
#endif
#define RIGVM_RigVMFunction_AnimEvalRichCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_AnimEvalRichCurve **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics;

#define FRigVMFunction_AnimEvalRichCurve_Execute() \
	void FRigVMFunction_AnimEvalRichCurve::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const FRuntimeFloatCurve& Curve, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEvalRichCurve_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AnimEvalRichCurve_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const FRuntimeFloatCurve& Curve, \
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
		const FRuntimeFloatCurve& Curve = *(FRuntimeFloatCurve*)RigVMMemoryHandles[1].GetInputData(); \
		const float SourceMinimum = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float SourceMaximum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float TargetMinimum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float TargetMaximum = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Curve, \
			SourceMinimum, \
			SourceMaximum, \
			TargetMinimum, \
			TargetMaximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


struct FRigVMFunction_AnimEvalRichCurve;
// ********** End ScriptStruct FRigVMFunction_AnimEvalRichCurve ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimEvalRichCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
