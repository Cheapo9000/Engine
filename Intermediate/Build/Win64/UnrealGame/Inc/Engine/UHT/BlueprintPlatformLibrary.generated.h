// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/BlueprintPlatformLibrary.h"

#ifdef ENGINE_BlueprintPlatformLibrary_generated_h
#error "BlueprintPlatformLibrary.generated.h already included, missing '#pragma once' in BlueprintPlatformLibrary.h"
#endif
#define ENGINE_BlueprintPlatformLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;

// ********** Begin Delegate FPlatformDelegate *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_83_DELEGATE \
static ENGINE_API void FPlatformDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformDelegate);


// ********** End Delegate FPlatformDelegate *******************************************************

// ********** Begin Delegate FPlatformStartupArgumentsDelegate *************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_84_DELEGATE \
static ENGINE_API void FPlatformStartupArgumentsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformStartupArgumentsDelegate, TArray<FString> const& StartupArguments);


// ********** End Delegate FPlatformStartupArgumentsDelegate ***************************************

// ********** Begin Delegate FPlatformRegisteredForRemoteNotificationsDelegate *********************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_85_DELEGATE \
static ENGINE_API void FPlatformRegisteredForRemoteNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformRegisteredForRemoteNotificationsDelegate, TArray<uint8> const& inArray);


// ********** End Delegate FPlatformRegisteredForRemoteNotificationsDelegate ***********************

// ********** Begin Delegate FPlatformRegisteredForUserNotificationsDelegate ***********************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_86_DELEGATE \
static ENGINE_API void FPlatformRegisteredForUserNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformRegisteredForUserNotificationsDelegate, int32 inInt);


// ********** End Delegate FPlatformRegisteredForUserNotificationsDelegate *************************

// ********** Begin Delegate FPlatformFailedToRegisterForRemoteNotificationsDelegate ***************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_87_DELEGATE \
static ENGINE_API void FPlatformFailedToRegisterForRemoteNotificationsDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformFailedToRegisterForRemoteNotificationsDelegate, const FString& inString);


// ********** End Delegate FPlatformFailedToRegisterForRemoteNotificationsDelegate *****************

// ********** Begin Delegate FPlatformReceivedRemoteNotificationDelegate ***************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_88_DELEGATE \
static ENGINE_API void FPlatformReceivedRemoteNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformReceivedRemoteNotificationDelegate, const FString& inString, EApplicationState::Type inAppState);


// ********** End Delegate FPlatformReceivedRemoteNotificationDelegate *****************************

// ********** Begin Delegate FPlatformReceivedLocalNotificationDelegate ****************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_89_DELEGATE \
static ENGINE_API void FPlatformReceivedLocalNotificationDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformReceivedLocalNotificationDelegate, const FString& inString, int32 inInt, EApplicationState::Type inAppState);


// ********** End Delegate FPlatformReceivedLocalNotificationDelegate ******************************

// ********** Begin Delegate FPlatformScreenOrientationChangedDelegate *****************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_90_DELEGATE \
static ENGINE_API void FPlatformScreenOrientationChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformScreenOrientationChangedDelegate, EScreenOrientation::Type inScreenOrientation);


// ********** End Delegate FPlatformScreenOrientationChangedDelegate *******************************

// ********** Begin Class UPlatformGameInstance ****************************************************
struct Z_Construct_UClass_UPlatformGameInstance_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPlatformGameInstance_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformGameInstance(); \
	friend struct ::Z_Construct_UClass_UPlatformGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPlatformGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlatformGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPlatformGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UPlatformGameInstance)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlatformGameInstance(UPlatformGameInstance&&) = delete; \
	UPlatformGameInstance(const UPlatformGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformGameInstance) \
	ENGINE_API virtual ~UPlatformGameInstance();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_76_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlatformGameInstance;

// ********** End Class UPlatformGameInstance ******************************************************

// ********** Begin Class UBlueprintPlatformLibrary ************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetAllowedDeviceOrientation); \
	DECLARE_FUNCTION(execGetAllowedDeviceOrientation); \
	DECLARE_FUNCTION(execGetDeviceOrientation); \
	DECLARE_FUNCTION(execGetLaunchNotification); \
	DECLARE_FUNCTION(execCancelLocalNotificationById); \
	DECLARE_FUNCTION(execCancelLocalNotification); \
	DECLARE_FUNCTION(execScheduleLocalNotificationBadgeFromNow); \
	DECLARE_FUNCTION(execScheduleLocalNotificationBadgeAtTime); \
	DECLARE_FUNCTION(execScheduleLocalNotificationFromNow); \
	DECLARE_FUNCTION(execScheduleLocalNotificationAtTime); \
	DECLARE_FUNCTION(execClearAllLocalNotifications);


struct Z_Construct_UClass_UBlueprintPlatformLibrary_Statics;
ENGINE_API UClass* Z_Construct_UClass_UBlueprintPlatformLibrary_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintPlatformLibrary(); \
	friend struct ::Z_Construct_UClass_UBlueprintPlatformLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UBlueprintPlatformLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlueprintPlatformLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UBlueprintPlatformLibrary_NoRegister) \
	DECLARE_SERIALIZER(UBlueprintPlatformLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlueprintPlatformLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintPlatformLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlueprintPlatformLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintPlatformLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlueprintPlatformLibrary(UBlueprintPlatformLibrary&&) = delete; \
	UBlueprintPlatformLibrary(const UBlueprintPlatformLibrary&) = delete; \
	ENGINE_API virtual ~UBlueprintPlatformLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_177_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlueprintPlatformLibrary;

// ********** End Class UBlueprintPlatformLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintPlatformLibrary_h

// ********** Begin Enum EScreenOrientation ********************************************************
#define FOREACH_ENUM_ESCREENORIENTATION(op) \
	op(EScreenOrientation::Unknown) \
	op(EScreenOrientation::Portrait) \
	op(EScreenOrientation::PortraitUpsideDown) \
	op(EScreenOrientation::LandscapeLeft) \
	op(EScreenOrientation::LandscapeRight) \
	op(EScreenOrientation::FaceUp) \
	op(EScreenOrientation::FaceDown) \
	op(EScreenOrientation::PortraitSensor) \
	op(EScreenOrientation::LandscapeSensor) \
	op(EScreenOrientation::FullSensor) 

namespace EScreenOrientation { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EScreenOrientation::Type>();
// ********** End Enum EScreenOrientation **********************************************************

// ********** Begin Enum EApplicationState *********************************************************
#define FOREACH_ENUM_EAPPLICATIONSTATE(op) \
	op(EApplicationState::Unknown) \
	op(EApplicationState::Inactive) \
	op(EApplicationState::Background) \
	op(EApplicationState::Active) 

namespace EApplicationState { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EApplicationState::Type>();
// ********** End Enum EApplicationState ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
