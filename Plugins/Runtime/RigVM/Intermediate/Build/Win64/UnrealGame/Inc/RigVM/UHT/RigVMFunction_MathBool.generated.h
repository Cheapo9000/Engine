// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathBool.h"

#ifdef RIGVM_RigVMFunction_MathBool_generated_h
#error "RigVMFunction_MathBool.generated.h already included, missing '#pragma once' in RigVMFunction_MathBool.h"
#endif
#define RIGVM_RigVMFunction_MathBool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathBoolBase ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathBoolBase;
// ********** End ScriptStruct FRigVMFunction_MathBoolBase *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolConstant ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstant_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolConstant;
// ********** End ScriptStruct FRigVMFunction_MathBoolConstant *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolUnaryOp ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolUnaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolUnaryOp;
// ********** End ScriptStruct FRigVMFunction_MathBoolUnaryOp **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolBinaryOp ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolBinaryOp;
// ********** End ScriptStruct FRigVMFunction_MathBoolBinaryOp *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolBinaryAggregateOp **************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolBinaryAggregateOp_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolBinaryAggregateOp;
// ********** End ScriptStruct FRigVMFunction_MathBoolBinaryAggregateOp ****************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolMake ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics;

#define FRigVMFunction_MathBoolMake_Execute() \
	void FRigVMFunction_MathBoolMake::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolMake_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolMake;
// ********** End ScriptStruct FRigVMFunction_MathBoolMake *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolConstTrue **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics;

#define FRigVMFunction_MathBoolConstTrue_Execute() \
	void FRigVMFunction_MathBoolConstTrue::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstTrue_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathBoolConstant Super;


struct FRigVMFunction_MathBoolConstTrue;
// ********** End ScriptStruct FRigVMFunction_MathBoolConstTrue ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolConstFalse *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics;

#define FRigVMFunction_MathBoolConstFalse_Execute() \
	void FRigVMFunction_MathBoolConstFalse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolConstFalse_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		bool& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value \
		); \
	} \
	typedef FRigVMFunction_MathBoolConstant Super;


struct FRigVMFunction_MathBoolConstFalse;
// ********** End ScriptStruct FRigVMFunction_MathBoolConstFalse ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolNot ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics;

#define FRigVMFunction_MathBoolNot_Execute() \
	void FRigVMFunction_MathBoolNot::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNot_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolUnaryOp Super;


struct FRigVMFunction_MathBoolNot;
// ********** End ScriptStruct FRigVMFunction_MathBoolNot ******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolAnd ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics;

#define FRigVMFunction_MathBoolAnd_Execute() \
	void FRigVMFunction_MathBoolAnd::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_160_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolAnd_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBinaryAggregateOp Super;


struct FRigVMFunction_MathBoolAnd;
// ********** End ScriptStruct FRigVMFunction_MathBoolAnd ******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolNand ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics;

#define FRigVMFunction_MathBoolNand_Execute() \
	void FRigVMFunction_MathBoolNand::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBinaryOp Super;


struct FRigVMFunction_MathBoolNand;
// ********** End ScriptStruct FRigVMFunction_MathBoolNand *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolNand2 **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics;

#define FRigVMFunction_MathBoolNand2_Execute() \
	void FRigVMFunction_MathBoolNand2::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_187_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNand2_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBinaryOp Super;


struct FRigVMFunction_MathBoolNand2;
// ********** End ScriptStruct FRigVMFunction_MathBoolNand2 ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolOr *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics;

#define FRigVMFunction_MathBoolOr_Execute() \
	void FRigVMFunction_MathBoolOr::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_199_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOr_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBinaryAggregateOp Super;


struct FRigVMFunction_MathBoolOr;
// ********** End ScriptStruct FRigVMFunction_MathBoolOr *******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolEquals *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics;

#define FRigVMFunction_MathBoolEquals_Execute() \
	void FRigVMFunction_MathBoolEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_211_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolEquals;
// ********** End ScriptStruct FRigVMFunction_MathBoolEquals ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolNotEquals **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics;

#define FRigVMFunction_MathBoolNotEquals_Execute() \
	void FRigVMFunction_MathBoolNotEquals::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_240_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolNotEquals_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool A = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolNotEquals;
// ********** End ScriptStruct FRigVMFunction_MathBoolNotEquals ************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolToggled ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics;

#define FRigVMFunction_MathBoolToggled_Execute() \
	void FRigVMFunction_MathBoolToggled::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		bool& Toggled, \
		bool& Initialized, \
		bool& LastValue \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_269_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToggled_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		bool& Toggled, \
		bool& Initialized, \
		bool& LastValue \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Toggled = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		bool& Initialized = *(bool*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Toggled, \
			Initialized, \
			LastValue \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolToggled;
// ********** End ScriptStruct FRigVMFunction_MathBoolToggled **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolFlipFlop ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics;

#define FRigVMFunction_MathBoolFlipFlop_Execute() \
	void FRigVMFunction_MathBoolFlipFlop::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool StartValue, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_297_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolFlipFlop_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool StartValue, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool StartValue = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const float Duration = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			StartValue, \
			Duration, \
			Result, \
			LastValue, \
			TimeLeft \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolFlipFlop;
// ********** End ScriptStruct FRigVMFunction_MathBoolFlipFlop *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolOnce ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics;

#define FRigVMFunction_MathBoolOnce_Execute() \
	void FRigVMFunction_MathBoolOnce::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_335_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolOnce_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const float Duration, \
		bool& Result, \
		bool& LastValue, \
		float& TimeLeft \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Duration = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Duration, \
			Result, \
			LastValue, \
			TimeLeft \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolOnce;
// ********** End ScriptStruct FRigVMFunction_MathBoolOnce *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolToFloat ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics;

#define FRigVMFunction_MathBoolToFloat_Execute() \
	void FRigVMFunction_MathBoolToFloat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		float& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_369_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToFloat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		float& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolToFloat;
// ********** End ScriptStruct FRigVMFunction_MathBoolToFloat **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoolToInteger **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics;

#define FRigVMFunction_MathBoolToInteger_Execute() \
	void FRigVMFunction_MathBoolToInteger::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		int32& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h_392_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoolToInteger_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const bool Value, \
		int32& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoolBase Super;


struct FRigVMFunction_MathBoolToInteger;
// ********** End ScriptStruct FRigVMFunction_MathBoolToInteger ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
