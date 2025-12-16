// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNodes/RigUnit_IKRig.h"

#ifdef IKRIG_RigUnit_IKRig_generated_h
#error "RigUnit_IKRig.generated.h already included, missing '#pragma once' in RigUnit_IKRig.h"
#endif
#define IKRIG_RigUnit_IKRig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIKRigWorkData ****************************************************
struct Z_Construct_UScriptStruct_FIKRigWorkData_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_RigUnit_IKRig_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigWorkData_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FIKRigWorkData;
// ********** End ScriptStruct FIKRigWorkData ******************************************************

// ********** Begin ScriptStruct FIKRigGoalInput ***************************************************
struct Z_Construct_UScriptStruct_FIKRigGoalInput_Statics;
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_RigUnit_IKRig_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FIKRigGoalInput_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct();


struct FIKRigGoalInput;
// ********** End ScriptStruct FIKRigGoalInput *****************************************************

// ********** Begin ScriptStruct FRigUnit_IKRig ****************************************************
struct Z_Construct_UScriptStruct_FRigUnit_IKRig_Statics;

#define FRigUnit_IKRig_Execute() \
	void FRigUnit_IKRig::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TObjectPtr<UIKRigDefinition>& IKRigAsset, \
		const TArrayView<const FIKRigGoalInput>& Goals, \
		FIKRigWorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_RigUnit_IKRig_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_IKRig_Statics; \
	IKRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TObjectPtr<UIKRigDefinition>& IKRigAsset, \
		const TArrayView<const FIKRigGoalInput>& Goals, \
		FIKRigWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const TObjectPtr<UIKRigDefinition>& IKRigAsset = *(TObjectPtr<UIKRigDefinition>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FIKRigGoalInput>& Goals = *(TArray<FIKRigGoalInput>*)RigVMMemoryHandles[1].GetInputData(); \
		FIKRigWorkData& WorkData = *(FIKRigWorkData*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			IKRigAsset, \
			Goals, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_IKRig;
// ********** End ScriptStruct FRigUnit_IKRig ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_RigUnit_IKRig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
