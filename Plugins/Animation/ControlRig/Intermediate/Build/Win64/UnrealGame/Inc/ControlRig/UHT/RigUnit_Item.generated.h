// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_Item.h"

#ifdef CONTROLRIG_RigUnit_Item_generated_h
#error "RigUnit_Item.generated.h already included, missing '#pragma once' in RigUnit_Item.h"
#endif
#define CONTROLRIG_RigUnit_Item_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ItemBase *************************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_ItemBase;
// ********** End ScriptStruct FRigUnit_ItemBase ***************************************************

// ********** Begin ScriptStruct FRigUnit_ItemBaseMutable ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


struct FRigUnit_ItemBaseMutable;
// ********** End ScriptStruct FRigUnit_ItemBaseMutable ********************************************

// ********** Begin ScriptStruct FRigUnit_ItemExists ***********************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics;

#define FRigUnit_ItemExists_Execute() \
	void FRigUnit_ItemExists::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Exists, \
		FCachedRigElement& CachedIndex \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& Exists, \
		FCachedRigElement& CachedIndex \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Exists = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Exists, \
			CachedIndex \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


struct FRigUnit_ItemExists;
// ********** End ScriptStruct FRigUnit_ItemExists *************************************************

// ********** Begin ScriptStruct FRigUnit_ItemReplace **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics;

#define FRigUnit_ItemReplace_Execute() \
	void FRigUnit_ItemReplace::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Old, \
		const FName& New, \
		FRigElementKey& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FName& Old, \
		const FName& New, \
		FRigElementKey& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		FRigElementKey& Result = *(FRigElementKey*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Old, \
			New, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


struct FRigUnit_ItemReplace;
// ********** End ScriptStruct FRigUnit_ItemReplace ************************************************

// ********** Begin ScriptStruct FRigUnit_ItemEquals ***********************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics;

#define FRigUnit_ItemEquals_Execute() \
	void FRigUnit_ItemEquals::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_88_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& A = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& B = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


struct FRigUnit_ItemEquals;
// ********** End ScriptStruct FRigUnit_ItemEquals *************************************************

// ********** Begin ScriptStruct FRigUnit_ItemNotEquals ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics;

#define FRigUnit_ItemNotEquals_Execute() \
	void FRigUnit_ItemNotEquals::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& A = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& B = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


struct FRigUnit_ItemNotEquals;
// ********** End ScriptStruct FRigUnit_ItemNotEquals **********************************************

// ********** Begin ScriptStruct FRigUnit_ItemTypeEquals *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics;

#define FRigUnit_ItemTypeEquals_Execute() \
	void FRigUnit_ItemTypeEquals::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_148_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& A = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& B = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


struct FRigUnit_ItemTypeEquals;
// ********** End ScriptStruct FRigUnit_ItemTypeEquals *********************************************

// ********** Begin ScriptStruct FRigUnit_ItemTypeNotEquals ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics;

#define FRigUnit_ItemTypeNotEquals_Execute() \
	void FRigUnit_ItemTypeNotEquals::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_175_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& A, \
		const FRigElementKey& B, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& A = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& B = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


struct FRigUnit_ItemTypeNotEquals;
// ********** End ScriptStruct FRigUnit_ItemTypeNotEquals ******************************************

// ********** Begin ScriptStruct FRigUnit_ItemToName ***********************************************
struct Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics;

#define FRigUnit_ItemToName_Execute() \
	void FRigUnit_ItemToName::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRigElementKey& Value, \
		FName& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h_202_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FRigElementKey& Value, \
		FName& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Value = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		FName& Result = *(FName*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			Result \
		); \
	} \
	typedef FRigUnit_ItemBase Super;


struct FRigUnit_ItemToName;
// ********** End ScriptStruct FRigUnit_ItemToName *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Item_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
