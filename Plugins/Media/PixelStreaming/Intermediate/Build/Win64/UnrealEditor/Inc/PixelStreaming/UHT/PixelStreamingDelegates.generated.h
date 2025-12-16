// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PixelStreamingDelegates.h"

#ifdef PIXELSTREAMING_PixelStreamingDelegates_generated_h
#error "PixelStreamingDelegates.generated.h already included, missing '#pragma once' in PixelStreamingDelegates.h"
#endif
#define PIXELSTREAMING_PixelStreamingDelegates_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FConnectedToSignallingServer ******************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_26_DELEGATE \
static void FConnectedToSignallingServer_DelegateWrapper(const FMulticastScriptDelegate& ConnectedToSignallingServer);


// ********** End Delegate FConnectedToSignallingServer ********************************************

// ********** Begin Delegate FDisconnectedFromSignallingServer *************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_37_DELEGATE \
static void FDisconnectedFromSignallingServer_DelegateWrapper(const FMulticastScriptDelegate& DisconnectedFromSignallingServer);


// ********** End Delegate FDisconnectedFromSignallingServer ***************************************

// ********** Begin Delegate FNewConnection ********************************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_48_DELEGATE \
static void FNewConnection_DelegateWrapper(const FMulticastScriptDelegate& NewConnection, const FString& StreamerId, const FString& PlayerId, bool QualityController);


// ********** End Delegate FNewConnection **********************************************************

// ********** Begin Delegate FClosedConnection *****************************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_59_DELEGATE \
static void FClosedConnection_DelegateWrapper(const FMulticastScriptDelegate& ClosedConnection, const FString& StreamerId, const FString& PlayerId, bool WasQualityController);


// ********** End Delegate FClosedConnection *******************************************************

// ********** Begin Delegate FAllConnectionsClosed *************************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_71_DELEGATE \
static void FAllConnectionsClosed_DelegateWrapper(const FMulticastScriptDelegate& AllConnectionsClosed, const FString& StreamerId);


// ********** End Delegate FAllConnectionsClosed ***************************************************

// ********** Begin Delegate FStatsChanged *********************************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_103_DELEGATE \
static void FStatsChanged_DelegateWrapper(const FMulticastScriptDelegate& StatsChanged, const FString& PlayerId, FName StatName, float StatValue);


// ********** End Delegate FStatsChanged ***********************************************************

// ********** Begin Delegate FFallbackToSoftwareEncodering *****************************************
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_114_DELEGATE \
static void FFallbackToSoftwareEncodering_DelegateWrapper(const FMulticastScriptDelegate& FallbackToSoftwareEncodering);


// ********** End Delegate FFallbackToSoftwareEncodering *******************************************

// ********** Begin Class UPixelStreamingDelegates *************************************************
struct Z_Construct_UClass_UPixelStreamingDelegates_Statics;
PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingDelegates_NoRegister();

#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPixelStreamingDelegates(); \
	friend struct ::Z_Construct_UClass_UPixelStreamingDelegates_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PIXELSTREAMING_API UClass* ::Z_Construct_UClass_UPixelStreamingDelegates_NoRegister(); \
public: \
	DECLARE_CLASS2(UPixelStreamingDelegates, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PixelStreaming"), Z_Construct_UClass_UPixelStreamingDelegates_NoRegister) \
	DECLARE_SERIALIZER(UPixelStreamingDelegates)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPixelStreamingDelegates(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPixelStreamingDelegates(UPixelStreamingDelegates&&) = delete; \
	UPixelStreamingDelegates(const UPixelStreamingDelegates&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPixelStreamingDelegates); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPixelStreamingDelegates); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPixelStreamingDelegates)


#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_16_PROLOG
#define FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPixelStreamingDelegates;

// ********** End Class UPixelStreamingDelegates ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingDelegates_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
