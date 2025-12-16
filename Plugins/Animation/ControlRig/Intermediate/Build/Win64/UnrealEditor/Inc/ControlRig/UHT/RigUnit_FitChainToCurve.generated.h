// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_FitChainToCurve.h"

#ifdef CONTROLRIG_RigUnit_FitChainToCurve_generated_h
#error "RigUnit_FitChainToCurve.generated.h already included, missing '#pragma once' in RigUnit_FitChainToCurve.h"
#endif
#define CONTROLRIG_RigUnit_FitChainToCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_FitChainToCurve_Rotation *********************************
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Rotation_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_FitChainToCurve_Rotation;
// ********** End ScriptStruct FRigUnit_FitChainToCurve_Rotation ***********************************

// ********** Begin ScriptStruct FRigUnit_FitChainToCurve_DebugSettings ****************************
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_DebugSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_FitChainToCurve_DebugSettings;
// ********** End ScriptStruct FRigUnit_FitChainToCurve_DebugSettings ******************************

// ********** Begin ScriptStruct FRigUnit_FitChainToCurve_WorkData *********************************
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_FitChainToCurve_WorkData;
// ********** End ScriptStruct FRigUnit_FitChainToCurve_WorkData ***********************************

// ********** Begin ScriptStruct FRigUnit_FitChainToCurve ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics;

#define FRigUnit_FitChainToCurve_Execute() \
	void FRigUnit_FitChainToCurve::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const FRigVMFourPointBezier& Bezier, \
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

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_135_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitChainToCurve_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const FRigVMFourPointBezier& Bezier, \
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
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[2].GetInputData(); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[3].GetInputData(); \
		const float Minimum = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Maximum = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[6].GetInputData(); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[7].GetInputData(); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[8].GetInputData(); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[9].GetInputData(); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[10].GetInputData(); \
		const ERigVMAnimEasingType RotationEaseType = *(ERigVMAnimEasingType*)RigVMMemoryHandles[11].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[12].GetInputData(); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[13].GetInputData(); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[14].GetInputData(); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[15].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			StartBone, \
			EndBone, \
			Bezier, \
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


struct FRigUnit_FitChainToCurve;
// ********** End ScriptStruct FRigUnit_FitChainToCurve ********************************************

// ********** Begin ScriptStruct FRigUnit_FitChainToCurvePerItem ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics;

#define FRigUnit_FitChainToCurvePerItem_Execute() \
	void FRigUnit_FitChainToCurvePerItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FRigVMFourPointBezier& Bezier, \
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

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_262_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitChainToCurvePerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FRigVMFourPointBezier& Bezier, \
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
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[1].GetInputData(); \
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
			Bezier, \
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


struct FRigUnit_FitChainToCurvePerItem;
// ********** End ScriptStruct FRigUnit_FitChainToCurvePerItem *************************************

// ********** Begin ScriptStruct FRigUnit_FitChainToCurveItemArray *********************************
struct Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics;

#define FRigUnit_FitChainToCurveItemArray_Execute() \
	void FRigUnit_FitChainToCurveItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FRigVMFourPointBezier& Bezier, \
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

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h_382_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_FitChainToCurveItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FRigVMFourPointBezier& Bezier, \
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
		const FRigVMFourPointBezier& Bezier = *(FRigVMFourPointBezier*)RigVMMemoryHandles[1].GetInputData(); \
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
			Bezier, \
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


struct FRigUnit_FitChainToCurveItemArray;
// ********** End ScriptStruct FRigUnit_FitChainToCurveItemArray ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_FitChainToCurve_h

// ********** Begin Enum EControlRigCurveAlignment *************************************************
#define FOREACH_ENUM_ECONTROLRIGCURVEALIGNMENT(op) \
	op(EControlRigCurveAlignment::Front) \
	op(EControlRigCurveAlignment::Stretched) 

enum class EControlRigCurveAlignment : uint8;
template<> struct TIsUEnumClass<EControlRigCurveAlignment> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigCurveAlignment>();
// ********** End Enum EControlRigCurveAlignment ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
