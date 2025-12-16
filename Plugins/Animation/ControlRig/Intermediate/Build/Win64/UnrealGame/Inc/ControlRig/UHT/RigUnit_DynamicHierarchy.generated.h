// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Execution/RigUnit_DynamicHierarchy.h"

#ifdef CONTROLRIG_RigUnit_DynamicHierarchy_generated_h
#error "RigUnit_DynamicHierarchy.generated.h already included, missing '#pragma once' in RigUnit_DynamicHierarchy.h"
#endif
#define CONTROLRIG_RigUnit_DynamicHierarchy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_DynamicHierarchyBase *************************************
struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


struct FRigUnit_DynamicHierarchyBase;
// ********** End ScriptStruct FRigUnit_DynamicHierarchyBase ***************************************

// ********** Begin ScriptStruct FRigUnit_DynamicHierarchyBaseMutable ******************************
struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


struct FRigUnit_DynamicHierarchyBaseMutable;
// ********** End ScriptStruct FRigUnit_DynamicHierarchyBaseMutable ********************************

// ********** Begin ScriptStruct FRigUnit_AddParent ************************************************
struct Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics;

#define FRigUnit_AddParent_Execute() \
	void FRigUnit_AddParent::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const FName& DisplayLabel \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const FName& DisplayLabel \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const FName& DisplayLabel = *(FName*)RigVMMemoryHandles[2].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent, \
			DisplayLabel \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_AddParent;
// ********** End ScriptStruct FRigUnit_AddParent **************************************************

// ********** Begin ScriptStruct FRigUnit_SetDefaultParent *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetDefaultParent_Statics;

#define FRigUnit_SetDefaultParent_Execute() \
	void FRigUnit_SetDefaultParent::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetDefaultParent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Parent \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_SetDefaultParent;
// ********** End ScriptStruct FRigUnit_SetDefaultParent *******************************************

// ********** Begin ScriptStruct FRigUnit_AddAvailableSpaces ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_AddAvailableSpaces_Statics;

#define FRigUnit_AddAvailableSpaces_Execute() \
	void FRigUnit_AddAvailableSpaces::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Control, \
		const TArrayView<const FRigElementKeyWithLabel>& Spaces \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AddAvailableSpaces_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Control, \
		const TArrayView<const FRigElementKeyWithLabel>& Spaces \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Control = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementKeyWithLabel>& Spaces = *(TArray<FRigElementKeyWithLabel>*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Control, \
			Spaces \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_AddAvailableSpaces;
// ********** End ScriptStruct FRigUnit_AddAvailableSpaces *****************************************

// ********** Begin ScriptStruct FRigUnit_SetChannelHosts ******************************************
struct Z_Construct_UScriptStruct_FRigUnit_SetChannelHosts_Statics;

#define FRigUnit_SetChannelHosts_Execute() \
	void FRigUnit_SetChannelHosts::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Channel, \
		const TArrayView<const FRigElementKey>& Hosts \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_132_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SetChannelHosts_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Channel, \
		const TArrayView<const FRigElementKey>& Hosts \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Channel = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementKey>& Hosts = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Channel, \
			Hosts \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_SetChannelHosts;
// ********** End ScriptStruct FRigUnit_SetChannelHosts ********************************************

// ********** Begin ScriptStruct FRigUnit_SwitchParent *********************************************
struct Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics;

#define FRigUnit_SwitchParent_Execute() \
	void FRigUnit_SwitchParent::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const ERigSwitchParentMode Mode, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bMaintainGlobal \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_174_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const ERigSwitchParentMode Mode, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bMaintainGlobal \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const ERigSwitchParentMode Mode = *(ERigSwitchParentMode*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bMaintainGlobal = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Mode, \
			Child, \
			Parent, \
			bMaintainGlobal \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_SwitchParent;
// ********** End ScriptStruct FRigUnit_SwitchParent ***********************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetParentWeights ********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics;

#define FRigUnit_HierarchyGetParentWeights_Execute() \
	void FRigUnit_HierarchyGetParentWeights::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		FRigElementKeyCollection& Parents \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_213_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		FRigElementKeyCollection& Parents \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetOutputData(); \
		FRigElementKeyCollection& Parents = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Weights, \
			Parents \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


struct FRigUnit_HierarchyGetParentWeights;
// ********** End ScriptStruct FRigUnit_HierarchyGetParentWeights **********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetParentWeightsArray ***************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics;

#define FRigUnit_HierarchyGetParentWeightsArray_Execute() \
	void FRigUnit_HierarchyGetParentWeightsArray::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		TArray<FRigElementKey>& Parents \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_251_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		TArray<FRigElementKey>& Parents \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetOutputData(); \
		TArray<FRigElementKey>& Parents = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Weights, \
			Parents \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


struct FRigUnit_HierarchyGetParentWeightsArray;
// ********** End ScriptStruct FRigUnit_HierarchyGetParentWeightsArray *****************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetParentWeights ********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics;

#define FRigUnit_HierarchySetParentWeights_Execute() \
	void FRigUnit_HierarchySetParentWeights::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const TArrayView<const FRigElementWeight>& Weights \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_286_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Child, \
		const TArrayView<const FRigElementWeight>& Weights \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Child, \
			Weights \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_HierarchySetParentWeights;
// ********** End ScriptStruct FRigUnit_HierarchySetParentWeights **********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyReset *******************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyReset_Statics;

#define FRigUnit_HierarchyReset_Execute() \
	void FRigUnit_HierarchyReset::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_317_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyReset_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>() \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_HierarchyReset;
// ********** End ScriptStruct FRigUnit_HierarchyReset *********************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyImportFromSkeleton ******************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton_Statics;

#define FRigUnit_HierarchyImportFromSkeleton_Execute() \
	void FRigUnit_HierarchyImportFromSkeleton::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& NameSpace, \
		const bool bIncludeCurves, \
		const bool bIncludeMeshSockets, \
		const bool bIncludeVirtualBones, \
		TArray<FRigElementKey>& Items \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_334_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyImportFromSkeleton_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& NameSpace, \
		const bool bIncludeCurves, \
		const bool bIncludeMeshSockets, \
		const bool bIncludeVirtualBones, \
		TArray<FRigElementKey>& Items \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& NameSpace = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const bool bIncludeCurves = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool bIncludeMeshSockets = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const bool bIncludeVirtualBones = *(bool*)RigVMMemoryHandles[3].GetInputData(); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			NameSpace, \
			bIncludeCurves, \
			bIncludeMeshSockets, \
			bIncludeVirtualBones, \
			Items \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_HierarchyImportFromSkeleton;
// ********** End ScriptStruct FRigUnit_HierarchyImportFromSkeleton ********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyRemoveElement ***********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyRemoveElement_Statics;

#define FRigUnit_HierarchyRemoveElement_Execute() \
	void FRigUnit_HierarchyRemoveElement::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& bSuccess \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_369_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyRemoveElement_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		bool& bSuccess \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		bool& bSuccess = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			bSuccess \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_HierarchyRemoveElement;
// ********** End ScriptStruct FRigUnit_HierarchyRemoveElement *************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddElement **************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddElement_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_396_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddElement_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_HierarchyAddElement;
// ********** End ScriptStruct FRigUnit_HierarchyAddElement ****************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddBone *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddBone_Statics;

#define FRigUnit_HierarchyAddBone_Execute() \
	void FRigUnit_HierarchyAddBone::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_432_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddBone_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Space, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddBone;
// ********** End ScriptStruct FRigUnit_HierarchyAddBone *******************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddNull *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddNull_Statics;

#define FRigUnit_HierarchyAddNull_Execute() \
	void FRigUnit_HierarchyAddNull::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_466_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddNull_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[3].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Space, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddNull;
// ********** End ScriptStruct FRigUnit_HierarchyAddNull *******************************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControl_Settings *****************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_Settings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_496_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_Settings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddControl_Settings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControl_Settings *******************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControl_ShapeSettings ************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ShapeSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_516_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ShapeSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddControl_ShapeSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControl_ShapeSettings **************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControl_ProxySettings ************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ProxySettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_544_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControl_ProxySettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddControl_ProxySettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControl_ProxySettings **************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlFloat_LimitSettings *******************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_LimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_567_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_LimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddControlFloat_LimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlFloat_LimitSettings *********************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlFloat_Settings ************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Settings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_595_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Settings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


struct FRigUnit_HierarchyAddControlFloat_Settings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlFloat_Settings **************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlElement *******************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlElement_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_631_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlElement_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddControlElement;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlElement *********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlFloat *********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Statics;

#define FRigUnit_HierarchyAddControlFloat_Execute() \
	void FRigUnit_HierarchyAddControlFloat::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const FRigUnit_HierarchyAddControlFloat_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_666_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const FRigUnit_HierarchyAddControlFloat_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float InitialValue = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_HierarchyAddControlFloat_Settings& Settings = *(FRigUnit_HierarchyAddControlFloat_Settings*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


struct FRigUnit_HierarchyAddControlFloat;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlFloat ***********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlInteger_LimitSettings *****************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_LimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_694_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_LimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddControlInteger_LimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlInteger_LimitSettings *******************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlInteger_Settings **********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Settings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_722_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Settings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


struct FRigUnit_HierarchyAddControlInteger_Settings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlInteger_Settings ************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlInteger *******************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Statics;

#define FRigUnit_HierarchyAddControlInteger_Execute() \
	void FRigUnit_HierarchyAddControlInteger::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 InitialValue, \
		const FRigUnit_HierarchyAddControlInteger_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_756_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlInteger_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 InitialValue, \
		const FRigUnit_HierarchyAddControlInteger_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 InitialValue = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_HierarchyAddControlInteger_Settings& Settings = *(FRigUnit_HierarchyAddControlInteger_Settings*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


struct FRigUnit_HierarchyAddControlInteger;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlInteger *********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlVector2D_LimitSettings ****************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_LimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_784_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_LimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddControlVector2D_LimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlVector2D_LimitSettings ******************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlVector2D_Settings *********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Settings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_816_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Settings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


struct FRigUnit_HierarchyAddControlVector2D_Settings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlVector2D_Settings ***********************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlVector2D ******************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Statics;

#define FRigUnit_HierarchyAddControlVector2D_Execute() \
	void FRigUnit_HierarchyAddControlVector2D::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& InitialValue, \
		const FRigUnit_HierarchyAddControlVector2D_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_852_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector2D_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& InitialValue, \
		const FRigUnit_HierarchyAddControlVector2D_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector2D& InitialValue = *(FVector2D*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_HierarchyAddControlVector2D_Settings& Settings = *(FRigUnit_HierarchyAddControlVector2D_Settings*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


struct FRigUnit_HierarchyAddControlVector2D;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlVector2D ********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlVector_LimitSettings ******************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_LimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_880_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_LimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddControlVector_LimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlVector_LimitSettings ********************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlVector_Settings ***********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Settings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_916_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Settings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


struct FRigUnit_HierarchyAddControlVector_Settings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlVector_Settings *************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlVector ********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Statics;

#define FRigUnit_HierarchyAddControlVector_Execute() \
	void FRigUnit_HierarchyAddControlVector::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FRigUnit_HierarchyAddControlVector_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_956_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FRigUnit_HierarchyAddControlVector_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_HierarchyAddControlVector_Settings& Settings = *(FRigUnit_HierarchyAddControlVector_Settings*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


struct FRigUnit_HierarchyAddControlVector;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlVector **********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlRotator_LimitSettings *****************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_LimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_987_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_LimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddControlRotator_LimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlRotator_LimitSettings *******************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlRotator_Settings **********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Settings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1023_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Settings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


struct FRigUnit_HierarchyAddControlRotator_Settings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlRotator_Settings ************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlRotator *******************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Statics;

#define FRigUnit_HierarchyAddControlRotator_Execute() \
	void FRigUnit_HierarchyAddControlRotator::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& InitialValue, \
		const FRigUnit_HierarchyAddControlRotator_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1067_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlRotator_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& InitialValue, \
		const FRigUnit_HierarchyAddControlRotator_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& InitialValue = *(FRotator*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_HierarchyAddControlRotator_Settings& Settings = *(FRigUnit_HierarchyAddControlRotator_Settings*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


struct FRigUnit_HierarchyAddControlRotator;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlRotator *********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlTransform_LimitSettings ***************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_LimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1095_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_LimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddControlTransform_LimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlTransform_LimitSettings *****************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlTransform_Settings ********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Settings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1156_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Settings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddControl_Settings Super;


struct FRigUnit_HierarchyAddControlTransform_Settings;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlTransform_Settings **********************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddControlTransform *****************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Statics;

#define FRigUnit_HierarchyAddControlTransform_Execute() \
	void FRigUnit_HierarchyAddControlTransform::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& InitialValue, \
		const FRigUnit_HierarchyAddControlTransform_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1201_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddControlTransform_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& InitialValue, \
		const FRigUnit_HierarchyAddControlTransform_Settings& Settings, \
		const FTransform& OffsetTransform, \
		const ERigVMTransformSpace OffsetSpace, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& InitialValue = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_HierarchyAddControlTransform_Settings& Settings = *(FRigUnit_HierarchyAddControlTransform_Settings*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransform& OffsetTransform = *(FTransform*)RigVMMemoryHandles[2].GetInputData(); \
		const ERigVMTransformSpace OffsetSpace = *(ERigVMTransformSpace*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			Settings, \
			OffsetTransform, \
			OffsetSpace, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddControlElement Super;


struct FRigUnit_HierarchyAddControlTransform;
// ********** End ScriptStruct FRigUnit_HierarchyAddControlTransform *******************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings ***********
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1229_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings *************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelBool *************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool_Statics;

#define FRigUnit_HierarchyAddAnimationChannelBool_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelBool::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool InitialValue, \
		const bool MinimumValue, \
		const bool MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1242_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelBool_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const bool InitialValue, \
		const bool MinimumValue, \
		const bool MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const bool InitialValue = *(bool*)RigVMMemoryHandles[0].GetInputData(); \
		const bool MinimumValue = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const bool MaximumValue = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings& LimitsEnabled = *(FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			LimitsEnabled, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddAnimationChannelBool;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelBool ***************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings **********
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1283_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings Super;


struct FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings ************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelFloat ************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelFloat_Statics;

#define FRigUnit_HierarchyAddAnimationChannelFloat_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelFloat::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const float MinimumValue, \
		const float MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1300_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const float MinimumValue, \
		const float MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float InitialValue = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float MinimumValue = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float MaximumValue = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings& LimitsEnabled = *(FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			LimitsEnabled, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddAnimationChannelFloat;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelFloat **************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelScaleFloat *******************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleFloat_Statics;

#define FRigUnit_HierarchyAddAnimationChannelScaleFloat_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelScaleFloat::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const float MinimumValue, \
		const float MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1345_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleFloat_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const float InitialValue, \
		const float MinimumValue, \
		const float MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const float InitialValue = *(float*)RigVMMemoryHandles[0].GetInputData(); \
		const float MinimumValue = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float MaximumValue = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings& LimitsEnabled = *(FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			LimitsEnabled, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddAnimationChannelScaleFloat;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelScaleFloat *********************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelInteger **********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger_Statics;

#define FRigUnit_HierarchyAddAnimationChannelInteger_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelInteger::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 InitialValue, \
		const int32 MinimumValue, \
		const int32 MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings& LimitsEnabled, \
		const TObjectPtr<UEnum>& ControlEnum, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1390_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelInteger_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const int32 InitialValue, \
		const int32 MinimumValue, \
		const int32 MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings& LimitsEnabled, \
		const TObjectPtr<UEnum>& ControlEnum, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const int32 InitialValue = *(int32*)RigVMMemoryHandles[0].GetInputData(); \
		const int32 MinimumValue = *(int32*)RigVMMemoryHandles[1].GetInputData(); \
		const int32 MaximumValue = *(int32*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings& LimitsEnabled = *(FRigUnit_HierarchyAddAnimationChannelSingleLimitSettings*)RigVMMemoryHandles[3].GetInputData(); \
		const TObjectPtr<UEnum>& ControlEnum = *(TObjectPtr<UEnum>*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[5].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[6].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[7].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			LimitsEnabled, \
			ControlEnum, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddAnimationChannelInteger;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelInteger ************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannel2DLimitSettings **************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannel2DLimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1437_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannel2DLimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings Super;


struct FRigUnit_HierarchyAddAnimationChannel2DLimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannel2DLimitSettings ****************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelVector2D *********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D_Statics;

#define FRigUnit_HierarchyAddAnimationChannelVector2D_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelVector2D::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& InitialValue, \
		const FVector2D& MinimumValue, \
		const FVector2D& MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannel2DLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1458_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector2D_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector2D& InitialValue, \
		const FVector2D& MinimumValue, \
		const FVector2D& MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannel2DLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector2D& InitialValue = *(FVector2D*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector2D& MinimumValue = *(FVector2D*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector2D& MaximumValue = *(FVector2D*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_HierarchyAddAnimationChannel2DLimitSettings& LimitsEnabled = *(FRigUnit_HierarchyAddAnimationChannel2DLimitSettings*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			LimitsEnabled, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddAnimationChannelVector2D;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelVector2D ***********************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings **********
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1499_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings Super;


struct FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings ************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelVector ***********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector_Statics;

#define FRigUnit_HierarchyAddAnimationChannelVector_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelVector::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FVector& MinimumValue, \
		const FVector& MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1524_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FVector& MinimumValue, \
		const FVector& MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& MinimumValue = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& MaximumValue = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings& LimitsEnabled = *(FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			LimitsEnabled, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddAnimationChannelVector;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelVector *************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelScaleVector ******************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleVector_Statics;

#define FRigUnit_HierarchyAddAnimationChannelScaleVector_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelScaleVector::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FVector& MinimumValue, \
		const FVector& MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1569_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelScaleVector_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FVector& InitialValue, \
		const FVector& MinimumValue, \
		const FVector& MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& MinimumValue = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const FVector& MaximumValue = *(FVector*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings& LimitsEnabled = *(FRigUnit_HierarchyAddAnimationChannelVectorLimitSettings*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			LimitsEnabled, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddAnimationChannelScaleVector;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelScaleVector ********************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings *********
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1611_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_HierarchyAddAnimationChannelEmptyLimitSettings Super;


struct FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings ***********

// ********** Begin ScriptStruct FRigUnit_HierarchyAddAnimationChannelRotator **********************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator_Statics;

#define FRigUnit_HierarchyAddAnimationChannelRotator_Execute() \
	void FRigUnit_HierarchyAddAnimationChannelRotator::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& InitialValue, \
		const FRotator& MinimumValue, \
		const FRotator& MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1636_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddAnimationChannelRotator_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRotator& InitialValue, \
		const FRotator& MinimumValue, \
		const FRotator& MaximumValue, \
		const FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings& LimitsEnabled, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRotator& InitialValue = *(FRotator*)RigVMMemoryHandles[0].GetInputData(); \
		const FRotator& MinimumValue = *(FRotator*)RigVMMemoryHandles[1].GetInputData(); \
		const FRotator& MaximumValue = *(FRotator*)RigVMMemoryHandles[2].GetInputData(); \
		const FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings& LimitsEnabled = *(FRigUnit_HierarchyAddAnimationChannelRotatorLimitSettings*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			InitialValue, \
			MinimumValue, \
			MaximumValue, \
			LimitsEnabled, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddAnimationChannelRotator;
// ********** End ScriptStruct FRigUnit_HierarchyAddAnimationChannelRotator ************************

// ********** Begin ScriptStruct FRigUnit_HierarchyGetShapeSettings ********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetShapeSettings_Statics;

#define FRigUnit_HierarchyGetShapeSettings_Execute() \
	void FRigUnit_HierarchyGetShapeSettings::StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		FRigUnit_HierarchyAddControl_ShapeSettings& Settings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1680_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyGetShapeSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(const FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		const FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		FRigUnit_HierarchyAddControl_ShapeSettings& Settings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		FRigUnit_HierarchyAddControl_ShapeSettings& Settings = *(FRigUnit_HierarchyAddControl_ShapeSettings*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Settings \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


struct FRigUnit_HierarchyGetShapeSettings;
// ********** End ScriptStruct FRigUnit_HierarchyGetShapeSettings **********************************

// ********** Begin ScriptStruct FRigUnit_HierarchySetShapeSettings ********************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetShapeSettings_Statics;

#define FRigUnit_HierarchySetShapeSettings_Execute() \
	void FRigUnit_HierarchySetShapeSettings::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_HierarchyAddControl_ShapeSettings& Settings \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1710_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchySetShapeSettings_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_HierarchyAddControl_ShapeSettings& Settings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetInputData(); \
		const FRigUnit_HierarchyAddControl_ShapeSettings& Settings = *(FRigUnit_HierarchyAddControl_ShapeSettings*)RigVMMemoryHandles[1].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Item, \
			Settings \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


struct FRigUnit_HierarchySetShapeSettings;
// ********** End ScriptStruct FRigUnit_HierarchySetShapeSettings **********************************

// ********** Begin ScriptStruct FRigUnit_HierarchyAddSocket ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_HierarchyAddSocket_Statics;

#define FRigUnit_HierarchyAddSocket_Execute() \
	void FRigUnit_HierarchyAddSocket::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FLinearColor& Color, \
		const FString& Description, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h_1740_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_HierarchyAddSocket_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FTransform& Transform, \
		const ERigVMTransformSpace Space, \
		const FLinearColor& Color, \
		const FString& Description, \
		const FRigElementKey& Parent, \
		const FName& Name, \
		FRigElementKey& Item \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetInputData(); \
		const ERigVMTransformSpace Space = *(ERigVMTransformSpace*)RigVMMemoryHandles[1].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetInputData(); \
		const FString& Description = *(FString*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[4].GetInputData(); \
		const FName& Name = *(FName*)RigVMMemoryHandles[5].GetInputData(); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[6].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Transform, \
			Space, \
			Color, \
			Description, \
			Parent, \
			Name, \
			Item \
		); \
	} \
	typedef FRigUnit_HierarchyAddElement Super;


struct FRigUnit_HierarchyAddSocket;
// ********** End ScriptStruct FRigUnit_HierarchyAddSocket *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Execution_RigUnit_DynamicHierarchy_h

// ********** Begin Enum ERigSwitchParentMode ******************************************************
#define FOREACH_ENUM_ERIGSWITCHPARENTMODE(op) \
	op(ERigSwitchParentMode::World) \
	op(ERigSwitchParentMode::DefaultParent) \
	op(ERigSwitchParentMode::ParentItem) 

enum class ERigSwitchParentMode : uint8;
template<> struct TIsUEnumClass<ERigSwitchParentMode> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigSwitchParentMode>();
// ********** End Enum ERigSwitchParentMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
