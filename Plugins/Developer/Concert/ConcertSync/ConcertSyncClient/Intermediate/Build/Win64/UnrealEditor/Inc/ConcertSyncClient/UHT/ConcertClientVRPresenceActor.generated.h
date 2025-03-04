// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertClientVRPresenceActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCLIENT_ConcertClientVRPresenceActor_generated_h
#error "ConcertClientVRPresenceActor.generated.h already included, missing '#pragma once' in ConcertClientVRPresenceActor.h"
#endif
#define CONCERTSYNCCLIENT_ConcertClientVRPresenceActor_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAConcertClientVRPresenceActor(); \
	friend struct Z_Construct_UClass_AConcertClientVRPresenceActor_Statics; \
public: \
	DECLARE_CLASS(AConcertClientVRPresenceActor, AConcertClientPresenceActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertSyncClient"), NO_API) \
	DECLARE_SERIALIZER(AConcertClientVRPresenceActor)


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConcertClientVRPresenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConcertClientVRPresenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConcertClientVRPresenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConcertClientVRPresenceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AConcertClientVRPresenceActor(AConcertClientVRPresenceActor&&); \
	AConcertClientVRPresenceActor(const AConcertClientVRPresenceActor&); \
public: \
	NO_API virtual ~AConcertClientVRPresenceActor();


#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_18_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_INCLASS \
	FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONCERTSYNCCLIENT_API UClass* StaticClass<class AConcertClientVRPresenceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
