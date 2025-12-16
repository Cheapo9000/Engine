// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRig/RigUnit_Optimus.h"

#ifdef OPTIMUSCORE_RigUnit_Optimus_generated_h
#error "RigUnit_Optimus.generated.h already included, missing '#pragma once' in RigUnit_Optimus.h"
#endif
#define OPTIMUSCORE_RigUnit_Optimus_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigVMTrait_OptimusDeformer ***************************************
struct Z_Construct_UScriptStruct_FRigVMTrait_OptimusDeformer_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_OptimusDeformer_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait Super;


struct FRigVMTrait_OptimusDeformer;
// ********** End ScriptStruct FRigVMTrait_OptimusDeformer *****************************************

// ********** Begin ScriptStruct FRigVMTrait_OptimusDeformerSettings *******************************
struct Z_Construct_UScriptStruct_FRigVMTrait_OptimusDeformerSettings_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_OptimusDeformerSettings_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait Super;


struct FRigVMTrait_OptimusDeformerSettings;
// ********** End ScriptStruct FRigVMTrait_OptimusDeformerSettings *********************************

// ********** Begin ScriptStruct FRigUnit_AddOptimusDeformer ***************************************
struct Z_Construct_UScriptStruct_FRigUnit_AddOptimusDeformer_Statics;

#define FRigUnit_AddOptimusDeformer_Execute() \
	void FRigUnit_AddOptimusDeformer::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FGuid& DeformerInstanceGuid \
	)

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigUnit_AddOptimusDeformer_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	UE_API void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void UE_API StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		FGuid& DeformerInstanceGuid \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		FGuid& DeformerInstanceGuid = *(FGuid*)RigVMMemoryHandles[0].GetPrivateData(RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			DeformerInstanceGuid \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_AddOptimusDeformer;
// ********** End ScriptStruct FRigUnit_AddOptimusDeformer *****************************************

// ********** Begin ScriptStruct FRigVMTrait_OptimusVariableBase ***********************************
struct Z_Construct_UScriptStruct_FRigVMTrait_OptimusVariableBase_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_OptimusVariableBase_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait Super;


struct FRigVMTrait_OptimusVariableBase;
// ********** End ScriptStruct FRigVMTrait_OptimusVariableBase *************************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerIntVariable ********************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerIntVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerIntVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerIntVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerIntVariable **********************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerIntArrayVariable ***************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerIntArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_100_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerIntArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerIntArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerIntArrayVariable *****************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerInt2Variable *******************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt2Variable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt2Variable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerInt2Variable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerInt2Variable *********************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerInt2ArrayVariable **************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt2ArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_122_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt2ArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerInt2ArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerInt2ArrayVariable ****************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerInt3Variable *******************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt3Variable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt3Variable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerInt3Variable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerInt3Variable *********************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerInt3ArrayVariable **************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt3ArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_144_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt3ArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerInt3ArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerInt3ArrayVariable ****************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerInt4Variable *******************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt4Variable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_155_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt4Variable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerInt4Variable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerInt4Variable *********************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerInt4ArrayVariable **************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt4ArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerInt4ArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerInt4ArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerInt4ArrayVariable ****************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerFloatVariable ******************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerFloatVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_180_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerFloatVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerFloatVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerFloatVariable ********************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerFloatArrayVariable *************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerFloatArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_191_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerFloatArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerFloatArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerFloatArrayVariable ***************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerVector2Variable ****************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector2Variable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_202_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector2Variable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerVector2Variable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerVector2Variable ******************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerVector2ArrayVariable ***********************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector2ArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_214_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector2ArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerVector2ArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerVector2ArrayVariable *************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerVectorVariable *****************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVectorVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_225_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVectorVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerVectorVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerVectorVariable *******************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerVectorArrayVariable ************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVectorArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_236_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVectorArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerVectorArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerVectorArrayVariable **************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerVector4Variable ****************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector4Variable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_248_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector4Variable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerVector4Variable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerVector4Variable ******************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerVector4ArrayVariable ***********************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector4ArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_259_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerVector4ArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerVector4ArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerVector4ArrayVariable *************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerLinearColorVariable ************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerLinearColorVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_270_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerLinearColorVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerLinearColorVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerLinearColorVariable **************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerLinearColorArrayVariable *******************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerLinearColorArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_281_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerLinearColorArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerLinearColorArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerLinearColorArrayVariable *********************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerQuatVariable *******************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerQuatVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_293_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerQuatVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerQuatVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerQuatVariable *********************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerQuatArrayVariable **************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerQuatArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_305_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerQuatArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerQuatArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerQuatArrayVariable ****************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerRotatorVariable ****************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerRotatorVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_316_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerRotatorVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerRotatorVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerRotatorVariable ******************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerRotatorArrayVariable ***********************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerRotatorArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_327_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerRotatorArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerRotatorArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerRotatorArrayVariable *************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerTransformVariable **************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerTransformVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_338_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerTransformVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerTransformVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerTransformVariable ****************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerTransformArrayVariable *********************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerTransformArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_349_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerTransformArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerTransformArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerTransformArrayVariable ***********************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerNameVariable *******************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerNameVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_360_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerNameVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerNameVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerNameVariable *********************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerNameArrayVariable **************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerNameArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_371_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerNameArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerNameArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerNameArrayVariable ****************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerBoolVariable *******************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerBoolVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_382_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerBoolVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerBoolVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerBoolVariable *********************************

// ********** Begin ScriptStruct FRigVMTrait_SetDeformerBoolArrayVariable **************************
struct Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerBoolArrayVariable_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h_393_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMTrait_SetDeformerBoolArrayVariable_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMTrait_OptimusVariableBase Super;


struct FRigVMTrait_SetDeformerBoolArrayVariable;
// ********** End ScriptStruct FRigVMTrait_SetDeformerBoolArrayVariable ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_ControlRig_RigUnit_Optimus_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
