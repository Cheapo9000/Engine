// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_DebugTransform.h"

#ifdef CONTROLRIG_RigUnit_DebugTransform_generated_h
#error "RigUnit_DebugTransform.generated.h already included, missing '#pragma once' in RigUnit_DebugTransform.h"
#endif
#define CONTROLRIG_RigUnit_DebugTransform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DebugTransform *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugTransform_Statics;

#define FRigUnit_DebugTransform_Execute() \
	void FRigUnit_DebugTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugTransform_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetOutputData(); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


struct FRigUnit_DebugTransform;
// ********** End ScriptStruct FRigUnit_DebugTransform *********************************************

// ********** Begin ScriptStruct FRigUnit_DebugTransformMutable ************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutable_Statics;

#define FRigUnit_DebugTransformMutable_Execute() \
	void FRigUnit_DebugTransformMutable::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugTransform_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutable_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugTransformMutable;
// ********** End ScriptStruct FRigUnit_DebugTransformMutable **************************************

// ********** Begin ScriptStruct FRigUnit_DebugTransformMutableItemSpace ***************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace_Statics;

#define FRigUnit_DebugTransformMutableItemSpace_Execute() \
	void FRigUnit_DebugTransformMutableItemSpace::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugTransform_h_109_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[5].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugTransformMutableItemSpace;
// ********** End ScriptStruct FRigUnit_DebugTransformMutableItemSpace *****************************

// ********** Begin ScriptStruct FRigUnit_DebugTransformArrayMutable_WorkData **********************
struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugTransform_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_DebugTransformArrayMutable_WorkData;
// ********** End ScriptStruct FRigUnit_DebugTransformArrayMutable_WorkData ************************

// ********** Begin ScriptStruct FRigUnit_DebugTransformArrayMutable *******************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable_Statics;

#define FRigUnit_DebugTransformArrayMutable_Execute() \
	void FRigUnit_DebugTransformArrayMutable::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FRigUnit_DebugTransformArrayMutable_WorkData& WorkData, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugTransform_h_165_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FRigUnit_DebugTransformArrayMutable_WorkData& WorkData, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		FRigUnit_DebugTransformArrayMutable_WorkData& WorkData = *(FRigUnit_DebugTransformArrayMutable_WorkData*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[9].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transforms, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			WorkData, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugTransformArrayMutable;
// ********** End ScriptStruct FRigUnit_DebugTransformArrayMutable *********************************

// ********** Begin ScriptStruct FRigUnit_DebugTransformArrayMutableItemSpace **********************
struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace_Statics;

#define FRigUnit_DebugTransformArrayMutableItemSpace_Execute() \
	void FRigUnit_DebugTransformArrayMutableItemSpace::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const TArrayView<const int32>& ParentIndices, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugTransform_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const TArrayView<const int32>& ParentIndices, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[6].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[9].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transforms, \
			ParentIndices, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugTransformArrayMutableItemSpace;
// ********** End ScriptStruct FRigUnit_DebugTransformArrayMutableItemSpace ************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugTransform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
