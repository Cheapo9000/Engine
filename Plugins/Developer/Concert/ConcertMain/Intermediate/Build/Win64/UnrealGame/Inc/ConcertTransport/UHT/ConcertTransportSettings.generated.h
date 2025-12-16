// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertTransportSettings.h"

#ifdef CONCERTTRANSPORT_ConcertTransportSettings_generated_h
#error "ConcertTransportSettings.generated.h already included, missing '#pragma once' in ConcertTransportSettings.h"
#endif
#define CONCERTTRANSPORT_ConcertTransportSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConcertEndpointSettings ******************************************
struct Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics;
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConcertEndpointSettings_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct();


struct FConcertEndpointSettings;
// ********** End ScriptStruct FConcertEndpointSettings ********************************************

// ********** Begin Class UConcertEndpointConfig ***************************************************
struct Z_Construct_UClass_UConcertEndpointConfig_Statics;
CONCERTTRANSPORT_API UClass* Z_Construct_UClass_UConcertEndpointConfig_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertEndpointConfig(); \
	friend struct ::Z_Construct_UClass_UConcertEndpointConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTTRANSPORT_API UClass* ::Z_Construct_UClass_UConcertEndpointConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UConcertEndpointConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertTransport"), Z_Construct_UClass_UConcertEndpointConfig_NoRegister) \
	DECLARE_SERIALIZER(UConcertEndpointConfig)


#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConcertEndpointConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConcertEndpointConfig(UConcertEndpointConfig&&) = delete; \
	UConcertEndpointConfig(const UConcertEndpointConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConcertEndpointConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertEndpointConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConcertEndpointConfig) \
	NO_API virtual ~UConcertEndpointConfig();


#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_34_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConcertEndpointConfig;

// ********** End Class UConcertEndpointConfig *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
