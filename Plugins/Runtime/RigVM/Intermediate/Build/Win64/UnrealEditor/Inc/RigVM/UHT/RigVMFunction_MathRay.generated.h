// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathRay.h"

#ifdef RIGVM_RigVMFunction_MathRay_generated_h
#error "RigVMFunction_MathRay.generated.h already included, missing '#pragma once' in RigVMFunction_MathRay.h"
#endif
#define RIGVM_RigVMFunction_MathRay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathRayBase ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRayBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathRayBase;
// ********** End ScriptStruct FRigVMFunction_MathRayBase ******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathRayIntersectRay ********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics;

#define FRigVMFunction_MathRayIntersectRay_Execute() \
	void FRigVMFunction_MathRayIntersectRay::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRay& A, \
		const FRay& B, \
		FVector& Result, \
		float& Distance, \
		float& RatioA, \
		float& RatioB \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectRay_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRay& A, \
		const FRay& B, \
		FVector& Result, \
		float& Distance, \
		float& RatioA, \
		float& RatioB \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRay& A = *(FRay*)RigVMMemoryHandles[0].GetInputData(); \
		const FRay& B = *(FRay*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		float& Distance = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		float& RatioA = *(float*)RigVMMemoryHandles[4].GetOutputData(); \
		float& RatioB = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			A, \
			B, \
			Result, \
			Distance, \
			RatioA, \
			RatioB \
		); \
	} \
	typedef FRigVMFunction_MathRayBase Super;


struct FRigVMFunction_MathRayIntersectRay;
// ********** End ScriptStruct FRigVMFunction_MathRayIntersectRay **********************************

// ********** Begin ScriptStruct FRigVMFunction_MathRayIntersectPlane ******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics;

#define FRigVMFunction_MathRayIntersectPlane_Execute() \
	void FRigVMFunction_MathRayIntersectPlane::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRay& Ray, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& Result, \
		float& Distance, \
		float& Ratio \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRayIntersectPlane_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRay& Ray, \
		const FVector& PlanePoint, \
		const FVector& PlaneNormal, \
		FVector& Result, \
		float& Distance, \
		float& Ratio \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRay& Ray = *(FRay*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& PlanePoint = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& PlaneNormal = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		float& Distance = *(float*)RigVMMemoryHandles[4].GetOutputData(); \
		float& Ratio = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Ray, \
			PlanePoint, \
			PlaneNormal, \
			Result, \
			Distance, \
			Ratio \
		); \
	} \
	typedef FRigVMFunction_MathRayBase Super;


struct FRigVMFunction_MathRayIntersectPlane;
// ********** End ScriptStruct FRigVMFunction_MathRayIntersectPlane ********************************

// ********** Begin ScriptStruct FRigVMFunction_MathRayGetAt ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics;

#define FRigVMFunction_MathRayGetAt_Execute() \
	void FRigVMFunction_MathRayGetAt::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRay& Ray, \
		const float Ratio, \
		FVector& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRayGetAt_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRay& Ray, \
		const float Ratio, \
		FVector& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRay& Ray = *(FRay*)RigVMMemoryHandles[0].GetInputData(); \
		const float Ratio = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Ray, \
			Ratio, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathRayBase Super;


struct FRigVMFunction_MathRayGetAt;
// ********** End ScriptStruct FRigVMFunction_MathRayGetAt *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathRayTransform ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics;

#define FRigVMFunction_MathRayTransform_Execute() \
	void FRigVMFunction_MathRayTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRay& Ray, \
		const FTransform& Transform, \
		FRay& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h_126_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathRayTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRay& Ray, \
		const FTransform& Transform, \
		FRay& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRay& Ray = *(FRay*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FRay& Result = *(FRay*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Ray, \
			Transform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathRayBase Super;


struct FRigVMFunction_MathRayTransform;
// ********** End ScriptStruct FRigVMFunction_MathRayTransform *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathRay_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
