// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertServerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSERVER_ConcertServerSettings_generated_h
#error "ConcertServerSettings.generated.h already included, missing '#pragma once' in ConcertServerSettings.h"
#endif
#define CONCERTSERVER_ConcertServerSettings_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertServerSettings_Statics; \
	CONCERTSERVER_API static class UScriptStruct* StaticStruct();


template<> CONCERTSERVER_API UScriptStruct* StaticStruct<struct FConcertServerSettings>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertServerConfig(); \
	friend struct Z_Construct_UClass_UConcertServerConfig_Statics; \
public: \
	DECLARE_CLASS(UConcertServerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertServer"), NO_API) \
	DECLARE_SERIALIZER(UConcertServerConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConcertServerConfig(UConcertServerConfig&&); \
	UConcertServerConfig(const UConcertServerConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConcertServerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertServerConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConcertServerConfig) \
	NO_API virtual ~UConcertServerConfig();


#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_29_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONCERTSERVER_API UClass* StaticClass<class UConcertServerConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
