// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Debug/RigUnit_DebugPrimitives.h"

#ifdef CONTROLRIG_RigUnit_DebugPrimitives_generated_h
#error "RigUnit_DebugPrimitives.generated.h already included, missing '#pragma once' in RigUnit_DebugPrimitives.h"
#endif
#define CONTROLRIG_RigUnit_DebugPrimitives_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DebugRectangle *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugRectangle_Statics;

#define FRigUnit_DebugRectangle_Execute() \
	void FRigUnit_DebugRectangle::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugRectangle_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
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
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[4].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugRectangle;
// ********** End ScriptStruct FRigUnit_DebugRectangle *********************************************

// ********** Begin ScriptStruct FRigUnit_DebugRectangleItemSpace **********************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugRectangleItemSpace_Statics;

#define FRigUnit_DebugRectangleItemSpace_Execute() \
	void FRigUnit_DebugRectangleItemSpace::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugRectangleItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
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
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[5].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugRectangleItemSpace;
// ********** End ScriptStruct FRigUnit_DebugRectangleItemSpace ************************************

// ********** Begin ScriptStruct FRigUnit_DebugArc *************************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugArc_Statics;

#define FRigUnit_DebugArc_Execute() \
	void FRigUnit_DebugArc::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugArc_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
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
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float MinimumDegrees = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float MaximumDegrees = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[6].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[7].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[8].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[9].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[10].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Color, \
			Radius, \
			MinimumDegrees, \
			MaximumDegrees, \
			Thickness, \
			Detail, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugArc;
// ********** End ScriptStruct FRigUnit_DebugArc ***************************************************

// ********** Begin ScriptStruct FRigUnit_DebugArcItemSpace ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_DebugArcItemSpace_Statics;

#define FRigUnit_DebugArcItemSpace_Execute() \
	void FRigUnit_DebugArcItemSpace::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h_161_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DebugArcItemSpace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
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
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float MinimumDegrees = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float MaximumDegrees = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[7].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[8].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[9].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[10].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Color, \
			Radius, \
			MinimumDegrees, \
			MaximumDegrees, \
			Thickness, \
			Detail, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


struct FRigUnit_DebugArcItemSpace;
// ********** End ScriptStruct FRigUnit_DebugArcItemSpace ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Debug_RigUnit_DebugPrimitives_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
