// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCapSubsystem.h"

#ifdef PERFORMANCECAPTUREWORKFLOW_PCapSubsystem_generated_h
#error "PCapSubsystem.generated.h already included, missing '#pragma once' in PCapSubsystem.h"
#endif
#define PERFORMANCECAPTUREWORKFLOW_PCapSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMVVMViewModelCollectionObject;
class UObject;
class UPerformanceCaptureDatabaseHelper;
enum class ELiveLinkSubjectState : uint8;
struct FAssetData;
struct FLiveLinkSubjectKey;

// ********** Begin Delegate FOnPCapAssetRemoved ***************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_61_DELEGATE \
static void FOnPCapAssetRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnPCapAssetRemoved, FAssetData DeletedAsset);


// ********** End Delegate FOnPCapAssetRemoved *****************************************************

// ********** Begin Delegate FOnPCapAssetRenamed ***************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_69_DELEGATE \
static void FOnPCapAssetRenamed_DelegateWrapper(const FMulticastScriptDelegate& OnPCapAssetRenamed, FAssetData RenamedAsset, const FString& OldName);


// ********** End Delegate FOnPCapAssetRenamed *****************************************************

// ********** Begin Delegate FOnPCapAssetAdded *****************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_77_DELEGATE \
static void FOnPCapAssetAdded_DelegateWrapper(const FMulticastScriptDelegate& OnPCapAssetAdded, FAssetData NewAsset);


// ********** End Delegate FOnPCapAssetAdded *******************************************************

// ********** Begin Delegate FOnPCapActorModified **************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_85_DELEGATE \
static void FOnPCapActorModified_DelegateWrapper(const FMulticastScriptDelegate& OnPCapActorModified, AActor* Actor);


// ********** End Delegate FOnPCapActorModified ****************************************************

// ********** Begin Delegate FOnPCapEditorUndo *****************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_93_DELEGATE \
static void FOnPCapEditorUndo_DelegateWrapper(const FMulticastScriptDelegate& OnPCapEditorUndo, bool bSuccess);


// ********** End Delegate FOnPCapEditorUndo *******************************************************

// ********** Begin Delegate FOnPCapEditorRedo *****************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_101_DELEGATE \
static void FOnPCapEditorRedo_DelegateWrapper(const FMulticastScriptDelegate& OnPCapEditorRedo, bool bSuccess);


// ********** End Delegate FOnPCapEditorRedo *******************************************************

// ********** Begin Delegate FOnPCapAssetEditorOpen ************************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_109_DELEGATE \
static void FOnPCapAssetEditorOpen_DelegateWrapper(const FMulticastScriptDelegate& OnPCapAssetEditorOpen, UObject* Asset);


// ********** End Delegate FOnPCapAssetEditorOpen **************************************************

// ********** Begin Delegate FOnPCapAssetEditorClose ***********************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_117_DELEGATE \
static void FOnPCapAssetEditorClose_DelegateWrapper(const FMulticastScriptDelegate& OnPCapAssetEditorClose, UObject* Asset);


// ********** End Delegate FOnPCapAssetEditorClose *************************************************

// ********** Begin Delegate FOnPCapLiveLinkSubjectUpdate ******************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_125_DELEGATE \
static void FOnPCapLiveLinkSubjectUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnPCapLiveLinkSubjectUpdate, FLiveLinkSubjectKey Subject, ELiveLinkSubjectState State);


// ********** End Delegate FOnPCapLiveLinkSubjectUpdate ********************************************

// ********** Begin Delegate FOnPCapLiveLinkSubjectAdded *******************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_133_DELEGATE \
static void FOnPCapLiveLinkSubjectAdded_DelegateWrapper(const FMulticastScriptDelegate& OnPCapLiveLinkSubjectAdded, FLiveLinkSubjectKey Subject);


// ********** End Delegate FOnPCapLiveLinkSubjectAdded *********************************************

// ********** Begin Delegate FOnPCapLiveLinkSubjectRemoved *****************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_141_DELEGATE \
static void FOnPCapLiveLinkSubjectRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnPCapLiveLinkSubjectRemoved, FLiveLinkSubjectKey Subject);


// ********** End Delegate FOnPCapLiveLinkSubjectRemoved *******************************************

// ********** Begin Delegate FOnPCapLiveLinkSubjectEnableChanged ***********************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_149_DELEGATE \
static void FOnPCapLiveLinkSubjectEnableChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPCapLiveLinkSubjectEnableChanged, FLiveLinkSubjectKey Subject, bool NewEnabled);


// ********** End Delegate FOnPCapLiveLinkSubjectEnableChanged *************************************

// ********** Begin Class UPerformanceCaptureSubsystem *********************************************
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetViewModelCollection); \
	DECLARE_FUNCTION(execGetDatabaseHelper);


struct Z_Construct_UClass_UPerformanceCaptureSubsystem_Statics;
PERFORMANCECAPTUREWORKFLOW_API UClass* Z_Construct_UClass_UPerformanceCaptureSubsystem_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerformanceCaptureSubsystem(); \
	friend struct ::Z_Construct_UClass_UPerformanceCaptureSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PERFORMANCECAPTUREWORKFLOW_API UClass* ::Z_Construct_UClass_UPerformanceCaptureSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPerformanceCaptureSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PerformanceCaptureWorkflow"), Z_Construct_UClass_UPerformanceCaptureSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPerformanceCaptureSubsystem)


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerformanceCaptureSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPerformanceCaptureSubsystem(UPerformanceCaptureSubsystem&&) = delete; \
	UPerformanceCaptureSubsystem(const UPerformanceCaptureSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerformanceCaptureSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerformanceCaptureSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerformanceCaptureSubsystem) \
	NO_API virtual ~UPerformanceCaptureSubsystem();


#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_26_PROLOG
#define FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPerformanceCaptureSubsystem;

// ********** End Class UPerformanceCaptureSubsystem ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_PerformanceCaptureWorkflow_Source_PerformanceCaptureWorkflow_Private_PCapSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
