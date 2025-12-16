// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_VisualDebug.h"

#ifdef CONTROLRIG_RigUnit_VisualDebug_generated_h
#error "RigUnit_VisualDebug.generated.h already included, missing '#pragma once' in RigUnit_VisualDebug.h"
#endif
#define CONTROLRIG_RigUnit_VisualDebug_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_VisualDebugVector ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics;

#define FRigUnit_VisualDebugVector_Execute() \
	void FRigUnit_VisualDebugVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigUnitVisualDebugPointMode Mode = *(ERigUnitVisualDebugPointMode*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			BoneSpace, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


struct FRigUnit_VisualDebugVector;
// ********** End ScriptStruct FRigUnit_VisualDebugVector ******************************************

// ********** Begin ScriptStruct FRigUnit_VisualDebugVectorItemSpace *******************************
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics;

#define FRigUnit_VisualDebugVectorItemSpace_Execute() \
	void FRigUnit_VisualDebugVectorItemSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigUnitVisualDebugPointMode Mode = *(ERigUnitVisualDebugPointMode*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


struct FRigUnit_VisualDebugVectorItemSpace;
// ********** End ScriptStruct FRigUnit_VisualDebugVectorItemSpace *********************************

// ********** Begin ScriptStruct FRigUnit_VisualDebugQuat ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics;

#define FRigUnit_VisualDebugQuat_Execute() \
	void FRigUnit_VisualDebugQuat::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_105_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			BoneSpace, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


struct FRigUnit_VisualDebugQuat;
// ********** End ScriptStruct FRigUnit_VisualDebugQuat ********************************************

// ********** Begin ScriptStruct FRigUnit_VisualDebugQuatItemSpace *********************************
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics;

#define FRigUnit_VisualDebugQuatItemSpace_Execute() \
	void FRigUnit_VisualDebugQuatItemSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			Space, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


struct FRigUnit_VisualDebugQuatItemSpace;
// ********** End ScriptStruct FRigUnit_VisualDebugQuatItemSpace ***********************************

// ********** Begin ScriptStruct FRigUnit_VisualDebugTransform *************************************
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics;

#define FRigUnit_VisualDebugTransform_Execute() \
	void FRigUnit_VisualDebugTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_180_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			BoneSpace, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


struct FRigUnit_VisualDebugTransform;
// ********** End ScriptStruct FRigUnit_VisualDebugTransform ***************************************

// ********** Begin ScriptStruct FRigUnit_VisualDebugTransformItemSpace ****************************
struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics;

#define FRigUnit_VisualDebugTransformItemSpace_Execute() \
	void FRigUnit_VisualDebugTransformItemSpace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h_219_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			Space, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


struct FRigUnit_VisualDebugTransformItemSpace;
// ********** End ScriptStruct FRigUnit_VisualDebugTransformItemSpace ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_VisualDebug_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
