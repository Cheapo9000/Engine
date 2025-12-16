// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathInt.h"

#ifdef RIGVM_RigVMFunction_MathInt_generated_h
#error "RigVMFunction_MathInt.generated.h already included, missing '#pragma once' in RigVMFunction_MathInt.h"
#endif
#define RIGVM_RigVMFunction_MathInt_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathIntBase ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathIntBase;
// ********** End ScriptStruct FRigVMFunction_MathIntBase ******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntUnaryOp *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntUnaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntUnaryOp;
// ********** End ScriptStruct FRigVMFunction_MathIntUnaryOp ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntBinaryOp ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntBinaryOp;
// ********** End ScriptStruct FRigVMFunction_MathIntBinaryOp **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntBinaryAggregateOp ***************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntBinaryAggregateOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntBinaryAggregateOp;
// ********** End ScriptStruct FRigVMFunction_MathIntBinaryAggregateOp *****************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntMake ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics;

#define FRigVMFunction_MathIntMake_Execute() \
	void FRigVMFunction_MathIntMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		int32& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntMake_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		int32& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		int32& Value = *(int32*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntMake;
// ********** End ScriptStruct FRigVMFunction_MathIntMake ******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntAdd *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics;

#define FRigVMFunction_MathIntAdd_Execute() \
	void FRigVMFunction_MathIntAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_100_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntAdd_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryAggregateOp Super;


struct FRigVMFunction_MathIntAdd;
// ********** End ScriptStruct FRigVMFunction_MathIntAdd *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntSub *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics;

#define FRigVMFunction_MathIntSub_Execute() \
	void FRigVMFunction_MathIntSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntSub_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryOp Super;


struct FRigVMFunction_MathIntSub;
// ********** End ScriptStruct FRigVMFunction_MathIntSub *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntMul *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics;

#define FRigVMFunction_MathIntMul_Execute() \
	void FRigVMFunction_MathIntMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryAggregateOp Super;


struct FRigVMFunction_MathIntMul;
// ********** End ScriptStruct FRigVMFunction_MathIntMul *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntDiv *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics;

#define FRigVMFunction_MathIntDiv_Execute() \
	void FRigVMFunction_MathIntDiv::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntDiv_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryOp Super;


struct FRigVMFunction_MathIntDiv;
// ********** End ScriptStruct FRigVMFunction_MathIntDiv *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntMod *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics;

#define FRigVMFunction_MathIntMod_Execute() \
	void FRigVMFunction_MathIntMod::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_159_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntMod_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryOp Super;


struct FRigVMFunction_MathIntMod;
// ********** End ScriptStruct FRigVMFunction_MathIntMod *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntMin *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics;

#define FRigVMFunction_MathIntMin_Execute() \
	void FRigVMFunction_MathIntMin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_177_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntMin_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryAggregateOp Super;


struct FRigVMFunction_MathIntMin;
// ********** End ScriptStruct FRigVMFunction_MathIntMin *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntMax *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics;

#define FRigVMFunction_MathIntMax_Execute() \
	void FRigVMFunction_MathIntMax::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_189_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntMax_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryAggregateOp Super;


struct FRigVMFunction_MathIntMax;
// ********** End ScriptStruct FRigVMFunction_MathIntMax *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntPow *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics;

#define FRigVMFunction_MathIntPow_Execute() \
	void FRigVMFunction_MathIntPow::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBinaryOp Super;


struct FRigVMFunction_MathIntPow;
// ********** End ScriptStruct FRigVMFunction_MathIntPow *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntNegate **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics;

#define FRigVMFunction_MathIntNegate_Execute() \
	void FRigVMFunction_MathIntNegate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_219_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntNegate_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntUnaryOp Super;


struct FRigVMFunction_MathIntNegate;
// ********** End ScriptStruct FRigVMFunction_MathIntNegate ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntAbs *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics;

#define FRigVMFunction_MathIntAbs_Execute() \
	void FRigVMFunction_MathIntAbs::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_231_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntAbs_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntUnaryOp Super;


struct FRigVMFunction_MathIntAbs;
// ********** End ScriptStruct FRigVMFunction_MathIntAbs *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntToFloat *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics;

#define FRigVMFunction_MathIntToFloat_Execute() \
	void FRigVMFunction_MathIntToFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_243_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntToFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntToFloat;
// ********** End ScriptStruct FRigVMFunction_MathIntToFloat ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntToDouble ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics;

#define FRigVMFunction_MathIntToDouble_Execute() \
	void FRigVMFunction_MathIntToDouble::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		double& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_267_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntToDouble_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		double& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		double& Result = *(double*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntToDouble;
// ********** End ScriptStruct FRigVMFunction_MathIntToDouble **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntSign ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics;

#define FRigVMFunction_MathIntSign_Execute() \
	void FRigVMFunction_MathIntSign::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_291_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntSign_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntUnaryOp Super;


struct FRigVMFunction_MathIntSign;
// ********** End ScriptStruct FRigVMFunction_MathIntSign ******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntClamp ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics;

#define FRigVMFunction_MathIntClamp_Execute() \
	void FRigVMFunction_MathIntClamp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		const int32 Minimum, \
		const int32 Maximum, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_303_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		const int32 Minimum, \
		const int32 Maximum, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 Minimum = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		const int32 Maximum = *(int32*)RigVMMemoryHandles[2].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Minimum, \
			Maximum, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntClamp;
// ********** End ScriptStruct FRigVMFunction_MathIntClamp *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntEquals **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics;

#define FRigVMFunction_MathIntEquals_Execute() \
	void FRigVMFunction_MathIntEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_332_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntEquals;
// ********** End ScriptStruct FRigVMFunction_MathIntEquals ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntNotEquals ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics;

#define FRigVMFunction_MathIntNotEquals_Execute() \
	void FRigVMFunction_MathIntNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_361_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntNotEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntNotEquals;
// ********** End ScriptStruct FRigVMFunction_MathIntNotEquals *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntGreater *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics;

#define FRigVMFunction_MathIntGreater_Execute() \
	void FRigVMFunction_MathIntGreater::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_390_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreater_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntGreater;
// ********** End ScriptStruct FRigVMFunction_MathIntGreater ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntLess ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics;

#define FRigVMFunction_MathIntLess_Execute() \
	void FRigVMFunction_MathIntLess::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_417_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntLess_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntLess;
// ********** End ScriptStruct FRigVMFunction_MathIntLess ******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntGreaterEqual ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics;

#define FRigVMFunction_MathIntGreaterEqual_Execute() \
	void FRigVMFunction_MathIntGreaterEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_444_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntGreaterEqual_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntGreaterEqual;
// ********** End ScriptStruct FRigVMFunction_MathIntGreaterEqual **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntLessEqual ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics;

#define FRigVMFunction_MathIntLessEqual_Execute() \
	void FRigVMFunction_MathIntLessEqual::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_471_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntLessEqual_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntLessEqual;
// ********** End ScriptStruct FRigVMFunction_MathIntLessEqual *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntArraySum ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics;

#define FRigVMFunction_MathIntArraySum_Execute() \
	void FRigVMFunction_MathIntArraySum::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const int32>& Array, \
		int32& Sum \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_498_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntArraySum_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const int32>& Array, \
		int32& Sum \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<int32>& Array = *(TArray<int32>*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Sum = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Sum \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntArraySum;
// ********** End ScriptStruct FRigVMFunction_MathIntArraySum **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntArrayAverage ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics;

#define FRigVMFunction_MathIntArrayAverage_Execute() \
	void FRigVMFunction_MathIntArrayAverage::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const int32>& Array, \
		int32& Average \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_523_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntArrayAverage_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const int32>& Array, \
		int32& Average \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<int32>& Array = *(TArray<int32>*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Average = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Average \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntArrayAverage;
// ********** End ScriptStruct FRigVMFunction_MathIntArrayAverage **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntToString ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntToString_Statics;

#define FRigVMFunction_MathIntToString_Execute() \
	void FRigVMFunction_MathIntToString::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Number, \
		const int32 PaddedSize, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_547_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntToString_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Number, \
		const int32 PaddedSize, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Number = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 PaddedSize = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Number, \
			PaddedSize, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntToString;
// ********** End ScriptStruct FRigVMFunction_MathIntToString **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathIntToName **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathIntToName_Statics;

#define FRigVMFunction_MathIntToName_Execute() \
	void FRigVMFunction_MathIntToName::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Number, \
		const int32 PaddedSize, \
		FName& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h_578_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathIntToName_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Number, \
		const int32 PaddedSize, \
		FName& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Number = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 PaddedSize = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		FName& Result = *(FName*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Number, \
			PaddedSize, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathIntBase Super;


struct FRigVMFunction_MathIntToName;
// ********** End ScriptStruct FRigVMFunction_MathIntToName ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathInt_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
