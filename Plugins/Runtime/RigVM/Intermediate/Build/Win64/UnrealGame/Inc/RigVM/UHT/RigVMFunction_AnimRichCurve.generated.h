// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Animation/RigVMFunction_AnimRichCurve.h"

#ifdef RIGVM_RigVMFunction_AnimRichCurve_generated_h
#error "RigVMFunction_AnimRichCurve.generated.h already included, missing '#pragma once' in RigVMFunction_AnimRichCurve.h"
#endif
#define RIGVM_RigVMFunction_AnimRichCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_AnimRichCurve **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics;

#define FRigVMFunction_AnimRichCurve_Execute() \
	void FRigVMFunction_AnimRichCurve::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRuntimeFloatCurve& Curve \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimRichCurve_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRuntimeFloatCurve& Curve \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRuntimeFloatCurve& Curve = *(FRuntimeFloatCurve*)RigVMMemoryHandles[0].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Curve \
		); \
	} \
	typedef FRigVMFunction_AnimBase Super;


struct FRigVMFunction_AnimRichCurve;
// ********** End ScriptStruct FRigVMFunction_AnimRichCurve ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimRichCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
