// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugTransform.h"

#ifdef RIGVM_RigVMFunction_DebugTransform_generated_h
#error "RigVMFunction_DebugTransform.generated.h already included, missing '#pragma once' in RigVMFunction_DebugTransform.h"
#endif
#define RIGVM_RigVMFunction_DebugTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_DebugTransformMutableNoSpace ***********************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics;

#define FRigVMFunction_DebugTransformMutableNoSpace_Execute() \
	void FRigVMFunction_DebugTransformMutableNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformMutableNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
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
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_DebugTransformMutableNoSpace;
// ********** End ScriptStruct FRigVMFunction_DebugTransformMutableNoSpace *************************

// ********** Begin ScriptStruct FRigVMFunction_DebugTransformArrayMutable_WorkData ****************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutable_WorkData_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct();


struct FRigVMFunction_DebugTransformArrayMutable_WorkData;
// ********** End ScriptStruct FRigVMFunction_DebugTransformArrayMutable_WorkData ******************

// ********** Begin ScriptStruct FRigVMFunction_DebugTransformArrayMutableNoSpace ******************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics;

#define FRigVMFunction_DebugTransformArrayMutableNoSpace_Execute() \
	void FRigVMFunction_DebugTransformArrayMutableNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const TArrayView<const int32>& ParentIndices, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugTransformArrayMutableNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const TArrayView<const int32>& ParentIndices, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
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
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transforms, \
			ParentIndices, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_DebugTransformArrayMutableNoSpace;
// ********** End ScriptStruct FRigVMFunction_DebugTransformArrayMutableNoSpace ********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugTransform_h

// ********** Begin Enum ERigUnitDebugTransformMode ************************************************
#define FOREACH_ENUM_ERIGUNITDEBUGTRANSFORMMODE(op) \
	op(ERigUnitDebugTransformMode::Point) \
	op(ERigUnitDebugTransformMode::Axes) \
	op(ERigUnitDebugTransformMode::Box) \
	op(ERigUnitDebugTransformMode::Max) 

enum class ERigUnitDebugTransformMode : uint8;
template<> struct TIsUEnumClass<ERigUnitDebugTransformMode> { enum { Value = true }; };
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigUnitDebugTransformMode>();
// ********** End Enum ERigUnitDebugTransformMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
