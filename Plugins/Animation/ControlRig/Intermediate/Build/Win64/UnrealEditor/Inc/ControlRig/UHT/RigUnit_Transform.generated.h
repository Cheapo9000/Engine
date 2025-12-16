// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Transform.h"

#ifdef CONTROLRIG_RigUnit_Transform_generated_h
#error "RigUnit_Transform.generated.h already included, missing '#pragma once' in RigUnit_Transform.h"
#endif
#define CONTROLRIG_RigUnit_Transform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_BinaryTransformOp ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Transform_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_BinaryTransformOp_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_BinaryTransformOp;
// ********** End ScriptStruct FRigUnit_BinaryTransformOp ******************************************

// ********** Begin ScriptStruct FRigUnit_MultiplyTransform ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics;

#define FRigUnit_MultiplyTransform_Execute() \
	void FRigUnit_MultiplyTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Argument0, \
		const FTransform& Argument1, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Transform_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MultiplyTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Argument0, \
		const FTransform& Argument1, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Argument0 = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Argument1 = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryTransformOp Super;


struct FRigUnit_MultiplyTransform;
// ********** End ScriptStruct FRigUnit_MultiplyTransform ******************************************

// ********** Begin ScriptStruct FRigUnit_GetRelativeTransform *************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics;

#define FRigUnit_GetRelativeTransform_Execute() \
	void FRigUnit_GetRelativeTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Argument0, \
		const FTransform& Argument1, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Transform_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Argument0, \
		const FTransform& Argument1, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Argument0 = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Argument1 = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryTransformOp Super;


struct FRigUnit_GetRelativeTransform;
// ********** End ScriptStruct FRigUnit_GetRelativeTransform ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Transform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
