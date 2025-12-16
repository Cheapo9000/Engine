// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_DebugBezier.h"

#ifdef CONTROLRIG_RigUnit_DebugBezier_generated_h
#error "RigUnit_DebugBezier.generated.h already included, missing '#pragma once' in RigUnit_DebugBezier.h"
#endif
#define CONTROLRIG_RigUnit_DebugBezier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DebugBezier **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics;

#define FRigUnit_DebugBezier_Execute() \
	void FRigUnit_DebugBezier::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float MinimumU, \
		const float MaximumU, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBezier_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugBezier_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float MinimumU, \
		const float MaximumU, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
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
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[0].GetInputData(); \
		const float MinimumU = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float MaximumU = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[5].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[6].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[9].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Bezier, \
			MinimumU, \
			MaximumU, \
			Color, \
			Thickness, \
			Detail, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigUnit_DebugBezier;
// ********** End ScriptStruct FRigUnit_DebugBezier ************************************************

// ********** Begin ScriptStruct FRigUnit_DebugBezierItemSpace *************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics;

#define FRigUnit_DebugBezierItemSpace_Execute() \
	void FRigUnit_DebugBezierItemSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float MinimumU, \
		const float MaximumU, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBezier_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugBezierItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FRigVMFourPointBezier& Bezier, \
		const float MinimumU, \
		const float MaximumU, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
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
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[0].GetInputData(); \
		const float MinimumU = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float MaximumU = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[6].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[9].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Bezier, \
			MinimumU, \
			MaximumU, \
			Color, \
			Thickness, \
			Detail, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigUnit_DebugBezierItemSpace;
// ********** End ScriptStruct FRigUnit_DebugBezierItemSpace ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugBezier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
