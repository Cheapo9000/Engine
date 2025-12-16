// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_GetCurveValue.h"

#ifdef CONTROLRIG_RigUnit_GetCurveValue_generated_h
#error "RigUnit_GetCurveValue.generated.h already included, missing '#pragma once' in RigUnit_GetCurveValue.h"
#endif
#define CONTROLRIG_RigUnit_GetCurveValue_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetCurveValue ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics;

#define FRigUnit_GetCurveValue_Execute() \
	void FRigUnit_GetCurveValue::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Curve, \
		bool& Valid, \
		float& Value, \
		FCachedRigElement& CachedCurveIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetCurveValue_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& Curve, \
		bool& Valid, \
		float& Value, \
		FCachedRigElement& CachedCurveIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Curve = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Valid = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		float& Value = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedCurveIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Curve, \
			Valid, \
			Value, \
			CachedCurveIndex \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetCurveValue;
// ********** End ScriptStruct FRigUnit_GetCurveValue **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_GetCurveValue_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
