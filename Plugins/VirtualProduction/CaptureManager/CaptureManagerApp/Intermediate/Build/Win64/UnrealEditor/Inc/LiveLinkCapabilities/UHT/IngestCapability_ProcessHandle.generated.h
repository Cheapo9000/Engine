// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ingest/IngestCapability_ProcessHandle.h"

#ifdef LIVELINKCAPABILITIES_IngestCapability_ProcessHandle_generated_h
#error "IngestCapability_ProcessHandle.generated.h already included, missing '#pragma once' in IngestCapability_ProcessHandle.h"
#endif
#define LIVELINKCAPABILITIES_IngestCapability_ProcessHandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIngestCapability_ProcessHandle;
class UIngestCapability_ProcessResult;

// ********** Begin Delegate FProcessFinishReporter ************************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_59_DELEGATE \
LIVELINKCAPABILITIES_API void FProcessFinishReporter_DelegateWrapper(const FScriptDelegate& ProcessFinishReporter, const UIngestCapability_ProcessHandle* ProcessHandle, UIngestCapability_ProcessResult* IngestProcessResult);


// ********** End Delegate FProcessFinishReporter **************************************************

// ********** Begin Delegate FProcessProgressReporter **********************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_60_DELEGATE \
LIVELINKCAPABILITIES_API void FProcessProgressReporter_DelegateWrapper(const FScriptDelegate& ProcessProgressReporter, const UIngestCapability_ProcessHandle* ProcessHandle, double Progress);


// ********** End Delegate FProcessProgressReporter ************************************************

// ********** Begin Class UIngestCapability_ProcessResult ******************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsError); \
	DECLARE_FUNCTION(execIsValid);


struct Z_Construct_UClass_UIngestCapability_ProcessResult_Statics;
LIVELINKCAPABILITIES_API UClass* Z_Construct_UClass_UIngestCapability_ProcessResult_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIngestCapability_ProcessResult(); \
	friend struct ::Z_Construct_UClass_UIngestCapability_ProcessResult_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKCAPABILITIES_API UClass* ::Z_Construct_UClass_UIngestCapability_ProcessResult_NoRegister(); \
public: \
	DECLARE_CLASS2(UIngestCapability_ProcessResult, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkCapabilities"), Z_Construct_UClass_UIngestCapability_ProcessResult_NoRegister) \
	DECLARE_SERIALIZER(UIngestCapability_ProcessResult)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIngestCapability_ProcessResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIngestCapability_ProcessResult(UIngestCapability_ProcessResult&&) = delete; \
	UIngestCapability_ProcessResult(const UIngestCapability_ProcessResult&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIngestCapability_ProcessResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIngestCapability_ProcessResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIngestCapability_ProcessResult) \
	NO_API virtual ~UIngestCapability_ProcessResult();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_65_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIngestCapability_ProcessResult;

// ********** End Class UIngestCapability_ProcessResult ********************************************

// ********** Begin Class UIngestCapability_ProcessHandle ******************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnProcessProgressReporterDynamic); \
	DECLARE_FUNCTION(execOnProcessFinishReporterDynamic); \
	DECLARE_FUNCTION(execIsDone); \
	DECLARE_FUNCTION(execGetTakeId);


struct Z_Construct_UClass_UIngestCapability_ProcessHandle_Statics;
LIVELINKCAPABILITIES_API UClass* Z_Construct_UClass_UIngestCapability_ProcessHandle_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIngestCapability_ProcessHandle(); \
	friend struct ::Z_Construct_UClass_UIngestCapability_ProcessHandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKCAPABILITIES_API UClass* ::Z_Construct_UClass_UIngestCapability_ProcessHandle_NoRegister(); \
public: \
	DECLARE_CLASS2(UIngestCapability_ProcessHandle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkCapabilities"), Z_Construct_UClass_UIngestCapability_ProcessHandle_NoRegister) \
	DECLARE_SERIALIZER(UIngestCapability_ProcessHandle)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_128_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIngestCapability_ProcessHandle(UIngestCapability_ProcessHandle&&) = delete; \
	UIngestCapability_ProcessHandle(const UIngestCapability_ProcessHandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIngestCapability_ProcessHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIngestCapability_ProcessHandle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIngestCapability_ProcessHandle) \
	NO_API virtual ~UIngestCapability_ProcessHandle();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_125_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_128_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIngestCapability_ProcessHandle;

// ********** End Class UIngestCapability_ProcessHandle ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_ProcessHandle_h

// ********** Begin Enum EIngestCapability_ProcessConfig *******************************************
#define FOREACH_ENUM_EINGESTCAPABILITY_PROCESSCONFIG(op) \
	op(EIngestCapability_ProcessConfig::DownloadStep) \
	op(EIngestCapability_ProcessConfig::ConvertAndUploadStep) \
	op(EIngestCapability_ProcessConfig::None) \
	op(EIngestCapability_ProcessConfig::Download) \
	op(EIngestCapability_ProcessConfig::Ingest) 

enum class EIngestCapability_ProcessConfig : uint8;
template<> struct TIsUEnumClass<EIngestCapability_ProcessConfig> { enum { Value = true }; };
template<> LIVELINKCAPABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EIngestCapability_ProcessConfig>();
// ********** End Enum EIngestCapability_ProcessConfig *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
