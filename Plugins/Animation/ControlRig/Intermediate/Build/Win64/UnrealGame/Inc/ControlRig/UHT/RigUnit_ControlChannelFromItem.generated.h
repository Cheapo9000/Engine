// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_ControlChannelFromItem.h"

#ifdef CONTROLRIG_RigUnit_ControlChannelFromItem_generated_h
#error "RigUnit_ControlChannelFromItem.generated.h already included, missing '#pragma once' in RigUnit_ControlChannelFromItem.h"
#endif
#define CONTROLRIG_RigUnit_ControlChannelFromItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetAnimationChannelFromItemBase **************************
struct Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelFromItemBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_GetAnimationChannelFromItemBase;
// ********** End ScriptStruct FRigUnit_GetAnimationChannelFromItemBase ****************************

// ********** Begin ScriptStruct FRigUnit_GetBoolAnimationChannelFromItem **************************
struct Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics;

#define FRigUnit_GetBoolAnimationChannelFromItem_Execute() \
	void FRigUnit_GetBoolAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetOutputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


struct FRigUnit_GetBoolAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_GetBoolAnimationChannelFromItem ****************************

// ********** Begin ScriptStruct FRigUnit_GetFloatAnimationChannelFromItem *************************
struct Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics;

#define FRigUnit_GetFloatAnimationChannelFromItem_Execute() \
	void FRigUnit_GetFloatAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		float& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		float& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


struct FRigUnit_GetFloatAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_GetFloatAnimationChannelFromItem ***************************

// ********** Begin ScriptStruct FRigUnit_GetIntAnimationChannelFromItem ***************************
struct Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics;

#define FRigUnit_GetIntAnimationChannelFromItem_Execute() \
	void FRigUnit_GetIntAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		int32& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		int32& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		int32& Value = *(int32*)RigVMMemoryHandles[0].GetOutputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


struct FRigUnit_GetIntAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_GetIntAnimationChannelFromItem *****************************

// ********** Begin ScriptStruct FRigUnit_GetVector2DAnimationChannelFromItem **********************
struct Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics;

#define FRigUnit_GetVector2DAnimationChannelFromItem_Execute() \
	void FRigUnit_GetVector2DAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector2D& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector2D& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector2D& Value = *(FVector2D*)RigVMMemoryHandles[0].GetOutputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


struct FRigUnit_GetVector2DAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_GetVector2DAnimationChannelFromItem ************************

// ********** Begin ScriptStruct FRigUnit_GetVectorAnimationChannelFromItem ************************
struct Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics;

#define FRigUnit_GetVectorAnimationChannelFromItem_Execute() \
	void FRigUnit_GetVectorAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetOutputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


struct FRigUnit_GetVectorAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_GetVectorAnimationChannelFromItem **************************

// ********** Begin ScriptStruct FRigUnit_GetRotatorAnimationChannelFromItem ***********************
struct Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics;

#define FRigUnit_GetRotatorAnimationChannelFromItem_Execute() \
	void FRigUnit_GetRotatorAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRotator& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRotator& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetOutputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


struct FRigUnit_GetRotatorAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_GetRotatorAnimationChannelFromItem *************************

// ********** Begin ScriptStruct FRigUnit_GetTransformAnimationChannelFromItem *********************
struct Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics;

#define FRigUnit_GetTransformAnimationChannelFromItem_Execute() \
	void FRigUnit_GetTransformAnimationChannelFromItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetOutputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


struct FRigUnit_GetTransformAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_GetTransformAnimationChannelFromItem ***********************

// ********** Begin ScriptStruct FRigUnit_SetAnimationChannelBaseFromItem **************************
struct Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_190_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBaseFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_GetAnimationChannelFromItemBase Super;


struct FRigUnit_SetAnimationChannelBaseFromItem;
// ********** End ScriptStruct FRigUnit_SetAnimationChannelBaseFromItem ****************************

// ********** Begin ScriptStruct FRigUnit_SetBoolAnimationChannelFromItem **************************
struct Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics;

#define FRigUnit_SetBoolAnimationChannelFromItem_Execute() \
	void FRigUnit_SetBoolAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_207_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


struct FRigUnit_SetBoolAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_SetBoolAnimationChannelFromItem ****************************

// ********** Begin ScriptStruct FRigUnit_SetFloatAnimationChannelFromItem *************************
struct Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics;

#define FRigUnit_SetFloatAnimationChannelFromItem_Execute() \
	void FRigUnit_SetFloatAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_228_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


struct FRigUnit_SetFloatAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_SetFloatAnimationChannelFromItem ***************************

// ********** Begin ScriptStruct FRigUnit_SetIntAnimationChannelFromItem ***************************
struct Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics;

#define FRigUnit_SetIntAnimationChannelFromItem_Execute() \
	void FRigUnit_SetIntAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_249_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


struct FRigUnit_SetIntAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_SetIntAnimationChannelFromItem *****************************

// ********** Begin ScriptStruct FRigUnit_SetVector2DAnimationChannelFromItem **********************
struct Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics;

#define FRigUnit_SetVector2DAnimationChannelFromItem_Execute() \
	void FRigUnit_SetVector2DAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_270_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector2D& Value = *(FVector2D*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


struct FRigUnit_SetVector2DAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_SetVector2DAnimationChannelFromItem ************************

// ********** Begin ScriptStruct FRigUnit_SetVectorAnimationChannelFromItem ************************
struct Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics;

#define FRigUnit_SetVectorAnimationChannelFromItem_Execute() \
	void FRigUnit_SetVectorAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_291_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


struct FRigUnit_SetVectorAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_SetVectorAnimationChannelFromItem **************************

// ********** Begin ScriptStruct FRigUnit_SetRotatorAnimationChannelFromItem ***********************
struct Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics;

#define FRigUnit_SetRotatorAnimationChannelFromItem_Execute() \
	void FRigUnit_SetRotatorAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_312_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


struct FRigUnit_SetRotatorAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_SetRotatorAnimationChannelFromItem *************************

// ********** Begin ScriptStruct FRigUnit_SetTransformAnimationChannelFromItem *********************
struct Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics;

#define FRigUnit_SetTransformAnimationChannelFromItem_Execute() \
	void FRigUnit_SetTransformAnimationChannelFromItem::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h_333_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannelFromItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const FRigElementKey& Item, \
		const bool bInitial \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Item, \
			bInitial \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBaseFromItem Super;


struct FRigUnit_SetTransformAnimationChannelFromItem;
// ********** End ScriptStruct FRigUnit_SetTransformAnimationChannelFromItem ***********************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannelFromItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
