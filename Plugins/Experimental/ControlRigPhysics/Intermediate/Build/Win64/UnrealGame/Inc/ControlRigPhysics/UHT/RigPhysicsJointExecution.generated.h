// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigPhysicsJointExecution.h"

#ifdef CONTROLRIGPHYSICS_RigPhysicsJointExecution_generated_h
#error "RigPhysicsJointExecution.generated.h already included, missing '#pragma once' in RigPhysicsJointExecution.h"
#endif
#define CONTROLRIGPHYSICS_RigPhysicsJointExecution_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AddPhysicsJoint ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_AddPhysicsJoint_Statics;

#define FRigUnit_AddPhysicsJoint_Execute() \
	void FRigUnit_AddPhysicsJoint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		FRigComponentKey& PhysicsJointComponentKey, \
		const FRigComponentKey& ParentBodyComponentKey, \
		const FRigComponentKey& ChildBodyComponentKey, \
		const FRigPhysicsJointData& JointData, \
		const FRigPhysicsDriveData& DriveData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AddPhysicsJoint_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		FRigComponentKey& PhysicsJointComponentKey, \
		const FRigComponentKey& ParentBodyComponentKey, \
		const FRigComponentKey& ChildBodyComponentKey, \
		const FRigPhysicsJointData& JointData, \
		const FRigPhysicsDriveData& DriveData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Owner = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		FRigComponentKey& PhysicsJointComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[1].GetOutputData(); \
		const FRigComponentKey& ParentBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigComponentKey& ChildBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigPhysicsJointData& JointData = *(FRigPhysicsJointData*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigPhysicsDriveData& DriveData = *(FRigPhysicsDriveData*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Owner, \
			PhysicsJointComponentKey, \
			ParentBodyComponentKey, \
			ChildBodyComponentKey, \
			JointData, \
			DriveData \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_AddPhysicsJoint;
// ********** End ScriptStruct FRigUnit_AddPhysicsJoint ********************************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetJointData ************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetJointData_Statics;

#define FRigUnit_HierarchySetJointData_Execute() \
	void FRigUnit_HierarchySetJointData::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		const FRigPhysicsJointData& JointData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetJointData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		const FRigPhysicsJointData& JointData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsJointComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigPhysicsJointData& JointData = *(FRigPhysicsJointData*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsJointComponentKey, \
			JointData \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetJointData;
// ********** End ScriptStruct FRigUnit_HierarchySetJointData **************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetJointData ************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetJointData_Statics;

#define FRigUnit_HierarchyGetJointData_Execute() \
	void FRigUnit_HierarchyGetJointData::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		FRigPhysicsJointData& JointData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetJointData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		FRigPhysicsJointData& JointData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsJointComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		FRigPhysicsJointData& JointData = *(FRigPhysicsJointData*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsJointComponentKey, \
			JointData \
		); \
	} \
	typedef FRigUnit_PhysicsBase Super;


struct FRigUnit_HierarchyGetJointData;
// ********** End ScriptStruct FRigUnit_HierarchyGetJointData **************************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetJointEnabled *********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetJointEnabled_Statics;

#define FRigUnit_HierarchySetJointEnabled_Execute() \
	void FRigUnit_HierarchySetJointEnabled::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_112_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetJointEnabled_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsJointComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsJointComponentKey, \
			bEnabled \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetJointEnabled;
// ********** End ScriptStruct FRigUnit_HierarchySetJointEnabled ***********************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetJointDriveData *******************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetJointDriveData_Statics;

#define FRigUnit_HierarchySetJointDriveData_Execute() \
	void FRigUnit_HierarchySetJointDriveData::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		const FRigPhysicsDriveData& DriveData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetJointDriveData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		const FRigPhysicsDriveData& DriveData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsJointComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigPhysicsDriveData& DriveData = *(FRigPhysicsDriveData*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsJointComponentKey, \
			DriveData \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetJointDriveData;
// ********** End ScriptStruct FRigUnit_HierarchySetJointDriveData *********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetJointDriveData *******************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetJointDriveData_Statics;

#define FRigUnit_HierarchyGetJointDriveData_Execute() \
	void FRigUnit_HierarchyGetJointDriveData::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		FRigPhysicsDriveData& DriveData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetJointDriveData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		FRigPhysicsDriveData& DriveData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsJointComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		FRigPhysicsDriveData& DriveData = *(FRigPhysicsDriveData*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsJointComponentKey, \
			DriveData \
		); \
	} \
	typedef FRigUnit_PhysicsBase Super;


struct FRigUnit_HierarchyGetJointDriveData;
// ********** End ScriptStruct FRigUnit_HierarchyGetJointDriveData *********************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetJointDriveUseSkeletalAnimation ***************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetJointDriveUseSkeletalAnimation_Statics;

#define FRigUnit_HierarchySetJointDriveUseSkeletalAnimation_Execute() \
	void FRigUnit_HierarchySetJointDriveUseSkeletalAnimation::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		const bool bUseSkeletalAnimation \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_178_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetJointDriveUseSkeletalAnimation_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsJointComponentKey, \
		const bool bUseSkeletalAnimation \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsJointComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bUseSkeletalAnimation = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsJointComponentKey, \
			bUseSkeletalAnimation \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetJointDriveUseSkeletalAnimation;
// ********** End ScriptStruct FRigUnit_HierarchySetJointDriveUseSkeletalAnimation *****************

// ********** Begin ScriptStruct FRigUnit_MakeArticulationJointData ********************************
struct Z_Construct_UScriptStruct_FRigUnit_MakeArticulationJointData_Statics;

#define FRigUnit_MakeArticulationJointData_Execute() \
	void FRigUnit_MakeArticulationJointData::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& AngularLimit, \
		const FVector& SoftStrength, \
		const FVector& SoftDampingRatio, \
		FRigPhysicsJointData& JointData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MakeArticulationJointData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& AngularLimit, \
		const FVector& SoftStrength, \
		const FVector& SoftDampingRatio, \
		FRigPhysicsJointData& JointData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& AngularLimit = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& SoftStrength = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& SoftDampingRatio = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		FRigPhysicsJointData& JointData = *(FRigPhysicsJointData*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			AngularLimit, \
			SoftStrength, \
			SoftDampingRatio, \
			JointData \
		); \
	} \
	typedef FRigUnit_PhysicsBase Super;


struct FRigUnit_MakeArticulationJointData;
// ********** End ScriptStruct FRigUnit_MakeArticulationJointData **********************************

// ********** Begin ScriptStruct FRigUnit_MakeArticulationDriveData ********************************
struct Z_Construct_UScriptStruct_FRigUnit_MakeArticulationDriveData_Statics;

#define FRigUnit_MakeArticulationDriveData_Execute() \
	void FRigUnit_MakeArticulationDriveData::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const bool bEnableAngularDrive, \
		const TEnumAsByte<EAngularDriveMode::Type>& AngularDriveMode, \
		const float AngularStrength, \
		const float AngularDampingRatio, \
		const float AngularExtraDamping, \
		const float SkeletalAnimationVelocityMultiplier, \
		FRigPhysicsDriveData& DriveData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_229_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MakeArticulationDriveData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const bool bEnableAngularDrive, \
		const TEnumAsByte<EAngularDriveMode::Type>& AngularDriveMode, \
		const float AngularStrength, \
		const float AngularDampingRatio, \
		const float AngularExtraDamping, \
		const float SkeletalAnimationVelocityMultiplier, \
		FRigPhysicsDriveData& DriveData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool bEnableAngularDrive = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const TEnumAsByte<EAngularDriveMode::Type>& AngularDriveMode = *(TEnumAsByte<EAngularDriveMode::Type>*)RigVMMemoryHandles[1].GetInputData(); \
		const float AngularStrength = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float AngularDampingRatio = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float AngularExtraDamping = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float SkeletalAnimationVelocityMultiplier = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		FRigPhysicsDriveData& DriveData = *(FRigPhysicsDriveData*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			bEnableAngularDrive, \
			AngularDriveMode, \
			AngularStrength, \
			AngularDampingRatio, \
			AngularExtraDamping, \
			SkeletalAnimationVelocityMultiplier, \
			DriveData \
		); \
	} \
	typedef FRigUnit_PhysicsBase Super;


struct FRigUnit_MakeArticulationDriveData;
// ********** End ScriptStruct FRigUnit_MakeArticulationDriveData **********************************

// ********** Begin ScriptStruct FRigUnit_MakeDriveData ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_MakeDriveData_Statics;

#define FRigUnit_MakeDriveData_Execute() \
	void FRigUnit_MakeDriveData::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const bool bEnableLinearDrive, \
		const float LinearStrength, \
		const float LinearDampingRatio, \
		const float LinearExtraDamping, \
		const bool bEnableAngularDrive, \
		const TEnumAsByte<EAngularDriveMode::Type>& AngularDriveMode, \
		const float AngularStrength, \
		const float AngularDampingRatio, \
		const float AngularExtraDamping, \
		const float SkeletalAnimationVelocityMultiplier, \
		FRigPhysicsDriveData& DriveData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h_274_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_MakeDriveData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const bool bEnableLinearDrive, \
		const float LinearStrength, \
		const float LinearDampingRatio, \
		const float LinearExtraDamping, \
		const bool bEnableAngularDrive, \
		const TEnumAsByte<EAngularDriveMode::Type>& AngularDriveMode, \
		const float AngularStrength, \
		const float AngularDampingRatio, \
		const float AngularExtraDamping, \
		const float SkeletalAnimationVelocityMultiplier, \
		FRigPhysicsDriveData& DriveData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool bEnableLinearDrive = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const float LinearStrength = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float LinearDampingRatio = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float LinearExtraDamping = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bEnableAngularDrive = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		const TEnumAsByte<EAngularDriveMode::Type>& AngularDriveMode = *(TEnumAsByte<EAngularDriveMode::Type>*)RigVMMemoryHandles[5].GetInputData(); \
		const float AngularStrength = *(float*)RigVMMemoryHandles[6].GetInputData(); \
		const float AngularDampingRatio = *(float*)RigVMMemoryHandles[7].GetInputData(); \
		const float AngularExtraDamping = *(float*)RigVMMemoryHandles[8].GetInputData(); \
		const float SkeletalAnimationVelocityMultiplier = *(float*)RigVMMemoryHandles[9].GetInputData(); \
		FRigPhysicsDriveData& DriveData = *(FRigPhysicsDriveData*)RigVMMemoryHandles[10].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			bEnableLinearDrive, \
			LinearStrength, \
			LinearDampingRatio, \
			LinearExtraDamping, \
			bEnableAngularDrive, \
			AngularDriveMode, \
			AngularStrength, \
			AngularDampingRatio, \
			AngularExtraDamping, \
			SkeletalAnimationVelocityMultiplier, \
			DriveData \
		); \
	} \
	typedef FRigUnit_PhysicsBase Super;


struct FRigUnit_MakeDriveData;
// ********** End ScriptStruct FRigUnit_MakeDriveData **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsJointExecution_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
