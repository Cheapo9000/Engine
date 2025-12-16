// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Quaternion.h"

#ifdef CONTROLRIG_RigUnit_Quaternion_generated_h
#error "RigUnit_Quaternion.generated.h already included, missing '#pragma once' in RigUnit_Quaternion.h"
#endif
#define CONTROLRIG_RigUnit_Quaternion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_BinaryQuaternionOp ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_BinaryQuaternionOp;
// ********** End ScriptStruct FRigUnit_BinaryQuaternionOp *****************************************

// ********** Begin ScriptStruct FRigUnit_MultiplyQuaternion ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics;

#define FRigUnit_MultiplyQuaternion_Execute() \
	void FRigUnit_MultiplyQuaternion::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument0, \
		const FQuat& Argument1, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument0, \
		const FQuat& Argument1, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Argument0 = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& Argument1 = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument0, \
			Argument1, \
			Result \
		); \
	} \
	typedef FRigUnit_BinaryQuaternionOp Super;


struct FRigUnit_MultiplyQuaternion;
// ********** End ScriptStruct FRigUnit_MultiplyQuaternion *****************************************

// ********** Begin ScriptStruct FRigUnit_UnaryQuaternionOp ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_UnaryQuaternionOp;
// ********** End ScriptStruct FRigUnit_UnaryQuaternionOp ******************************************

// ********** Begin ScriptStruct FRigUnit_InverseQuaterion *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics;

#define FRigUnit_InverseQuaterion_Execute() \
	void FRigUnit_InverseQuaterion::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Argument = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument, \
			Result \
		); \
	} \
	typedef FRigUnit_UnaryQuaternionOp Super;


struct FRigUnit_InverseQuaterion;
// ********** End ScriptStruct FRigUnit_InverseQuaterion *******************************************

// ********** Begin ScriptStruct FRigUnit_QuaternionToAxisAndAngle *********************************
struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics;

#define FRigUnit_QuaternionToAxisAndAngle_Execute() \
	void FRigUnit_QuaternionToAxisAndAngle::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument, \
		FVector& Axis, \
		float& Angle \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Argument, \
		FVector& Axis, \
		float& Angle \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Argument = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Axis = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Argument, \
			Axis, \
			Angle \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_QuaternionToAxisAndAngle;
// ********** End ScriptStruct FRigUnit_QuaternionToAxisAndAngle ***********************************

// ********** Begin ScriptStruct FRigUnit_QuaternionFromAxisAndAngle *******************************
struct Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics;

#define FRigUnit_QuaternionFromAxisAndAngle_Execute() \
	void FRigUnit_QuaternionFromAxisAndAngle::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_94_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Axis = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const float Angle = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Axis, \
			Angle, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_QuaternionFromAxisAndAngle;
// ********** End ScriptStruct FRigUnit_QuaternionFromAxisAndAngle *********************************

// ********** Begin ScriptStruct FRigUnit_QuaternionToAngle ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics;

#define FRigUnit_QuaternionToAngle_Execute() \
	void FRigUnit_QuaternionToAngle::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const FQuat& Argument, \
		float& Angle \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h_121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Axis, \
		const FQuat& Argument, \
		float& Angle \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Axis = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& Argument = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Axis, \
			Argument, \
			Angle \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_QuaternionToAngle;
// ********** End ScriptStruct FRigUnit_QuaternionToAngle ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Quaternion_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
