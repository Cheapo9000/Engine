// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h"

#ifdef CONTROLRIG_RigUnit_ModifyTransforms_generated_h
#error "RigUnit_ModifyTransforms.generated.h already included, missing '#pragma once' in RigUnit_ModifyTransforms.h"
#endif
#define CONTROLRIG_RigUnit_ModifyTransforms_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ModifyTransforms_PerItem *********************************
struct Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_PerItem_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ModifyTransforms_PerItem;
// ********** End ScriptStruct FRigUnit_ModifyTransforms_PerItem ***********************************

// ********** Begin ScriptStruct FRigUnit_ModifyTransforms_WorkData ********************************
struct Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_WorkData_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


struct FRigUnit_ModifyTransforms_WorkData;
// ********** End ScriptStruct FRigUnit_ModifyTransforms_WorkData **********************************

// ********** Begin ScriptStruct FRigUnit_ModifyTransforms *****************************************
struct Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics;

#define FRigUnit_ModifyTransforms_Execute() \
	void FRigUnit_ModifyTransforms::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_ModifyTransforms_PerItem>& ItemToModify, \
		const float Weight, \
		const float WeightMinimum, \
		const float WeightMaximum, \
		const EControlRigModifyBoneMode Mode, \
		FRigUnit_ModifyTransforms_WorkData& WorkData \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h_74_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ModifyTransforms_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const TArrayView<const FRigUnit_ModifyTransforms_PerItem>& ItemToModify, \
		const float Weight, \
		const float WeightMinimum, \
		const float WeightMaximum, \
		const EControlRigModifyBoneMode Mode, \
		FRigUnit_ModifyTransforms_WorkData& WorkData \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FRigUnit_ModifyTransforms_PerItem>& ItemToModify = *(TArray<FRigUnit_ModifyTransforms_PerItem>*)RigVMMemoryHandles[0].GetInputData(); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetInputData(); \
		const float WeightMinimum = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float WeightMaximum = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const EControlRigModifyBoneMode Mode = *(EControlRigModifyBoneMode*)RigVMMemoryHandles[4].GetInputData(); \
		FRigUnit_ModifyTransforms_WorkData& WorkData = *(FRigUnit_ModifyTransforms_WorkData*)RigVMMemoryHandles[5].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			ItemToModify, \
			Weight, \
			WeightMinimum, \
			WeightMaximum, \
			Mode, \
			WorkData \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_ModifyTransforms;
// ********** End ScriptStruct FRigUnit_ModifyTransforms *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_ModifyTransforms_h

// ********** Begin Enum EControlRigModifyBoneMode *************************************************
#define FOREACH_ENUM_ECONTROLRIGMODIFYBONEMODE(op) \
	op(EControlRigModifyBoneMode::OverrideLocal) \
	op(EControlRigModifyBoneMode::OverrideGlobal) \
	op(EControlRigModifyBoneMode::AdditiveLocal) \
	op(EControlRigModifyBoneMode::AdditiveGlobal) \
	op(EControlRigModifyBoneMode::Max) 

enum class EControlRigModifyBoneMode : uint8;
template<> struct TIsUEnumClass<EControlRigModifyBoneMode> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EControlRigModifyBoneMode>();
// ********** End Enum EControlRigModifyBoneMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
