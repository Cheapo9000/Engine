// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugLineStrip.h"

#ifdef RIGVM_RigVMFunction_DebugLineStrip_generated_h
#error "RigVMFunction_DebugLineStrip.generated.h already included, missing '#pragma once' in RigVMFunction_DebugLineStrip.h"
#endif
#define RIGVM_RigVMFunction_DebugLineStrip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_DebugLineStripNoSpace ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugLineStripNoSpace_Statics;

#define FRigVMFunction_DebugLineStripNoSpace_Execute() \
	void FRigVMFunction_DebugLineStripNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLineStrip_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugLineStripNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
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
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Points, \
			Color, \
			Thickness, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_DebugLineStripNoSpace;
// ********** End ScriptStruct FRigVMFunction_DebugLineStripNoSpace ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugLineStrip_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
