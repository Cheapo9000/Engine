// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Simulation/RigVMFunction_Accumulate.h"

#ifdef RIGVM_RigVMFunction_Accumulate_generated_h
#error "RigVMFunction_Accumulate.generated.h already included, missing '#pragma once' in RigVMFunction_Accumulate.h"
#endif
#define RIGVM_RigVMFunction_Accumulate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_AccumulateBase *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_SimBase Super;


struct FRigVMFunction_AccumulateBase;
// ********** End ScriptStruct FRigVMFunction_AccumulateBase ***************************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateFloatAdd *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics;

#define FRigVMFunction_AccumulateFloatAdd_Execute() \
	void FRigVMFunction_AccumulateFloatAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Increment, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Increment, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Increment = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Increment, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateFloatAdd;
// ********** End ScriptStruct FRigVMFunction_AccumulateFloatAdd ***********************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateVectorAdd ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics;

#define FRigVMFunction_AccumulateVectorAdd_Execute() \
	void FRigVMFunction_AccumulateVectorAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Increment, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Increment, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Increment = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		FVector& AccumulatedValue = *(FVector*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Increment, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateVectorAdd;
// ********** End ScriptStruct FRigVMFunction_AccumulateVectorAdd **********************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateFloatMul *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics;

#define FRigVMFunction_AccumulateFloatMul_Execute() \
	void FRigVMFunction_AccumulateFloatMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Multiplier, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Multiplier, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Multiplier = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Multiplier, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateFloatMul;
// ********** End ScriptStruct FRigVMFunction_AccumulateFloatMul ***********************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateVectorMul ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics;

#define FRigVMFunction_AccumulateVectorMul_Execute() \
	void FRigVMFunction_AccumulateVectorMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Multiplier, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_137_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Multiplier, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Multiplier = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		FVector& AccumulatedValue = *(FVector*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Multiplier, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateVectorMul;
// ********** End ScriptStruct FRigVMFunction_AccumulateVectorMul **********************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateQuatMul **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics;

#define FRigVMFunction_AccumulateQuatMul_Execute() \
	void FRigVMFunction_AccumulateQuatMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Multiplier, \
		const FQuat& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& Multiplier, \
		const FQuat& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Multiplier = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& InitialValue = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bFlipOrder = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetOutputData(); \
		FQuat& AccumulatedValue = *(FQuat*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Multiplier, \
			InitialValue, \
			bFlipOrder, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateQuatMul;
// ********** End ScriptStruct FRigVMFunction_AccumulateQuatMul ************************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateTransformMul *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics;

#define FRigVMFunction_AccumulateTransformMul_Execute() \
	void FRigVMFunction_AccumulateTransformMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Multiplier, \
		const FTransform& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_218_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Multiplier, \
		const FTransform& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Multiplier = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& InitialValue = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bFlipOrder = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		FTransform& AccumulatedValue = *(FTransform*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Multiplier, \
			InitialValue, \
			bFlipOrder, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateTransformMul;
// ********** End ScriptStruct FRigVMFunction_AccumulateTransformMul *******************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateFloatLerp ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics;

#define FRigVMFunction_AccumulateFloatLerp_Execute() \
	void FRigVMFunction_AccumulateFloatLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float TargetValue, \
		const float InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_260_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float TargetValue, \
		const float InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float TargetValue = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetOutputData(); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateFloatLerp;
// ********** End ScriptStruct FRigVMFunction_AccumulateFloatLerp **********************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateVectorLerp *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics;

#define FRigVMFunction_AccumulateVectorLerp_Execute() \
	void FRigVMFunction_AccumulateVectorLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& TargetValue, \
		const FVector& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_302_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& TargetValue, \
		const FVector& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& TargetValue = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		FVector& AccumulatedValue = *(FVector*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateVectorLerp;
// ********** End ScriptStruct FRigVMFunction_AccumulateVectorLerp *********************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateQuatLerp *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics;

#define FRigVMFunction_AccumulateQuatLerp_Execute() \
	void FRigVMFunction_AccumulateQuatLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& TargetValue, \
		const FQuat& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_345_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FQuat& TargetValue, \
		const FQuat& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& TargetValue = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FQuat& InitialValue = *(FQuat*)RigVMMemoryHandles[1].GetInputData(); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetOutputData(); \
		FQuat& AccumulatedValue = *(FQuat*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateQuatLerp;
// ********** End ScriptStruct FRigVMFunction_AccumulateQuatLerp ***********************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateTransformLerp ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics;

#define FRigVMFunction_AccumulateTransformLerp_Execute() \
	void FRigVMFunction_AccumulateTransformLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& TargetValue, \
		const FTransform& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_388_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FTransform& TargetValue, \
		const FTransform& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& TargetValue = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& InitialValue = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		FTransform& AccumulatedValue = *(FTransform*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateTransformLerp;
// ********** End ScriptStruct FRigVMFunction_AccumulateTransformLerp ******************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateFloatRange *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics;

#define FRigVMFunction_AccumulateFloatRange_Execute() \
	void FRigVMFunction_AccumulateFloatRange::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Minimum, \
		float& Maximum, \
		float& AccumulatedMinimum, \
		float& AccumulatedMaximum, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_431_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Minimum, \
		float& Maximum, \
		float& AccumulatedMinimum, \
		float& AccumulatedMaximum, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Minimum = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		float& Maximum = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		float& AccumulatedMinimum = *(float*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		float& AccumulatedMaximum = *(float*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			AccumulatedMinimum, \
			AccumulatedMaximum, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateFloatRange;
// ********** End ScriptStruct FRigVMFunction_AccumulateFloatRange *********************************

// ********** Begin ScriptStruct FRigVMFunction_AccumulateVectorRange ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics;

#define FRigVMFunction_AccumulateVectorRange_Execute() \
	void FRigVMFunction_AccumulateVectorRange::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& AccumulatedMinimum, \
		FVector& AccumulatedMaximum, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_469_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FVector& Value, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& AccumulatedMinimum, \
		FVector& AccumulatedMaximum, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Minimum = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		FVector& Maximum = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		FVector& AccumulatedMinimum = *(FVector*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& AccumulatedMaximum = *(FVector*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			AccumulatedMinimum, \
			AccumulatedMaximum, \
			bIsInitialized \
		); \
	} \
	typedef FRigVMFunction_AccumulateBase Super;


struct FRigVMFunction_AccumulateVectorRange;
// ********** End ScriptStruct FRigVMFunction_AccumulateVectorRange ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
