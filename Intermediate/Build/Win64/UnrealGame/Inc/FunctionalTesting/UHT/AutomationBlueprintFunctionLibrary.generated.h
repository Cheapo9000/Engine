// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationBlueprintFunctionLibrary.h"

#ifdef FUNCTIONALTESTING_AutomationBlueprintFunctionLibrary_generated_h
#error "AutomationBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AutomationBlueprintFunctionLibrary.h"
#endif
#define FUNCTIONALTESTING_AutomationBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACameraActor;
class UAutomationEditorTask;
class UObject;
enum class EComparisonTolerance : uint8;
struct FAutomationScreenshotOptions;
struct FAutomationWaitForLoadingOptions;
struct FLatentActionInfo;

// ********** Begin Class UAutomationEditorTask ****************************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValidTask); \
	DECLARE_FUNCTION(execIsTaskDone);


struct Z_Construct_UClass_UAutomationEditorTask_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationEditorTask_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationEditorTask(); \
	friend struct ::Z_Construct_UClass_UAutomationEditorTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_UAutomationEditorTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomationEditorTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_UAutomationEditorTask_NoRegister) \
	DECLARE_SERIALIZER(UAutomationEditorTask)


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API UAutomationEditorTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomationEditorTask(UAutomationEditorTask&&) = delete; \
	UAutomationEditorTask(const UAutomationEditorTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, UAutomationEditorTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationEditorTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationEditorTask)


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_37_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomationEditorTask;

// ********** End Class UAutomationEditorTask ******************************************************

// ********** Begin ScriptStruct FAutomationWaitForLoadingOptions **********************************
struct Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics;
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


struct FAutomationWaitForLoadingOptions;
// ********** End ScriptStruct FAutomationWaitForLoadingOptions ************************************

// ********** Begin Class UAutomationBlueprintFunctionLibrary **************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_76_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAddTestError); \
	DECLARE_FUNCTION(execAddTestWarning); \
	DECLARE_FUNCTION(execAddTestInfo); \
	DECLARE_FUNCTION(execSetEditorViewportVisualizeBuffer); \
	DECLARE_FUNCTION(execGetEditorActiveViewportWireframeOpacity); \
	DECLARE_FUNCTION(execSetEditorActiveViewportWireframeOpacity); \
	DECLARE_FUNCTION(execGetEditorActiveViewportViewMode); \
	DECLARE_FUNCTION(execSetEditorActiveViewportViewMode); \
	DECLARE_FUNCTION(execSetEditorViewportViewMode); \
	DECLARE_FUNCTION(execSetScalabilityQualityToLow); \
	DECLARE_FUNCTION(execSetScalabilityQualityToEpic); \
	DECLARE_FUNCTION(execSetScalabilityQualityLevelRelativeToMax); \
	DECLARE_FUNCTION(execAddExpectedPlainLogMessage); \
	DECLARE_FUNCTION(execAddExpectedLogMessage); \
	DECLARE_FUNCTION(execAddExpectedPlainLogError); \
	DECLARE_FUNCTION(execAddExpectedLogError); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForRendering); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForGameplay); \
	DECLARE_FUNCTION(execSetTestTelemetryStorage); \
	DECLARE_FUNCTION(execAddTestTelemetryData); \
	DECLARE_FUNCTION(execCompareImageAgainstReference); \
	DECLARE_FUNCTION(execTakeHighResScreenshot); \
	DECLARE_FUNCTION(execAutomationWaitForLoading); \
	DECLARE_FUNCTION(execAreAutomatedTestsRunning); \
	DECLARE_FUNCTION(execGetStatCallCount); \
	DECLARE_FUNCTION(execGetStatExcMax); \
	DECLARE_FUNCTION(execGetStatExcAverage); \
	DECLARE_FUNCTION(execGetStatIncMax); \
	DECLARE_FUNCTION(execGetStatIncAverage); \
	DECLARE_FUNCTION(execDisableStatGroup); \
	DECLARE_FUNCTION(execEnableStatGroup); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotOfUI); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotAtCamera); \
	DECLARE_FUNCTION(execTakeAutomationScreenshot); \
	DECLARE_FUNCTION(execFinishLoadingBeforeScreenshot);


struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomationBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAutomationBlueprintFunctionLibrary)


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API UAutomationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, UAutomationBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationBlueprintFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomationBlueprintFunctionLibrary(UAutomationBlueprintFunctionLibrary&&) = delete; \
	UAutomationBlueprintFunctionLibrary(const UAutomationBlueprintFunctionLibrary&) = delete; \
	FUNCTIONALTESTING_API virtual ~UAutomationBlueprintFunctionLibrary();


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_73_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_76_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_76_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomationBlueprintFunctionLibrary;

// ********** End Class UAutomationBlueprintFunctionLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
