// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_DebugPoint.h"

#ifdef RIGVM_RigVMFunction_DebugPoint_generated_h
#error "RigVMFunction_DebugPoint.generated.h already included, missing '#pragma once' in RigVMFunction_DebugPoint.h"
#endif
#define RIGVM_RigVMFunction_DebugPoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_DebugPoint *****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugPoint_Statics;

#define FRigVMFunction_DebugPoint_Execute() \
	void FRigVMFunction_DebugPoint::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPoint_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugPoint_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
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
		FVector& Vector = *(FVector*)RigVMMemoryHandles[0].GetOutputData(); \
		const ERigUnitDebugPointMode Mode = *(ERigUnitDebugPointMode*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Vector, \
			Mode, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


struct FRigVMFunction_DebugPoint;
// ********** End ScriptStruct FRigVMFunction_DebugPoint *******************************************

// ********** Begin ScriptStruct FRigVMFunction_DebugPointMutable **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_DebugPointMutable_Statics;

#define FRigVMFunction_DebugPointMutable_Execute() \
	void FRigVMFunction_DebugPointMutable::StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPoint_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_DebugPointMutable_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		FRigVMExecuteContext& ExecuteContext, \
		const FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
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
		const FVector& Vector = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigUnitDebugPointMode Mode = *(ERigUnitDebugPointMode*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[8].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Vector, \
			Mode, \
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


struct FRigVMFunction_DebugPointMutable;
// ********** End ScriptStruct FRigVMFunction_DebugPointMutable ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugPoint_h

// ********** Begin Enum ERigUnitDebugPointMode ****************************************************
#define FOREACH_ENUM_ERIGUNITDEBUGPOINTMODE(op) \
	op(ERigUnitDebugPointMode::Point) \
	op(ERigUnitDebugPointMode::Vector) \
	op(ERigUnitDebugPointMode::Max) 

enum class ERigUnitDebugPointMode : uint8;
template<> struct TIsUEnumClass<ERigUnitDebugPointMode> { enum { Value = true }; };
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigUnitDebugPointMode>();
// ********** End Enum ERigUnitDebugPointMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
