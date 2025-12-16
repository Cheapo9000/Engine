// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigSplineUnits.h"

#ifdef CONTROLRIGSPLINE_ControlRigSplineUnits_generated_h
#error "ControlRigSplineUnits.generated.h already included, missing '#pragma once' in ControlRigSplineUnits.h"
#endif
#define CONTROLRIGSPLINE_ControlRigSplineUnits_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ControlRigSplineBase *************************************
struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_ControlRigSplineBase;
// ********** End ScriptStruct FRigUnit_ControlRigSplineBase ***************************************

// ********** Begin ScriptStruct FRigUnit_ControlRigSplineFromPoints *******************************
struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics;

#define FRigUnit_ControlRigSplineFromPoints_Execute() \
	void FRigUnit_ControlRigSplineFromPoints::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const ESplineType SplineMode, \
		const bool bClosed, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const ESplineType SplineMode, \
		const bool bClosed, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetInputData(); \
		const ESplineType SplineMode = *(ESplineType*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bClosed = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const int32 SamplesPerSegment = *(int32*)RigVMMemoryHandles[3].GetInputData(); \
		const float Compression = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Stretch = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Points, \
			SplineMode, \
			bClosed, \
			SamplesPerSegment, \
			Compression, \
			Stretch, \
			Spline \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


struct FRigUnit_ControlRigSplineFromPoints;
// ********** End ScriptStruct FRigUnit_ControlRigSplineFromPoints *********************************

// ********** Begin ScriptStruct FRigUnit_ControlRigSplineFromTransforms ***************************
struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics;

#define FRigUnit_ControlRigSplineFromTransforms_Execute() \
	void FRigUnit_ControlRigSplineFromTransforms::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ESplineType SplineMode, \
		const bool bClosed, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromTransforms_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ESplineType SplineMode, \
		const bool bClosed, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetInputData(); \
		const ESplineType SplineMode = *(ESplineType*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bClosed = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const int32 SamplesPerSegment = *(int32*)RigVMMemoryHandles[3].GetInputData(); \
		const float Compression = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Stretch = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transforms, \
			SplineMode, \
			bClosed, \
			SamplesPerSegment, \
			Compression, \
			Stretch, \
			Spline \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


struct FRigUnit_ControlRigSplineFromTransforms;
// ********** End ScriptStruct FRigUnit_ControlRigSplineFromTransforms *****************************

// ********** Begin ScriptStruct FRigUnit_SetSplinePoints ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics;

#define FRigUnit_SetSplinePoints_Execute() \
	void FRigUnit_SetSplinePoints::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_110_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Points, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetInputData(); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Points, \
			Spline \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetSplinePoints;
// ********** End ScriptStruct FRigUnit_SetSplinePoints ********************************************

// ********** Begin ScriptStruct FRigUnit_SetSplineTransforms **************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics;

#define FRigUnit_SetSplineTransforms_Execute() \
	void FRigUnit_SetSplineTransforms::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetSplineTransforms_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetInputData(); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transforms, \
			Spline \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_SetSplineTransforms;
// ********** End ScriptStruct FRigUnit_SetSplineTransforms ****************************************

// ********** Begin ScriptStruct FRigUnit_PositionFromControlRigSpline *****************************
struct Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics;

#define FRigUnit_PositionFromControlRigSpline_Execute() \
	void FRigUnit_PositionFromControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Position \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_158_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Position \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetInputData(); \
		const float U = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Position = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			U, \
			Position \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


struct FRigUnit_PositionFromControlRigSpline;
// ********** End ScriptStruct FRigUnit_PositionFromControlRigSpline *******************************

// ********** Begin ScriptStruct FRigUnit_TransformFromControlRigSpline ****************************
struct Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics;

#define FRigUnit_TransformFromControlRigSpline_Execute() \
	void FRigUnit_TransformFromControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& UpVector, \
		const float Roll, \
		const float U, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_186_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& UpVector, \
		const float Roll, \
		const float U, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& UpVector = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const float Roll = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float U = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			UpVector, \
			Roll, \
			U, \
			Transform \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


struct FRigUnit_TransformFromControlRigSpline;
// ********** End ScriptStruct FRigUnit_TransformFromControlRigSpline ******************************

// ********** Begin ScriptStruct FRigUnit_TransformFromControlRigSpline2 ***************************
struct Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics;

#define FRigUnit_TransformFromControlRigSpline2_Execute() \
	void FRigUnit_TransformFromControlRigSpline2::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		FTransform& Transform \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_222_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline2_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		FTransform& Transform \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetInputData(); \
		const float U = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			U, \
			PrimaryAxis, \
			SecondaryAxis, \
			Transform \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


struct FRigUnit_TransformFromControlRigSpline2;
// ********** End ScriptStruct FRigUnit_TransformFromControlRigSpline2 *****************************

// ********** Begin ScriptStruct FRigUnit_TangentFromControlRigSpline ******************************
struct Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics;

#define FRigUnit_TangentFromControlRigSpline_Execute() \
	void FRigUnit_TangentFromControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Tangent \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_258_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Tangent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetInputData(); \
		const float U = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		FVector& Tangent = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			U, \
			Tangent \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


struct FRigUnit_TangentFromControlRigSpline;
// ********** End ScriptStruct FRigUnit_TangentFromControlRigSpline ********************************

// ********** Begin ScriptStruct FRigUnit_DrawControlRigSpline *************************************
struct Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics;

#define FRigUnit_DrawControlRigSpline_Execute() \
	void FRigUnit_DrawControlRigSpline::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_286_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			Color, \
			Thickness, \
			Detail \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_DrawControlRigSpline;
// ********** End ScriptStruct FRigUnit_DrawControlRigSpline ***************************************

// ********** Begin ScriptStruct FRigUnit_GetLengthControlRigSpline ********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics;

#define FRigUnit_GetLengthControlRigSpline_Execute() \
	void FRigUnit_GetLengthControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		float& Length \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_318_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		float& Length \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetInputData(); \
		float& Length = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			Length \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetLengthControlRigSpline;
// ********** End ScriptStruct FRigUnit_GetLengthControlRigSpline **********************************

// ********** Begin ScriptStruct FRigUnit_GetLengthAtParamControlRigSpline *************************
struct Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics;

#define FRigUnit_GetLengthAtParamControlRigSpline_Execute() \
	void FRigUnit_GetLengthAtParamControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		float& Length \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_342_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetLengthAtParamControlRigSpline_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		float& Length \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetInputData(); \
		const float U = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& Length = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			U, \
			Length \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_GetLengthAtParamControlRigSpline;
// ********** End ScriptStruct FRigUnit_GetLengthAtParamControlRigSpline ***************************

// ********** Begin ScriptStruct FRigUnit_FitChainToSplineCurve ************************************
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics;

#define FRigUnit_FitChainToSplineCurve_Execute() \
	void FRigUnit_FitChainToSplineCurve::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_371_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetInputData(); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[5].GetInputData(); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[8].GetInputData(); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[9].GetInputData(); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[10].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[11].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[12].GetInputData(); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[13].GetInputData(); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[14].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline, \
			Alignment, \
			Minimum, \
			Maximum, \
			SamplingPrecision, \
			PrimaryAxis, \
			SecondaryAxis, \
			PoleVectorPosition, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_FitChainToSplineCurve;
// ********** End ScriptStruct FRigUnit_FitChainToSplineCurve **************************************

// ********** Begin ScriptStruct FRigUnit_FitChainToSplineCurveItemArray ***************************
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics;

#define FRigUnit_FitChainToSplineCurveItemArray_Execute() \
	void FRigUnit_FitChainToSplineCurveItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_490_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const ERigVMAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetInputData(); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[5].GetInputData(); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[8].GetInputData(); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[9].GetInputData(); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[10].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[11].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[12].GetInputData(); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[13].GetInputData(); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[14].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline, \
			Alignment, \
			Minimum, \
			Maximum, \
			SamplingPrecision, \
			PrimaryAxis, \
			SecondaryAxis, \
			PoleVectorPosition, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_FitChainToSplineCurveItemArray;
// ********** End ScriptStruct FRigUnit_FitChainToSplineCurveItemArray *****************************

// ********** Begin ScriptStruct FRigUnit_SplineConstraint_WorkData ********************************
struct Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_602_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_WorkData_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SplineConstraint_WorkData;
// ********** End ScriptStruct FRigUnit_SplineConstraint_WorkData **********************************

// ********** Begin ScriptStruct FRigUnit_SplineConstraint *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics;

#define FRigUnit_SplineConstraint_Execute() \
	void FRigUnit_SplineConstraint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const bool bPropagateToChildren, \
		FRigUnit_SplineConstraint_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_630_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SplineConstraint_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const bool bPropagateToChildren, \
		FRigUnit_SplineConstraint_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetInputData(); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[5].GetInputData(); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[6].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[7].GetInputData(); \
		FRigUnit_SplineConstraint_WorkData& WorkData = *(FRigUnit_SplineConstraint_WorkData*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline, \
			Alignment, \
			Minimum, \
			Maximum, \
			PrimaryAxis, \
			SecondaryAxis, \
			bPropagateToChildren, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_SplineConstraint;
// ********** End ScriptStruct FRigUnit_SplineConstraint *******************************************

// ********** Begin ScriptStruct FRigUnit_FitSplineCurveToChain ************************************
struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics;

#define FRigUnit_FitSplineCurveToChain_Execute() \
	void FRigUnit_FitSplineCurveToChain::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_700_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_FitSplineCurveToChain;
// ********** End ScriptStruct FRigUnit_FitSplineCurveToChain **************************************

// ********** Begin ScriptStruct FRigUnit_FitSplineCurveToChainItemArray ***************************
struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics;

#define FRigUnit_FitSplineCurveToChainItemArray_Execute() \
	void FRigUnit_FitSplineCurveToChainItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		FControlRigSpline& Spline \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_732_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		FControlRigSpline& Spline \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Spline \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_FitSplineCurveToChainItemArray;
// ********** End ScriptStruct FRigUnit_FitSplineCurveToChainItemArray *****************************

// ********** Begin ScriptStruct FRigUnit_ClosestParameterFromControlRigSpline *********************
struct Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics;

#define FRigUnit_ClosestParameterFromControlRigSpline_Execute() \
	void FRigUnit_ClosestParameterFromControlRigSpline::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& Position, \
		float& U \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_761_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& Position, \
		float& U \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Position = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		float& U = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			Position, \
			U \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


struct FRigUnit_ClosestParameterFromControlRigSpline;
// ********** End ScriptStruct FRigUnit_ClosestParameterFromControlRigSpline ***********************

// ********** Begin ScriptStruct FRigUnit_ParameterAtPercentage ************************************
struct Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics;

#define FRigUnit_ParameterAtPercentage_Execute() \
	void FRigUnit_ParameterAtPercentage::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float Percentage, \
		float& U \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_790_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics; \
	CONTROLRIGSPLINE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FControlRigSpline& Spline, \
		const float Percentage, \
		float& U \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetInputData(); \
		const float Percentage = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		float& U = *(float*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Spline, \
			Percentage, \
			U \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


struct FRigUnit_ParameterAtPercentage;
// ********** End ScriptStruct FRigUnit_ParameterAtPercentage **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
