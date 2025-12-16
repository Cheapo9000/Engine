// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertClientVRPresenceActor.h"

#ifdef CONCERTSYNCCLIENT_ConcertClientVRPresenceActor_generated_h
#error "ConcertClientVRPresenceActor.generated.h already included, missing '#pragma once' in ConcertClientVRPresenceActor.h"
#endif
#define CONCERTSYNCCLIENT_ConcertClientVRPresenceActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AConcertClientVRPresenceActor ********************************************
struct Z_Construct_UClass_AConcertClientVRPresenceActor_Statics;
CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientVRPresenceActor_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAConcertClientVRPresenceActor(); \
	friend struct ::Z_Construct_UClass_AConcertClientVRPresenceActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTSYNCCLIENT_API UClass* ::Z_Construct_UClass_AConcertClientVRPresenceActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AConcertClientVRPresenceActor, AConcertClientPresenceActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertSyncClient"), Z_Construct_UClass_AConcertClientVRPresenceActor_NoRegister) \
	DECLARE_SERIALIZER(AConcertClientVRPresenceActor)


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConcertClientVRPresenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConcertClientVRPresenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConcertClientVRPresenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConcertClientVRPresenceActor); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AConcertClientVRPresenceActor(AConcertClientVRPresenceActor&&) = delete; \
	AConcertClientVRPresenceActor(const AConcertClientVRPresenceActor&) = delete; \
	NO_API virtual ~AConcertClientVRPresenceActor();


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_18_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_INCLASS \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AConcertClientVRPresenceActor;

// ********** End Class AConcertClientVRPresenceActor **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
