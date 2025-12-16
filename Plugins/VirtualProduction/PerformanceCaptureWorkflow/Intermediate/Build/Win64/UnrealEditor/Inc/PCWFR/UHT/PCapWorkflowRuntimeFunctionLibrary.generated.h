// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCapWorkflowRuntimeFunctionLibrary.h"

#ifdef PERFORMANCECAPTUREWORKFLOWRUNTIME_PCapWorkflowRuntimeFunctionLibrary_generated_h
#error "PCapWorkflowRuntimeFunctionLibrary.generated.h already included, missing '#pragma once' in PCapWorkflowRuntimeFunctionLibrary.h"
#endif
#define PERFORMANCECAPTUREWORKFLOWRUNTIME_PCapWorkflowRuntimeFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRetargeter;
class UIKRigDefinition;
enum class ERetargetSourceOrTarget : uint8;
struct FBoneChain;

// ********** Begin Class UPCapWorkflowRuntimeFunctionLibrary **************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapWorkflowRuntimeFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChainPair); \
	DECLARE_FUNCTION(execGetChainFromBone); \
	DECLARE_FUNCTION(execGetChainEndBone); \
	DECLARE_FUNCTION(execGetChainStartBone); \
	DECLARE_FUNCTION(execGetRetargetChains); \
	DECLARE_FUNCTION(execGetTargetRig); \
	DECLARE_FUNCTION(execGetSourceRig);


struct Z_Construct_UClass_UPCapWorkflowRuntimeFunctionLibrary_Statics;
PERFORMANCECAPTUREWORKFLOWRUNTIME_API UClass* Z_Construct_UClass_UPCapWorkflowRuntimeFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapWorkflowRuntimeFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCapWorkflowRuntimeFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UPCapWorkflowRuntimeFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOWRUNTIME_API UClass* ::Z_Construct_UClass_UPCapWorkflowRuntimeFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCapWorkflowRuntimeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflowRuntime"), Z_Construct_UClass_UPCapWorkflowRuntimeFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPCapWorkflowRuntimeFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapWorkflowRuntimeFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCapWorkflowRuntimeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCapWorkflowRuntimeFunctionLibrary(UPCapWorkflowRuntimeFunctionLibrary&&) = delete; \
	UPCapWorkflowRuntimeFunctionLibrary(const UPCapWorkflowRuntimeFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCapWorkflowRuntimeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCapWorkflowRuntimeFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCapWorkflowRuntimeFunctionLibrary) \
	NO_API virtual ~UPCapWorkflowRuntimeFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapWorkflowRuntimeFunctionLibrary_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapWorkflowRuntimeFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapWorkflowRuntimeFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapWorkflowRuntimeFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapWorkflowRuntimeFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCapWorkflowRuntimeFunctionLibrary;

// ********** End Class UPCapWorkflowRuntimeFunctionLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflowRuntime_Private_PCapWorkflowRuntimeFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
