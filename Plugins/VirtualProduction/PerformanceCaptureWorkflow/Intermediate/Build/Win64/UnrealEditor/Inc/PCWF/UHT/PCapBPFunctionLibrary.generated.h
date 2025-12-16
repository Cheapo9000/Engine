// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCapBPFunctionLibrary.h"

#ifdef PERFORMANCECAPTUREWORKFLOW_PCapBPFunctionLibrary_generated_h
#error "PCapBPFunctionLibrary.generated.h already included, missing '#pragma once' in PCapBPFunctionLibrary.h"
#endif
#define PERFORMANCECAPTUREWORKFLOW_PCapBPFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UClass;
class UObject;

// ********** Begin Class UPerformanceCaptureBPFunctionLibrary *************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapBPFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllActorsWithComponent); \
	DECLARE_FUNCTION(execSanitizePathString); \
	DECLARE_FUNCTION(execSanitizeFileString);


struct Z_Construct_UClass_UPerformanceCaptureBPFunctionLibrary_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPerformanceCaptureBPFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapBPFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerformanceCaptureBPFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UPerformanceCaptureBPFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPerformanceCaptureBPFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPerformanceCaptureBPFunctionLibrary, UEditorFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPerformanceCaptureBPFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPerformanceCaptureBPFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapBPFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerformanceCaptureBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPerformanceCaptureBPFunctionLibrary(UPerformanceCaptureBPFunctionLibrary&&) = delete; \
	UPerformanceCaptureBPFunctionLibrary(const UPerformanceCaptureBPFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerformanceCaptureBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerformanceCaptureBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerformanceCaptureBPFunctionLibrary) \
	NO_API virtual ~UPerformanceCaptureBPFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapBPFunctionLibrary_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapBPFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapBPFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapBPFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapBPFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPerformanceCaptureBPFunctionLibrary;

// ********** End Class UPerformanceCaptureBPFunctionLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapBPFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
