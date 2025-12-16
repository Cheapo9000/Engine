// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphSubsystem.h"

#ifdef ZONEGRAPH_ZoneGraphSubsystem_generated_h
#error "ZoneGraphSubsystem.generated.h already included, missing '#pragma once' in ZoneGraphSubsystem.h"
#endif
#define ZONEGRAPH_ZoneGraphSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRegisteredZoneGraphData ******************************************
struct Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics;
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics; \
	ZONEGRAPH_API static class UScriptStruct* StaticStruct();


struct FRegisteredZoneGraphData;
// ********** End ScriptStruct FRegisteredZoneGraphData ********************************************

// ********** Begin Class UZoneGraphSubsystem ******************************************************
struct Z_Construct_UClass_UZoneGraphSubsystem_Statics;
ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphSubsystem(); \
	friend struct ::Z_Construct_UClass_UZoneGraphSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ZONEGRAPH_API UClass* ::Z_Construct_UClass_UZoneGraphSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UZoneGraphSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ZoneGraph"), Z_Construct_UClass_UZoneGraphSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UZoneGraphSubsystem)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZoneGraphSubsystem(UZoneGraphSubsystem&&) = delete; \
	UZoneGraphSubsystem(const UZoneGraphSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ZONEGRAPH_API, UZoneGraphSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZoneGraphSubsystem) \
	ZONEGRAPH_API virtual ~UZoneGraphSubsystem();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_39_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZoneGraphSubsystem;

// ********** End Class UZoneGraphSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
