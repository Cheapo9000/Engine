// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h"

#ifdef CONTROLRIG_RigUnit_MultiFABRIK_generated_h
#error "RigUnit_MultiFABRIK.generated.h already included, missing '#pragma once' in RigUnit_MultiFABRIK.h"
#endif
#define CONTROLRIG_RigUnit_MultiFABRIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_MultiFABRIK_WorkData *************************************
struct Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_86_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_MultiFABRIK_WorkData;
// ********** End ScriptStruct FRigUnit_MultiFABRIK_WorkData ***************************************

// ********** Begin ScriptStruct FRigUnit_MultiFABRIK_EndEffector **********************************
struct Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_MultiFABRIK_EndEffector;
// ********** End ScriptStruct FRigUnit_MultiFABRIK_EndEffector ************************************

// ********** Begin ScriptStruct FRigUnit_MultiFABRIK **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics;

#define FRigUnit_MultiFABRIK_Execute() \
	void FRigUnit_MultiFABRIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& RootBone, \
		const TArrayView<const FRigUnit_MultiFABRIK_EndEffector>& Effectors, \
		const float Precision, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_MultiFABRIK_WorkData& WorkData, \
		bool& bIsInitialized \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& RootBone, \
		const TArrayView<const FRigUnit_MultiFABRIK_EndEffector>& Effectors, \
		const float Precision, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_MultiFABRIK_WorkData& WorkData, \
		bool& bIsInitialized \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& RootBone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigUnit_MultiFABRIK_EndEffector>& Effectors = *(TArray<FRigUnit_MultiFABRIK_EndEffector>*)RigVMMemoryHandles[1].GetInputData(); \
		const float Precision = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[4].GetInputData(); \
		FRigUnit_MultiFABRIK_WorkData& WorkData = *(FRigUnit_MultiFABRIK_WorkData*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bIsInitialized = *(bool*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			RootBone, \
			Effectors, \
			Precision, \
			bPropagateToChildren, \
			MaxIterations, \
			WorkData, \
			bIsInitialized \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_MultiFABRIK;
// ********** End ScriptStruct FRigUnit_MultiFABRIK ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
