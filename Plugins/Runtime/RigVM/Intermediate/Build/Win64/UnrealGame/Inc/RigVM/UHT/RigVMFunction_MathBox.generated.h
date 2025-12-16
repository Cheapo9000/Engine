// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Math/RigVMFunction_MathBox.h"

#ifdef RIGVM_RigVMFunction_MathBox_generated_h
#error "RigVMFunction_MathBox.generated.h already included, missing '#pragma once' in RigVMFunction_MathBox.h"
#endif
#define RIGVM_RigVMFunction_MathBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_MathBoxBase ****************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxBase_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMFunction_MathBase Super;


struct FRigVMFunction_MathBoxBase;
// ********** End ScriptStruct FRigVMFunction_MathBoxBase ******************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxFromArray ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics;

#define FRigVMFunction_MathBoxFromArray_Execute() \
	void FRigVMFunction_MathBoxFromArray::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FBox& Box, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& Center, \
		FVector& Size \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxFromArray_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const TArrayView<const FVector>& Array, \
		FBox& Box, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& Center, \
		FVector& Size \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FVector>& Array = *(TArray<FVector>*)RigVMMemoryHandles[0].GetInputData(); \
		FBox& Box = *(FBox*)RigVMMemoryHandles[1].GetOutputData(); \
		FVector& Minimum = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		FVector& Maximum = *(FVector*)RigVMMemoryHandles[3].GetOutputData(); \
		FVector& Center = *(FVector*)RigVMMemoryHandles[4].GetOutputData(); \
		FVector& Size = *(FVector*)RigVMMemoryHandles[5].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Array, \
			Box, \
			Minimum, \
			Maximum, \
			Center, \
			Size \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxFromArray;
// ********** End ScriptStruct FRigVMFunction_MathBoxFromArray *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxIsValid *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics;

#define FRigVMFunction_MathBoxIsValid_Execute() \
	void FRigVMFunction_MathBoxIsValid::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		bool& Valid \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsValid_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		bool& Valid \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		bool& Valid = *(bool*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Valid \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxIsValid;
// ********** End ScriptStruct FRigVMFunction_MathBoxIsValid ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxGetCenter ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics;

#define FRigVMFunction_MathBoxGetCenter_Execute() \
	void FRigVMFunction_MathBoxGetCenter::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Center \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetCenter_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Center \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Center = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Center \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxGetCenter;
// ********** End ScriptStruct FRigVMFunction_MathBoxGetCenter *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxGetSize *************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics;

#define FRigVMFunction_MathBoxGetSize_Execute() \
	void FRigVMFunction_MathBoxGetSize::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Size, \
		FVector& Extent \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetSize_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Size, \
		FVector& Extent \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Size = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		FVector& Extent = *(FVector*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Size, \
			Extent \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxGetSize;
// ********** End ScriptStruct FRigVMFunction_MathBoxGetSize ***************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxShift ***************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics;

#define FRigVMFunction_MathBoxShift_Execute() \
	void FRigVMFunction_MathBoxShift::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Amount, \
		FBox& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_138_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxShift_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Amount, \
		FBox& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Amount = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FBox& Result = *(FBox*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Amount, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxShift;
// ********** End ScriptStruct FRigVMFunction_MathBoxShift *****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxMoveTo **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics;

#define FRigVMFunction_MathBoxMoveTo_Execute() \
	void FRigVMFunction_MathBoxMoveTo::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Center, \
		FBox& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_167_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxMoveTo_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Center, \
		FBox& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Center = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FBox& Result = *(FBox*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Center, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxMoveTo;
// ********** End ScriptStruct FRigVMFunction_MathBoxMoveTo ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxExpand **************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics;

#define FRigVMFunction_MathBoxExpand_Execute() \
	void FRigVMFunction_MathBoxExpand::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Amount, \
		FBox& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_196_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxExpand_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Amount, \
		FBox& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Amount = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		FBox& Result = *(FBox*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Amount, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxExpand;
// ********** End ScriptStruct FRigVMFunction_MathBoxExpand ****************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxTransform ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics;

#define FRigVMFunction_MathBoxTransform_Execute() \
	void FRigVMFunction_MathBoxTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FTransform& Transform, \
		FBox& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FTransform& Transform, \
		FBox& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetInputData(); \
		FBox& Result = *(FBox*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Transform, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxTransform;
// ********** End ScriptStruct FRigVMFunction_MathBoxTransform *************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxGetDistance *********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics;

#define FRigVMFunction_MathBoxGetDistance_Execute() \
	void FRigVMFunction_MathBoxGetDistance::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Position, \
		const bool Square, \
		bool& Valid, \
		float& Distance \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_253_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetDistance_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		const FVector& Position, \
		const bool Square, \
		bool& Valid, \
		float& Distance \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		const FVector& Position = *(FVector*)RigVMMemoryHandles[1].GetInputData(); \
		const bool Square = *(bool*)RigVMMemoryHandles[2].GetInputData(); \
		bool& Valid = *(bool*)RigVMMemoryHandles[3].GetOutputData(); \
		float& Distance = *(float*)RigVMMemoryHandles[4].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Position, \
			Square, \
			Valid, \
			Distance \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxGetDistance;
// ********** End ScriptStruct FRigVMFunction_MathBoxGetDistance ***********************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxIsInside ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics;

#define FRigVMFunction_MathBoxIsInside_Execute() \
	void FRigVMFunction_MathBoxIsInside::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Position, \
		bool& Result \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_291_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxIsInside_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		FVector& Position, \
		bool& Result \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		FVector& Position = *(FVector*)RigVMMemoryHandles[1].GetOutputData(); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Position, \
			Result \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxIsInside;
// ********** End ScriptStruct FRigVMFunction_MathBoxIsInside **************************************

// ********** Begin ScriptStruct FRigVMFunction_MathBoxGetVolume ***********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics;

#define FRigVMFunction_MathBoxGetVolume_Execute() \
	void FRigVMFunction_MathBoxGetVolume::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		float& Volume \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h_321_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_MathBoxGetVolume_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		const FBox& Box, \
		float& Volume \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		const FBox& Box = *(FBox*)RigVMMemoryHandles[0].GetInputData(); \
		float& Volume = *(float*)RigVMMemoryHandles[1].GetOutputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Box, \
			Volume \
		); \
	} \
	typedef FRigVMFunction_MathBoxBase Super;


struct FRigVMFunction_MathBoxGetVolume;
// ********** End ScriptStruct FRigVMFunction_MathBoxGetVolume *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Math_RigVMFunction_MathBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
