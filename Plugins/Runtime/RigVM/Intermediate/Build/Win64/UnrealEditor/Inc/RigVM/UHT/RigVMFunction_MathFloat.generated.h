// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathFloat.h"

#ifdef RIGVM_RigVMFunction_MathFloat_generated_h
#error "RigVMFunction_MathFloat.generated.h already included, missing '#pragma once' in RigVMFunction_MathFloat.h"
#endif
#define RIGVM_RigVMFunction_MathFloat_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathFloatBase **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathFloatBase;
// ********** End ScriptStruct FRigVMFunction_MathFloatBase ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatConstant **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstant_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstant_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatConstant;
// ********** End ScriptStruct FRigVMFunction_MathFloatConstant ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatUnaryOp ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatUnaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatUnaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatUnaryOp;
// ********** End ScriptStruct FRigVMFunction_MathFloatUnaryOp *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatBinaryOp **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBinaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBinaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatBinaryOp;
// ********** End ScriptStruct FRigVMFunction_MathFloatBinaryOp ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatBinaryAggregateOp *************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBinaryAggregateOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_70_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatBinaryAggregateOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatBinaryAggregateOp;
// ********** End ScriptStruct FRigVMFunction_MathFloatBinaryAggregateOp ***************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatMake **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMake_Statics;

#define FRigVMFunction_MathFloatMake_Execute() \
	void FRigVMFunction_MathFloatMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMake_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatMake;
// ********** End ScriptStruct FRigVMFunction_MathFloatMake ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatConstPi ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstPi_Statics;

#define FRigVMFunction_MathFloatConstPi_Execute() \
	void FRigVMFunction_MathFloatConstPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_116_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstPi_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatConstant Super;


struct FRigVMFunction_MathFloatConstPi;
// ********** End ScriptStruct FRigVMFunction_MathFloatConstPi *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatConstHalfPi *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstHalfPi_Statics;

#define FRigVMFunction_MathFloatConstHalfPi_Execute() \
	void FRigVMFunction_MathFloatConstHalfPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_128_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstHalfPi_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatConstant Super;


struct FRigVMFunction_MathFloatConstHalfPi;
// ********** End ScriptStruct FRigVMFunction_MathFloatConstHalfPi *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatConstTwoPi ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstTwoPi_Statics;

#define FRigVMFunction_MathFloatConstTwoPi_Execute() \
	void FRigVMFunction_MathFloatConstTwoPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_140_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstTwoPi_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatConstant Super;


struct FRigVMFunction_MathFloatConstTwoPi;
// ********** End ScriptStruct FRigVMFunction_MathFloatConstTwoPi **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatConstE ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstE_Statics;

#define FRigVMFunction_MathFloatConstE_Execute() \
	void FRigVMFunction_MathFloatConstE::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatConstE_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathFloatConstant Super;


struct FRigVMFunction_MathFloatConstE;
// ********** End ScriptStruct FRigVMFunction_MathFloatConstE **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatAdd ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAdd_Statics;

#define FRigVMFunction_MathFloatAdd_Execute() \
	void FRigVMFunction_MathFloatAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_164_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAdd_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryAggregateOp Super;


struct FRigVMFunction_MathFloatAdd;
// ********** End ScriptStruct FRigVMFunction_MathFloatAdd *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatSub ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSub_Statics;

#define FRigVMFunction_MathFloatSub_Execute() \
	void FRigVMFunction_MathFloatSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSub_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryOp Super;


struct FRigVMFunction_MathFloatSub;
// ********** End ScriptStruct FRigVMFunction_MathFloatSub *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatMul ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMul_Statics;

#define FRigVMFunction_MathFloatMul_Execute() \
	void FRigVMFunction_MathFloatMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_188_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryAggregateOp Super;


struct FRigVMFunction_MathFloatMul;
// ********** End ScriptStruct FRigVMFunction_MathFloatMul *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatDiv ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatDiv_Statics;

#define FRigVMFunction_MathFloatDiv_Execute() \
	void FRigVMFunction_MathFloatDiv::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_206_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatDiv_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryOp Super;


struct FRigVMFunction_MathFloatDiv;
// ********** End ScriptStruct FRigVMFunction_MathFloatDiv *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatMod ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMod_Statics;

#define FRigVMFunction_MathFloatMod_Execute() \
	void FRigVMFunction_MathFloatMod::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_223_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMod_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryOp Super;


struct FRigVMFunction_MathFloatMod;
// ********** End ScriptStruct FRigVMFunction_MathFloatMod *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatMin ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMin_Statics;

#define FRigVMFunction_MathFloatMin_Execute() \
	void FRigVMFunction_MathFloatMin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_241_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMin_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryAggregateOp Super;


struct FRigVMFunction_MathFloatMin;
// ********** End ScriptStruct FRigVMFunction_MathFloatMin *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatMax ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMax_Statics;

#define FRigVMFunction_MathFloatMax_Execute() \
	void FRigVMFunction_MathFloatMax::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_253_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatMax_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryAggregateOp Super;


struct FRigVMFunction_MathFloatMax;
// ********** End ScriptStruct FRigVMFunction_MathFloatMax *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatPow ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatPow_Statics;

#define FRigVMFunction_MathFloatPow_Execute() \
	void FRigVMFunction_MathFloatPow::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatPow_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryOp Super;


struct FRigVMFunction_MathFloatPow;
// ********** End ScriptStruct FRigVMFunction_MathFloatPow *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatSqrt **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSqrt_Statics;

#define FRigVMFunction_MathFloatSqrt_Execute() \
	void FRigVMFunction_MathFloatSqrt::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_283_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSqrt_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatSqrt;
// ********** End ScriptStruct FRigVMFunction_MathFloatSqrt ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatNegate ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatNegate_Statics;

#define FRigVMFunction_MathFloatNegate_Execute() \
	void FRigVMFunction_MathFloatNegate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_295_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatNegate_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatNegate;
// ********** End ScriptStruct FRigVMFunction_MathFloatNegate **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatAbs ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAbs_Statics;

#define FRigVMFunction_MathFloatAbs_Execute() \
	void FRigVMFunction_MathFloatAbs::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_307_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAbs_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatAbs;
// ********** End ScriptStruct FRigVMFunction_MathFloatAbs *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatFloor *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatFloor_Statics;

#define FRigVMFunction_MathFloatFloor_Execute() \
	void FRigVMFunction_MathFloatFloor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_319_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatFloor_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatFloor;
// ********** End ScriptStruct FRigVMFunction_MathFloatFloor ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatCeil **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatCeil_Statics;

#define FRigVMFunction_MathFloatCeil_Execute() \
	void FRigVMFunction_MathFloatCeil::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_346_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatCeil_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatCeil;
// ********** End ScriptStruct FRigVMFunction_MathFloatCeil ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatRound *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatRound_Statics;

#define FRigVMFunction_MathFloatRound_Execute() \
	void FRigVMFunction_MathFloatRound::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_373_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatRound_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatRound;
// ********** End ScriptStruct FRigVMFunction_MathFloatRound ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatToInt *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatToInt_Statics;

#define FRigVMFunction_MathFloatToInt_Execute() \
	void FRigVMFunction_MathFloatToInt::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_400_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatToInt_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatToInt;
// ********** End ScriptStruct FRigVMFunction_MathFloatToInt ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatToDouble **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatToDouble_Statics;

#define FRigVMFunction_MathFloatToDouble_Execute() \
	void FRigVMFunction_MathFloatToDouble::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_424_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatToDouble_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatToDouble;
// ********** End ScriptStruct FRigVMFunction_MathFloatToDouble ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatSign **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSign_Statics;

#define FRigVMFunction_MathFloatSign_Execute() \
	void FRigVMFunction_MathFloatSign::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_448_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSign_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatSign;
// ********** End ScriptStruct FRigVMFunction_MathFloatSign ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatClamp *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatClamp_Statics;

#define FRigVMFunction_MathFloatClamp_Execute() \
	void FRigVMFunction_MathFloatClamp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Minimum, \
		const float Maximum, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_460_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatClamp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Minimum, \
		const float Maximum, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatClamp;
// ********** End ScriptStruct FRigVMFunction_MathFloatClamp ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatLerp **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLerp_Statics;

#define FRigVMFunction_MathFloatLerp_Execute() \
	void FRigVMFunction_MathFloatLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float T, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_489_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float T, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float T = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatLerp;
// ********** End ScriptStruct FRigVMFunction_MathFloatLerp ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatRemap *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatRemap_Statics;

#define FRigVMFunction_MathFloatRemap_Execute() \
	void FRigVMFunction_MathFloatRemap::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		const bool bClamp, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_519_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatRemap_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		const bool bClamp, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float SourceMinimum = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float SourceMaximum = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float TargetMinimum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float TargetMaximum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bClamp = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			SourceMinimum, \
			SourceMaximum, \
			TargetMinimum, \
			TargetMaximum, \
			bClamp, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatRemap;
// ********** End ScriptStruct FRigVMFunction_MathFloatRemap ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatEquals ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatEquals_Statics;

#define FRigVMFunction_MathFloatEquals_Execute() \
	void FRigVMFunction_MathFloatEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_560_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatEquals;
// ********** End ScriptStruct FRigVMFunction_MathFloatEquals **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatNotEquals *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatNotEquals_Statics;

#define FRigVMFunction_MathFloatNotEquals_Execute() \
	void FRigVMFunction_MathFloatNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_589_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatNotEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatNotEquals;
// ********** End ScriptStruct FRigVMFunction_MathFloatNotEquals ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatGreater ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatGreater_Statics;

#define FRigVMFunction_MathFloatGreater_Execute() \
	void FRigVMFunction_MathFloatGreater::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_618_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatGreater_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatGreater;
// ********** End ScriptStruct FRigVMFunction_MathFloatGreater *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatLess **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLess_Statics;

#define FRigVMFunction_MathFloatLess_Execute() \
	void FRigVMFunction_MathFloatLess::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_645_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLess_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatLess;
// ********** End ScriptStruct FRigVMFunction_MathFloatLess ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatGreaterEqual ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatGreaterEqual_Statics;

#define FRigVMFunction_MathFloatGreaterEqual_Execute() \
	void FRigVMFunction_MathFloatGreaterEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_672_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatGreaterEqual_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatGreaterEqual;
// ********** End ScriptStruct FRigVMFunction_MathFloatGreaterEqual ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatLessEqual *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLessEqual_Statics;

#define FRigVMFunction_MathFloatLessEqual_Execute() \
	void FRigVMFunction_MathFloatLessEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_699_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLessEqual_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatLessEqual;
// ********** End ScriptStruct FRigVMFunction_MathFloatLessEqual ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatIsNearlyZero ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatIsNearlyZero_Statics;

#define FRigVMFunction_MathFloatIsNearlyZero_Execute() \
	void FRigVMFunction_MathFloatIsNearlyZero::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Tolerance, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_726_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatIsNearlyZero_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		const float Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float Tolerance = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Tolerance, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatIsNearlyZero;
// ********** End ScriptStruct FRigVMFunction_MathFloatIsNearlyZero ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatIsNearlyEqual *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatIsNearlyEqual_Statics;

#define FRigVMFunction_MathFloatIsNearlyEqual_Execute() \
	void FRigVMFunction_MathFloatIsNearlyEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float Tolerance, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_753_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatIsNearlyEqual_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float Tolerance = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Tolerance, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatIsNearlyEqual;
// ********** End ScriptStruct FRigVMFunction_MathFloatIsNearlyEqual *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatSelectBool ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSelectBool_Statics;

#define FRigVMFunction_MathFloatSelectBool_Execute() \
	void FRigVMFunction_MathFloatSelectBool::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const float IfTrue, \
		const float IfFalse, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_783_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSelectBool_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Condition, \
		const float IfTrue, \
		const float IfFalse, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const float IfTrue = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float IfFalse = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatSelectBool;
// ********** End ScriptStruct FRigVMFunction_MathFloatSelectBool **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatDeg ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatDeg_Statics;

#define FRigVMFunction_MathFloatDeg_Execute() \
	void FRigVMFunction_MathFloatDeg::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_816_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatDeg_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatDeg;
// ********** End ScriptStruct FRigVMFunction_MathFloatDeg *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatRad ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatRad_Statics;

#define FRigVMFunction_MathFloatRad_Execute() \
	void FRigVMFunction_MathFloatRad::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_828_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatRad_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatRad;
// ********** End ScriptStruct FRigVMFunction_MathFloatRad *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatSin ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSin_Statics;

#define FRigVMFunction_MathFloatSin_Execute() \
	void FRigVMFunction_MathFloatSin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_840_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatSin_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatSin;
// ********** End ScriptStruct FRigVMFunction_MathFloatSin *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatCos ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatCos_Statics;

#define FRigVMFunction_MathFloatCos_Execute() \
	void FRigVMFunction_MathFloatCos::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_852_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatCos_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatCos;
// ********** End ScriptStruct FRigVMFunction_MathFloatCos *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatTan ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatTan_Statics;

#define FRigVMFunction_MathFloatTan_Execute() \
	void FRigVMFunction_MathFloatTan::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_864_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatTan_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatTan;
// ********** End ScriptStruct FRigVMFunction_MathFloatTan *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatAsin **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAsin_Statics;

#define FRigVMFunction_MathFloatAsin_Execute() \
	void FRigVMFunction_MathFloatAsin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_876_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAsin_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatAsin;
// ********** End ScriptStruct FRigVMFunction_MathFloatAsin ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatAcos **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAcos_Statics;

#define FRigVMFunction_MathFloatAcos_Execute() \
	void FRigVMFunction_MathFloatAcos::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_888_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAcos_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatAcos;
// ********** End ScriptStruct FRigVMFunction_MathFloatAcos ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatAtan **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAtan_Statics;

#define FRigVMFunction_MathFloatAtan_Execute() \
	void FRigVMFunction_MathFloatAtan::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_900_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAtan_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatAtan;
// ********** End ScriptStruct FRigVMFunction_MathFloatAtan ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatAtan2 *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAtan2_Statics;

#define FRigVMFunction_MathFloatAtan2_Execute() \
	void FRigVMFunction_MathFloatAtan2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_912_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatAtan2_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatBinaryOp Super;


struct FRigVMFunction_MathFloatAtan2;
// ********** End ScriptStruct FRigVMFunction_MathFloatAtan2 ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatLawOfCosine *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLawOfCosine_Statics;

#define FRigVMFunction_MathFloatLawOfCosine_Execute() \
	void FRigVMFunction_MathFloatLawOfCosine::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float C, \
		float& AlphaAngle, \
		float& BetaAngle, \
		float& GammaAngle, \
		bool& bValid \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_924_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatLawOfCosine_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float A, \
		const float B, \
		const float C, \
		float& AlphaAngle, \
		float& BetaAngle, \
		float& GammaAngle, \
		bool& bValid \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float A = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float C = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		float& AlphaAngle = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		float& BetaAngle = *(float*)RigVMMemoryHandles[4].GetOutputData(); \
		float& GammaAngle = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		bool& bValid = *(bool*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			C, \
			AlphaAngle, \
			BetaAngle, \
			GammaAngle, \
			bValid \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatLawOfCosine;
// ********** End ScriptStruct FRigVMFunction_MathFloatLawOfCosine *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatExponential *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatExponential_Statics;

#define FRigVMFunction_MathFloatExponential_Execute() \
	void FRigVMFunction_MathFloatExponential::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_963_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatExponential_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathFloatUnaryOp Super;


struct FRigVMFunction_MathFloatExponential;
// ********** End ScriptStruct FRigVMFunction_MathFloatExponential *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatArraySum **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatArraySum_Statics;

#define FRigVMFunction_MathFloatArraySum_Execute() \
	void FRigVMFunction_MathFloatArraySum::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const float>& Array, \
		float& Sum \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_975_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatArraySum_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const float>& Array, \
		float& Sum \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<float>& Array = *(TArray<float>*)RigVMMemoryHandles[0].GetInputData(); \
		float& Sum = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Sum \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatArraySum;
// ********** End ScriptStruct FRigVMFunction_MathFloatArraySum ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathFloatArrayAverage ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathFloatArrayAverage_Statics;

#define FRigVMFunction_MathFloatArrayAverage_Execute() \
	void FRigVMFunction_MathFloatArrayAverage::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const float>& Array, \
		float& Average \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h_999_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathFloatArrayAverage_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const float>& Array, \
		float& Average \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<float>& Array = *(TArray<float>*)RigVMMemoryHandles[0].GetInputData(); \
		float& Average = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Average \
		); \
	} \
	typedef FRigVMFunction_MathFloatBase Super;


struct FRigVMFunction_MathFloatArrayAverage;
// ********** End ScriptStruct FRigVMFunction_MathFloatArrayAverage ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathFloat_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
