// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_EvaluateChooser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMNEXTCHOOSER_RigUnit_EvaluateChooser_generated_h
#error "RigUnit_EvaluateChooser.generated.h already included, missing '#pragma once' in RigUnit_EvaluateChooser.h"
#endif
#define ANIMNEXTCHOOSER_RigUnit_EvaluateChooser_generated_h

#define FID_Engine_Plugins_Experimental_AnimNextChooser_Source_AnimNextChooser_Private_RigUnit_EvaluateChooser_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_EvaluateChooser_Statics; \
	ANIMNEXTCHOOSER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMStruct Super;


template<> ANIMNEXTCHOOSER_API UScriptStruct* StaticStruct<struct FRigUnit_EvaluateChooser>();


#define FRigUnit_EvaluateChooser_ControlRig_Execute() \
	void FRigUnit_EvaluateChooser_ControlRig::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TObjectPtr<UObject>& ContextObject, \
		const TObjectPtr<UChooserTable>& Chooser, \
		TObjectPtr<UObject>& Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNextChooser_Source_AnimNextChooser_Private_RigUnit_EvaluateChooser_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_EvaluateChooser_ControlRig_Statics; \
	ANIMNEXTCHOOSER_API static class UScriptStruct* StaticStruct(); \
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
		const TObjectPtr<UObject>& ContextObject = *(TObjectPtr<UObject>*)RigVMMemoryHandles[0].GetData(false); \
		const TObjectPtr<UChooserTable>& Chooser = *(TObjectPtr<UChooserTable>*)RigVMMemoryHandles[1].GetData(false); \
		TObjectPtr<UObject>& Result = *(TObjectPtr<UObject>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ContextObject, \
			Chooser, \
			Result \
		); \
	} \
	typedef FRigUnit_EvaluateChooser Super;


template<> ANIMNEXTCHOOSER_API UScriptStruct* StaticStruct<struct FRigUnit_EvaluateChooser_ControlRig>();


#define FRigUnit_EvaluateChooser_AnimNext_Execute() \
	void FRigUnit_EvaluateChooser_AnimNext::StaticExecute( \
		const FAnimNextExecuteContext& ExecuteContext, \
		const TObjectPtr<UObject>& ContextObject, \
		const TObjectPtr<UChooserTable>& Chooser, \
		TObjectPtr<UObject>& Result \
	)

#define FID_Engine_Plugins_Experimental_AnimNextChooser_Source_AnimNextChooser_Private_RigUnit_EvaluateChooser_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_EvaluateChooser_AnimNext_Statics; \
	ANIMNEXTCHOOSER_API static class UScriptStruct* StaticStruct(); \
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
		const TObjectPtr<UObject>& ContextObject = *(TObjectPtr<UObject>*)RigVMMemoryHandles[0].GetData(false); \
		const TObjectPtr<UChooserTable>& Chooser = *(TObjectPtr<UChooserTable>*)RigVMMemoryHandles[1].GetData(false); \
		TObjectPtr<UObject>& Result = *(TObjectPtr<UObject>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			ContextObject, \
			Chooser, \
			Result \
		); \
	} \
	typedef FRigUnit_EvaluateChooser Super;


template<> ANIMNEXTCHOOSER_API UScriptStruct* StaticStruct<struct FRigUnit_EvaluateChooser_AnimNext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_AnimNextChooser_Source_AnimNextChooser_Private_RigUnit_EvaluateChooser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
