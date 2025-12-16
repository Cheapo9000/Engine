// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamSocketsNetDriver.h"

#ifdef STEAMSOCKETS_SteamSocketsNetDriver_generated_h
#error "SteamSocketsNetDriver.generated.h already included, missing '#pragma once' in SteamSocketsNetDriver.h"
#endif
#define STEAMSOCKETS_SteamSocketsNetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USteamSocketsNetDriver ***************************************************
struct Z_Construct_UClass_USteamSocketsNetDriver_Statics;
STEAMSOCKETS_API UClass* Z_Construct_UClass_USteamSocketsNetDriver_NoRegister();

#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamSocketsNetDriver(); \
	friend struct ::Z_Construct_UClass_USteamSocketsNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STEAMSOCKETS_API UClass* ::Z_Construct_UClass_USteamSocketsNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(USteamSocketsNetDriver, UNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSockets"), Z_Construct_UClass_USteamSocketsNetDriver_NoRegister) \
	DECLARE_SERIALIZER(USteamSocketsNetDriver)


#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USteamSocketsNetDriver(USteamSocketsNetDriver&&) = delete; \
	USteamSocketsNetDriver(const USteamSocketsNetDriver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STEAMSOCKETS_API, USteamSocketsNetDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamSocketsNetDriver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamSocketsNetDriver) \
	STEAMSOCKETS_API virtual ~USteamSocketsNetDriver();


#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USteamSocketsNetDriver;

// ********** End Class USteamSocketsNetDriver *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
