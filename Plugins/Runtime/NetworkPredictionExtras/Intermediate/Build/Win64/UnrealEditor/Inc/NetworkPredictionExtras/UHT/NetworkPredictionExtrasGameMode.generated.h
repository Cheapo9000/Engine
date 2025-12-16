// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionExtrasGameMode.h"

#ifdef NETWORKPREDICTIONEXTRAS_NetworkPredictionExtrasGameMode_generated_h
#error "NetworkPredictionExtrasGameMode.generated.h already included, missing '#pragma once' in NetworkPredictionExtrasGameMode.h"
#endif
#define NETWORKPREDICTIONEXTRAS_NetworkPredictionExtrasGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ANetworkPredictionExtrasGameMode *****************************************
struct Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics;
NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_ANetworkPredictionExtrasGameMode_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkPredictionExtrasGameMode(); \
	friend struct ::Z_Construct_UClass_ANetworkPredictionExtrasGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTIONEXTRAS_API UClass* ::Z_Construct_UClass_ANetworkPredictionExtrasGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ANetworkPredictionExtrasGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), Z_Construct_UClass_ANetworkPredictionExtrasGameMode_NoRegister) \
	DECLARE_SERIALIZER(ANetworkPredictionExtrasGameMode)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANetworkPredictionExtrasGameMode(ANetworkPredictionExtrasGameMode&&) = delete; \
	ANetworkPredictionExtrasGameMode(const ANetworkPredictionExtrasGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkPredictionExtrasGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkPredictionExtrasGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkPredictionExtrasGameMode) \
	NO_API virtual ~ANetworkPredictionExtrasGameMode();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_11_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANetworkPredictionExtrasGameMode;

// ********** End Class ANetworkPredictionExtrasGameMode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_NetworkPredictionExtrasGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
