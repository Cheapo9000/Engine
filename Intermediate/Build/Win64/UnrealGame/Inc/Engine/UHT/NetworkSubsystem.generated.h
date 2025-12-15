// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Subsystems/NetworkSubsystem.h"

#ifdef ENGINE_NetworkSubsystem_generated_h
#error "NetworkSubsystem.generated.h already included, missing '#pragma once' in NetworkSubsystem.h"
#endif
#define ENGINE_NetworkSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetworkSubsystem ********************************************************
#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNetworkSubsystem, ENGINE_API)


struct Z_Construct_UClass_UNetworkSubsystem_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkSubsystem_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkSubsystem(); \
	friend struct ::Z_Construct_UClass_UNetworkSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UNetworkSubsystem) \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetworkSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkSubsystem(UNetworkSubsystem&&) = delete; \
	UNetworkSubsystem(const UNetworkSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkSubsystem) \
	ENGINE_API virtual ~UNetworkSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkSubsystem;

// ********** End Class UNetworkSubsystem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
