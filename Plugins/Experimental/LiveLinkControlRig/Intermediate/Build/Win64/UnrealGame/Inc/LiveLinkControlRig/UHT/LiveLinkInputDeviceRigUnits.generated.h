// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkInputDeviceRigUnits.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKCONTROLRIG_LiveLinkInputDeviceRigUnits_generated_h
#error "LiveLinkInputDeviceRigUnits.generated.h already included, missing '#pragma once' in LiveLinkInputDeviceRigUnits.h"
#endif
#define LIVELINKCONTROLRIG_LiveLinkInputDeviceRigUnits_generated_h


#define FRigUnit_LiveLinkEvaluateInputDeviceValue_Execute() \
	void FRigUnit_LiveLinkEvaluateInputDeviceValue::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		FLiveLinkGamepadInputDeviceFrameData& InputDeviceData \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkInputDeviceRigUnits_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluateInputDeviceValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
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
		const FName& SubjectName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		FLiveLinkGamepadInputDeviceFrameData& InputDeviceData = *(FLiveLinkGamepadInputDeviceFrameData*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectName, \
			InputDeviceData \
		); \
	} \
	typedef FRigUnit Super;


template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_LiveLinkEvaluateInputDeviceValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkInputDeviceRigUnits_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
