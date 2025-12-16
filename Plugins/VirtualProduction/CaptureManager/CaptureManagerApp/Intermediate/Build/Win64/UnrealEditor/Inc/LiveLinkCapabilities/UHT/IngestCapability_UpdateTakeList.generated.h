// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ingest/IngestCapability_UpdateTakeList.h"

#ifdef LIVELINKCAPABILITIES_IngestCapability_UpdateTakeList_generated_h
#error "IngestCapability_UpdateTakeList.generated.h already included, missing '#pragma once' in IngestCapability_UpdateTakeList.h"
#endif
#define LIVELINKCAPABILITIES_IngestCapability_UpdateTakeList_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FUpdateTakeListCallback ***********************************************
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_UpdateTakeList_h_14_DELEGATE \
LIVELINKCAPABILITIES_API void FUpdateTakeListCallback_DelegateWrapper(const FScriptDelegate& UpdateTakeListCallback, const TArray<int32>& TakeIdentifiers);


// ********** End Delegate FUpdateTakeListCallback *************************************************

// ********** Begin Class UIngestCapability_UpdateTakeListCallback *********************************
struct Z_Construct_UClass_UIngestCapability_UpdateTakeListCallback_Statics;
LIVELINKCAPABILITIES_API UClass* Z_Construct_UClass_UIngestCapability_UpdateTakeListCallback_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_UpdateTakeList_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIngestCapability_UpdateTakeListCallback(); \
	friend struct ::Z_Construct_UClass_UIngestCapability_UpdateTakeListCallback_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKCAPABILITIES_API UClass* ::Z_Construct_UClass_UIngestCapability_UpdateTakeListCallback_NoRegister(); \
public: \
	DECLARE_CLASS2(UIngestCapability_UpdateTakeListCallback, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkCapabilities"), Z_Construct_UClass_UIngestCapability_UpdateTakeListCallback_NoRegister) \
	DECLARE_SERIALIZER(UIngestCapability_UpdateTakeListCallback)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_UpdateTakeList_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIngestCapability_UpdateTakeListCallback(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIngestCapability_UpdateTakeListCallback(UIngestCapability_UpdateTakeListCallback&&) = delete; \
	UIngestCapability_UpdateTakeListCallback(const UIngestCapability_UpdateTakeListCallback&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIngestCapability_UpdateTakeListCallback); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIngestCapability_UpdateTakeListCallback); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIngestCapability_UpdateTakeListCallback) \
	NO_API virtual ~UIngestCapability_UpdateTakeListCallback();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_UpdateTakeList_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_UpdateTakeList_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_UpdateTakeList_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_UpdateTakeList_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIngestCapability_UpdateTakeListCallback;

// ********** End Class UIngestCapability_UpdateTakeListCallback ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_LiveLinkCapabilities_Public_Ingest_IngestCapability_UpdateTakeList_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
