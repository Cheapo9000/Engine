// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NetDriver.h"

#ifdef ENGINE_NetDriver_generated_h
#error "NetDriver.generated.h already included, missing '#pragma once' in NetDriver.h"
#endif
#define ENGINE_NetDriver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPacketSimulationSettings *****************************************
struct Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_456_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPacketSimulationSettings;
// ********** End ScriptStruct FPacketSimulationSettings *******************************************

// ********** Begin ScriptStruct FNetDriverReplicationSystemConfig *********************************
struct Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_658_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetDriverReplicationSystemConfig;
// ********** End ScriptStruct FNetDriverReplicationSystemConfig ***********************************

// ********** Begin ScriptStruct FChannelDefinition ************************************************
struct Z_Construct_UScriptStruct_FChannelDefinition_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_728_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChannelDefinition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FChannelDefinition;
// ********** End ScriptStruct FChannelDefinition **************************************************

// ********** Begin Class UNetDriver ***************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_800_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNetDriver, ENGINE_API)


struct Z_Construct_UClass_UNetDriver_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_800_INCLASS \
private: \
	static void StaticRegisterNativesUNetDriver(); \
	friend struct ::Z_Construct_UClass_UNetDriver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetDriver_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetDriver_NoRegister) \
	DECLARE_SERIALIZER(UNetDriver) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_800_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_800_STANDARD_CONSTRUCTORS \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetDriver) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetDriver); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetDriver(UNetDriver&&) = delete; \
	UNetDriver(const UNetDriver&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_797_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_800_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_800_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_800_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetDriver;

// ********** End Class UNetDriver *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
