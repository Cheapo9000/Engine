// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionReplicatedManager.h"

#ifdef NETWORKPREDICTION_NetworkPredictionReplicatedManager_generated_h
#error "NetworkPredictionReplicatedManager.generated.h already included, missing '#pragma once' in NetworkPredictionReplicatedManager.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionReplicatedManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSharedPackageMapItem *********************************************
struct Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics;
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics; \
	NETWORKPREDICTION_API static class UScriptStruct* StaticStruct();


struct FSharedPackageMapItem;
// ********** End ScriptStruct FSharedPackageMapItem ***********************************************

// ********** Begin ScriptStruct FSharedPackageMap *************************************************
struct Z_Construct_UScriptStruct_FSharedPackageMap_Statics;
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSharedPackageMap_Statics; \
	NETWORKPREDICTION_API static class UScriptStruct* StaticStruct();


struct FSharedPackageMap;
// ********** End ScriptStruct FSharedPackageMap ***************************************************

// ********** Begin Class ANetworkPredictionReplicatedManager **************************************
struct Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics;
NETWORKPREDICTION_API UClass* Z_Construct_UClass_ANetworkPredictionReplicatedManager_NoRegister();

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkPredictionReplicatedManager(); \
	friend struct ::Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NETWORKPREDICTION_API UClass* ::Z_Construct_UClass_ANetworkPredictionReplicatedManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ANetworkPredictionReplicatedManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), Z_Construct_UClass_ANetworkPredictionReplicatedManager_NoRegister) \
	DECLARE_SERIALIZER(ANetworkPredictionReplicatedManager) \
	NETWORKPREDICTION_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SharedPackageMap=NETFIELD_REP_START, \
		NETFIELD_REP_END=SharedPackageMap	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NETWORKPREDICTION_API)


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ANetworkPredictionReplicatedManager(ANetworkPredictionReplicatedManager&&) = delete; \
	ANetworkPredictionReplicatedManager(const ANetworkPredictionReplicatedManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NETWORKPREDICTION_API, ANetworkPredictionReplicatedManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkPredictionReplicatedManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkPredictionReplicatedManager) \
	NETWORKPREDICTION_API virtual ~ANetworkPredictionReplicatedManager();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_33_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ANetworkPredictionReplicatedManager;

// ********** End Class ANetworkPredictionReplicatedManager ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
