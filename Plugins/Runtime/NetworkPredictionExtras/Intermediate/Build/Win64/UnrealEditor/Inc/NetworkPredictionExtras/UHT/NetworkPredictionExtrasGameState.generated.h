// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionExtrasGameState.h"

#ifdef NETWORKPREDICTIONEXTRAS_NetworkPredictionExtrasGameState_generated_h
#error "NetworkPredictionExtrasGameState.generated.h already included, missing '#pragma once' in NetworkPredictionExtrasGameState.h"
#endif
#define NETWORKPREDICTIONEXTRAS_NetworkPredictionExtrasGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANetworkPredictionExtrasGameState ****************************************
struct Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameState_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkPredictionExtrasGameState(); \
	friend struct ::Z_Construct_UClass_ANetworkPredictionExtrasGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_ANetworkPredictionExtrasGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ANetworkPredictionExtrasGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_ANetworkPredictionExtrasGameState_NoRegister) \
	DECLARE_SERIALIZER(ANetworkPredictionExtrasGameState)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANetworkPredictionExtrasGameState(ANetworkPredictionExtrasGameState&&) = delete; \
	ANetworkPredictionExtrasGameState(const ANetworkPredictionExtrasGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkPredictionExtrasGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkPredictionExtrasGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkPredictionExtrasGameState) \
	NO_API virtual ~ANetworkPredictionExtrasGameState();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANetworkPredictionExtrasGameState;

// ********** End Class ANetworkPredictionExtrasGameState ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
