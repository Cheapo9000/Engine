// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCapPropComponent.h"

#ifdef PERFORMANCECAPTUREWORKFLOWRUNTIME_PCapPropComponent_generated_h
#error "PCapPropComponent.generated.h already included, missing '#pragma once' in PCapPropComponent.h"
#endif
#define PERFORMANCECAPTUREWORKFLOWRUNTIME_PCapPropComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FLiveLinkSubjectName;

// ********** Begin Class UPCapPropComponent *******************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector CalculateDynamicOffset_Implementation(); \
	DECLARE_FUNCTION(execCalculateDynamicOffset); \
	DECLARE_FUNCTION(execGetAttachBones); \
	DECLARE_FUNCTION(execSetOffsetTransform); \
	DECLARE_FUNCTION(execGetEvaluateLiveLinkData); \
	DECLARE_FUNCTION(execSetEvaluateLiveLinkData); \
	DECLARE_FUNCTION(execGetLiveLinkSubject); \
	DECLARE_FUNCTION(execSetLiveLinkSubject); \
	DECLARE_FUNCTION(execSetControlledComponent); \
	DECLARE_FUNCTION(execGetControlledComponent);


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_19_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPCapPropComponent_Statics;
PERFORMANCECAPTUREWORKFLOWRUNTIME_API UClass* Z_Construct_UClass_UPCapPropComponent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapPropComponent(); \
	friend struct ::Z_Construct_UClass_UPCapPropComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOWRUNTIME_API UClass* ::Z_Construct_UClass_UPCapPropComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapPropComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflowRuntime"), Z_Construct_UClass_UPCapPropComponent_NoRegister) \
	DECLARE_SERIALIZER(UPCapPropComponent)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapPropComponent(UPCapPropComponent&&) = delete; \
	UPCapPropComponent(const UPCapPropComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapPropComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapPropComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCapPropComponent)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_16_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapPropComponent;

// ********** End Class UPCapPropComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Public_PCapPropComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
