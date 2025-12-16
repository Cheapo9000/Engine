// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugLine.h"

#ifdef RIGVM_RigVMFunction_DebugLine_generated_h
#error "RigVMFunction_DebugLine.generated.h already included, missing '#pragma once' in RigVMFunction_DebugLine.h"
#endif
#define RIGVM_RigVMFunction_DebugLine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_DebugLineNoSpace ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics;

#define FRigVMFunction_DebugLineNoSpace_Execute() \
	void FRigVMFunction_DebugLineNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugLineNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Color, \
			Thickness, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_DebugLineNoSpace;
// ********** End ScriptStruct FRigVMFunction_DebugLineNoSpace *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
