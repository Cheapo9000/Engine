// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Units/Deprecated/RigUnit_ApplyFK.h"

#ifdef CONTROLRIG_RigUnit_ApplyFK_generated_h
#error "RigUnit_ApplyFK.generated.h already included, missing '#pragma once' in RigUnit_ApplyFK.h"
#endif
#define CONTROLRIG_RigUnit_ApplyFK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_ApplyFK **************************************************
struct Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics;

#define FRigUnit_ApplyFK_Execute() \
	void FRigUnit_ApplyFK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const FTransform& Transform, \
		const FTransformFilter& Filter, \
		const EApplyTransformMode ApplyTransformMode, \
		const ETransformSpaceMode ApplyTransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseJoint \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_ApplyFK_h_29_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_ApplyFK_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		const FName& Joint, \
		const FTransform& Transform, \
		const FTransformFilter& Filter, \
		const EApplyTransformMode ApplyTransformMode, \
		const ETransformSpaceMode ApplyTransformSpace, \
		const FTransform& BaseTransform, \
		const FName& BaseJoint \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FName& Joint = *(FName*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		const FTransformFilter& Filter = *(FTransformFilter*)RigVMMemoryHandles[2].GetInputData(); \
		const EApplyTransformMode ApplyTransformMode = *(EApplyTransformMode*)RigVMMemoryHandles[3].GetInputData(); \
		const ETransformSpaceMode ApplyTransformSpace = *(ETransformSpaceMode*)RigVMMemoryHandles[4].GetInputData(); \
		const FTransform& BaseTransform = *(FTransform*)RigVMMemoryHandles[5].GetInputData(); \
		const FName& BaseJoint = *(FName*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			Joint, \
			Transform, \
			Filter, \
			ApplyTransformMode, \
			ApplyTransformSpace, \
			BaseTransform, \
			BaseJoint \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_ApplyFK;
// ********** End ScriptStruct FRigUnit_ApplyFK ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Deprecated_RigUnit_ApplyFK_h

// ********** Begin Enum EApplyTransformMode *******************************************************
#define FOREACH_ENUM_EAPPLYTRANSFORMMODE(op) \
	op(EApplyTransformMode::Override) \
	op(EApplyTransformMode::Additive) \
	op(EApplyTransformMode::Max) 

enum class EApplyTransformMode : uint8;
template<> struct TIsUEnumClass<EApplyTransformMode> { enum { Value = true }; };
template<> CONTROLRIG_NON_ATTRIBUTED_API UEnum* StaticEnum<EApplyTransformMode>();
// ********** End Enum EApplyTransformMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
