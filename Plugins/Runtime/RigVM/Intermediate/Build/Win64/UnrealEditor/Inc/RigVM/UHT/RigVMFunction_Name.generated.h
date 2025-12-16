// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/RigVMFunction_Name.h"

#ifdef RIGVM_RigVMFunction_Name_generated_h
#error "RigVMFunction_Name.generated.h already included, missing '#pragma once' in RigVMFunction_Name.h"
#endif
#define RIGVM_RigVMFunction_Name_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_NameBase *******************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_NameBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_NameBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMStruct Super;


struct FRigVMFunction_NameBase;
// ********** End ScriptStruct FRigVMFunction_NameBase *********************************************

// ********** Begin ScriptStruct FRigVMFunction_NameConcat *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics;

#define FRigVMFunction_NameConcat_Execute() \
	void FRigVMFunction_NameConcat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& A, \
		const FName& B, \
		FName& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_NameConcat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& A, \
		const FName& B, \
		FName& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& A = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& B = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		FName& Result = *(FName*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


struct FRigVMFunction_NameConcat;
// ********** End ScriptStruct FRigVMFunction_NameConcat *******************************************

// ********** Begin ScriptStruct FRigVMFunction_NameTruncate ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics;

#define FRigVMFunction_NameTruncate_Execute() \
	void FRigVMFunction_NameTruncate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FName& Remainder, \
		FName& Chopped \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_NameTruncate_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FName& Remainder, \
		FName& Chopped \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		const bool FromEnd = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FName& Remainder = *(FName*)RigVMMemoryHandles[3].GetOutputData(); \
		FName& Chopped = *(FName*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Count, \
			FromEnd, \
			Remainder, \
			Chopped \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


struct FRigVMFunction_NameTruncate;
// ********** End ScriptStruct FRigVMFunction_NameTruncate *****************************************

// ********** Begin ScriptStruct FRigVMFunction_NameReplace ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics;

#define FRigVMFunction_NameReplace_Execute() \
	void FRigVMFunction_NameReplace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Old, \
		const FName& New, \
		FName& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_NameReplace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Old, \
		const FName& New, \
		FName& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		FName& Result = *(FName*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Old, \
			New, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


struct FRigVMFunction_NameReplace;
// ********** End ScriptStruct FRigVMFunction_NameReplace ******************************************

// ********** Begin ScriptStruct FRigVMFunction_EndsWith *******************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics;

#define FRigVMFunction_EndsWith_Execute() \
	void FRigVMFunction_EndsWith::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Ending, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_115_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_EndsWith_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Ending, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Ending = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Ending, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


struct FRigVMFunction_EndsWith;
// ********** End ScriptStruct FRigVMFunction_EndsWith *********************************************

// ********** Begin ScriptStruct FRigVMFunction_StartsWith *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics;

#define FRigVMFunction_StartsWith_Execute() \
	void FRigVMFunction_StartsWith::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Start, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StartsWith_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Start, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Start = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Start, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


struct FRigVMFunction_StartsWith;
// ********** End ScriptStruct FRigVMFunction_StartsWith *******************************************

// ********** Begin ScriptStruct FRigVMFunction_Contains *******************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics;

#define FRigVMFunction_Contains_Execute() \
	void FRigVMFunction_Contains::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Search, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_Contains_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		const FName& Search, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Search = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Search, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


struct FRigVMFunction_Contains;
// ********** End ScriptStruct FRigVMFunction_Contains *********************************************

// ********** Begin ScriptStruct FRigVMFunction_IsNone *********************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_IsNone_Statics;

#define FRigVMFunction_IsNone_Execute() \
	void FRigVMFunction_IsNone::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_196_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_IsNone_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


struct FRigVMFunction_IsNone;
// ********** End ScriptStruct FRigVMFunction_IsNone ***********************************************

// ********** Begin ScriptStruct FRigVMFunction_IsNameValid ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_IsNameValid_Statics;

#define FRigVMFunction_IsNameValid_Execute() \
	void FRigVMFunction_IsNameValid::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Value, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_220_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_IsNameValid_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Value, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Value = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


struct FRigVMFunction_IsNameValid;
// ********** End ScriptStruct FRigVMFunction_IsNameValid ******************************************

// ********** Begin ScriptStruct FRigVMFunction_GetNameNumericSuffix *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_GetNameNumericSuffix_Statics;

#define FRigVMFunction_GetNameNumericSuffix_Execute() \
	void FRigVMFunction_GetNameNumericSuffix::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		int32& Suffix, \
		bool& Success \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h_244_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_GetNameNumericSuffix_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FName& Name, \
		int32& Suffix, \
		bool& Success \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Suffix = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		bool& Success = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Suffix, \
			Success \
		); \
	} \
	typedef FRigVMFunction_NameBase Super;


struct FRigVMFunction_GetNameNumericSuffix;
// ********** End ScriptStruct FRigVMFunction_GetNameNumericSuffix *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_Name_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
