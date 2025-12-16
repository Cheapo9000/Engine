// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMFunctions/Debug/RigVMFunction_VisualDebug.h"

#ifdef RIGVM_RigVMFunction_VisualDebug_generated_h
#error "RigVMFunction_VisualDebug.generated.h already included, missing '#pragma once' in RigVMFunction_VisualDebug.h"
#endif
#define RIGVM_RigVMFunction_VisualDebug_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMFunction_VisualDebugVector **********************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics;

#define FRigVMFunction_VisualDebugVector_Execute() \
	void FRigVMFunction_VisualDebugVector::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVector_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigUnitVisualDebugPointMode Mode = *(ERigUnitVisualDebugPointMode*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[6].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[7].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			BoneSpace, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


struct FRigVMFunction_VisualDebugVector;
// ********** End ScriptStruct FRigVMFunction_VisualDebugVector ************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualDebugVectorNoSpace ***************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics;

#define FRigVMFunction_VisualDebugVectorNoSpace_Execute() \
	void FRigVMFunction_VisualDebugVectorNoSpace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_71_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugVectorNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FVector& Value, \
		const bool bEnabled, \
		const ERigUnitVisualDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const ERigUnitVisualDebugPointMode Mode = *(ERigUnitVisualDebugPointMode*)RigVMMemoryHandles[2].GetInputData(); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[6].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


struct FRigVMFunction_VisualDebugVectorNoSpace;
// ********** End ScriptStruct FRigVMFunction_VisualDebugVectorNoSpace *****************************

// ********** Begin ScriptStruct FRigVMFunction_VisualDebugQuat ************************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics;

#define FRigVMFunction_VisualDebugQuat_Execute() \
	void FRigVMFunction_VisualDebugQuat::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuat_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			BoneSpace, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


struct FRigVMFunction_VisualDebugQuat;
// ********** End ScriptStruct FRigVMFunction_VisualDebugQuat **************************************

// ********** Begin ScriptStruct FRigVMFunction_VisualDebugQuatNoSpace *****************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics;

#define FRigVMFunction_VisualDebugQuatNoSpace_Execute() \
	void FRigVMFunction_VisualDebugQuatNoSpace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_147_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugQuatNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FQuat& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[4].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


struct FRigVMFunction_VisualDebugQuatNoSpace;
// ********** End ScriptStruct FRigVMFunction_VisualDebugQuatNoSpace *******************************

// ********** Begin ScriptStruct FRigVMFunction_VisualDebugTransform *******************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics;

#define FRigVMFunction_VisualDebugTransform_Execute() \
	void FRigVMFunction_VisualDebugTransform::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransform_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FName& BoneSpace, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FName& BoneSpace = *(FName*)RigVMMemoryHandles[4].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[5].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			BoneSpace, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


struct FRigVMFunction_VisualDebugTransform;
// ********** End ScriptStruct FRigVMFunction_VisualDebugTransform *********************************

// ********** Begin ScriptStruct FRigVMFunction_VisualDebugTransformNoSpace ************************
struct Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics;

#define FRigVMFunction_VisualDebugTransformNoSpace_Execute() \
	void FRigVMFunction_VisualDebugTransformNoSpace::StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	)

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h_215_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMFunction_VisualDebugTransformNoSpace_Statics; \
	RIGVM_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FRigVMExecuteContext::StaticStruct(); } \
	RIGVM_API void Execute(const FRigVMExecuteContext& InExecuteContext); \
	static void RIGVM_API StaticExecute( \
		const FRigVMExecuteContext& ExecuteContext, \
		FTransform& Value, \
		const bool bEnabled, \
		const float Thickness, \
		const float Scale, \
		const FRigVMDebugDrawSettings& DebugDrawSettings \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetOutputData(); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[1].GetInputData(); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetInputData(); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetInputData(); \
		const FRigVMDebugDrawSettings& DebugDrawSettings = *(FRigVMDebugDrawSettings*)RigVMMemoryHandles[4].GetInputData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FRigVMExecuteContext>(), \
			Value, \
			bEnabled, \
			Thickness, \
			Scale, \
			DebugDrawSettings \
		); \
	} \
	typedef FRigVMFunction_DebugBase Super;


struct FRigVMFunction_VisualDebugTransformNoSpace;
// ********** End ScriptStruct FRigVMFunction_VisualDebugTransformNoSpace **************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_VisualDebug_h

// ********** Begin Enum ERigUnitVisualDebugPointMode **********************************************
#define FOREACH_ENUM_ERIGUNITVISUALDEBUGPOINTMODE(op) \
	op(ERigUnitVisualDebugPointMode::Point) \
	op(ERigUnitVisualDebugPointMode::Vector) \
	op(ERigUnitVisualDebugPointMode::Max) 

enum class ERigUnitVisualDebugPointMode : uint8;
template<> struct TIsUEnumClass<ERigUnitVisualDebugPointMode> { enum { Value = true }; };
template<> RIGVM_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigUnitVisualDebugPointMode>();
// ********** End Enum ERigUnitVisualDebugPointMode ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
