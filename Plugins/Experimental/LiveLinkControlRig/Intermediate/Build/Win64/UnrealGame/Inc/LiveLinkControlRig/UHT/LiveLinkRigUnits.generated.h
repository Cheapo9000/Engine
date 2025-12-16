// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkRigUnits.h"

#ifdef LIVELINKCONTROLRIG_LiveLinkRigUnits_generated_h
#error "LiveLinkRigUnits.generated.h already included, missing '#pragma once' in LiveLinkRigUnits.h"
#endif
#define LIVELINKCONTROLRIG_LiveLinkRigUnits_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_LiveLinkBase *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics;
#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics; \
	LIVELINKCONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_LiveLinkBase;
// ********** End ScriptStruct FRigUnit_LiveLinkBase ***********************************************

// ********** Begin ScriptStruct FRigUnit_LiveLinkEvaluteFrameAnimation ****************************
struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics;

#define FRigUnit_LiveLinkEvaluteFrameAnimation_Execute() \
	void FRigUnit_LiveLinkEvaluteFrameAnimation::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const FTransform& DebugDrawOffset, \
		FSubjectFrameHandle& SubjectFrame \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics; \
	LIVELINKCONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const FTransform& DebugDrawOffset, \
		FSubjectFrameHandle& SubjectFrame \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& SubjectName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& DebugColor = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& DebugDrawOffset = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		FSubjectFrameHandle& SubjectFrame = *(FSubjectFrameHandle*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectName, \
			bDrawDebug, \
			DebugColor, \
			DebugDrawOffset, \
			SubjectFrame \
		); \
	} \
	typedef FRigUnit_LiveLinkBase Super;


struct FRigUnit_LiveLinkEvaluteFrameAnimation;
// ********** End ScriptStruct FRigUnit_LiveLinkEvaluteFrameAnimation ******************************

// ********** Begin ScriptStruct FRigUnit_LiveLinkGetTransformByName *******************************
struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics;

#define FRigUnit_LiveLinkGetTransformByName_Execute() \
	void FRigUnit_LiveLinkGetTransformByName::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FSubjectFrameHandle& SubjectFrame, \
		const FName& TransformName, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics; \
	LIVELINKCONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FSubjectFrameHandle& SubjectFrame, \
		const FName& TransformName, \
		const ERigVMTransformSpace Space, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FSubjectFrameHandle& SubjectFrame = *(FSubjectFrameHandle*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& TransformName = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectFrame, \
			TransformName, \
			Space, \
			Transform \
		); \
	} \
	typedef FRigUnit_LiveLinkBase Super;


struct FRigUnit_LiveLinkGetTransformByName;
// ********** End ScriptStruct FRigUnit_LiveLinkGetTransformByName *********************************

// ********** Begin ScriptStruct FRigUnit_LiveLinkGetParameterValueByName **************************
struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics;

#define FRigUnit_LiveLinkGetParameterValueByName_Execute() \
	void FRigUnit_LiveLinkGetParameterValueByName::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FSubjectFrameHandle& SubjectFrame, \
		const FName& ParameterName, \
		float& Value \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics; \
	LIVELINKCONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FSubjectFrameHandle& SubjectFrame, \
		const FName& ParameterName, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FSubjectFrameHandle& SubjectFrame = *(FSubjectFrameHandle*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& ParameterName = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		float& Value = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectFrame, \
			ParameterName, \
			Value \
		); \
	} \
	typedef FRigUnit_LiveLinkBase Super;


struct FRigUnit_LiveLinkGetParameterValueByName;
// ********** End ScriptStruct FRigUnit_LiveLinkGetParameterValueByName ****************************

// ********** Begin ScriptStruct FRigUnit_LiveLinkEvaluteFrameTransform ****************************
struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics;

#define FRigUnit_LiveLinkEvaluteFrameTransform_Execute() \
	void FRigUnit_LiveLinkEvaluteFrameTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const FTransform& DebugDrawOffset, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_104_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics; \
	LIVELINKCONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const FTransform& DebugDrawOffset, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& SubjectName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& DebugColor = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const FTransform& DebugDrawOffset = *(FTransform*)RigVMMemoryHandles[3].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectName, \
			bDrawDebug, \
			DebugColor, \
			DebugDrawOffset, \
			Transform \
		); \
	} \
	typedef FRigUnit_LiveLinkBase Super;


struct FRigUnit_LiveLinkEvaluteFrameTransform;
// ********** End ScriptStruct FRigUnit_LiveLinkEvaluteFrameTransform ******************************

// ********** Begin ScriptStruct FRigUnit_LiveLinkEvaluateBasicValue *******************************
struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluateBasicValue_Statics;

#define FRigUnit_LiveLinkEvaluateBasicValue_Execute() \
	void FRigUnit_LiveLinkEvaluateBasicValue::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const FName& PropertyName, \
		float& Value \
	)

#define FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluateBasicValue_Statics; \
	LIVELINKCONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& SubjectName, \
		const FName& PropertyName, \
		float& Value \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& SubjectName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& PropertyName = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		float& Value = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			SubjectName, \
			PropertyName, \
			Value \
		); \
	} \
	typedef FRigUnit_LiveLinkBase Super;


struct FRigUnit_LiveLinkEvaluateBasicValue;
// ********** End ScriptStruct FRigUnit_LiveLinkEvaluateBasicValue *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
