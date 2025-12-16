// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_IsInteracting.h"

#ifdef CONTROLRIG_RigUnit_IsInteracting_generated_h
#error "RigUnit_IsInteracting.generated.h already included, missing '#pragma once' in RigUnit_IsInteracting.h"
#endif
#define CONTROLRIG_RigUnit_IsInteracting_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_IsInteracting ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics;

#define FRigUnit_IsInteracting_Execute() \
	void FRigUnit_IsInteracting::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& bIsInteracting, \
		bool& bIsTranslating, \
		bool& bIsRotating, \
		bool& bIsScaling, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_IsInteracting_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& bIsInteracting, \
		bool& bIsTranslating, \
		bool& bIsRotating, \
		bool& bIsScaling, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		bool& bIsInteracting = *(bool*)RigVMMemoryHandles[0].GetOutputData(); \
		bool& bIsTranslating = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		bool& bIsRotating = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		bool& bIsScaling = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			bIsInteracting, \
			bIsTranslating, \
			bIsRotating, \
			bIsScaling, \
			Items \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_IsInteracting;
// ********** End ScriptStruct FRigUnit_IsInteracting **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_IsInteracting_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
