// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_DebugLineStrip.h"

#ifdef CONTROLRIG_RigUnit_DebugLineStrip_generated_h
#error "RigUnit_DebugLineStrip.generated.h already included, missing '#pragma once' in RigUnit_DebugLineStrip.h"
#endif
#define CONTROLRIG_RigUnit_DebugLineStrip_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DebugLineStrip *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics;

#define FRigUnit_DebugLineStrip_Execute() \
	void FRigUnit_DebugLineStrip::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugLineStrip_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugLineStrip_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
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
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[3].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Points, \
			Color, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugLineStrip;
// ********** End ScriptStruct FRigUnit_DebugLineStrip *********************************************

// ********** Begin ScriptStruct FRigUnit_DebugLineStripItemSpace **********************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics;

#define FRigUnit_DebugLineStripItemSpace_Execute() \
	void FRigUnit_DebugLineStripItemSpace::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugLineStrip_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugLineStripItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
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
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[3].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Points, \
			Color, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugLineStripItemSpace;
// ********** End ScriptStruct FRigUnit_DebugLineStripItemSpace ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugLineStrip_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
