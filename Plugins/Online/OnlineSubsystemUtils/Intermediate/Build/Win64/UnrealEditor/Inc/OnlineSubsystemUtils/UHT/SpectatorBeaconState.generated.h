// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpectatorBeaconState.h"

#ifdef ONLINESUBSYSTEMUTILS_SpectatorBeaconState_generated_h
#error "SpectatorBeaconState.generated.h already included, missing '#pragma once' in SpectatorBeaconState.h"
#endif
#define ONLINESUBSYSTEMUTILS_SpectatorBeaconState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSpectatorReservation *********************************************
struct Z_Construct_UScriptStruct_FSpectatorReservation_Statics;
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_165_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpectatorReservation_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


struct FSpectatorReservation;
// ********** End ScriptStruct FSpectatorReservation ***********************************************

// ********** Begin Class USpectatorBeaconState ****************************************************
struct Z_Construct_UClass_USpectatorBeaconState_Statics;
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_USpectatorBeaconState_NoRegister();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_192_INCLASS \
private: \
	static void StaticRegisterNativesUSpectatorBeaconState(); \
	friend struct ::Z_Construct_UClass_USpectatorBeaconState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ONLINESUBSYSTEMUTILS_API UClass* ::Z_Construct_UClass_USpectatorBeaconState_NoRegister(); \
public: \
	DECLARE_CLASS2(USpectatorBeaconState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), Z_Construct_UClass_USpectatorBeaconState_NoRegister) \
	DECLARE_SERIALIZER(USpectatorBeaconState)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_192_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API USpectatorBeaconState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpectatorBeaconState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, USpectatorBeaconState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpectatorBeaconState); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpectatorBeaconState(USpectatorBeaconState&&) = delete; \
	USpectatorBeaconState(const USpectatorBeaconState&) = delete; \
	ONLINESUBSYSTEMUTILS_API virtual ~USpectatorBeaconState();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_189_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_192_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_192_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h_192_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpectatorBeaconState;

// ********** End Class USpectatorBeaconState ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconState_h

// ********** Begin Enum ESpectatorReservationResult ***********************************************
#define FOREACH_ENUM_ESPECTATORRESERVATIONRESULT(op) \
	op(ESpectatorReservationResult::NoResult) \
	op(ESpectatorReservationResult::RequestPending) \
	op(ESpectatorReservationResult::GeneralError) \
	op(ESpectatorReservationResult::SpectatorLimitReached) \
	op(ESpectatorReservationResult::IncorrectPlayerCount) \
	op(ESpectatorReservationResult::RequestTimedOut) \
	op(ESpectatorReservationResult::ReservationDuplicate) \
	op(ESpectatorReservationResult::ReservationNotFound) \
	op(ESpectatorReservationResult::ReservationAccepted) \
	op(ESpectatorReservationResult::ReservationDenied) \
	op(ESpectatorReservationResult::ReservationDenied_CrossPlayRestriction) \
	op(ESpectatorReservationResult::ReservationDenied_Banned) \
	op(ESpectatorReservationResult::ReservationRequestCanceled) \
	op(ESpectatorReservationResult::ReservationInvalid) \
	op(ESpectatorReservationResult::BadSessionId) \
	op(ESpectatorReservationResult::ReservationDenied_ContainsExistingPlayers) 

namespace ESpectatorReservationResult { enum Type : int; }
template<> ONLINESUBSYSTEMUTILS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpectatorReservationResult::Type>();
// ********** End Enum ESpectatorReservationResult *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
