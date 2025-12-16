// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_DebugLine.h"

#ifdef CONTROLRIG_RigUnit_DebugLine_generated_h
#error "RigUnit_DebugLine.generated.h already included, missing '#pragma once' in RigUnit_DebugLine.h"
#endif
#define CONTROLRIG_RigUnit_DebugLine_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DebugLine ************************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugLine_Statics;

#define FRigUnit_DebugLine_Execute() \
	void FRigUnit_DebugLine::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugLine_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugLine_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FName& Space, \
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
		const FName& Space = *(FName*)RigVMMemoryHandles[4].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Color, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugLine;
// ********** End ScriptStruct FRigUnit_DebugLine **************************************************

// ********** Begin ScriptStruct FRigUnit_DebugLineItemSpace ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugLineItemSpace_Statics;

#define FRigUnit_DebugLineItemSpace_Execute() \
	void FRigUnit_DebugLineItemSpace::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugLine_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugLineItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FRigElementKey& Space, \
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
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Color, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugLineItemSpace;
// ********** End ScriptStruct FRigUnit_DebugLineItemSpace *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugLine_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
