// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_DebugHierarchy.h"

#ifdef CONTROLRIG_RigUnit_DebugHierarchy_generated_h
#error "RigUnit_DebugHierarchy.generated.h already included, missing '#pragma once' in RigUnit_DebugHierarchy.h"
#endif
#define CONTROLRIG_RigUnit_DebugHierarchy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DebugHierarchy *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics;

#define FRigUnit_DebugHierarchy_Execute() \
	void FRigUnit_DebugHierarchy::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const float Scale, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugHierarchy_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const float Scale, \
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
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Scale, \
			Color, \
			Thickness, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


struct FRigUnit_DebugHierarchy;
// ********** End ScriptStruct FRigUnit_DebugHierarchy *********************************************

// ********** Begin ScriptStruct FRigUnit_DebugPose ************************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics;

#define FRigUnit_DebugPose_Execute() \
	void FRigUnit_DebugPose::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const TArrayView<const FRigElementKey>& Items, \
		const float Scale, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugHierarchy_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const TArrayView<const FRigElementKey>& Items, \
		const float Scale, \
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
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			Items, \
			Scale, \
			Color, \
			Thickness, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


struct FRigUnit_DebugPose;
// ********** End ScriptStruct FRigUnit_DebugPose **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugHierarchy_h

// ********** Begin Enum EControlRigDrawHierarchyMode **********************************************
#define FOREACH_ENUM_ECONTROLRIGDRAWHIERARCHYMODE(op) \
	op(EControlRigDrawHierarchyMode::Axes) \
	op(EControlRigDrawHierarchyMode::Max) 

namespace EControlRigDrawHierarchyMode { enum Type : int; }
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigDrawHierarchyMode::Type>();
// ********** End Enum EControlRigDrawHierarchyMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
