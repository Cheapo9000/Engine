// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreaming2Delegates.h"

#ifdef PIXELSTREAMING2_PixelStreaming2Delegates_generated_h
#error "PixelStreaming2Delegates.generated.h already included, missing '#pragma once' in PixelStreaming2Delegates.h"
#endif
#define PIXELSTREAMING2_PixelStreaming2Delegates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FConnectedToSignallingServer ******************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_24_DELEGATE \
static PIXELSTREAMING2_API void FConnectedToSignallingServer_DelegateWrapper(const FMulticastScriptDelegate& ConnectedToSignallingServer, const FString& StreamerId);


// ********** End Delegate FConnectedToSignallingServer ********************************************

// ********** Begin Delegate FDisconnectedFromSignallingServer *************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_37_DELEGATE \
static PIXELSTREAMING2_API void FDisconnectedFromSignallingServer_DelegateWrapper(const FMulticastScriptDelegate& DisconnectedFromSignallingServer, const FString& StreamerId);


// ********** End Delegate FDisconnectedFromSignallingServer ***************************************

// ********** Begin Delegate FNewConnection ********************************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_50_DELEGATE \
static PIXELSTREAMING2_API void FNewConnection_DelegateWrapper(const FMulticastScriptDelegate& NewConnection, const FString& StreamerId, const FString& PlayerId);


// ********** End Delegate FNewConnection **********************************************************

// ********** Begin Delegate FClosedConnection *****************************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_63_DELEGATE \
static PIXELSTREAMING2_API void FClosedConnection_DelegateWrapper(const FMulticastScriptDelegate& ClosedConnection, const FString& StreamerId, const FString& PlayerId);


// ********** End Delegate FClosedConnection *******************************************************

// ********** Begin Delegate FAllConnectionsClosed *************************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_76_DELEGATE \
static PIXELSTREAMING2_API void FAllConnectionsClosed_DelegateWrapper(const FMulticastScriptDelegate& AllConnectionsClosed, const FString& StreamerId);


// ********** End Delegate FAllConnectionsClosed ***************************************************

// ********** Begin Delegate FDataTrackOpen ********************************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_89_DELEGATE \
static PIXELSTREAMING2_API void FDataTrackOpen_DelegateWrapper(const FMulticastScriptDelegate& DataTrackOpen, const FString& StreamerId, const FString& PlayerId);


// ********** End Delegate FDataTrackOpen **********************************************************

// ********** Begin Delegate FDataTrackClosed ******************************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_102_DELEGATE \
static PIXELSTREAMING2_API void FDataTrackClosed_DelegateWrapper(const FMulticastScriptDelegate& DataTrackClosed, const FString& StreamerId, const FString& PlayerId);


// ********** End Delegate FDataTrackClosed ********************************************************

// ********** Begin Delegate FStatsChanged *********************************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_139_DELEGATE \
static PIXELSTREAMING2_API void FStatsChanged_DelegateWrapper(const FMulticastScriptDelegate& StatsChanged, const FString& PlayerId, FName StatName, float StatValue);


// ********** End Delegate FStatsChanged ***********************************************************

// ********** Begin Delegate FFallbackToSoftwareEncoding *******************************************
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_152_DELEGATE \
static PIXELSTREAMING2_API void FFallbackToSoftwareEncoding_DelegateWrapper(const FMulticastScriptDelegate& FallbackToSoftwareEncoding);


// ********** End Delegate FFallbackToSoftwareEncoding *********************************************

// ********** Begin Class UPixelStreaming2Delegates ************************************************
struct Z_Construct_UClass_UPixelStreaming2Delegates_Statics;
PIXELSTREAMING2_API UClass* Z_Construct_UClass_UPixelStreaming2Delegates_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreaming2Delegates(); \
	friend struct ::Z_Construct_UClass_UPixelStreaming2Delegates_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING2_API UClass* ::Z_Construct_UClass_UPixelStreaming2Delegates_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreaming2Delegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming2"), Z_Construct_UClass_UPixelStreaming2Delegates_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreaming2Delegates)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PIXELSTREAMING2_API UPixelStreaming2Delegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreaming2Delegates(UPixelStreaming2Delegates&&) = delete; \
	UPixelStreaming2Delegates(const UPixelStreaming2Delegates&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PIXELSTREAMING2_API, UPixelStreaming2Delegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreaming2Delegates); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreaming2Delegates)


#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_17_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreaming2Delegates;

// ********** End Class UPixelStreaming2Delegates **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming2_Source_PixelStreaming2_Public_PixelStreaming2Delegates_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
