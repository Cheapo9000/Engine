// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_Collection.h"

#ifdef CONTROLRIG_RigUnit_Collection_generated_h
#error "RigUnit_Collection.generated.h already included, missing '#pragma once' in RigUnit_Collection.h"
#endif
#define CONTROLRIG_RigUnit_Collection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_CollectionBase *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_CollectionBase;
// ********** End ScriptStruct FRigUnit_CollectionBase *********************************************

// ********** Begin ScriptStruct FRigUnit_CollectionBaseMutable ************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


struct FRigUnit_CollectionBaseMutable;
// ********** End ScriptStruct FRigUnit_CollectionBaseMutable **************************************

// ********** Begin ScriptStruct FRigUnit_CollectionChain ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics;

#define FRigUnit_CollectionChain_Execute() \
	void FRigUnit_CollectionChain::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& FirstItem = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& LastItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool Reverse = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			FirstItem, \
			LastItem, \
			Reverse, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionChain;
// ********** End ScriptStruct FRigUnit_CollectionChain ********************************************

// ********** Begin ScriptStruct FRigUnit_CollectionChainArray *************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics;

#define FRigUnit_CollectionChainArray_Execute() \
	void FRigUnit_CollectionChainArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& FirstItem = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& LastItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool Reverse = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			FirstItem, \
			LastItem, \
			Reverse, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionChainArray;
// ********** End ScriptStruct FRigUnit_CollectionChainArray ***************************************

// ********** Begin ScriptStruct FRigUnit_CollectionNameSearch *************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics;

#define FRigUnit_CollectionNameSearch_Execute() \
	void FRigUnit_CollectionNameSearch::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& PartialName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PartialName, \
			TypeToSearch, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionNameSearch;
// ********** End ScriptStruct FRigUnit_CollectionNameSearch ***************************************

// ********** Begin ScriptStruct FRigUnit_CollectionNameSearchArray ********************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics;

#define FRigUnit_CollectionNameSearchArray_Execute() \
	void FRigUnit_CollectionNameSearchArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_129_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& PartialName = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PartialName, \
			TypeToSearch, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionNameSearchArray;
// ********** End ScriptStruct FRigUnit_CollectionNameSearchArray **********************************

// ********** Begin ScriptStruct FRigUnit_CollectionChildren ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics;

#define FRigUnit_CollectionChildren_Execute() \
	void FRigUnit_CollectionChildren::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_157_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bIncludeParent = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bRecursive = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			TypeToSearch, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionChildren;
// ********** End ScriptStruct FRigUnit_CollectionChildren *****************************************

// ********** Begin ScriptStruct FRigUnit_CollectionChildrenArray **********************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics;

#define FRigUnit_CollectionChildrenArray_Execute() \
	void FRigUnit_CollectionChildrenArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const bool bDefaultChildren, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_196_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const bool bDefaultChildren, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bIncludeParent = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bRecursive = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bDefaultChildren = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[4].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			bDefaultChildren, \
			TypeToSearch, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionChildrenArray;
// ********** End ScriptStruct FRigUnit_CollectionChildrenArray ************************************

// ********** Begin ScriptStruct FRigUnit_CollectionGetAll *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics;

#define FRigUnit_CollectionGetAll_Execute() \
	void FRigUnit_CollectionGetAll::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_237_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionGetAll_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			TypeToSearch, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionGetAll;
// ********** End ScriptStruct FRigUnit_CollectionGetAll *******************************************

// ********** Begin ScriptStruct FRigUnit_CollectionReplaceItems ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics;

#define FRigUnit_CollectionReplaceItems_Execute() \
	void FRigUnit_CollectionReplaceItems::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_260_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool RemoveInvalidItems = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Old, \
			New, \
			RemoveInvalidItems, \
			bAllowDuplicates, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionReplaceItems;
// ********** End ScriptStruct FRigUnit_CollectionReplaceItems *************************************

// ********** Begin ScriptStruct FRigUnit_CollectionReplaceItemsArray ******************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics;

#define FRigUnit_CollectionReplaceItemsArray_Execute() \
	void FRigUnit_CollectionReplaceItemsArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		TArray<FRigElementKey>& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_300_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		TArray<FRigElementKey>& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		const bool RemoveInvalidItems = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		TArray<FRigElementKey>& Result = *(TArray<FRigElementKey>*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			Old, \
			New, \
			RemoveInvalidItems, \
			bAllowDuplicates, \
			Result \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionReplaceItemsArray;
// ********** End ScriptStruct FRigUnit_CollectionReplaceItemsArray ********************************

// ********** Begin ScriptStruct FRigUnit_CollectionItems ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics;

#define FRigUnit_CollectionItems_Execute() \
	void FRigUnit_CollectionItems::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_337_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			bAllowDuplicates, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionItems;
// ********** End ScriptStruct FRigUnit_CollectionItems ********************************************

// ********** Begin ScriptStruct FRigUnit_CollectionGetItems ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics;

#define FRigUnit_CollectionGetItems_Execute() \
	void FRigUnit_CollectionGetItems::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_364_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Items \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionGetItems;
// ********** End ScriptStruct FRigUnit_CollectionGetItems *****************************************

// ********** Begin ScriptStruct FRigUnit_CollectionGetParentIndices *******************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics;

#define FRigUnit_CollectionGetParentIndices_Execute() \
	void FRigUnit_CollectionGetParentIndices::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<int32>& ParentIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_389_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<int32>& ParentIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			ParentIndices \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionGetParentIndices;
// ********** End ScriptStruct FRigUnit_CollectionGetParentIndices *********************************

// ********** Begin ScriptStruct FRigUnit_CollectionGetParentIndicesItemArray **********************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics;

#define FRigUnit_CollectionGetParentIndicesItemArray_Execute() \
	void FRigUnit_CollectionGetParentIndicesItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		TArray<int32>& ParentIndices \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_417_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		TArray<int32>& ParentIndices \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Items, \
			ParentIndices \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionGetParentIndicesItemArray;
// ********** End ScriptStruct FRigUnit_CollectionGetParentIndicesItemArray ************************

// ********** Begin ScriptStruct FRigUnit_CollectionUnion ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics;

#define FRigUnit_CollectionUnion_Execute() \
	void FRigUnit_CollectionUnion::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_440_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			bAllowDuplicates, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionUnion;
// ********** End ScriptStruct FRigUnit_CollectionUnion ********************************************

// ********** Begin ScriptStruct FRigUnit_CollectionIntersection ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics;

#define FRigUnit_CollectionIntersection_Execute() \
	void FRigUnit_CollectionIntersection::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_473_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionIntersection;
// ********** End ScriptStruct FRigUnit_CollectionIntersection *************************************

// ********** Begin ScriptStruct FRigUnit_CollectionDifference *************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics;

#define FRigUnit_CollectionDifference_Execute() \
	void FRigUnit_CollectionDifference::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_502_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			A, \
			B, \
			Collection \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionDifference;
// ********** End ScriptStruct FRigUnit_CollectionDifference ***************************************

// ********** Begin ScriptStruct FRigUnit_CollectionReverse ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics;

#define FRigUnit_CollectionReverse_Execute() \
	void FRigUnit_CollectionReverse::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& Reversed \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_530_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& Reversed \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		FRigElementKeyCollection& Reversed = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Reversed \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionReverse;
// ********** End ScriptStruct FRigUnit_CollectionReverse ******************************************

// ********** Begin ScriptStruct FRigUnit_CollectionCount ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics;

#define FRigUnit_CollectionCount_Execute() \
	void FRigUnit_CollectionCount::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		int32& Count \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_555_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		int32& Count \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		int32& Count = *(int32*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Count \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionCount;
// ********** End ScriptStruct FRigUnit_CollectionCount ********************************************

// ********** Begin ScriptStruct FRigUnit_CollectionItemAtIndex ************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics;

#define FRigUnit_CollectionItemAtIndex_Execute() \
	void FRigUnit_CollectionItemAtIndex::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const int32 Index, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_582_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const int32 Index, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 Index = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Index, \
			Item \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionItemAtIndex;
// ********** End ScriptStruct FRigUnit_CollectionItemAtIndex **************************************

// ********** Begin ScriptStruct FRigUnit_CollectionLoop *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics;

#define FRigUnit_CollectionLoop_Execute() \
	void FRigUnit_CollectionLoop::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FName& BlockToRun, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKey& Item, \
		int32& Index, \
		int32& Count, \
		float& Ratio \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_613_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FName& BlockToRun, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKey& Item, \
		int32& Index, \
		int32& Count, \
		float& Ratio \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FName& BlockToRun = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[2].GetOutputData(); \
		int32& Index = *(int32*)RigVMMemoryHandles[3].GetOutputData(); \
		int32& Count = *(int32*)RigVMMemoryHandles[4].GetOutputData(); \
		float& Ratio = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			BlockToRun, \
			Collection, \
			Item, \
			Index, \
			Count, \
			Ratio \
		); \
	} \
	typedef FRigUnit_CollectionBaseMutable Super;


struct FRigUnit_CollectionLoop;
// ********** End ScriptStruct FRigUnit_CollectionLoop *********************************************

// ********** Begin ScriptStruct FRigUnit_CollectionAddItem ****************************************
struct Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics;

#define FRigUnit_CollectionAddItem_Execute() \
	void FRigUnit_CollectionAddItem::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const FRigElementKey& Item, \
		FRigElementKeyCollection& Result \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h_671_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const FRigElementKey& Item, \
		FRigElementKeyCollection& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKeyCollection& Result = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Collection, \
			Item, \
			Result \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


struct FRigUnit_CollectionAddItem;
// ********** End ScriptStruct FRigUnit_CollectionAddItem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Collection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
