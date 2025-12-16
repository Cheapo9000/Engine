// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkInputDeviceRigUnits.h"

#ifdef LIVELINKCONTROLRIG_LiveLinkInputDeviceRigUnits_generated_h
#error "LiveLinkInputDeviceRigUnits.generated.h already included, missing '#pragma once' in LiveLinkInputDeviceRigUnits.h"
#endif
#define LIVELINKCONTROLRIG_LiveLinkInputDeviceRigUnits_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_LiveLinkEvaluateInputDeviceValue *************************
struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluateInputDeviceValue_Statics;

#define FRigUnit_LiveLinkEvaluateInputDeviceValue_Execute() \
	void FRigUnit_LiveLinkEvaluateInputDeviceValue::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		FLiveLinkGamepadInputDeviceFrameData& InputDeviceData \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkInputDeviceRigUnits_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluateInputDeviceValue_Statics; \
	LIVELINKCONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		FLiveLinkGamepadInputDeviceFrameData& InputDeviceData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& SubjectName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		FLiveLinkGamepadInputDeviceFrameData& InputDeviceData = *(FLiveLinkGamepadInputDeviceFrameData*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectName, \
			InputDeviceData \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_LiveLinkEvaluateInputDeviceValue;
// ********** End ScriptStruct FRigUnit_LiveLinkEvaluateInputDeviceValue ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkInputDeviceRigUnits_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
