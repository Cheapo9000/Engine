// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h"

#ifdef CONTROLRIG_RigUnit_SphericalPoseReader_generated_h
#error "RigUnit_SphericalPoseReader.generated.h already included, missing '#pragma once' in RigUnit_SphericalPoseReader.h"
#endif
#define CONTROLRIG_RigUnit_SphericalPoseReader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRegionScaleFactors ***********************************************
struct Z_Construct_UScriptStruct_FRegionScaleFactors_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRegionScaleFactors_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRegionScaleFactors;
// ********** End ScriptStruct FRegionScaleFactors *************************************************

// ********** Begin ScriptStruct FSphericalRegion **************************************************
struct Z_Construct_UScriptStruct_FSphericalRegion_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSphericalRegion_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FSphericalRegion;
// ********** End ScriptStruct FSphericalRegion ****************************************************

// ********** Begin ScriptStruct FSphericalPoseReaderDebugSettings *********************************
struct Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FSphericalPoseReaderDebugSettings;
// ********** End ScriptStruct FSphericalPoseReaderDebugSettings ***********************************

// ********** Begin ScriptStruct FRigUnit_SphericalPoseReader **************************************
struct Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics;

#define FRigUnit_SphericalPoseReader_Execute() \
	void FRigUnit_SphericalPoseReader::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		float& OutputParam, \
		const FRigElementKey& DriverItem, \
		const FVector& DriverAxis, \
		const FVector& RotationOffset, \
		const float ActiveRegionSize, \
		const FRegionScaleFactors& ActiveRegionScaleFactors, \
		const float FalloffSize, \
		const FRegionScaleFactors& FalloffRegionScaleFactors, \
		const bool FlipWidthScaling, \
		const bool FlipHeightScaling, \
		const FRigElementKey& OptionalParentItem, \
		const FSphericalPoseReaderDebugSettings& Debug, \
		FSphericalRegion& InnerRegion, \
		FSphericalRegion& OuterRegion, \
		FVector& DriverNormal, \
		FVector& Driver2D, \
		FCachedRigElement& DriverCache, \
		FCachedRigElement& OptionalParentCache, \
		FTransform& LocalDriverTransformInit, \
		FVector& CachedRotationOffset, \
		bool& bCachedInitTransforms \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_283_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		float& OutputParam, \
		const FRigElementKey& DriverItem, \
		const FVector& DriverAxis, \
		const FVector& RotationOffset, \
		const float ActiveRegionSize, \
		const FRegionScaleFactors& ActiveRegionScaleFactors, \
		const float FalloffSize, \
		const FRegionScaleFactors& FalloffRegionScaleFactors, \
		const bool FlipWidthScaling, \
		const bool FlipHeightScaling, \
		const FRigElementKey& OptionalParentItem, \
		const FSphericalPoseReaderDebugSettings& Debug, \
		FSphericalRegion& InnerRegion, \
		FSphericalRegion& OuterRegion, \
		FVector& DriverNormal, \
		FVector& Driver2D, \
		FCachedRigElement& DriverCache, \
		FCachedRigElement& OptionalParentCache, \
		FTransform& LocalDriverTransformInit, \
		FVector& CachedRotationOffset, \
		bool& bCachedInitTransforms \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& OutputParam = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		const FRigElementKey& DriverItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& DriverAxis = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FVector& RotationOffset = *(FVector*)RigVMMemoryHandles[3].GetInputData(); \
		const float ActiveRegionSize = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const FRegionScaleFactors& ActiveRegionScaleFactors = *(FRegionScaleFactors*)RigVMMemoryHandles[5].GetInputData(); \
		const float FalloffSize = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		const FRegionScaleFactors& FalloffRegionScaleFactors = *(FRegionScaleFactors*)RigVMMemoryHandles[7].GetInputData(); \
		const bool FlipWidthScaling = *(bool*)RigVMMemoryHandles[8].GetInputData(); \
		const bool FlipHeightScaling = *(bool*)RigVMMemoryHandles[9].GetInputData(); \
		const FRigElementKey& OptionalParentItem = *(FRigElementKey*)RigVMMemoryHandles[10].GetInputData(); \
		const FSphericalPoseReaderDebugSettings& Debug = *(FSphericalPoseReaderDebugSettings*)RigVMMemoryHandles[11].GetInputData(); \
		FSphericalRegion& InnerRegion = *(FSphericalRegion*)RigVMMemoryHandles[12].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FSphericalRegion& OuterRegion = *(FSphericalRegion*)RigVMMemoryHandles[13].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& DriverNormal = *(FVector*)RigVMMemoryHandles[14].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& Driver2D = *(FVector*)RigVMMemoryHandles[15].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& DriverCache = *(FCachedRigElement*)RigVMMemoryHandles[16].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& OptionalParentCache = *(FCachedRigElement*)RigVMMemoryHandles[17].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FTransform& LocalDriverTransformInit = *(FTransform*)RigVMMemoryHandles[18].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& CachedRotationOffset = *(FVector*)RigVMMemoryHandles[19].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bCachedInitTransforms = *(bool*)RigVMMemoryHandles[20].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			OutputParam, \
			DriverItem, \
			DriverAxis, \
			RotationOffset, \
			ActiveRegionSize, \
			ActiveRegionScaleFactors, \
			FalloffSize, \
			FalloffRegionScaleFactors, \
			FlipWidthScaling, \
			FlipHeightScaling, \
			OptionalParentItem, \
			Debug, \
			InnerRegion, \
			OuterRegion, \
			DriverNormal, \
			Driver2D, \
			DriverCache, \
			OptionalParentCache, \
			LocalDriverTransformInit, \
			CachedRotationOffset, \
			bCachedInitTransforms \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_SphericalPoseReader;
// ********** End ScriptStruct FRigUnit_SphericalPoseReader ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
