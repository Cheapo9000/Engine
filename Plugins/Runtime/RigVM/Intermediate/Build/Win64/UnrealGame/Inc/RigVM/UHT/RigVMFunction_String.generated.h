// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/RigVMFunction_String.h"

#ifdef RIGVM_RigVMFunction_String_generated_h
#error "RigVMFunction_String.generated.h already included, missing '#pragma once' in RigVMFunction_String.h"
#endif
#define RIGVM_RigVMFunction_String_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_StringBase *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMStruct Super;


struct FRigVMFunction_StringBase;
// ********** End ScriptStruct FRigVMFunction_StringBase *******************************************

// ********** Begin ScriptStruct FRigVMFunction_StringConcat ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics;

#define FRigVMFunction_StringConcat_Execute() \
	void FRigVMFunction_StringConcat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& A, \
		const FString& B, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringConcat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& A, \
		const FString& B, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& A = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& B = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringConcat;
// ********** End ScriptStruct FRigVMFunction_StringConcat *****************************************

// ********** Begin ScriptStruct FRigVMFunction_StringTruncate *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics;

#define FRigVMFunction_StringTruncate_Execute() \
	void FRigVMFunction_StringTruncate::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FString& Remainder, \
		FString& Chopped \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringTruncate_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FString& Remainder, \
		FString& Chopped \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		const bool FromEnd = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FString& Remainder = *(FString*)RigVMMemoryHandles[3].GetOutputData(); \
		FString& Chopped = *(FString*)RigVMMemoryHandles[4].GetOutputData(); \
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
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringTruncate;
// ********** End ScriptStruct FRigVMFunction_StringTruncate ***************************************

// ********** Begin ScriptStruct FRigVMFunction_StringReplace **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics;

#define FRigVMFunction_StringReplace_Execute() \
	void FRigVMFunction_StringReplace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Old, \
		const FString& New, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringReplace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Old, \
		const FString& New, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Old = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		const FString& New = *(FString*)RigVMMemoryHandles[2].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Old, \
			New, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringReplace;
// ********** End ScriptStruct FRigVMFunction_StringReplace ****************************************

// ********** Begin ScriptStruct FRigVMFunction_StringEndsWith *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics;

#define FRigVMFunction_StringEndsWith_Execute() \
	void FRigVMFunction_StringEndsWith::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Ending, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringEndsWith_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Ending, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Ending = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Ending, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringEndsWith;
// ********** End ScriptStruct FRigVMFunction_StringEndsWith ***************************************

// ********** Begin ScriptStruct FRigVMFunction_StringStartsWith ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics;

#define FRigVMFunction_StringStartsWith_Execute() \
	void FRigVMFunction_StringStartsWith::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Start, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_141_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Start, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Start = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Start, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringStartsWith;
// ********** End ScriptStruct FRigVMFunction_StringStartsWith *************************************

// ********** Begin ScriptStruct FRigVMFunction_StringContains *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics;

#define FRigVMFunction_StringContains_Execute() \
	void FRigVMFunction_StringContains::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Search, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_168_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringContains_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Name, \
		const FString& Search, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Name = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Search = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Name, \
			Search, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringContains;
// ********** End ScriptStruct FRigVMFunction_StringContains ***************************************

// ********** Begin ScriptStruct FRigVMFunction_StringLength ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics;

#define FRigVMFunction_StringLength_Execute() \
	void FRigVMFunction_StringLength::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		int32& Length \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_195_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringLength_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		int32& Length \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Length = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Length \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringLength;
// ********** End ScriptStruct FRigVMFunction_StringLength *****************************************

// ********** Begin ScriptStruct FRigVMFunction_StringTrimWhitespace *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics;

#define FRigVMFunction_StringTrimWhitespace_Execute() \
	void FRigVMFunction_StringTrimWhitespace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_219_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringTrimWhitespace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringTrimWhitespace;
// ********** End ScriptStruct FRigVMFunction_StringTrimWhitespace *********************************

// ********** Begin ScriptStruct FRigVMFunction_StringToUppercase **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics;

#define FRigVMFunction_StringToUppercase_Execute() \
	void FRigVMFunction_StringToUppercase::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_242_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringToUppercase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringToUppercase;
// ********** End ScriptStruct FRigVMFunction_StringToUppercase ************************************

// ********** Begin ScriptStruct FRigVMFunction_StringToLowercase **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics;

#define FRigVMFunction_StringToLowercase_Execute() \
	void FRigVMFunction_StringToLowercase::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringToLowercase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringToLowercase;
// ********** End ScriptStruct FRigVMFunction_StringToLowercase ************************************

// ********** Begin ScriptStruct FRigVMFunction_StringReverse **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics;

#define FRigVMFunction_StringReverse_Execute() \
	void FRigVMFunction_StringReverse::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Reverse \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_288_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringReverse_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		FString& Reverse \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		FString& Reverse = *(FString*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Reverse \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringReverse;
// ********** End ScriptStruct FRigVMFunction_StringReverse ****************************************

// ********** Begin ScriptStruct FRigVMFunction_StringLeft *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics;

#define FRigVMFunction_StringLeft_Execute() \
	void FRigVMFunction_StringLeft::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_311_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringLeft_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Count, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringLeft;
// ********** End ScriptStruct FRigVMFunction_StringLeft *******************************************

// ********** Begin ScriptStruct FRigVMFunction_StringRight ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics;

#define FRigVMFunction_StringRight_Execute() \
	void FRigVMFunction_StringRight::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_338_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringRight_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Count, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Count, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringRight;
// ********** End ScriptStruct FRigVMFunction_StringRight ******************************************

// ********** Begin ScriptStruct FRigVMFunction_StringMiddle ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics;

#define FRigVMFunction_StringMiddle_Execute() \
	void FRigVMFunction_StringMiddle::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Start, \
		const int32 Count, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_365_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringMiddle_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const int32 Start, \
		const int32 Count, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 Start = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		const int32 Count = *(int32*)RigVMMemoryHandles[2].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Start, \
			Count, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringMiddle;
// ********** End ScriptStruct FRigVMFunction_StringMiddle *****************************************

// ********** Begin ScriptStruct FRigVMFunction_StringFind *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics;

#define FRigVMFunction_StringFind_Execute() \
	void FRigVMFunction_StringFind::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const FString& Search, \
		bool& Found, \
		int32& Index \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_398_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringFind_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const FString& Search, \
		bool& Found, \
		int32& Index \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Search = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Found = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		int32& Index = *(int32*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Search, \
			Found, \
			Index \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringFind;
// ********** End ScriptStruct FRigVMFunction_StringFind *******************************************

// ********** Begin ScriptStruct FRigVMFunction_StringSplit ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics;

#define FRigVMFunction_StringSplit_Execute() \
	void FRigVMFunction_StringSplit::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const FString& Separator, \
		TArray<FString>& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_429_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringSplit_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const FString& Separator, \
		TArray<FString>& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Separator = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FString>& Result = *(TArray<FString>*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Separator, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringSplit;
// ********** End ScriptStruct FRigVMFunction_StringSplit ******************************************

// ********** Begin ScriptStruct FRigVMFunction_StringJoin *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics;

#define FRigVMFunction_StringJoin_Execute() \
	void FRigVMFunction_StringJoin::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FString>& Values, \
		const FString& Separator, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_455_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringJoin_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FString>& Values, \
		const FString& Separator, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FString>& Values = *(TArray<FString>*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Separator = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Values, \
			Separator, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringJoin;
// ********** End ScriptStruct FRigVMFunction_StringJoin *******************************************

// ********** Begin ScriptStruct FRigVMFunction_StringPadInteger ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics;

#define FRigVMFunction_StringPadInteger_Execute() \
	void FRigVMFunction_StringPadInteger::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		const int32 Digits, \
		FString& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_481_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringPadInteger_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const int32 Value, \
		const int32 Digits, \
		FString& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 Digits = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		FString& Result = *(FString*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Digits, \
			Result \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringPadInteger;
// ********** End ScriptStruct FRigVMFunction_StringPadInteger *************************************

// ********** Begin ScriptStruct FRigVMFunction_StringToInteger ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_StringToInteger_Statics;

#define FRigVMFunction_StringToInteger_Execute() \
	void FRigVMFunction_StringToInteger::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const bool ChopLeft, \
		const bool ChopRight, \
		int32& Result, \
		bool& Success \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_509_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_StringToInteger_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FString& Value, \
		const bool ChopLeft, \
		const bool ChopRight, \
		int32& Result, \
		bool& Success \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FString& Value = *(FString*)RigVMMemoryHandles[0].GetInputData(); \
		const bool ChopLeft = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool ChopRight = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		int32& Result = *(int32*)RigVMMemoryHandles[3].GetOutputData(); \
		bool& Success = *(bool*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			ChopLeft, \
			ChopRight, \
			Result, \
			Success \
		); \
	} \
	typedef FRigVMFunction_StringBase Super;


struct FRigVMFunction_StringToInteger;
// ********** End ScriptStruct FRigVMFunction_StringToInteger **************************************

// ********** Begin ScriptStruct FRigDispatch_ToString *********************************************
struct Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_545_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigDispatch_ToString_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMDispatchFactory Super;


struct FRigDispatch_ToString;
// ********** End ScriptStruct FRigDispatch_ToString ***********************************************

// ********** Begin ScriptStruct FRigDispatch_FromString *******************************************
struct Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h_564_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigDispatch_FromString_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMDispatchFactory Super;


struct FRigDispatch_FromString;
// ********** End ScriptStruct FRigDispatch_FromString *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_RigVMFunction_String_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
