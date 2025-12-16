// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/Math/RigUnit_Converter.h"

#ifdef CONTROLRIG_RigUnit_Converter_generated_h
#error "RigUnit_Converter.generated.h already included, missing '#pragma once' in RigUnit_Converter.h"
#endif
#define CONTROLRIG_RigUnit_Converter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ConvertTransform *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics;

#define FRigUnit_ConvertTransform_Execute() \
	void FRigUnit_ConvertTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Input, \
		FEulerTransform& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConvertTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Input, \
		FEulerTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Input = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FEulerTransform& Result = *(FEulerTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ConvertTransform;
// ********** End ScriptStruct FRigUnit_ConvertTransform *******************************************

// ********** Begin ScriptStruct FRigUnit_ConvertEulerTransform ************************************
struct Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics;

#define FRigUnit_ConvertEulerTransform_Execute() \
	void FRigUnit_ConvertEulerTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FEulerTransform& Input, \
		FTransform& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConvertEulerTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FEulerTransform& Input, \
		FTransform& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FEulerTransform& Input = *(FEulerTransform*)RigVMMemoryHandles[0].GetInputData(); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ConvertEulerTransform;
// ********** End ScriptStruct FRigUnit_ConvertEulerTransform **************************************

// ********** Begin ScriptStruct FRigUnit_ConvertRotation ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics;

#define FRigUnit_ConvertRotation_Execute() \
	void FRigUnit_ConvertRotation::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Input, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Input, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& Input = *(FRotator*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ConvertRotation;
// ********** End ScriptStruct FRigUnit_ConvertRotation ********************************************

// ********** Begin ScriptStruct FRigUnit_ConvertVectorRotation ************************************
struct Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConvertVectorRotation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_ConvertRotation Super;


struct FRigUnit_ConvertVectorRotation;
// ********** End ScriptStruct FRigUnit_ConvertVectorRotation **************************************

// ********** Begin ScriptStruct FRigUnit_ConvertQuaternion ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics;

#define FRigUnit_ConvertQuaternion_Execute() \
	void FRigUnit_ConvertQuaternion::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		FRotator& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternion_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		FRotator& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FRotator& Result = *(FRotator*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ConvertQuaternion;
// ********** End ScriptStruct FRigUnit_ConvertQuaternion ******************************************

// ********** Begin ScriptStruct FRigUnit_ConvertVectorToRotation **********************************
struct Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics;

#define FRigUnit_ConvertVectorToRotation_Execute() \
	void FRigUnit_ConvertVectorToRotation::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Input, \
		FRotator& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToRotation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Input, \
		FRotator& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FRotator& Result = *(FRotator*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ConvertVectorToRotation;
// ********** End ScriptStruct FRigUnit_ConvertVectorToRotation ************************************

// ********** Begin ScriptStruct FRigUnit_ConvertVectorToQuaternion ********************************
struct Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics;

#define FRigUnit_ConvertVectorToQuaternion_Execute() \
	void FRigUnit_ConvertVectorToQuaternion::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Input, \
		FQuat& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_110_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConvertVectorToQuaternion_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Input, \
		FQuat& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ConvertVectorToQuaternion;
// ********** End ScriptStruct FRigUnit_ConvertVectorToQuaternion **********************************

// ********** Begin ScriptStruct FRigUnit_ConvertRotationToVector **********************************
struct Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics;

#define FRigUnit_ConvertRotationToVector_Execute() \
	void FRigUnit_ConvertRotationToVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Input, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_128_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConvertRotationToVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Input, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& Input = *(FRotator*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ConvertRotationToVector;
// ********** End ScriptStruct FRigUnit_ConvertRotationToVector ************************************

// ********** Begin ScriptStruct FRigUnit_ConvertQuaternionToVector ********************************
struct Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics;

#define FRigUnit_ConvertQuaternionToVector_Execute() \
	void FRigUnit_ConvertQuaternionToVector::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_146_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ConvertQuaternionToVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			Result \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ConvertQuaternionToVector;
// ********** End ScriptStruct FRigUnit_ConvertQuaternionToVector **********************************

// ********** Begin ScriptStruct FRigUnit_ToSwingAndTwist ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics;

#define FRigUnit_ToSwingAndTwist_Execute() \
	void FRigUnit_ToSwingAndTwist::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h_164_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FQuat& Swing = *(FQuat*)RigVMMemoryHandles[2].GetOutputData(); \
		FQuat& Twist = *(FQuat*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Input, \
			TwistAxis, \
			Swing, \
			Twist \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_ToSwingAndTwist;
// ********** End ScriptStruct FRigUnit_ToSwingAndTwist ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_Math_RigUnit_Converter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
