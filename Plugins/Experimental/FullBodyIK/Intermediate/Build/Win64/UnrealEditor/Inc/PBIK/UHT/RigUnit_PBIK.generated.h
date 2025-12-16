// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_PBIK.h"

#ifdef PBIK_RigUnit_PBIK_generated_h
#error "RigUnit_PBIK.generated.h already included, missing '#pragma once' in RigUnit_PBIK.h"
#endif
#define PBIK_RigUnit_PBIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPBIKDebug ********************************************************
struct Z_Construct_UScriptStruct_FPBIKDebug_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPBIKDebug_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


struct FPBIKDebug;
// ********** End ScriptStruct FPBIKDebug **********************************************************

// ********** Begin ScriptStruct FPBIKEffector *****************************************************
struct Z_Construct_UScriptStruct_FPBIKEffector_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPBIKEffector_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


struct FPBIKEffector;
// ********** End ScriptStruct FPBIKEffector *******************************************************

// ********** Begin ScriptStruct FPBIKWorkData *****************************************************
struct Z_Construct_UScriptStruct_FPBIKWorkData_Statics;
#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPBIKWorkData_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


struct FPBIKWorkData;
// ********** End ScriptStruct FPBIKWorkData *******************************************************

// ********** Begin ScriptStruct FRigUnit_PBIK *****************************************************
struct Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics;

#define FRigUnit_PBIK_Execute() \
	void FRigUnit_PBIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Root, \
		const TArrayView<const FPBIKEffector>& Effectors, \
		TArray<int32>& EffectorSolverIndices, \
		const TArrayView<const FPBIKBoneSetting>& BoneSettings, \
		const TArrayView<const FName>& ExcludedBones, \
		const FPBIKSolverSettings& Settings, \
		const FPBIKDebug& Debug, \
		FPBIKWorkData& WorkData \
	)

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Root, \
		const TArrayView<const FPBIKEffector>& Effectors, \
		TArray<int32>& EffectorSolverIndices, \
		const TArrayView<const FPBIKBoneSetting>& BoneSettings, \
		const TArrayView<const FName>& ExcludedBones, \
		const FPBIKSolverSettings& Settings, \
		const FPBIKDebug& Debug, \
		FPBIKWorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Root = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FPBIKEffector>& Effectors = *(TArray<FPBIKEffector>*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<int32>& EffectorSolverIndices = *(TArray<int32>*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FPBIKBoneSetting>& BoneSettings = *(TArray<FPBIKBoneSetting>*)RigVMMemoryHandles[3].GetInputData(); \
		TArray<FName>& ExcludedBones = *(TArray<FName>*)RigVMMemoryHandles[4].GetInputData(); \
		const FPBIKSolverSettings& Settings = *(FPBIKSolverSettings*)RigVMMemoryHandles[5].GetInputData(); \
		const FPBIKDebug& Debug = *(FPBIKDebug*)RigVMMemoryHandles[6].GetInputData(); \
		FPBIKWorkData& WorkData = *(FPBIKWorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Root, \
			Effectors, \
			EffectorSolverIndices, \
			BoneSettings, \
			ExcludedBones, \
			Settings, \
			Debug, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_PBIK;
// ********** End ScriptStruct FRigUnit_PBIK *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
