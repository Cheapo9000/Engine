// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Collision/RigUnit_WorldCollision.h"

#ifdef CONTROLRIG_RigUnit_WorldCollision_generated_h
#error "RigUnit_WorldCollision.generated.h already included, missing '#pragma once' in RigUnit_WorldCollision.h"
#endif
#define CONTROLRIG_RigUnit_WorldCollision_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_SphereTrace_WorkData *************************************
struct Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SphereTrace_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_SphereTrace_WorkData;
// ********** End ScriptStruct FRigUnit_SphereTrace_WorkData ***************************************

// ********** Begin ScriptStruct FRigUnit_SphereTraceWorld *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics;

#define FRigUnit_SphereTraceWorld_Execute() \
	void FRigUnit_SphereTraceWorld::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TEnumAsByte<ECollisionChannel>& Channel, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TEnumAsByte<ECollisionChannel>& Channel, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& End = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const TEnumAsByte<ECollisionChannel>& Channel = *(TEnumAsByte<ECollisionChannel>*)RigVMMemoryHandles[2].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		bool& bHit = *(bool*)RigVMMemoryHandles[4].GetOutputData(); \
		FVector& HitLocation = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		FVector& HitNormal = *(FVector*)RigVMMemoryHandles[6].GetOutputData(); \
		FRigUnit_SphereTrace_WorkData& WorkData = *(FRigUnit_SphereTrace_WorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Start, \
			End, \
			Channel, \
			Radius, \
			bHit, \
			HitLocation, \
			HitNormal, \
			WorkData \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_SphereTraceWorld;
// ********** End ScriptStruct FRigUnit_SphereTraceWorld *******************************************

// ********** Begin ScriptStruct FRigUnit_SphereTraceByTraceChannel ********************************
struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics;

#define FRigUnit_SphereTraceByTraceChannel_Execute() \
	void FRigUnit_SphereTraceByTraceChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TEnumAsByte<ETraceTypeQuery>& TraceChannel, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TEnumAsByte<ETraceTypeQuery>& TraceChannel, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& End = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const TEnumAsByte<ETraceTypeQuery>& TraceChannel = *(TEnumAsByte<ETraceTypeQuery>*)RigVMMemoryHandles[2].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		bool& bHit = *(bool*)RigVMMemoryHandles[4].GetOutputData(); \
		FVector& HitLocation = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		FVector& HitNormal = *(FVector*)RigVMMemoryHandles[6].GetOutputData(); \
		FRigUnit_SphereTrace_WorkData& WorkData = *(FRigUnit_SphereTrace_WorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Start, \
			End, \
			TraceChannel, \
			Radius, \
			bHit, \
			HitLocation, \
			HitNormal, \
			WorkData \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_SphereTraceByTraceChannel;
// ********** End ScriptStruct FRigUnit_SphereTraceByTraceChannel **********************************

// ********** Begin ScriptStruct FRigUnit_LineTraceByTraceChannel **********************************
struct Z_Construct_UScriptStruct_FRigUnit_LineTraceByTraceChannel_Statics;

#define FRigUnit_LineTraceByTraceChannel_Execute() \
	void FRigUnit_LineTraceByTraceChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TEnumAsByte<ETraceTypeQuery>& TraceChannel, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_165_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_LineTraceByTraceChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TEnumAsByte<ETraceTypeQuery>& TraceChannel, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& End = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const TEnumAsByte<ETraceTypeQuery>& TraceChannel = *(TEnumAsByte<ETraceTypeQuery>*)RigVMMemoryHandles[2].GetInputData(); \
		bool& bHit = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		FVector& HitLocation = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		FVector& HitNormal = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		FRigUnit_SphereTrace_WorkData& WorkData = *(FRigUnit_SphereTrace_WorkData*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Start, \
			End, \
			TraceChannel, \
			bHit, \
			HitLocation, \
			HitNormal, \
			WorkData \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_LineTraceByTraceChannel;
// ********** End ScriptStruct FRigUnit_LineTraceByTraceChannel ************************************

// ********** Begin ScriptStruct FRigUnit_SphereTraceByObjectTypes *********************************
struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics;

#define FRigUnit_SphereTraceByObjectTypes_Execute() \
	void FRigUnit_SphereTraceByObjectTypes::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TArrayView<const TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_217_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TArrayView<const TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, \
		const float Radius, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& End = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes = *(TArray<TEnumAsByte<EObjectTypeQuery>>*)RigVMMemoryHandles[2].GetInputData(); \
		const float Radius = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		bool& bHit = *(bool*)RigVMMemoryHandles[4].GetOutputData(); \
		FVector& HitLocation = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		FVector& HitNormal = *(FVector*)RigVMMemoryHandles[6].GetOutputData(); \
		FRigUnit_SphereTrace_WorkData& WorkData = *(FRigUnit_SphereTrace_WorkData*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Start, \
			End, \
			ObjectTypes, \
			Radius, \
			bHit, \
			HitLocation, \
			HitNormal, \
			WorkData \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_SphereTraceByObjectTypes;
// ********** End ScriptStruct FRigUnit_SphereTraceByObjectTypes ***********************************

// ********** Begin ScriptStruct FRigUnit_LineTraceByObjectTypes ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_LineTraceByObjectTypes_Statics;

#define FRigUnit_LineTraceByObjectTypes_Execute() \
	void FRigUnit_LineTraceByObjectTypes::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TArrayView<const TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h_274_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_LineTraceByObjectTypes_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FVector& Start, \
		const FVector& End, \
		const TArrayView<const TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, \
		bool& bHit, \
		FVector& HitLocation, \
		FVector& HitNormal, \
		FRigUnit_SphereTrace_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Start = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& End = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes = *(TArray<TEnumAsByte<EObjectTypeQuery>>*)RigVMMemoryHandles[2].GetInputData(); \
		bool& bHit = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		FVector& HitLocation = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		FVector& HitNormal = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		FRigUnit_SphereTrace_WorkData& WorkData = *(FRigUnit_SphereTrace_WorkData*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Start, \
			End, \
			ObjectTypes, \
			bHit, \
			HitLocation, \
			HitNormal, \
			WorkData \
		); \
	} \
	typedef FRigUnit Super;


struct FRigUnit_LineTraceByObjectTypes;
// ********** End ScriptStruct FRigUnit_LineTraceByObjectTypes *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Collision_RigUnit_WorldCollision_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
