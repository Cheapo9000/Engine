// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Modules/RigUnit_ConnectionCandidates.h"

#ifdef CONTROLRIG_RigUnit_ConnectionCandidates_generated_h
#error "RigUnit_ConnectionCandidates.generated.h already included, missing '#pragma once' in RigUnit_ConnectionCandidates.h"
#endif
#define CONTROLRIG_RigUnit_ConnectionCandidates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetCandidates ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics;

#define FRigUnit_GetCandidates_Execute() \
	void FRigUnit_GetCandidates::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRigElementKey& Connector, \
		TArray<FRigElementKey>& Candidates \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRigElementKey& Connector, \
		TArray<FRigElementKey>& Candidates \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FRigElementKey& Connector = *(FRigElementKey*)RigVMMemoryHandles[0].GetOutputData(); \
		TArray<FRigElementKey>& Candidates = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Connector, \
			Candidates \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetCandidates;
// ********** End ScriptStruct FRigUnit_GetCandidates **********************************************

// ********** Begin ScriptStruct FRigUnit_DiscardMatches *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics;

#define FRigUnit_DiscardMatches_Execute() \
	void FRigUnit_DiscardMatches::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Excluded, \
		const FString& Message \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DiscardMatches_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Excluded, \
		const FString& Message \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Excluded = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const FString& Message = *(FString*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Excluded, \
			Message \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_DiscardMatches;
// ********** End ScriptStruct FRigUnit_DiscardMatches *********************************************

// ********** Begin ScriptStruct FRigUnit_SetDefaultMatch ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics;

#define FRigUnit_SetDefaultMatch_Execute() \
	void FRigUnit_SetDefaultMatch::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Default \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Default \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Default = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Default \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetDefaultMatch;
// ********** End ScriptStruct FRigUnit_SetDefaultMatch ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Modules_RigUnit_ConnectionCandidates_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
