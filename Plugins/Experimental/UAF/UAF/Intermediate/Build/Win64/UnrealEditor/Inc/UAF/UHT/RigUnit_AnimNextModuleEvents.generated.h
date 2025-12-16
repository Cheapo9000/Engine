// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Module/RigUnit_AnimNextModuleEvents.h"

#ifdef UAF_RigUnit_AnimNextModuleEvents_generated_h
#error "RigUnit_AnimNextModuleEvents.generated.h already included, missing '#pragma once' in RigUnit_AnimNextModuleEvents.h"
#endif
#define UAF_RigUnit_AnimNextModuleEvents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_AnimNextModuleEventBase **********************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextModuleEventBase_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEvents_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextModuleEventBase_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_AnimNextBase Super;


struct FRigUnit_AnimNextModuleEventBase;
// ********** End ScriptStruct FRigUnit_AnimNextModuleEventBase ************************************

// ********** Begin ScriptStruct FRigUnit_AnimNextExecuteBindings_GT *******************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextExecuteBindings_GT_Statics;

#define FRigUnit_AnimNextExecuteBindings_GT_Execute() \
	void FRigUnit_AnimNextExecuteBindings_GT::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEvents_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextExecuteBindings_GT_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextModuleEventBase Super;


struct FRigUnit_AnimNextExecuteBindings_GT;
// ********** End ScriptStruct FRigUnit_AnimNextExecuteBindings_GT *********************************

// ********** Begin ScriptStruct FRigUnit_AnimNextExecuteBindings_WT *******************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextExecuteBindings_WT_Statics;

#define FRigUnit_AnimNextExecuteBindings_WT_Execute() \
	void FRigUnit_AnimNextExecuteBindings_WT::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEvents_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextExecuteBindings_WT_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextModuleEventBase Super;


struct FRigUnit_AnimNextExecuteBindings_WT;
// ********** End ScriptStruct FRigUnit_AnimNextExecuteBindings_WT *********************************

// ********** Begin ScriptStruct FRigUnit_AnimNextInitializeEvent **********************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInitializeEvent_Statics;

#define FRigUnit_AnimNextInitializeEvent_Execute() \
	void FRigUnit_AnimNextInitializeEvent::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEvents_h_113_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextInitializeEvent_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>() \
		); \
	} \
	typedef FRigUnit_AnimNextModuleEventBase Super;


struct FRigUnit_AnimNextInitializeEvent;
// ********** End ScriptStruct FRigUnit_AnimNextInitializeEvent ************************************

// ********** Begin ScriptStruct FRigUnit_AnimNextUserEvent ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextUserEvent_Statics;
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEvents_h_127_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextUserEvent_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_AnimNextModuleEventBase Super;


struct FRigUnit_AnimNextUserEvent;
// ********** End ScriptStruct FRigUnit_AnimNextUserEvent ******************************************

// ********** Begin ScriptStruct FRigUnit_AnimNextPrePhysicsEvent **********************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextPrePhysicsEvent_Statics;

#define FRigUnit_AnimNextPrePhysicsEvent_Execute() \
	void FRigUnit_AnimNextPrePhysicsEvent::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FName& Name, \
		const int32 SortOrder, \
		TEnumAsByte<ETickingGroup>& TickGroup \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEvents_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextPrePhysicsEvent_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FName& Name, \
		const int32 SortOrder, \
		TEnumAsByte<ETickingGroup>& TickGroup \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 SortOrder = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		TEnumAsByte<ETickingGroup>& TickGroup = *(TEnumAsByte<ETickingGroup>*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Name, \
			SortOrder, \
			TickGroup \
		); \
	} \
	typedef FRigUnit_AnimNextUserEvent Super;


struct FRigUnit_AnimNextPrePhysicsEvent;
// ********** End ScriptStruct FRigUnit_AnimNextPrePhysicsEvent ************************************

// ********** Begin ScriptStruct FRigUnit_AnimNextPostPhysicsEvent *********************************
struct Z_Construct_UScriptStruct_FRigUnit_AnimNextPostPhysicsEvent_Statics;

#define FRigUnit_AnimNextPostPhysicsEvent_Execute() \
	void FRigUnit_AnimNextPostPhysicsEvent::StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FName& Name, \
		const int32 SortOrder, \
		TEnumAsByte<ETickingGroup>& TickGroup \
	)

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEvents_h_174_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AnimNextPostPhysicsEvent_Statics; \
	UAF_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FAnimNextExecuteContext::StaticStruct(); } \
	UE_API void Execute(FAnimNextExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FAnimNextExecuteContext& ExecuteContext, \
		const FName& Name, \
		const int32 SortOrder, \
		TEnumAsByte<ETickingGroup>& TickGroup \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 SortOrder = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		TEnumAsByte<ETickingGroup>& TickGroup = *(TEnumAsByte<ETickingGroup>*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FAnimNextExecuteContext>(), \
			Name, \
			SortOrder, \
			TickGroup \
		); \
	} \
	typedef FRigUnit_AnimNextUserEvent Super;


struct FRigUnit_AnimNextPostPhysicsEvent;
// ********** End ScriptStruct FRigUnit_AnimNextPostPhysicsEvent ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAF_Internal_Module_RigUnit_AnimNextModuleEvents_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
