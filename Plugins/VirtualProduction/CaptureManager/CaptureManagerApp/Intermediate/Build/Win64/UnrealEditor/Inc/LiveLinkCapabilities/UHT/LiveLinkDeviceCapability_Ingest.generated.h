// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ingest/LiveLinkDeviceCapability_Ingest.h"

#ifdef LIVELINKCAPABILITIES_LiveLinkDeviceCapability_Ingest_generated_h
#error "LiveLinkDeviceCapability_Ingest.generated.h already included, missing '#pragma once' in LiveLinkDeviceCapability_Ingest.h"
#endif
#define LIVELINKCAPABILITIES_LiveLinkDeviceCapability_Ingest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIngestCapability_Options;
class UIngestCapability_ProcessHandle;
class UIngestCapability_TakeInformation;
class UIngestCapability_UpdateTakeListCallback;
enum class EIngestCapability_ProcessConfig : uint8;

// ********** Begin Interface ULiveLinkDeviceCapability_Ingest *************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTakeIdentifiers); \
	DECLARE_FUNCTION(execGetTakeInformation); \
	DECLARE_FUNCTION(execUpdateTakeList); \
	DECLARE_FUNCTION(execCancelIngestProcess); \
	DECLARE_FUNCTION(execRunIngestProcess); \
	DECLARE_FUNCTION(execCreateIngestProcess);


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULiveLinkDeviceCapability_Ingest_Statics;
LIVELINKCAPABILITIES_API UClass* Z_Construct_UClass_ULiveLinkDeviceCapability_Ingest_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkDeviceCapability_Ingest(ULiveLinkDeviceCapability_Ingest&&) = delete; \
	ULiveLinkDeviceCapability_Ingest(const ULiveLinkDeviceCapability_Ingest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkDeviceCapability_Ingest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkDeviceCapability_Ingest); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkDeviceCapability_Ingest) \
	virtual ~ULiveLinkDeviceCapability_Ingest() = default;


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULiveLinkDeviceCapability_Ingest(); \
	friend struct ::Z_Construct_UClass_ULiveLinkDeviceCapability_Ingest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKCAPABILITIES_API UClass* ::Z_Construct_UClass_ULiveLinkDeviceCapability_Ingest_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkDeviceCapability_Ingest, ULiveLinkDeviceCapability, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LiveLinkCapabilities"), Z_Construct_UClass_ULiveLinkDeviceCapability_Ingest_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkDeviceCapability_Ingest)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILiveLinkDeviceCapability_Ingest() {} \
public: \
	typedef ULiveLinkDeviceCapability_Ingest UClassType; \
	typedef ILiveLinkDeviceCapability_Ingest ThisClass; \
	static void Execute_CancelIngestProcess(UObject* O, const UIngestCapability_ProcessHandle* InProcessHandle); \
	static UIngestCapability_ProcessHandle* Execute_CreateIngestProcess(UObject* O, int32 InTakeId, EIngestCapability_ProcessConfig InProcessConfig); \
	static TArray<int32> Execute_GetTakeIdentifiers(const UObject* O); \
	static UIngestCapability_TakeInformation* Execute_GetTakeInformation(const UObject* O, int32 InTakeId); \
	static void Execute_RunIngestProcess(UObject* O, UIngestCapability_ProcessHandle* InProcessHandle, const UIngestCapability_Options* InOptions); \
	static void Execute_UpdateTakeList(UObject* O, UIngestCapability_UpdateTakeListCallback* InCallback); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkDeviceCapability_Ingest;

// ********** End Interface ULiveLinkDeviceCapability_Ingest ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_LiveLinkDeviceCapability_Ingest_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
