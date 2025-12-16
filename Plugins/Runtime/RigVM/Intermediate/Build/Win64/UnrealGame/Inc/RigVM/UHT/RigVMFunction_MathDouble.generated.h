// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathDouble.h"

#ifdef RIGVM_RigVMFunction_MathDouble_generated_h
#error "RigVMFunction_MathDouble.generated.h already included, missing '#pragma once' in RigVMFunction_MathDouble.h"
#endif
#define RIGVM_RigVMFunction_MathDouble_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleBase *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathDoubleBase;
// ********** End ScriptStruct FRigVMFunction_MathDoubleBase ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleConstant *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstant_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstant_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleConstant;
// ********** End ScriptStruct FRigVMFunction_MathDoubleConstant ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleUnaryOp **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleUnaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleUnaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleUnaryOp;
// ********** End ScriptStruct FRigVMFunction_MathDoubleUnaryOp ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleBinaryOp *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleBinaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleBinaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleBinaryOp;
// ********** End ScriptStruct FRigVMFunction_MathDoubleBinaryOp ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleBinaryAggregateOp ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleBinaryAggregateOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleBinaryAggregateOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleBinaryAggregateOp;
// ********** End ScriptStruct FRigVMFunction_MathDoubleBinaryAggregateOp **************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleMake *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMake_Statics;

#define FRigVMFunction_MathDoubleMake_Execute() \
	void FRigVMFunction_MathDoubleMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMake_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleMake;
// ********** End ScriptStruct FRigVMFunction_MathDoubleMake ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleConstPi **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstPi_Statics;

#define FRigVMFunction_MathDoubleConstPi_Execute() \
	void FRigVMFunction_MathDoubleConstPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstPi_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleConstant Super;


struct FRigVMFunction_MathDoubleConstPi;
// ********** End ScriptStruct FRigVMFunction_MathDoubleConstPi ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleConstHalfPi ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstHalfPi_Statics;

#define FRigVMFunction_MathDoubleConstHalfPi_Execute() \
	void FRigVMFunction_MathDoubleConstHalfPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstHalfPi_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleConstant Super;


struct FRigVMFunction_MathDoubleConstHalfPi;
// ********** End ScriptStruct FRigVMFunction_MathDoubleConstHalfPi ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleConstTwoPi *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstTwoPi_Statics;

#define FRigVMFunction_MathDoubleConstTwoPi_Execute() \
	void FRigVMFunction_MathDoubleConstTwoPi::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_139_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstTwoPi_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleConstant Super;


struct FRigVMFunction_MathDoubleConstTwoPi;
// ********** End ScriptStruct FRigVMFunction_MathDoubleConstTwoPi *********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleConstE ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstE_Statics;

#define FRigVMFunction_MathDoubleConstE_Execute() \
	void FRigVMFunction_MathDoubleConstE::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_151_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleConstE_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		double& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		double& Value = *(double*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathDoubleConstant Super;


struct FRigVMFunction_MathDoubleConstE;
// ********** End ScriptStruct FRigVMFunction_MathDoubleConstE *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleAdd **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAdd_Statics;

#define FRigVMFunction_MathDoubleAdd_Execute() \
	void FRigVMFunction_MathDoubleAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_163_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAdd_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryAggregateOp Super;


struct FRigVMFunction_MathDoubleAdd;
// ********** End ScriptStruct FRigVMFunction_MathDoubleAdd ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleSub **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSub_Statics;

#define FRigVMFunction_MathDoubleSub_Execute() \
	void FRigVMFunction_MathDoubleSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_175_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSub_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryOp Super;


struct FRigVMFunction_MathDoubleSub;
// ********** End ScriptStruct FRigVMFunction_MathDoubleSub ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleMul **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMul_Statics;

#define FRigVMFunction_MathDoubleMul_Execute() \
	void FRigVMFunction_MathDoubleMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_187_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryAggregateOp Super;


struct FRigVMFunction_MathDoubleMul;
// ********** End ScriptStruct FRigVMFunction_MathDoubleMul ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleDiv **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleDiv_Statics;

#define FRigVMFunction_MathDoubleDiv_Execute() \
	void FRigVMFunction_MathDoubleDiv::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_205_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleDiv_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryOp Super;


struct FRigVMFunction_MathDoubleDiv;
// ********** End ScriptStruct FRigVMFunction_MathDoubleDiv ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleMod **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMod_Statics;

#define FRigVMFunction_MathDoubleMod_Execute() \
	void FRigVMFunction_MathDoubleMod::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_222_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMod_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryOp Super;


struct FRigVMFunction_MathDoubleMod;
// ********** End ScriptStruct FRigVMFunction_MathDoubleMod ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleMin **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMin_Statics;

#define FRigVMFunction_MathDoubleMin_Execute() \
	void FRigVMFunction_MathDoubleMin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_240_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMin_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryAggregateOp Super;


struct FRigVMFunction_MathDoubleMin;
// ********** End ScriptStruct FRigVMFunction_MathDoubleMin ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleMax **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMax_Statics;

#define FRigVMFunction_MathDoubleMax_Execute() \
	void FRigVMFunction_MathDoubleMax::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_252_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleMax_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryAggregateOp Super;


struct FRigVMFunction_MathDoubleMax;
// ********** End ScriptStruct FRigVMFunction_MathDoubleMax ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoublePow **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoublePow_Statics;

#define FRigVMFunction_MathDoublePow_Execute() \
	void FRigVMFunction_MathDoublePow::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_264_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoublePow_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryOp Super;


struct FRigVMFunction_MathDoublePow;
// ********** End ScriptStruct FRigVMFunction_MathDoublePow ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleSqrt *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSqrt_Statics;

#define FRigVMFunction_MathDoubleSqrt_Execute() \
	void FRigVMFunction_MathDoubleSqrt::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_282_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSqrt_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleSqrt;
// ********** End ScriptStruct FRigVMFunction_MathDoubleSqrt ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleNegate ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleNegate_Statics;

#define FRigVMFunction_MathDoubleNegate_Execute() \
	void FRigVMFunction_MathDoubleNegate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_294_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleNegate_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleNegate;
// ********** End ScriptStruct FRigVMFunction_MathDoubleNegate *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleAbs **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAbs_Statics;

#define FRigVMFunction_MathDoubleAbs_Execute() \
	void FRigVMFunction_MathDoubleAbs::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_306_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAbs_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleAbs;
// ********** End ScriptStruct FRigVMFunction_MathDoubleAbs ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleFloor ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleFloor_Statics;

#define FRigVMFunction_MathDoubleFloor_Execute() \
	void FRigVMFunction_MathDoubleFloor::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_318_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleFloor_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleFloor;
// ********** End ScriptStruct FRigVMFunction_MathDoubleFloor **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleCeil *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleCeil_Statics;

#define FRigVMFunction_MathDoubleCeil_Execute() \
	void FRigVMFunction_MathDoubleCeil::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_345_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleCeil_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleCeil;
// ********** End ScriptStruct FRigVMFunction_MathDoubleCeil ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleRound ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleRound_Statics;

#define FRigVMFunction_MathDoubleRound_Execute() \
	void FRigVMFunction_MathDoubleRound::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_372_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleRound_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result, \
		int32& Int \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		int32& Int = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result, \
			Int \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleRound;
// ********** End ScriptStruct FRigVMFunction_MathDoubleRound **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleToInt ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleToInt_Statics;

#define FRigVMFunction_MathDoubleToInt_Execute() \
	void FRigVMFunction_MathDoubleToInt::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_399_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleToInt_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleToInt;
// ********** End ScriptStruct FRigVMFunction_MathDoubleToInt **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleToFloat **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleToFloat_Statics;

#define FRigVMFunction_MathDoubleToFloat_Execute() \
	void FRigVMFunction_MathDoubleToFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_423_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleToFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleToFloat;
// ********** End ScriptStruct FRigVMFunction_MathDoubleToFloat ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleSign *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSign_Statics;

#define FRigVMFunction_MathDoubleSign_Execute() \
	void FRigVMFunction_MathDoubleSign::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_447_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSign_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleSign;
// ********** End ScriptStruct FRigVMFunction_MathDoubleSign ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleClamp ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleClamp_Statics;

#define FRigVMFunction_MathDoubleClamp_Execute() \
	void FRigVMFunction_MathDoubleClamp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Minimum, \
		const double Maximum, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_459_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleClamp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Minimum, \
		const double Maximum, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double Minimum = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		const double Maximum = *(double*)RigVMMemoryHandles[2].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleClamp;
// ********** End ScriptStruct FRigVMFunction_MathDoubleClamp **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleLerp *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLerp_Statics;

#define FRigVMFunction_MathDoubleLerp_Execute() \
	void FRigVMFunction_MathDoubleLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double T, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_488_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double T, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		const double T = *(double*)RigVMMemoryHandles[2].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleLerp;
// ********** End ScriptStruct FRigVMFunction_MathDoubleLerp ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleRemap ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleRemap_Statics;

#define FRigVMFunction_MathDoubleRemap_Execute() \
	void FRigVMFunction_MathDoubleRemap::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double SourceMinimum, \
		const double SourceMaximum, \
		const double TargetMinimum, \
		const double TargetMaximum, \
		const bool bClamp, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_518_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleRemap_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double SourceMinimum, \
		const double SourceMaximum, \
		const double TargetMinimum, \
		const double TargetMaximum, \
		const bool bClamp, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double SourceMinimum = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		const double SourceMaximum = *(double*)RigVMMemoryHandles[2].GetInputData(); \
		const double TargetMinimum = *(double*)RigVMMemoryHandles[3].GetInputData(); \
		const double TargetMaximum = *(double*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bClamp = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[6].GetOutputData(); \
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
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleRemap;
// ********** End ScriptStruct FRigVMFunction_MathDoubleRemap **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleEquals ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleEquals_Statics;

#define FRigVMFunction_MathDoubleEquals_Execute() \
	void FRigVMFunction_MathDoubleEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_559_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleEquals;
// ********** End ScriptStruct FRigVMFunction_MathDoubleEquals *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleNotEquals ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleNotEquals_Statics;

#define FRigVMFunction_MathDoubleNotEquals_Execute() \
	void FRigVMFunction_MathDoubleNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_588_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleNotEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleNotEquals;
// ********** End ScriptStruct FRigVMFunction_MathDoubleNotEquals **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleGreater **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleGreater_Statics;

#define FRigVMFunction_MathDoubleGreater_Execute() \
	void FRigVMFunction_MathDoubleGreater::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_617_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleGreater_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleGreater;
// ********** End ScriptStruct FRigVMFunction_MathDoubleGreater ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleLess *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLess_Statics;

#define FRigVMFunction_MathDoubleLess_Execute() \
	void FRigVMFunction_MathDoubleLess::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_644_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLess_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleLess;
// ********** End ScriptStruct FRigVMFunction_MathDoubleLess ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleGreaterEqual *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleGreaterEqual_Statics;

#define FRigVMFunction_MathDoubleGreaterEqual_Execute() \
	void FRigVMFunction_MathDoubleGreaterEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_671_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleGreaterEqual_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleGreaterEqual;
// ********** End ScriptStruct FRigVMFunction_MathDoubleGreaterEqual *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleLessEqual ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLessEqual_Statics;

#define FRigVMFunction_MathDoubleLessEqual_Execute() \
	void FRigVMFunction_MathDoubleLessEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_698_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLessEqual_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleLessEqual;
// ********** End ScriptStruct FRigVMFunction_MathDoubleLessEqual **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleIsNearlyZero *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyZero_Statics;

#define FRigVMFunction_MathDoubleIsNearlyZero_Execute() \
	void FRigVMFunction_MathDoubleIsNearlyZero::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Tolerance, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_725_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyZero_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		const double Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double Tolerance = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Tolerance, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleIsNearlyZero;
// ********** End ScriptStruct FRigVMFunction_MathDoubleIsNearlyZero *******************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleIsNearlyEqual ****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyEqual_Statics;

#define FRigVMFunction_MathDoubleIsNearlyEqual_Execute() \
	void FRigVMFunction_MathDoubleIsNearlyEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double Tolerance, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_752_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleIsNearlyEqual_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double Tolerance, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		const double Tolerance = *(double*)RigVMMemoryHandles[2].GetInputData(); \
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
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleIsNearlyEqual;
// ********** End ScriptStruct FRigVMFunction_MathDoubleIsNearlyEqual ******************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleDeg **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleDeg_Statics;

#define FRigVMFunction_MathDoubleDeg_Execute() \
	void FRigVMFunction_MathDoubleDeg::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_782_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleDeg_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleDeg;
// ********** End ScriptStruct FRigVMFunction_MathDoubleDeg ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleRad **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleRad_Statics;

#define FRigVMFunction_MathDoubleRad_Execute() \
	void FRigVMFunction_MathDoubleRad::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_794_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleRad_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleRad;
// ********** End ScriptStruct FRigVMFunction_MathDoubleRad ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleSin **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSin_Statics;

#define FRigVMFunction_MathDoubleSin_Execute() \
	void FRigVMFunction_MathDoubleSin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_806_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleSin_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleSin;
// ********** End ScriptStruct FRigVMFunction_MathDoubleSin ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleCos **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleCos_Statics;

#define FRigVMFunction_MathDoubleCos_Execute() \
	void FRigVMFunction_MathDoubleCos::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_818_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleCos_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleCos;
// ********** End ScriptStruct FRigVMFunction_MathDoubleCos ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleTan **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleTan_Statics;

#define FRigVMFunction_MathDoubleTan_Execute() \
	void FRigVMFunction_MathDoubleTan::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_830_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleTan_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleTan;
// ********** End ScriptStruct FRigVMFunction_MathDoubleTan ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleAsin *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAsin_Statics;

#define FRigVMFunction_MathDoubleAsin_Execute() \
	void FRigVMFunction_MathDoubleAsin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_842_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAsin_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleAsin;
// ********** End ScriptStruct FRigVMFunction_MathDoubleAsin ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleAcos *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAcos_Statics;

#define FRigVMFunction_MathDoubleAcos_Execute() \
	void FRigVMFunction_MathDoubleAcos::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_854_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAcos_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleAcos;
// ********** End ScriptStruct FRigVMFunction_MathDoubleAcos ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleAtan *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAtan_Statics;

#define FRigVMFunction_MathDoubleAtan_Execute() \
	void FRigVMFunction_MathDoubleAtan::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_866_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAtan_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleAtan;
// ********** End ScriptStruct FRigVMFunction_MathDoubleAtan ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleAtan2 ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAtan2_Statics;

#define FRigVMFunction_MathDoubleAtan2_Execute() \
	void FRigVMFunction_MathDoubleAtan2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_878_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleAtan2_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBinaryOp Super;


struct FRigVMFunction_MathDoubleAtan2;
// ********** End ScriptStruct FRigVMFunction_MathDoubleAtan2 **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleLawOfCosine ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLawOfCosine_Statics;

#define FRigVMFunction_MathDoubleLawOfCosine_Execute() \
	void FRigVMFunction_MathDoubleLawOfCosine::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double C, \
		double& AlphaAngle, \
		double& BetaAngle, \
		double& GammaAngle, \
		bool& bValid \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_890_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleLawOfCosine_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double A, \
		const double B, \
		const double C, \
		double& AlphaAngle, \
		double& BetaAngle, \
		double& GammaAngle, \
		bool& bValid \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double A = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		const double B = *(double*)RigVMMemoryHandles[1].GetInputData(); \
		const double C = *(double*)RigVMMemoryHandles[2].GetInputData(); \
		double& AlphaAngle = *(double*)RigVMMemoryHandles[3].GetOutputData(); \
		double& BetaAngle = *(double*)RigVMMemoryHandles[4].GetOutputData(); \
		double& GammaAngle = *(double*)RigVMMemoryHandles[5].GetOutputData(); \
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
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleLawOfCosine;
// ********** End ScriptStruct FRigVMFunction_MathDoubleLawOfCosine ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleExponential ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleExponential_Statics;

#define FRigVMFunction_MathDoubleExponential_Execute() \
	void FRigVMFunction_MathDoubleExponential::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_929_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleExponential_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathDoubleUnaryOp Super;


struct FRigVMFunction_MathDoubleExponential;
// ********** End ScriptStruct FRigVMFunction_MathDoubleExponential ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleArraySum *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleArraySum_Statics;

#define FRigVMFunction_MathDoubleArraySum_Execute() \
	void FRigVMFunction_MathDoubleArraySum::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const double>& Array, \
		double& Sum \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_941_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleArraySum_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const double>& Array, \
		double& Sum \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<double>& Array = *(TArray<double>*)RigVMMemoryHandles[0].GetInputData(); \
		double& Sum = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Sum \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleArraySum;
// ********** End ScriptStruct FRigVMFunction_MathDoubleArraySum ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathDoubleArrayAverage *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleArrayAverage_Statics;

#define FRigVMFunction_MathDoubleArrayAverage_Execute() \
	void FRigVMFunction_MathDoubleArrayAverage::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const double>& Array, \
		double& Average \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h_965_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathDoubleArrayAverage_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const double>& Array, \
		double& Average \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<double>& Array = *(TArray<double>*)RigVMMemoryHandles[0].GetInputData(); \
		double& Average = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Average \
		); \
	} \
	typedef FRigVMFunction_MathDoubleBase Super;


struct FRigVMFunction_MathDoubleArrayAverage;
// ********** End ScriptStruct FRigVMFunction_MathDoubleArrayAverage *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathDouble_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
