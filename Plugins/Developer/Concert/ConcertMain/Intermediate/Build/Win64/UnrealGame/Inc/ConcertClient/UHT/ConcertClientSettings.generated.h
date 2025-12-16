// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertClientSettings.h"

#ifdef CONCERTCLIENT_ConcertClientSettings_generated_h
#error "ConcertClientSettings.generated.h already included, missing '#pragma once' in ConcertClientSettings.h"
#endif
#define CONCERTCLIENT_ConcertClientSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertClientSettings ********************************************
struct Z_Construct_UScriptStruct_FConcertClientSettings_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertClientSettings_Statics; \
	CONCERTCLIENT_API static class UScriptStruct* StaticStruct();


struct FConcertClientSettings;
// ********** End ScriptStruct FConcertClientSettings **********************************************

// ********** Begin ScriptStruct FConcertSourceControlSettings *************************************
struct Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics; \
	CONCERTCLIENT_API static class UScriptStruct* StaticStruct();


struct FConcertSourceControlSettings;
// ********** End ScriptStruct FConcertSourceControlSettings ***************************************

// ********** Begin Class UConcertClientConfig *****************************************************
struct Z_Construct_UClass_UConcertClientConfig_Statics;
CONCERTCLIENT_API UClass* Z_Construct_UClass_UConcertClientConfig_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertClientConfig(); \
	friend struct ::Z_Construct_UClass_UConcertClientConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTCLIENT_API UClass* ::Z_Construct_UClass_UConcertClientConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UConcertClientConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertClient"), Z_Construct_UClass_UConcertClientConfig_NoRegister) \
	DECLARE_SERIALIZER(UConcertClientConfig)


#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_128_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConcertClientConfig(UConcertClientConfig&&) = delete; \
	UConcertClientConfig(const UConcertClientConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONCERTCLIENT_API, UConcertClientConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertClientConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConcertClientConfig) \
	CONCERTCLIENT_API virtual ~UConcertClientConfig();


#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_125_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_128_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConcertClientConfig;

// ********** End Class UConcertClientConfig *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h

// ********** Begin Enum EConcertSourceValidationMode **********************************************
#define FOREACH_ENUM_ECONCERTSOURCEVALIDATIONMODE(op) \
	op(EConcertSourceValidationMode::Hard) \
	op(EConcertSourceValidationMode::Soft) \
	op(EConcertSourceValidationMode::SoftAutoProceed) 

enum class EConcertSourceValidationMode : uint8;
template<> struct TIsUEnumClass<EConcertSourceValidationMode> { enum { Value = true }; };
template<> CONCERTCLIENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertSourceValidationMode>();
// ********** End Enum EConcertSourceValidationMode ************************************************

// ********** Begin Enum EConcertServerType ********************************************************
#define FOREACH_ENUM_ECONCERTSERVERTYPE(op) \
	op(EConcertServerType::Console) \
	op(EConcertServerType::Slate) 

enum class EConcertServerType;
template<> struct TIsUEnumClass<EConcertServerType> { enum { Value = true }; };
template<> CONCERTCLIENT_NON_ATTRIBUTED_API UEnum* StaticEnum<EConcertServerType>();
// ********** End Enum EConcertServerType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
