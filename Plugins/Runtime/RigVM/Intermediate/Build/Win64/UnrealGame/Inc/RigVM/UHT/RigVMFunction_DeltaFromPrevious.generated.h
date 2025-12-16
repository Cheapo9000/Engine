// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_DeltaFromPrevious.h"

#ifdef RIGVM_RigVMFunction_DeltaFromPrevious_generated_h
#error "RigVMFunction_DeltaFromPrevious.generated.h already included, missing '#pragma once' in RigVMFunction_DeltaFromPrevious.h"
#endif
#define RIGVM_RigVMFunction_DeltaFromPrevious_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_DeltaFromPreviousFloat *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics;

#define FRigVMFunction_DeltaFromPreviousFloat_Execute() \
	void FRigVMFunction_DeltaFromPreviousFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Delta, \
		float& PreviousValue, \
		float& Cache, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Delta, \
		float& PreviousValue, \
		float& Cache, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Delta = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		float& PreviousValue = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		float& Cache = *(float*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_DeltaFromPreviousFloat;
// ********** End ScriptStruct FRigVMFunction_DeltaFromPreviousFloat *******************************

// ********** Begin ScriptStruct FRigVMFunction_DeltaFromPreviousVector ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics;

#define FRigVMFunction_DeltaFromPreviousVector_Execute() \
	void FRigVMFunction_DeltaFromPreviousVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Delta, \
		FVector& PreviousValue, \
		FVector& Cache, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Delta, \
		FVector& PreviousValue, \
		FVector& Cache, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Delta = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		FVector& PreviousValue = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		FVector& Cache = *(FVector*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_DeltaFromPreviousVector;
// ********** End ScriptStruct FRigVMFunction_DeltaFromPreviousVector ******************************

// ********** Begin ScriptStruct FRigVMFunction_DeltaFromPreviousQuat ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics;

#define FRigVMFunction_DeltaFromPreviousQuat_Execute() \
	void FRigVMFunction_DeltaFromPreviousQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Delta, \
		FQuat& PreviousValue, \
		FQuat& Cache, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousQuat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Value, \
		FQuat& Delta, \
		FQuat& PreviousValue, \
		FQuat& Cache, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Delta = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		FQuat& PreviousValue = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		FQuat& Cache = *(FQuat*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_DeltaFromPreviousQuat;
// ********** End ScriptStruct FRigVMFunction_DeltaFromPreviousQuat ********************************

// ********** Begin ScriptStruct FRigVMFunction_DeltaFromPreviousTransform *************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics;

#define FRigVMFunction_DeltaFromPreviousTransform_Execute() \
	void FRigVMFunction_DeltaFromPreviousTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Delta, \
		FTransform& PreviousValue, \
		FTransform& Cache, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DeltaFromPreviousTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		FTransform& Delta, \
		FTransform& PreviousValue, \
		FTransform& Cache, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Delta = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		FTransform& PreviousValue = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		FTransform& Cache = *(FTransform*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_DeltaFromPreviousTransform;
// ********** End ScriptStruct FRigVMFunction_DeltaFromPreviousTransform ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_DeltaFromPrevious_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
