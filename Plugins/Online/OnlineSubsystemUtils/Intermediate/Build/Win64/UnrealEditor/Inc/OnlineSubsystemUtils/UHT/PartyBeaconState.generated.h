// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PartyBeaconState.h"

#ifdef ONLINESUBSYSTEMUTILS_PartyBeaconState_generated_h
#error "PartyBeaconState.generated.h already included, missing '#pragma once' in PartyBeaconState.h"
#endif
#define ONLINESUBSYSTEMUTILS_PartyBeaconState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPartyReservation *************************************************
struct Z_Construct_UScriptStruct_FPartyReservation_Statics;
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_179_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPartyReservation_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


struct FPartyReservation;
// ********** End ScriptStruct FPartyReservation ***************************************************

// ********** Begin ScriptStruct FPartyBeaconCrossplayPlatformMapping ******************************
struct Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics;
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_224_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPartyBeaconCrossplayPlatformMapping_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


struct FPartyBeaconCrossplayPlatformMapping;
// ********** End ScriptStruct FPartyBeaconCrossplayPlatformMapping ********************************

// ********** Begin Class UPartyBeaconState ********************************************************
struct Z_Construct_UClass_UPartyBeaconState_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UPartyBeaconState_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_242_INCLASS \
private: \
	static void StaticRegisterNativesUPartyBeaconState(); \
	friend struct ::Z_Construct_UClass_UPartyBeaconState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_UPartyBeaconState_NoRegister(); \
public: \
	DECLARE_CLASS2(UPartyBeaconState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_UPartyBeaconState_NoRegister) \
	DECLARE_SERIALIZER(UPartyBeaconState)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_242_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UPartyBeaconState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPartyBeaconState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UPartyBeaconState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartyBeaconState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPartyBeaconState(UPartyBeaconState&&) = delete; \
	UPartyBeaconState(const UPartyBeaconState&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~UPartyBeaconState();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_239_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_242_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_242_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_242_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPartyBeaconState;

// ********** End Class UPartyBeaconState **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h

// ********** Begin Enum EPartyReservationResult ***************************************************
#define FOREACH_ENUM_EPARTYRESERVATIONRESULT(op) \
	op(EPartyReservationResult::NoResult) \
	op(EPartyReservationResult::RequestPending) \
	op(EPartyReservationResult::GeneralError) \
	op(EPartyReservationResult::PartyLimitReached) \
	op(EPartyReservationResult::IncorrectPlayerCount) \
	op(EPartyReservationResult::RequestTimedOut) \
	op(EPartyReservationResult::ReservationDuplicate) \
	op(EPartyReservationResult::ReservationNotFound) \
	op(EPartyReservationResult::ReservationAccepted) \
	op(EPartyReservationResult::ReservationDenied) \
	op(EPartyReservationResult::ReservationDenied_CrossPlayRestriction) \
	op(EPartyReservationResult::ReservationDenied_Banned) \
	op(EPartyReservationResult::ReservationRequestCanceled) \
	op(EPartyReservationResult::ReservationInvalid) \
	op(EPartyReservationResult::BadSessionId) \
	op(EPartyReservationResult::ReservationDenied_ContainsExistingPlayers) \
	op(EPartyReservationResult::ReservationDenied_ValidationFailed) 

namespace EPartyReservationResult { enum Type : int; }
template<> ONLINESUBSYSTEMUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<EPartyReservationResult::Type>();
// ********** End Enum EPartyReservationResult *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
