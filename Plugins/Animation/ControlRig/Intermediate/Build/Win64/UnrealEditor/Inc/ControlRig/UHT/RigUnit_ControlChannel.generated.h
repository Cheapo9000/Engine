// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Hierarchy/RigUnit_ControlChannel.h"

#ifdef CONTROLRIG_RigUnit_ControlChannel_generated_h
#error "RigUnit_ControlChannel.generated.h already included, missing '#pragma once' in RigUnit_ControlChannel.h"
#endif
#define CONTROLRIG_RigUnit_ControlChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_GetAnimationChannelBase **********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_GetAnimationChannelBase;
// ********** End ScriptStruct FRigUnit_GetAnimationChannelBase ************************************

// ********** Begin ScriptStruct FRigUnit_GetBoolAnimationChannel **********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics;

#define FRigUnit_GetBoolAnimationChannel_Execute() \
	void FRigUnit_GetBoolAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		bool& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetOutputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


struct FRigUnit_GetBoolAnimationChannel;
// ********** End ScriptStruct FRigUnit_GetBoolAnimationChannel ************************************

// ********** Begin ScriptStruct FRigUnit_GetFloatAnimationChannel *********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics;

#define FRigUnit_GetFloatAnimationChannel_Execute() \
	void FRigUnit_GetFloatAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		float& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		float& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		float& Value = *(float*)RigVMMemoryHandles[0].GetOutputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


struct FRigUnit_GetFloatAnimationChannel;
// ********** End ScriptStruct FRigUnit_GetFloatAnimationChannel ***********************************

// ********** Begin ScriptStruct FRigUnit_GetIntAnimationChannel ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics;

#define FRigUnit_GetIntAnimationChannel_Execute() \
	void FRigUnit_GetIntAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		int32& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		int32& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		int32& Value = *(int32*)RigVMMemoryHandles[0].GetOutputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


struct FRigUnit_GetIntAnimationChannel;
// ********** End ScriptStruct FRigUnit_GetIntAnimationChannel *************************************

// ********** Begin ScriptStruct FRigUnit_GetVector2DAnimationChannel ******************************
struct Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics;

#define FRigUnit_GetVector2DAnimationChannel_Execute() \
	void FRigUnit_GetVector2DAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector2D& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_124_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector2D& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector2D& Value = *(FVector2D*)RigVMMemoryHandles[0].GetOutputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


struct FRigUnit_GetVector2DAnimationChannel;
// ********** End ScriptStruct FRigUnit_GetVector2DAnimationChannel ********************************

// ********** Begin ScriptStruct FRigUnit_GetVectorAnimationChannel ********************************
struct Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics;

#define FRigUnit_GetVectorAnimationChannel_Execute() \
	void FRigUnit_GetVectorAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FVector& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetOutputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


struct FRigUnit_GetVectorAnimationChannel;
// ********** End ScriptStruct FRigUnit_GetVectorAnimationChannel **********************************

// ********** Begin ScriptStruct FRigUnit_GetRotatorAnimationChannel *******************************
struct Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics;

#define FRigUnit_GetRotatorAnimationChannel_Execute() \
	void FRigUnit_GetRotatorAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRotator& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FRotator& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetOutputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


struct FRigUnit_GetRotatorAnimationChannel;
// ********** End ScriptStruct FRigUnit_GetRotatorAnimationChannel *********************************

// ********** Begin ScriptStruct FRigUnit_GetTransformAnimationChannel *****************************
struct Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics;

#define FRigUnit_GetTransformAnimationChannel_Execute() \
	void FRigUnit_GetTransformAnimationChannel::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_187_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetOutputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_GetAnimationChannelBase Super;


struct FRigUnit_GetTransformAnimationChannel;
// ********** End ScriptStruct FRigUnit_GetTransformAnimationChannel *******************************

// ********** Begin ScriptStruct FRigUnit_SetAnimationChannelBase **********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_208_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_GetAnimationChannelBase Super;


struct FRigUnit_SetAnimationChannelBase;
// ********** End ScriptStruct FRigUnit_SetAnimationChannelBase ************************************

// ********** Begin ScriptStruct FRigUnit_SetBoolAnimationChannel **********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics;

#define FRigUnit_SetBoolAnimationChannel_Execute() \
	void FRigUnit_SetBoolAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


struct FRigUnit_SetBoolAnimationChannel;
// ********** End ScriptStruct FRigUnit_SetBoolAnimationChannel ************************************

// ********** Begin ScriptStruct FRigUnit_SetFloatAnimationChannel *********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics;

#define FRigUnit_SetFloatAnimationChannel_Execute() \
	void FRigUnit_SetFloatAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_246_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float Value = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


struct FRigUnit_SetFloatAnimationChannel;
// ********** End ScriptStruct FRigUnit_SetFloatAnimationChannel ***********************************

// ********** Begin ScriptStruct FRigUnit_SetIntAnimationChannel ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics;

#define FRigUnit_SetIntAnimationChannel_Execute() \
	void FRigUnit_SetIntAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_267_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


struct FRigUnit_SetIntAnimationChannel;
// ********** End ScriptStruct FRigUnit_SetIntAnimationChannel *************************************

// ********** Begin ScriptStruct FRigUnit_SetVector2DAnimationChannel ******************************
struct Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics;

#define FRigUnit_SetVector2DAnimationChannel_Execute() \
	void FRigUnit_SetVector2DAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_288_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector2D& Value = *(FVector2D*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


struct FRigUnit_SetVector2DAnimationChannel;
// ********** End ScriptStruct FRigUnit_SetVector2DAnimationChannel ********************************

// ********** Begin ScriptStruct FRigUnit_SetVectorAnimationChannel ********************************
struct Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics;

#define FRigUnit_SetVectorAnimationChannel_Execute() \
	void FRigUnit_SetVectorAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_309_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


struct FRigUnit_SetVectorAnimationChannel;
// ********** End ScriptStruct FRigUnit_SetVectorAnimationChannel **********************************

// ********** Begin ScriptStruct FRigUnit_SetRotatorAnimationChannel *******************************
struct Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics;

#define FRigUnit_SetRotatorAnimationChannel_Execute() \
	void FRigUnit_SetRotatorAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_330_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& Value = *(FRotator*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


struct FRigUnit_SetRotatorAnimationChannel;
// ********** End ScriptStruct FRigUnit_SetRotatorAnimationChannel *********************************

// ********** Begin ScriptStruct FRigUnit_SetTransformAnimationChannel *****************************
struct Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics;

#define FRigUnit_SetTransformAnimationChannel_Execute() \
	void FRigUnit_SetTransformAnimationChannel::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h_351_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Value, \
		const FName& Control, \
		const FName& Channel, \
		const bool bInitial, \
		FRigElementKey& CachedChannelKey, \
		int32& CachedChannelHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Control = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& Channel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& CachedChannelKey = *(FRigElementKey*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedChannelHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Value, \
			Control, \
			Channel, \
			bInitial, \
			CachedChannelKey, \
			CachedChannelHash \
		); \
	} \
	typedef FRigUnit_SetAnimationChannelBase Super;


struct FRigUnit_SetTransformAnimationChannel;
// ********** End ScriptStruct FRigUnit_SetTransformAnimationChannel *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_ControlChannel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
