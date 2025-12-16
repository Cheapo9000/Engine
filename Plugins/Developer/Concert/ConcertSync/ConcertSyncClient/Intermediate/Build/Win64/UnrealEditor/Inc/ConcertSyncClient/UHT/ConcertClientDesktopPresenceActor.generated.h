// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertClientDesktopPresenceActor.h"

#ifdef CONCERTSYNCCLIENT_ConcertClientDesktopPresenceActor_generated_h
#error "ConcertClientDesktopPresenceActor.generated.h already included, missing '#pragma once' in ConcertClientDesktopPresenceActor.h"
#endif
#define CONCERTSYNCCLIENT_ConcertClientDesktopPresenceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AConcertClientDesktopPresenceActor ***************************************
struct Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics;
CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientDesktopPresenceActor_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAConcertClientDesktopPresenceActor(); \
	friend struct ::Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTSYNCCLIENT_API UClass* ::Z_Construct_UClass_AConcertClientDesktopPresenceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AConcertClientDesktopPresenceActor, AConcertClientPresenceActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertSyncClient"), Z_Construct_UClass_AConcertClientDesktopPresenceActor_NoRegister) \
	DECLARE_SERIALIZER(AConcertClientDesktopPresenceActor)


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConcertClientDesktopPresenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConcertClientDesktopPresenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConcertClientDesktopPresenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConcertClientDesktopPresenceActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AConcertClientDesktopPresenceActor(AConcertClientDesktopPresenceActor&&) = delete; \
	AConcertClientDesktopPresenceActor(const AConcertClientDesktopPresenceActor&) = delete; \
	NO_API virtual ~AConcertClientDesktopPresenceActor();


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_19_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_22_INCLASS \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AConcertClientDesktopPresenceActor;

// ********** End Class AConcertClientDesktopPresenceActor *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
