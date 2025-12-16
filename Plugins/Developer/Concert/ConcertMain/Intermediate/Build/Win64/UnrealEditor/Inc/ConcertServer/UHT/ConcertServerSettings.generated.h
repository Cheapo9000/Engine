// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertServerSettings.h"

#ifdef CONCERTSERVER_ConcertServerSettings_generated_h
#error "ConcertServerSettings.generated.h already included, missing '#pragma once' in ConcertServerSettings.h"
#endif
#define CONCERTSERVER_ConcertServerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertServerSettings ********************************************
struct Z_Construct_UScriptStruct_FConcertServerSettings_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertServerSettings_Statics; \
	CONCERTSERVER_API static class UScriptStruct* StaticStruct();


struct FConcertServerSettings;
// ********** End ScriptStruct FConcertServerSettings **********************************************

// ********** Begin Class UConcertServerConfig *****************************************************
struct Z_Construct_UClass_UConcertServerConfig_Statics;
CONCERTSERVER_API UClass* Z_Construct_UClass_UConcertServerConfig_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertServerConfig(); \
	friend struct ::Z_Construct_UClass_UConcertServerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTSERVER_API UClass* ::Z_Construct_UClass_UConcertServerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UConcertServerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertServer"), Z_Construct_UClass_UConcertServerConfig_NoRegister) \
	DECLARE_SERIALIZER(UConcertServerConfig)


#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConcertServerConfig(UConcertServerConfig&&) = delete; \
	UConcertServerConfig(const UConcertServerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONCERTSERVER_API, UConcertServerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertServerConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConcertServerConfig) \
	CONCERTSERVER_API virtual ~UConcertServerConfig();


#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_31_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConcertServerConfig;

// ********** End Class UConcertServerConfig *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
