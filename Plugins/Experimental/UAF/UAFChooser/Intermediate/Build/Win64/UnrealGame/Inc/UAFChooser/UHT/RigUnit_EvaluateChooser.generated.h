// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_EvaluateChooser.h"

#ifdef UAFCHOOSER_RigUnit_EvaluateChooser_generated_h
#error "RigUnit_EvaluateChooser.generated.h already included, missing '#pragma once' in RigUnit_EvaluateChooser.h"
#endif
#define UAFCHOOSER_RigUnit_EvaluateChooser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMDispatch_EvaluateChooser ************************************
struct Z_Construct_UScriptStruct_FRigVMDispatch_EvaluateChooser_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFChooser_Source_UAFChooser_Private_RigUnit_EvaluateChooser_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMDispatch_EvaluateChooser_Statics; \
	UAFCHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMDispatchFactory Super;


struct FRigVMDispatch_EvaluateChooser;
// ********** End ScriptStruct FRigVMDispatch_EvaluateChooser **************************************

// ********** Begin ScriptStruct FRigUnit_EvaluateChooser ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_EvaluateChooser_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAFChooser_Source_UAFChooser_Private_RigUnit_EvaluateChooser_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_EvaluateChooser_Statics; \
	UAFCHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMStruct Super;


struct FRigUnit_EvaluateChooser;
// ********** End ScriptStruct FRigUnit_EvaluateChooser ********************************************

// ********** Begin ScriptStruct FRigUnit_EvaluateChooser_ControlRig *******************************
struct Z_Construct_UScriptStruct_FRigUnit_EvaluateChooser_ControlRig_Statics;

#define FRigUnit_EvaluateChooser_ControlRig_Execute() \
	void FRigUnit_EvaluateChooser_ControlRig::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TObjectPtr<UObject>& ContextObject, \
		const TObjectPtr<UChooserTable>& Chooser, \
		TObjectPtr<UObject>& Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFChooser_Source_UAFChooser_Private_RigUnit_EvaluateChooser_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_EvaluateChooser_ControlRig_Statics; \
	UAFCHOOSER_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TObjectPtr<UObject>& ContextObject, \
		const TObjectPtr<UChooserTable>& Chooser, \
		TObjectPtr<UObject>& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<UObject>& ContextObject = *(TObjectPtr<UObject>*)RigVMMemoryHandles[0].GetInputData(); \
		const TObjectPtr<UChooserTable>& Chooser = *(TObjectPtr<UChooserTable>*)RigVMMemoryHandles[1].GetInputData(); \
		TObjectPtr<UObject>& Result = *(TObjectPtr<UObject>*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ContextObject, \
			Chooser, \
			Result \
		); \
	} \
	typedef FRigUnit_EvaluateChooser Super;


struct FRigUnit_EvaluateChooser_ControlRig;
// ********** End ScriptStruct FRigUnit_EvaluateChooser_ControlRig *********************************

// ********** Begin ScriptStruct FRigUnit_EvaluateChooser_AnimNext *********************************
struct Z_Construct_UScriptStruct_FRigUnit_EvaluateChooser_AnimNext_Statics;

#define FRigUnit_EvaluateChooser_AnimNext_Execute() \
	void FRigUnit_EvaluateChooser_AnimNext::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UObject>& ContextObject, \
		const TObjectPtr<UChooserTable>& Chooser, \
		TObjectPtr<UObject>& Result \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAFChooser_Source_UAFChooser_Private_RigUnit_EvaluateChooser_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_EvaluateChooser_AnimNext_Statics; \
	UAFCHOOSER_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	void Execute(const FAnimNextExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UObject>& ContextObject, \
		const TObjectPtr<UChooserTable>& Chooser, \
		TObjectPtr<UObject>& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<UObject>& ContextObject = *(TObjectPtr<UObject>*)RigVMMemoryHandles[0].GetInputData(); \
		const TObjectPtr<UChooserTable>& Chooser = *(TObjectPtr<UChooserTable>*)RigVMMemoryHandles[1].GetInputData(); \
		TObjectPtr<UObject>& Result = *(TObjectPtr<UObject>*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			ContextObject, \
			Chooser, \
			Result \
		); \
	} \
	typedef FRigUnit_EvaluateChooser Super;


struct FRigUnit_EvaluateChooser_AnimNext;
// ********** End ScriptStruct FRigUnit_EvaluateChooser_AnimNext ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAFChooser_Source_UAFChooser_Private_RigUnit_EvaluateChooser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
