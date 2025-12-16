// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCapPropLiveLinkAnimInstance.h"

#ifdef PERFORMANCECAPTUREWORKFLOWRUNTIME_PCapPropLiveLinkAnimInstance_generated_h
#error "PCapPropLiveLinkAnimInstance.generated.h already included, missing '#pragma once' in PCapPropLiveLinkAnimInstance.h"
#endif
#define PERFORMANCECAPTUREWORKFLOWRUNTIME_PCapPropLiveLinkAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkSubjectName;

// ********** Begin ScriptStruct FPCapPropLiveLinkAnimInstanceProxy ********************************
struct Z_Construct_UScriptStruct_FPCapPropLiveLinkAnimInstanceProxy_Statics;
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCapPropLiveLinkAnimInstanceProxy_Statics; \
	PERFORMANCECAPTUREWORKFLOWRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


struct FPCapPropLiveLinkAnimInstanceProxy;
// ********** End ScriptStruct FPCapPropLiveLinkAnimInstanceProxy **********************************

// ********** Begin Class UPCapPropLiveLinkAnimInstance ********************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDynamicConstraintVector); \
	DECLARE_FUNCTION(execSetOffsetTransform); \
	DECLARE_FUNCTION(execEnableLiveLinkEvaluation); \
	DECLARE_FUNCTION(execSetSubject);


struct Z_Construct_UClass_UPCapPropLiveLinkAnimInstance_Statics;
PERFORMANCECAPTUREWORKFLOWRUNTIME_API UClass* Z_Construct_UClass_UPCapPropLiveLinkAnimInstance_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapPropLiveLinkAnimInstance(); \
	friend struct ::Z_Construct_UClass_UPCapPropLiveLinkAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOWRUNTIME_API UClass* ::Z_Construct_UClass_UPCapPropLiveLinkAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapPropLiveLinkAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflowRuntime"), Z_Construct_UClass_UPCapPropLiveLinkAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UPCapPropLiveLinkAnimInstance)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCapPropLiveLinkAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapPropLiveLinkAnimInstance(UPCapPropLiveLinkAnimInstance&&) = delete; \
	UPCapPropLiveLinkAnimInstance(const UPCapPropLiveLinkAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapPropLiveLinkAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapPropLiveLinkAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCapPropLiveLinkAnimInstance) \
	NO_API virtual ~UPCapPropLiveLinkAnimInstance();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h_39_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapPropLiveLinkAnimInstance;

// ********** End Class UPCapPropLiveLinkAnimInstance **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapPropLiveLinkAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
