// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionWorldManager.h"

#ifdef NETWORKPREDICTION_NetworkPredictionWorldManager_generated_h
#error "NetworkPredictionWorldManager.generated.h already included, missing '#pragma once' in NetworkPredictionWorldManager.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionWorldManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetworkPredictionWorldManager *******************************************
struct Z_Construct_UClass_UNetworkPredictionWorldManager_Statics;
NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionWorldManager_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPredictionWorldManager(); \
	friend struct ::Z_Construct_UClass_UNetworkPredictionWorldManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTION_API UClass* ::Z_Construct_UClass_UNetworkPredictionWorldManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkPredictionWorldManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), Z_Construct_UClass_UNetworkPredictionWorldManager_NoRegister) \
	DECLARE_SERIALIZER(UNetworkPredictionWorldManager)


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkPredictionWorldManager(UNetworkPredictionWorldManager&&) = delete; \
	UNetworkPredictionWorldManager(const UNetworkPredictionWorldManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKPREDICTION_API, UNetworkPredictionWorldManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPredictionWorldManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkPredictionWorldManager) \
	NETWORKPREDICTION_API virtual ~UNetworkPredictionWorldManager();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkPredictionWorldManager;

// ********** End Class UNetworkPredictionWorldManager *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionWorldManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
