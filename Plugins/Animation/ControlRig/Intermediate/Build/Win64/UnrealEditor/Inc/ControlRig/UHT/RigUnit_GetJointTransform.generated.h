// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/RigUnit_GetJointTransform.h"

#ifdef CONTROLRIG_RigUnit_GetJointTransform_generated_h
#error "RigUnit_GetJointTransform.generated.h already included, missing '#pragma once' in RigUnit_GetJointTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetJointTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetJointTransform ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics;

#define FRigUnit_GetJointTransform_Execute() \
	void FRigUnit_GetJointTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const ETransformGetterType Type, \
		const ETransformSpaceMode TransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseJoint, \
		FTransform& Output \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_GetJointTransform_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetJointTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const ETransformGetterType Type, \
		const ETransformSpaceMode TransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseJoint, \
		FTransform& Output \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Joint = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ETransformGetterType Type = *(ETransformGetterType*)RigVMMemoryHandles[1].GetInputData(); \
		const ETransformSpaceMode TransformSpace = *(ETransformSpaceMode*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& BaseTransform = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		const FName& BaseJoint = *(FName*)RigVMMemoryHandles[4].GetInputData(); \
		FTransform& Output = *(FTransform*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Joint, \
			Type, \
			TransformSpace, \
			BaseTransform, \
			BaseJoint, \
			Output \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_GetJointTransform;
// ********** End ScriptStruct FRigUnit_GetJointTransform ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_GetJointTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
