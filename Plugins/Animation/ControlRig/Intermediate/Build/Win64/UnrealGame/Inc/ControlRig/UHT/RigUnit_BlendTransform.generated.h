// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/RigUnit_BlendTransform.h"

#ifdef CONTROLRIG_RigUnit_BlendTransform_generated_h
#error "RigUnit_BlendTransform.generated.h already included, missing '#pragma once' in RigUnit_BlendTransform.h"
#endif
#define CONTROLRIG_RigUnit_BlendTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBlendTarget ******************************************************
struct Z_Construct_UScriptStruct_FBlendTarget_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_BlendTransform_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBlendTarget_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FBlendTarget;
// ********** End ScriptStruct FBlendTarget ********************************************************

// ********** Begin ScriptStruct FRigUnit_BlendTransform *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics;

#define FRigUnit_BlendTransform_Execute() \
	void FRigUnit_BlendTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Source, \
		const TArrayView<const FBlendTarget>& Targets, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_BlendTransform_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Source, \
		const TArrayView<const FBlendTarget>& Targets, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Source = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FBlendTarget>& Targets = *(TArray<FBlendTarget>*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Source, \
			Targets, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_BlendTransform;
// ********** End ScriptStruct FRigUnit_BlendTransform *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_BlendTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
