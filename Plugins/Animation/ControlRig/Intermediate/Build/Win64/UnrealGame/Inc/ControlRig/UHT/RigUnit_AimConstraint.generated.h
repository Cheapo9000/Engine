// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/RigUnit_AimConstraint.h"

#ifdef CONTROLRIG_RigUnit_AimConstraint_generated_h
#error "RigUnit_AimConstraint.generated.h already included, missing '#pragma once' in RigUnit_AimConstraint.h"
#endif
#define CONTROLRIG_RigUnit_AimConstraint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAimTarget ********************************************************
struct Z_Construct_UScriptStruct_FAimTarget_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_AimConstraint_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAimTarget_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FAimTarget;
// ********** End ScriptStruct FAimTarget **********************************************************

// ********** Begin ScriptStruct FRigUnit_AimConstraint_WorkData ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_AimConstraint_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimConstraint_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_AimConstraint_WorkData;
// ********** End ScriptStruct FRigUnit_AimConstraint_WorkData *************************************

// ********** Begin ScriptStruct FRigUnit_AimConstraint ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics;

#define FRigUnit_AimConstraint_Execute() \
	void FRigUnit_AimConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const EAimMode AimMode, \
		const EAimMode UpMode, \
		const FVector& AimVector, \
		const FVector& UpVector, \
		const TArrayView<const FAimTarget>& AimTargets, \
		const TArrayView<const FAimTarget>& UpTargets, \
		FRigUnit_AimConstraint_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_AimConstraint_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AimConstraint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const EAimMode AimMode, \
		const EAimMode UpMode, \
		const FVector& AimVector, \
		const FVector& UpVector, \
		const TArrayView<const FAimTarget>& AimTargets, \
		const TArrayView<const FAimTarget>& UpTargets, \
		FRigUnit_AimConstraint_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Joint = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const EAimMode AimMode = *(EAimMode*)RigVMMemoryHandles[1].GetInputData(); \
		const EAimMode UpMode = *(EAimMode*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& AimVector = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const FVector& UpVector = *(FVector*)RigVMMemoryHandles[4].GetInputData(); \
		TArray<FAimTarget>& AimTargets = *(TArray<FAimTarget>*)RigVMMemoryHandles[5].GetInputData(); \
		TArray<FAimTarget>& UpTargets = *(TArray<FAimTarget>*)RigVMMemoryHandles[6].GetInputData(); \
		FRigUnit_AimConstraint_WorkData& WorkData = *(FRigUnit_AimConstraint_WorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Joint, \
			AimMode, \
			UpMode, \
			AimVector, \
			UpVector, \
			AimTargets, \
			UpTargets, \
			WorkData \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_AimConstraint;
// ********** End ScriptStruct FRigUnit_AimConstraint **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_AimConstraint_h

// ********** Begin Enum EAimMode ******************************************************************
#define FOREACH_ENUM_EAIMMODE(op) \
	op(EAimMode::AimAtTarget) \
	op(EAimMode::OrientToTarget) 

enum class EAimMode : uint8;
template<> struct TIsUEnumClass<EAimMode> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EAimMode>();
// ********** End Enum EAimMode ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
