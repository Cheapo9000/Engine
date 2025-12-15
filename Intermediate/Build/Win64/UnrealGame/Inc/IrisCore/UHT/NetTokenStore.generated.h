// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/NetTokenStore.h"

#ifdef IRISCORE_NetTokenStore_generated_h
#error "NetTokenStore.generated.h already included, missing '#pragma once' in NetTokenStore.h"
#endif
#define IRISCORE_NetTokenStore_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetTokenStoreTypeIdPair ******************************************
struct Z_Construct_UScriptStruct_FNetTokenStoreTypeIdPair_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetTokenStoreTypeIdPair_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FNetTokenStoreTypeIdPair;
// ********** End ScriptStruct FNetTokenStoreTypeIdPair ********************************************

// ********** Begin Class UNetTokenTypeIdConfig ****************************************************
struct Z_Construct_UClass_UNetTokenTypeIdConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetTokenTypeIdConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetTokenTypeIdConfig(); \
	friend struct ::Z_Construct_UClass_UNetTokenTypeIdConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetTokenTypeIdConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetTokenTypeIdConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetTokenTypeIdConfig_NoRegister) \
	DECLARE_SERIALIZER(UNetTokenTypeIdConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetTokenTypeIdConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetTokenTypeIdConfig(UNetTokenTypeIdConfig&&) = delete; \
	UNetTokenTypeIdConfig(const UNetTokenTypeIdConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetTokenTypeIdConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetTokenTypeIdConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetTokenTypeIdConfig) \
	IRISCORE_API virtual ~UNetTokenTypeIdConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h_72_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetTokenTypeIdConfig;

// ********** End Class UNetTokenTypeIdConfig ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_NetTokenStore_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
