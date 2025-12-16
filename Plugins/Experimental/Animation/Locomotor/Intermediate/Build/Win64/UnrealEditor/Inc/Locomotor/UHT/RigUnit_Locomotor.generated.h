// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_Locomotor.h"

#ifdef LOCOMOTOR_RigUnit_Locomotor_generated_h
#error "RigUnit_Locomotor.generated.h already included, missing '#pragma once' in RigUnit_Locomotor.h"
#endif
#define LOCOMOTOR_RigUnit_Locomotor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLocomotorDebugSettings *******************************************
struct Z_Construct_UScriptStruct_FLocomotorDebugSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLocomotorDebugSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FLocomotorDebugSettings;
// ********** End ScriptStruct FLocomotorDebugSettings *********************************************

// ********** Begin ScriptStruct FMovementSettings *************************************************
struct Z_Construct_UScriptStruct_FMovementSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h_76_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMovementSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMovementSettings;
// ********** End ScriptStruct FMovementSettings ***************************************************

// ********** Begin ScriptStruct FStepSettings *****************************************************
struct Z_Construct_UScriptStruct_FStepSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h_131_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStepSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStepSettings;
// ********** End ScriptStruct FStepSettings *******************************************************

// ********** Begin ScriptStruct FPelvisSettings ***************************************************
struct Z_Construct_UScriptStruct_FPelvisSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h_192_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPelvisSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FPelvisSettings;
// ********** End ScriptStruct FPelvisSettings *****************************************************

// ********** Begin ScriptStruct FSpineSettings ****************************************************
struct Z_Construct_UScriptStruct_FSpineSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h_250_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpineSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSpineSettings;
// ********** End ScriptStruct FSpineSettings ******************************************************

// ********** Begin ScriptStruct FHeadSettings *****************************************************
struct Z_Construct_UScriptStruct_FHeadSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h_278_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHeadSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHeadSettings;
// ********** End ScriptStruct FHeadSettings *******************************************************

// ********** Begin ScriptStruct FFootSettings *****************************************************
struct Z_Construct_UScriptStruct_FFootSettings_Statics;
#define FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h_307_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFootSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFootSettings;
// ********** End ScriptStruct FFootSettings *******************************************************

// ********** Begin ScriptStruct FFootSet **********************************************************
struct Z_Construct_UScriptStruct_FFootSet_Statics;
#define FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h_330_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFootSet_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFootSet;
// ********** End ScriptStruct FFootSet ************************************************************

// ********** Begin ScriptStruct FRigUnit_Locomotor ************************************************
struct Z_Construct_UScriptStruct_FRigUnit_Locomotor_Statics;

#define FRigUnit_Locomotor_Execute() \
	void FRigUnit_Locomotor::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		TArray<FTransform>& FeetTransforms, \
		const FName& RootControl, \
		FCachedRigElement& CachedRootElement, \
		const FMovementSettings& Movement, \
		const TArrayView<const FFootSet>& FootSets, \
		const FStepSettings& Stepping, \
		const FPelvisSettings& Pelvis, \
		const FLocomotorDebugSettings& Debug, \
		FLocomotor& Locomotor \
	)

#define FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h_346_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_Locomotor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		TArray<FTransform>& FeetTransforms, \
		const FName& RootControl, \
		FCachedRigElement& CachedRootElement, \
		const FMovementSettings& Movement, \
		const TArrayView<const FFootSet>& FootSets, \
		const FStepSettings& Stepping, \
		const FPelvisSettings& Pelvis, \
		const FLocomotorDebugSettings& Debug, \
		FLocomotor& Locomotor \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		TArray<FTransform>& FeetTransforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetOutputData(); \
		const FName& RootControl = *(FName*)RigVMMemoryHandles[1].GetInputData(); \
		FCachedRigElement& CachedRootElement = *(FCachedRigElement*)RigVMMemoryHandles[2].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		const FMovementSettings& Movement = *(FMovementSettings*)RigVMMemoryHandles[3].GetInputData(); \
		TArray<FFootSet>& FootSets = *(TArray<FFootSet>*)RigVMMemoryHandles[4].GetInputData(); \
		const FStepSettings& Stepping = *(FStepSettings*)RigVMMemoryHandles[5].GetInputData(); \
		const FPelvisSettings& Pelvis = *(FPelvisSettings*)RigVMMemoryHandles[6].GetInputData(); \
		const FLocomotorDebugSettings& Debug = *(FLocomotorDebugSettings*)RigVMMemoryHandles[7].GetInputData(); \
		FLocomotor& Locomotor = *(FLocomotor*)RigVMMemoryHandles[8].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			FeetTransforms, \
			RootControl, \
			CachedRootElement, \
			Movement, \
			FootSets, \
			Stepping, \
			Pelvis, \
			Debug, \
			Locomotor \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


struct FRigUnit_Locomotor;
// ********** End ScriptStruct FRigUnit_Locomotor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_Locomotor_Source_Locomotor_Public_RigUnit_Locomotor_h

// ********** Begin Enum ELocomotorMovementStyle ***************************************************
#define FOREACH_ENUM_ELOCOMOTORMOVEMENTSTYLE(op) \
	op(ELocomotorMovementStyle::Walk) \
	op(ELocomotorMovementStyle::Trot) \
	op(ELocomotorMovementStyle::Gallop) 

enum class ELocomotorMovementStyle : uint8;
template<> struct TIsUEnumClass<ELocomotorMovementStyle> { enum { Value = true }; };
template<> LOCOMOTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELocomotorMovementStyle>();
// ********** End Enum ELocomotorMovementStyle *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
