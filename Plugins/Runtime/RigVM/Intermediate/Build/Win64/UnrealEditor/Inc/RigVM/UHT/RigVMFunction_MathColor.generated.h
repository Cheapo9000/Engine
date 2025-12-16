// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathColor.h"

#ifdef RIGVM_RigVMFunction_MathColor_generated_h
#error "RigVMFunction_MathColor.generated.h already included, missing '#pragma once' in RigVMFunction_MathColor.h"
#endif
#define RIGVM_RigVMFunction_MathColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathColorBase **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathColorBase;
// ********** End ScriptStruct FRigVMFunction_MathColorBase ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathColorBinaryOp **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathColorBase Super;


struct FRigVMFunction_MathColorBinaryOp;
// ********** End ScriptStruct FRigVMFunction_MathColorBinaryOp ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathColorBinaryAggregateOp *************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorBinaryAggregateOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathColorBase Super;


struct FRigVMFunction_MathColorBinaryAggregateOp;
// ********** End ScriptStruct FRigVMFunction_MathColorBinaryAggregateOp ***************************

// ********** Begin ScriptStruct FRigVMFunction_MathColorMake **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics;

#define FRigVMFunction_MathColorMake_Execute() \
	void FRigVMFunction_MathColorMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float R, \
		const float G, \
		const float B, \
		const float A, \
		FLinearColor& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorMake_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float R, \
		const float G, \
		const float B, \
		const float A, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float R = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float G = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float B = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float A = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			R, \
			G, \
			B, \
			A, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBase Super;


struct FRigVMFunction_MathColorMake;
// ********** End ScriptStruct FRigVMFunction_MathColorMake ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathColorFromFloat *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics;

#define FRigVMFunction_MathColorFromFloat_Execute() \
	void FRigVMFunction_MathColorFromFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		FLinearColor& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_96_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Value, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBase Super;


struct FRigVMFunction_MathColorFromFloat;
// ********** End ScriptStruct FRigVMFunction_MathColorFromFloat ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathColorFromDouble ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics;

#define FRigVMFunction_MathColorFromDouble_Execute() \
	void FRigVMFunction_MathColorFromDouble::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		FLinearColor& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_119_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorFromDouble_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const double Value, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const double Value = *(double*)RigVMMemoryHandles[0].GetInputData(); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBase Super;


struct FRigVMFunction_MathColorFromDouble;
// ********** End ScriptStruct FRigVMFunction_MathColorFromDouble **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathColorAdd ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd_Statics;

#define FRigVMFunction_MathColorAdd_Execute() \
	void FRigVMFunction_MathColorAdd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorAdd_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBinaryAggregateOp Super;


struct FRigVMFunction_MathColorAdd;
// ********** End ScriptStruct FRigVMFunction_MathColorAdd *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathColorSub ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub_Statics;

#define FRigVMFunction_MathColorSub_Execute() \
	void FRigVMFunction_MathColorSub::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_154_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorSub_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBinaryOp Super;


struct FRigVMFunction_MathColorSub;
// ********** End ScriptStruct FRigVMFunction_MathColorSub *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathColorMul ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics;

#define FRigVMFunction_MathColorMul_Execute() \
	void FRigVMFunction_MathColorMul::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorMul_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBinaryAggregateOp Super;


struct FRigVMFunction_MathColorMul;
// ********** End ScriptStruct FRigVMFunction_MathColorMul *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathColorLerp **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics;

#define FRigVMFunction_MathColorLerp_Execute() \
	void FRigVMFunction_MathColorLerp::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		const float T, \
		FLinearColor& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h_183_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathColorLerp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		const float T, \
		FLinearColor& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float T = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			T, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathColorBase Super;


struct FRigVMFunction_MathColorLerp;
// ********** End ScriptStruct FRigVMFunction_MathColorLerp ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathColor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
