// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Drawing/RigUnit_DrawContainer.h"

#ifdef CONTROLRIG_RigUnit_DrawContainer_generated_h
#error "RigUnit_DrawContainer.generated.h already included, missing '#pragma once' in RigUnit_DrawContainer.h"
#endif
#define CONTROLRIG_RigUnit_DrawContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DrawContainerGetInstruction ******************************
struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics;

#define FRigUnit_DrawContainerGetInstruction_Execute() \
	void FRigUnit_DrawContainerGetInstruction::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		FLinearColor& Color, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Drawing_RigUnit_DrawContainer_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		FLinearColor& Color, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetOutputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InstructionName, \
			Color, \
			Transform \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_DrawContainerGetInstruction;
// ********** End ScriptStruct FRigUnit_DrawContainerGetInstruction ********************************

// ********** Begin ScriptStruct FRigUnit_DrawContainerSetColor ************************************
struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics;

#define FRigUnit_DrawContainerSetColor_Execute() \
	void FRigUnit_DrawContainerSetColor::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const FLinearColor& Color \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Drawing_RigUnit_DrawContainer_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const FLinearColor& Color \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InstructionName, \
			Color \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_DrawContainerSetColor;
// ********** End ScriptStruct FRigUnit_DrawContainerSetColor **************************************

// ********** Begin ScriptStruct FRigUnit_DrawContainerSetThickness ********************************
struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics;

#define FRigUnit_DrawContainerSetThickness_Execute() \
	void FRigUnit_DrawContainerSetThickness::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const float Thickness \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Drawing_RigUnit_DrawContainer_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const float Thickness \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InstructionName, \
			Thickness \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_DrawContainerSetThickness;
// ********** End ScriptStruct FRigUnit_DrawContainerSetThickness **********************************

// ********** Begin ScriptStruct FRigUnit_DrawContainerSetTransform ********************************
struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics;

#define FRigUnit_DrawContainerSetTransform_Execute() \
	void FRigUnit_DrawContainerSetTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const FTransform& Transform \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Drawing_RigUnit_DrawContainer_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& InstructionName, \
		const FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InstructionName, \
			Transform \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_DrawContainerSetTransform;
// ********** End ScriptStruct FRigUnit_DrawContainerSetTransform **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Drawing_RigUnit_DrawContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
