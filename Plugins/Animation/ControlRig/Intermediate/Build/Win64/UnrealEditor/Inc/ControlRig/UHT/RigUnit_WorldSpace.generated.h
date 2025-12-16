// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_WorldSpace.h"

#ifdef CONTROLRIG_RigUnit_WorldSpace_generated_h
#error "RigUnit_WorldSpace.generated.h already included, missing '#pragma once' in RigUnit_WorldSpace.h"
#endif
#define CONTROLRIG_RigUnit_WorldSpace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ToWorldSpace_Transform ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics;

#define FRigUnit_ToWorldSpace_Transform_Execute() \
	void FRigUnit_ToWorldSpace_Transform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& World \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_WorldSpace_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& World \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& World = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			World \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ToWorldSpace_Transform;
// ********** End ScriptStruct FRigUnit_ToWorldSpace_Transform *************************************

// ********** Begin ScriptStruct FRigUnit_ToRigSpace_Transform *************************************
struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics;

#define FRigUnit_ToRigSpace_Transform_Execute() \
	void FRigUnit_ToRigSpace_Transform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Global \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_WorldSpace_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Global = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Global \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ToRigSpace_Transform;
// ********** End ScriptStruct FRigUnit_ToRigSpace_Transform ***************************************

// ********** Begin ScriptStruct FRigUnit_ToWorldSpace_Location ************************************
struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics;

#define FRigUnit_ToWorldSpace_Location_Execute() \
	void FRigUnit_ToWorldSpace_Location::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& World \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_WorldSpace_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& World \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& World = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			World \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ToWorldSpace_Location;
// ********** End ScriptStruct FRigUnit_ToWorldSpace_Location **************************************

// ********** Begin ScriptStruct FRigUnit_ToRigSpace_Location **************************************
struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics;

#define FRigUnit_ToRigSpace_Location_Execute() \
	void FRigUnit_ToRigSpace_Location::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Global \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_WorldSpace_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Global = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Global \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ToRigSpace_Location;
// ********** End ScriptStruct FRigUnit_ToRigSpace_Location ****************************************

// ********** Begin ScriptStruct FRigUnit_ToWorldSpace_Rotation ************************************
struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics;

#define FRigUnit_ToWorldSpace_Rotation_Execute() \
	void FRigUnit_ToWorldSpace_Rotation::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& World \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_WorldSpace_h_132_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& World \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& World = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			World \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ToWorldSpace_Rotation;
// ********** End ScriptStruct FRigUnit_ToWorldSpace_Rotation **************************************

// ********** Begin ScriptStruct FRigUnit_ToRigSpace_Rotation **************************************
struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics;

#define FRigUnit_ToRigSpace_Rotation_Execute() \
	void FRigUnit_ToRigSpace_Rotation::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Global \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_WorldSpace_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Global \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Global = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Global \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ToRigSpace_Rotation;
// ********** End ScriptStruct FRigUnit_ToRigSpace_Rotation ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_WorldSpace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
