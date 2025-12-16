// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigPhysicsControlExecution.h"

#ifdef CONTROLRIGPHYSICS_RigPhysicsControlExecution_generated_h
#error "RigPhysicsControlExecution.generated.h already included, missing '#pragma once' in RigPhysicsControlExecution.h"
#endif
#define CONTROLRIGPHYSICS_RigPhysicsControlExecution_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AddPhysicsControl ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_AddPhysicsControl_Statics;

#define FRigUnit_AddPhysicsControl_Execute() \
	void FRigUnit_AddPhysicsControl::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		FRigComponentKey& ControlComponentKey, \
		const FRigComponentKey& ParentBodyComponentKey, \
		const bool bUseParentBodyAsDefault, \
		const FRigComponentKey& ChildBodyComponentKey, \
		const FPhysicsControlData& ControlData, \
		const FPhysicsControlMultiplier& ControlMultiplier, \
		const FPhysicsControlTarget& ControlTarget \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AddPhysicsControl_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Owner, \
		FRigComponentKey& ControlComponentKey, \
		const FRigComponentKey& ParentBodyComponentKey, \
		const bool bUseParentBodyAsDefault, \
		const FRigComponentKey& ChildBodyComponentKey, \
		const FPhysicsControlData& ControlData, \
		const FPhysicsControlMultiplier& ControlMultiplier, \
		const FPhysicsControlTarget& ControlTarget \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Owner = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		FRigComponentKey& ControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[1].GetOutputData(); \
		const FRigComponentKey& ParentBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bUseParentBodyAsDefault = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigComponentKey& ChildBodyComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FPhysicsControlData& ControlData = *(FPhysicsControlData*)RigVMMemoryHandles[5].GetInputData(); \
		const FPhysicsControlMultiplier& ControlMultiplier = *(FPhysicsControlMultiplier*)RigVMMemoryHandles[6].GetInputData(); \
		const FPhysicsControlTarget& ControlTarget = *(FPhysicsControlTarget*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Owner, \
			ControlComponentKey, \
			ParentBodyComponentKey, \
			bUseParentBodyAsDefault, \
			ChildBodyComponentKey, \
			ControlData, \
			ControlMultiplier, \
			ControlTarget \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_AddPhysicsControl;
// ********** End ScriptStruct FRigUnit_AddPhysicsControl ******************************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlEnabled *******************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlEnabled_Statics;

#define FRigUnit_HierarchySetControlEnabled_Execute() \
	void FRigUnit_HierarchySetControlEnabled::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const bool bEnabled \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlEnabled_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const bool bEnabled \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			bEnabled \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlEnabled;
// ********** End ScriptStruct FRigUnit_HierarchySetControlEnabled *********************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlCustomControlPoint ********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlCustomControlPoint_Statics;

#define FRigUnit_HierarchySetControlCustomControlPoint_Execute() \
	void FRigUnit_HierarchySetControlCustomControlPoint::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FVector& CustomControlPoint, \
		const bool bUseCustomControlPoint \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlCustomControlPoint_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FVector& CustomControlPoint, \
		const bool bUseCustomControlPoint \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& CustomControlPoint = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bUseCustomControlPoint = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			CustomControlPoint, \
			bUseCustomControlPoint \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlCustomControlPoint;
// ********** End ScriptStruct FRigUnit_HierarchySetControlCustomControlPoint **********************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlData **********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlData_Statics;

#define FRigUnit_HierarchySetControlData_Execute() \
	void FRigUnit_HierarchySetControlData::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FPhysicsControlData& ControlData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FPhysicsControlData& ControlData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FPhysicsControlData& ControlData = *(FPhysicsControlData*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			ControlData \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlData;
// ********** End ScriptStruct FRigUnit_HierarchySetControlData ************************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlLinearStrength ************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlLinearStrength_Statics;

#define FRigUnit_HierarchySetControlLinearStrength_Execute() \
	void FRigUnit_HierarchySetControlLinearStrength::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const float Strength \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlLinearStrength_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const float Strength \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			Strength \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlLinearStrength;
// ********** End ScriptStruct FRigUnit_HierarchySetControlLinearStrength **************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlLinearDampingRatio ********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlLinearDampingRatio_Statics;

#define FRigUnit_HierarchySetControlLinearDampingRatio_Execute() \
	void FRigUnit_HierarchySetControlLinearDampingRatio::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const float DampingRatio \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlLinearDampingRatio_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const float DampingRatio \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const float DampingRatio = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			DampingRatio \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlLinearDampingRatio;
// ********** End ScriptStruct FRigUnit_HierarchySetControlLinearDampingRatio **********************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlAngularStrength ***********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlAngularStrength_Statics;

#define FRigUnit_HierarchySetControlAngularStrength_Execute() \
	void FRigUnit_HierarchySetControlAngularStrength::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const float Strength \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_190_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlAngularStrength_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const float Strength \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			Strength \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlAngularStrength;
// ********** End ScriptStruct FRigUnit_HierarchySetControlAngularStrength *************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlAngularDampingRatio *******************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlAngularDampingRatio_Statics;

#define FRigUnit_HierarchySetControlAngularDampingRatio_Execute() \
	void FRigUnit_HierarchySetControlAngularDampingRatio::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const float DampingRatio \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_211_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlAngularDampingRatio_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const float DampingRatio \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const float DampingRatio = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			DampingRatio \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlAngularDampingRatio;
// ********** End ScriptStruct FRigUnit_HierarchySetControlAngularDampingRatio *********************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetControlData **********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetControlData_Statics;

#define FRigUnit_HierarchyGetControlData_Execute() \
	void FRigUnit_HierarchyGetControlData::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		FPhysicsControlData& ControlData \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_233_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetControlData_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		FPhysicsControlData& ControlData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		FPhysicsControlData& ControlData = *(FPhysicsControlData*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			ControlData \
		); \
	} \
	typedef FRigUnit_PhysicsBase Super;


struct FRigUnit_HierarchyGetControlData;
// ********** End ScriptStruct FRigUnit_HierarchyGetControlData ************************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlMultiplier ****************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlMultiplier_Statics;

#define FRigUnit_HierarchySetControlMultiplier_Execute() \
	void FRigUnit_HierarchySetControlMultiplier::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FPhysicsControlMultiplier& ControlMultiplier \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_255_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlMultiplier_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FPhysicsControlMultiplier& ControlMultiplier \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FPhysicsControlMultiplier& ControlMultiplier = *(FPhysicsControlMultiplier*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			ControlMultiplier \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlMultiplier;
// ********** End ScriptStruct FRigUnit_HierarchySetControlMultiplier ******************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlDataAndMultiplier *********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlDataAndMultiplier_Statics;

#define FRigUnit_HierarchySetControlDataAndMultiplier_Execute() \
	void FRigUnit_HierarchySetControlDataAndMultiplier::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FPhysicsControlData& ControlData, \
		const FPhysicsControlMultiplier& ControlMultiplier \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_277_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlDataAndMultiplier_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FPhysicsControlData& ControlData, \
		const FPhysicsControlMultiplier& ControlMultiplier \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FPhysicsControlData& ControlData = *(FPhysicsControlData*)RigVMMemoryHandles[1].GetInputData(); \
		const FPhysicsControlMultiplier& ControlMultiplier = *(FPhysicsControlMultiplier*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			ControlData, \
			ControlMultiplier \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlDataAndMultiplier;
// ********** End ScriptStruct FRigUnit_HierarchySetControlDataAndMultiplier ***********************

// ********** Begin ScriptStruct FRigUnit_HierarchySetControlTarget ********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlTarget_Statics;

#define FRigUnit_HierarchySetControlTarget_Execute() \
	void FRigUnit_HierarchySetControlTarget::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FPhysicsControlTarget& ControlTarget \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_302_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetControlTarget_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FPhysicsControlTarget& ControlTarget \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FPhysicsControlTarget& ControlTarget = *(FPhysicsControlTarget*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			ControlTarget \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchySetControlTarget;
// ********** End ScriptStruct FRigUnit_HierarchySetControlTarget **********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyUpdateControlTarget *****************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyUpdateControlTarget_Statics;

#define FRigUnit_HierarchyUpdateControlTarget_Execute() \
	void FRigUnit_HierarchyUpdateControlTarget::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FVector& TargetPosition, \
		const FRotator& TargetOrientation, \
		const float DeltaTime \
	)

#define FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h_325_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyUpdateControlTarget_Statics; \
	CONTROLRIGPHYSICS_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigComponentKey& PhysicsControlComponentKey, \
		const FVector& TargetPosition, \
		const FRotator& TargetOrientation, \
		const float DeltaTime \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigComponentKey& PhysicsControlComponentKey = *(FRigComponentKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& TargetPosition = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FRotator& TargetOrientation = *(FRotator*)RigVMMemoryHandles[2].GetInputData(); \
		const float DeltaTime = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PhysicsControlComponentKey, \
			TargetPosition, \
			TargetOrientation, \
			DeltaTime \
		); \
	} \
	typedef FRigUnit_PhysicsBaseMutable Super;


struct FRigUnit_HierarchyUpdateControlTarget;
// ********** End ScriptStruct FRigUnit_HierarchyUpdateControlTarget *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ControlRigPhysics_Source_ControlRigPhysics_Public_RigPhysicsControlExecution_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
