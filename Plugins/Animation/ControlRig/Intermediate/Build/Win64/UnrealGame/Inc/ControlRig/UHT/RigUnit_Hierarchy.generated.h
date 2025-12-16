// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_Hierarchy.h"

#ifdef CONTROLRIG_RigUnit_Hierarchy_generated_h
#error "RigUnit_Hierarchy.generated.h already included, missing '#pragma once' in RigUnit_Hierarchy.h"
#endif
#define CONTROLRIG_RigUnit_Hierarchy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_HierarchyBase ********************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_HierarchyBase;
// ********** End ScriptStruct FRigUnit_HierarchyBase **********************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyBaseMutable *************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


struct FRigUnit_HierarchyBaseMutable;
// ********** End ScriptStruct FRigUnit_HierarchyBaseMutable ***************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetParent ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics;

#define FRigUnit_HierarchyGetParent_Execute() \
	void FRigUnit_HierarchyGetParent::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bDefaultParent, \
		FRigElementKey& Parent, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bDefaultParent, \
		FRigElementKey& Parent, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bDefaultParent = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bDefaultParent, \
			Parent, \
			CachedChild, \
			CachedParent \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyGetParent;
// ********** End ScriptStruct FRigUnit_HierarchyGetParent *****************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetParents **************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics;

#define FRigUnit_HierarchyGetParents_Execute() \
	void FRigUnit_HierarchyGetParents::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bIncludeChild, \
		const bool bReverse, \
		FRigElementKeyCollection& Parents, \
		FCachedRigElement& CachedChild, \
		FRigElementKeyCollection& CachedParents \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bIncludeChild, \
		const bool bReverse, \
		FRigElementKeyCollection& Parents, \
		FCachedRigElement& CachedChild, \
		FRigElementKeyCollection& CachedParents \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bIncludeChild = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bReverse = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		FRigElementKeyCollection& Parents = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedParents = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bIncludeChild, \
			bReverse, \
			Parents, \
			CachedChild, \
			CachedParents \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyGetParents;
// ********** End ScriptStruct FRigUnit_HierarchyGetParents ****************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetParentsItemArray *****************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics;

#define FRigUnit_HierarchyGetParentsItemArray_Execute() \
	void FRigUnit_HierarchyGetParentsItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bIncludeChild, \
		const bool bReverse, \
		const bool bDefaultParent, \
		TArray<FRigElementKey>& Parents, \
		FCachedRigElement& CachedChild, \
		FRigElementKeyCollection& CachedParents \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_110_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const bool bIncludeChild, \
		const bool bReverse, \
		const bool bDefaultParent, \
		TArray<FRigElementKey>& Parents, \
		FCachedRigElement& CachedChild, \
		FRigElementKeyCollection& CachedParents \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bIncludeChild = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bReverse = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bDefaultParent = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		TArray<FRigElementKey>& Parents = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetOutputData(); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedParents = *(FRigElementKeyCollection*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			bIncludeChild, \
			bReverse, \
			bDefaultParent, \
			Parents, \
			CachedChild, \
			CachedParents \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyGetParentsItemArray;
// ********** End ScriptStruct FRigUnit_HierarchyGetParentsItemArray *******************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetChildren *************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics;

#define FRigUnit_HierarchyGetChildren_Execute() \
	void FRigUnit_HierarchyGetChildren::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		FRigElementKeyCollection& Children, \
		FCachedRigElement& CachedParent, \
		FRigElementKeyCollection& CachedChildren \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		FRigElementKeyCollection& Children, \
		FCachedRigElement& CachedParent, \
		FRigElementKeyCollection& CachedChildren \
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
		FRigElementKeyCollection& Children = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedChildren = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			Children, \
			CachedParent, \
			CachedChildren \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyGetChildren;
// ********** End ScriptStruct FRigUnit_HierarchyGetChildren ***************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetSiblings *************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics;

#define FRigUnit_HierarchyGetSiblings_Execute() \
	void FRigUnit_HierarchyGetSiblings::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const bool bIncludeItem, \
		FRigElementKeyCollection& Siblings, \
		FCachedRigElement& CachedItem, \
		FRigElementKeyCollection& CachedSiblings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_200_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const bool bIncludeItem, \
		FRigElementKeyCollection& Siblings, \
		FCachedRigElement& CachedItem, \
		FRigElementKeyCollection& CachedSiblings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bIncludeItem = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKeyCollection& Siblings = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetOutputData(); \
		FCachedRigElement& CachedItem = *(FCachedRigElement*)RigVMMemoryHandles[3].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedSiblings = *(FRigElementKeyCollection*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			bIncludeItem, \
			Siblings, \
			CachedItem, \
			CachedSiblings \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyGetSiblings;
// ********** End ScriptStruct FRigUnit_HierarchyGetSiblings ***************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetSiblingsItemArray ****************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics;

#define FRigUnit_HierarchyGetSiblingsItemArray_Execute() \
	void FRigUnit_HierarchyGetSiblingsItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const bool bIncludeItem, \
		const bool bDefaultSiblings, \
		TArray<FRigElementKey>& Siblings, \
		FCachedRigElement& CachedItem, \
		FRigElementKeyCollection& CachedSiblings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_240_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const bool bIncludeItem, \
		const bool bDefaultSiblings, \
		TArray<FRigElementKey>& Siblings, \
		FCachedRigElement& CachedItem, \
		FRigElementKeyCollection& CachedSiblings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bIncludeItem = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bDefaultSiblings = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<FRigElementKey>& Siblings = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetOutputData(); \
		FCachedRigElement& CachedItem = *(FCachedRigElement*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedSiblings = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			bIncludeItem, \
			bDefaultSiblings, \
			Siblings, \
			CachedItem, \
			CachedSiblings \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyGetSiblingsItemArray;
// ********** End ScriptStruct FRigUnit_HierarchyGetSiblingsItemArray ******************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetChainItemArray *******************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChainItemArray_Statics;

#define FRigUnit_HierarchyGetChainItemArray_Execute() \
	void FRigUnit_HierarchyGetChainItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Start, \
		const FRigElementKey& End, \
		const bool bIncludeStart, \
		const bool bIncludeEnd, \
		const bool bReverse, \
		TArray<FRigElementKey>& Chain, \
		FCachedRigElement& CachedStart, \
		FCachedRigElement& CachedEnd, \
		FRigElementKeyCollection& CachedChain \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_283_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChainItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Start, \
		const FRigElementKey& End, \
		const bool bIncludeStart, \
		const bool bIncludeEnd, \
		const bool bReverse, \
		TArray<FRigElementKey>& Chain, \
		FCachedRigElement& CachedStart, \
		FCachedRigElement& CachedEnd, \
		FRigElementKeyCollection& CachedChain \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Start = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& End = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bIncludeStart = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bIncludeEnd = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		const bool bReverse = *(bool*)RigVMMemoryHandles[4].GetInputData(); \
		TArray<FRigElementKey>& Chain = *(TArray<FRigElementKey>*)RigVMMemoryHandles[5].GetOutputData(); \
		FCachedRigElement& CachedStart = *(FCachedRigElement*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedEnd = *(FCachedRigElement*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedChain = *(FRigElementKeyCollection*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Start, \
			End, \
			bIncludeStart, \
			bIncludeEnd, \
			bReverse, \
			Chain, \
			CachedStart, \
			CachedEnd, \
			CachedChain \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyGetChainItemArray;
// ********** End ScriptStruct FRigUnit_HierarchyGetChainItemArray *********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetPose *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics;

#define FRigUnit_HierarchyGetPose_Execute() \
	void FRigUnit_HierarchyGetPose::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const bool Initial, \
		const ERigElementType ElementType, \
		const FRigElementKeyCollection& ItemsToGet, \
		FRigPose& Pose \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_334_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const bool Initial, \
		const ERigElementType ElementType, \
		const FRigElementKeyCollection& ItemsToGet, \
		FRigPose& Pose \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Initial = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigElementKeyCollection& ItemsToGet = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetInputData(); \
		FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Initial, \
			ElementType, \
			ItemsToGet, \
			Pose \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyGetPose;
// ********** End ScriptStruct FRigUnit_HierarchyGetPose *******************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetPoseItemArray ********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics;

#define FRigUnit_HierarchyGetPoseItemArray_Execute() \
	void FRigUnit_HierarchyGetPoseItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const bool Initial, \
		const ERigElementType ElementType, \
		const TArrayView<const FRigElementKey>& ItemsToGet, \
		FRigPose& Pose \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_370_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const bool Initial, \
		const ERigElementType ElementType, \
		const TArrayView<const FRigElementKey>& ItemsToGet, \
		FRigPose& Pose \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool Initial = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FRigElementKey>& ItemsToGet = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetInputData(); \
		FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Initial, \
			ElementType, \
			ItemsToGet, \
			Pose \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyGetPoseItemArray;
// ********** End ScriptStruct FRigUnit_HierarchyGetPoseItemArray **********************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPose *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics;

#define FRigUnit_HierarchySetPose_Execute() \
	void FRigUnit_HierarchySetPose::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		const ERigVMTransformSpace Space, \
		const FRigElementKeyCollection& ItemsToSet, \
		const float Weight \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_403_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		const ERigVMTransformSpace Space, \
		const FRigElementKeyCollection& ItemsToSet, \
		const float Weight \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigElementKeyCollection& ItemsToSet = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			ElementType, \
			Space, \
			ItemsToSet, \
			Weight \
		); \
	} \
	typedef FRigUnit_HierarchyBaseMutable Super;


struct FRigUnit_HierarchySetPose;
// ********** End ScriptStruct FRigUnit_HierarchySetPose *******************************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetPoseItemArray ********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics;

#define FRigUnit_HierarchySetPoseItemArray_Execute() \
	void FRigUnit_HierarchySetPoseItemArray::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		const ERigVMTransformSpace Space, \
		const TArrayView<const FRigElementKey>& ItemsToSet, \
		const float Weight \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_443_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		const ERigVMTransformSpace Space, \
		const TArrayView<const FRigElementKey>& ItemsToSet, \
		const float Weight \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetInputData(); \
		TArray<FRigElementKey>& ItemsToSet = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			ElementType, \
			Space, \
			ItemsToSet, \
			Weight \
		); \
	} \
	typedef FRigUnit_HierarchyBaseMutable Super;


struct FRigUnit_HierarchySetPoseItemArray;
// ********** End ScriptStruct FRigUnit_HierarchySetPoseItemArray **********************************

// ********** Begin ScriptStruct FRigUnit_PoseIsEmpty **********************************************
struct Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics;

#define FRigUnit_PoseIsEmpty_Execute() \
	void FRigUnit_PoseIsEmpty::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		bool& IsEmpty \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_479_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		bool& IsEmpty \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		bool& IsEmpty = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			IsEmpty \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_PoseIsEmpty;
// ********** End ScriptStruct FRigUnit_PoseIsEmpty ************************************************

// ********** Begin ScriptStruct FRigUnit_PoseGetItems *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics;

#define FRigUnit_PoseGetItems_Execute() \
	void FRigUnit_PoseGetItems::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		FRigElementKeyCollection& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_503_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		FRigElementKeyCollection& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			ElementType, \
			Items \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_PoseGetItems;
// ********** End ScriptStruct FRigUnit_PoseGetItems ***********************************************

// ********** Begin ScriptStruct FRigUnit_PoseGetItemsItemArray ************************************
struct Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics;

#define FRigUnit_PoseGetItemsItemArray_Execute() \
	void FRigUnit_PoseGetItemsItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_534_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			ElementType, \
			Items \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_PoseGetItemsItemArray;
// ********** End ScriptStruct FRigUnit_PoseGetItemsItemArray **************************************

// ********** Begin ScriptStruct FRigUnit_PoseGetDelta *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics;

#define FRigUnit_PoseGetDelta_Execute() \
	void FRigUnit_PoseGetDelta::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& PoseA, \
		const FRigPose& PoseB, \
		const float PositionThreshold, \
		const float RotationThreshold, \
		const float ScaleThreshold, \
		const float CurveThreshold, \
		const ERigElementType ElementType, \
		const ERigVMTransformSpace Space, \
		const FRigElementKeyCollection& ItemsToCompare, \
		bool& PosesAreEqual, \
		FRigElementKeyCollection& ItemsWithDelta \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_561_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& PoseA, \
		const FRigPose& PoseB, \
		const float PositionThreshold, \
		const float RotationThreshold, \
		const float ScaleThreshold, \
		const float CurveThreshold, \
		const ERigElementType ElementType, \
		const ERigVMTransformSpace Space, \
		const FRigElementKeyCollection& ItemsToCompare, \
		bool& PosesAreEqual, \
		FRigElementKeyCollection& ItemsWithDelta \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigPose& PoseA = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigPose& PoseB = *(FRigPose*)RigVMMemoryHandles[1].GetInputData(); \
		const float PositionThreshold = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float RotationThreshold = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const float ScaleThreshold = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float CurveThreshold = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[6].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[7].GetInputData(); \
		const FRigElementKeyCollection& ItemsToCompare = *(FRigElementKeyCollection*)RigVMMemoryHandles[8].GetInputData(); \
		bool& PosesAreEqual = *(bool*)RigVMMemoryHandles[9].GetOutputData(); \
		FRigElementKeyCollection& ItemsWithDelta = *(FRigElementKeyCollection*)RigVMMemoryHandles[10].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			PoseA, \
			PoseB, \
			PositionThreshold, \
			RotationThreshold, \
			ScaleThreshold, \
			CurveThreshold, \
			ElementType, \
			Space, \
			ItemsToCompare, \
			PosesAreEqual, \
			ItemsWithDelta \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_PoseGetDelta;
// ********** End ScriptStruct FRigUnit_PoseGetDelta ***********************************************

// ********** Begin ScriptStruct FRigUnit_PoseGetTransform *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics;

#define FRigUnit_PoseGetTransform_Execute() \
	void FRigUnit_PoseGetTransform::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		bool& Valid, \
		FTransform& Transform, \
		float& CurveValue, \
		int32& CachedPoseElementIndex, \
		int32& CachedPoseHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_644_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const FRigElementKey& Item, \
		const ERigVMTransformSpace Space, \
		bool& Valid, \
		FTransform& Transform, \
		float& CurveValue, \
		int32& CachedPoseElementIndex, \
		int32& CachedPoseHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[2].GetInputData(); \
		bool& Valid = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		float& CurveValue = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		int32& CachedPoseElementIndex = *(int32*)RigVMMemoryHandles[6].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedPoseHash = *(int32*)RigVMMemoryHandles[7].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			Item, \
			Space, \
			Valid, \
			Transform, \
			CurveValue, \
			CachedPoseElementIndex, \
			CachedPoseHash \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_PoseGetTransform;
// ********** End ScriptStruct FRigUnit_PoseGetTransform *******************************************

// ********** Begin ScriptStruct FRigUnit_PoseGetTransformArray ************************************
struct Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics;

#define FRigUnit_PoseGetTransformArray_Execute() \
	void FRigUnit_PoseGetTransformArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigVMTransformSpace Space, \
		bool& Valid, \
		TArray<FTransform>& Transforms \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_694_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const ERigVMTransformSpace Space, \
		bool& Valid, \
		TArray<FTransform>& Transforms \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Valid = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			Space, \
			Valid, \
			Transforms \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_PoseGetTransformArray;
// ********** End ScriptStruct FRigUnit_PoseGetTransformArray **************************************

// ********** Begin ScriptStruct FRigUnit_PoseGetCurve *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics;

#define FRigUnit_PoseGetCurve_Execute() \
	void FRigUnit_PoseGetCurve::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const FName& Curve, \
		bool& Valid, \
		float& CurveValue, \
		int32& CachedPoseElementIndex, \
		int32& CachedPoseHash \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_729_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigPose& Pose, \
		const FName& Curve, \
		bool& Valid, \
		float& CurveValue, \
		int32& CachedPoseElementIndex, \
		int32& CachedPoseHash \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetInputData(); \
		const FName& Curve = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		bool& Valid = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		float& CurveValue = *(float*)RigVMMemoryHandles[3].GetOutputData(); \
		int32& CachedPoseElementIndex = *(int32*)RigVMMemoryHandles[4].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedPoseHash = *(int32*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Pose, \
			Curve, \
			Valid, \
			CurveValue, \
			CachedPoseElementIndex, \
			CachedPoseHash \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_PoseGetCurve;
// ********** End ScriptStruct FRigUnit_PoseGetCurve ***********************************************

// ********** Begin ScriptStruct FRigUnit_PoseLoop *************************************************
struct Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics;

#define FRigUnit_PoseLoop_Execute() \
	void FRigUnit_PoseLoop::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FName& BlockToRun, \
		const FRigPose& Pose, \
		FRigElementKey& Item, \
		FTransform& GlobalTransform, \
		FTransform& LocalTransform, \
		float& CurveValue, \
		int32& Index, \
		int32& Count, \
		float& Ratio \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_768_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FName& BlockToRun, \
		const FRigPose& Pose, \
		FRigElementKey& Item, \
		FTransform& GlobalTransform, \
		FTransform& LocalTransform, \
		float& CurveValue, \
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
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[1].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[2].GetOutputData(); \
		FTransform& GlobalTransform = *(FTransform*)RigVMMemoryHandles[3].GetOutputData(); \
		FTransform& LocalTransform = *(FTransform*)RigVMMemoryHandles[4].GetOutputData(); \
		float& CurveValue = *(float*)RigVMMemoryHandles[5].GetOutputData(); \
		int32& Index = *(int32*)RigVMMemoryHandles[6].GetOutputData(); \
		int32& Count = *(int32*)RigVMMemoryHandles[7].GetOutputData(); \
		float& Ratio = *(float*)RigVMMemoryHandles[8].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			BlockToRun, \
			Pose, \
			Item, \
			GlobalTransform, \
			LocalTransform, \
			CurveValue, \
			Index, \
			Count, \
			Ratio \
		); \
	} \
	typedef FRigUnit_HierarchyBaseMutable Super;


struct FRigUnit_PoseLoop;
// ********** End ScriptStruct FRigUnit_PoseLoop ***************************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyCreatePoseItemArray_Entry ***********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray_Entry_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_833_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray_Entry_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyCreatePoseItemArray_Entry;
// ********** End ScriptStruct FRigUnit_HierarchyCreatePoseItemArray_Entry *************************

// ********** Begin ScriptStruct FRigUnit_HierarchyCreatePoseItemArray *****************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray_Statics;

#define FRigUnit_HierarchyCreatePoseItemArray_Execute() \
	void FRigUnit_HierarchyCreatePoseItemArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_HierarchyCreatePoseItemArray_Entry>& Entries, \
		FRigPose& Pose \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h_874_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyCreatePoseItemArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_HierarchyCreatePoseItemArray_Entry>& Entries, \
		FRigPose& Pose \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_HierarchyCreatePoseItemArray_Entry>& Entries = *(TArray<FRigUnit_HierarchyCreatePoseItemArray_Entry>*)RigVMMemoryHandles[0].GetInputData(); \
		FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Entries, \
			Pose \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


struct FRigUnit_HierarchyCreatePoseItemArray;
// ********** End ScriptStruct FRigUnit_HierarchyCreatePoseItemArray *******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_Hierarchy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
