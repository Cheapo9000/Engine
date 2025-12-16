// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugPrimitives.h"

#ifdef RIGVM_RigVMFunction_DebugPrimitives_generated_h
#error "RigVMFunction_DebugPrimitives.generated.h already included, missing '#pragma once' in RigVMFunction_DebugPrimitives.h"
#endif
#define RIGVM_RigVMFunction_DebugPrimitives_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_DebugRectangle *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics;

#define FRigVMFunction_DebugRectangle_Execute() \
	void FRigVMFunction_DebugRectangle::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangle_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
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
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
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
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_DebugRectangle;
// ********** End ScriptStruct FRigVMFunction_DebugRectangle ***************************************

// ********** Begin ScriptStruct FRigVMFunction_DebugRectangleNoSpace ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics;

#define FRigVMFunction_DebugRectangleNoSpace_Execute() \
	void FRigVMFunction_DebugRectangleNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugRectangleNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
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
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[4].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Color, \
			Scale, \
			Thickness, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_DebugRectangleNoSpace;
// ********** End ScriptStruct FRigVMFunction_DebugRectangleNoSpace ********************************

// ********** Begin ScriptStruct FRigVMFunction_DebugArc *******************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics;

#define FRigVMFunction_DebugArc_Execute() \
	void FRigVMFunction_DebugArc::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
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

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_97_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugArc_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
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
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
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
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_DebugArc;
// ********** End ScriptStruct FRigVMFunction_DebugArc *********************************************

// ********** Begin ScriptStruct FRigVMFunction_DebugArcNoSpace ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics;

#define FRigVMFunction_DebugArcNoSpace_Execute() \
	void FRigVMFunction_DebugArcNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_154_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugArcNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const FLinearColor& Color, \
		const float Radius, \
		const float MinimumDegrees, \
		const float MaximumDegrees, \
		const float Thickness, \
		const int32 Detail, \
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
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[9].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Transform, \
			Color, \
			Radius, \
			MinimumDegrees, \
			MaximumDegrees, \
			Thickness, \
			Detail, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_DebugArcNoSpace;
// ********** End ScriptStruct FRigVMFunction_DebugArcNoSpace **************************************

// ********** Begin ScriptStruct FRigVMFunction_DebugBoxNoSpace ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics;

#define FRigVMFunction_DebugBoxNoSpace_Execute() \
	void FRigVMFunction_DebugBoxNoSpace::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FLinearColor& Color, \
		const float Thickness, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h_205_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugBoxNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FLinearColor& Color, \
		const float Thickness, \
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
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Color, \
			Thickness, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBaseMutable Super;


struct FRigVMFunction_DebugBoxNoSpace;
// ********** End ScriptStruct FRigVMFunction_DebugBoxNoSpace **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPrimitives_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
