// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassReplicationSubsystem.h"

#ifdef MASSREPLICATION_MassReplicationSubsystem_generated_h
#error "MassReplicationSubsystem.generated.h already included, missing '#pragma once' in MassReplicationSubsystem.h"
#endif
#define MASSREPLICATION_MassReplicationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassClientBubbleInfoData *****************************************
struct Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics;
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassClientBubbleInfoData_Statics; \
	MASSREPLICATION_API static class UScriptStruct* StaticStruct();


struct FMassClientBubbleInfoData;
// ********** End ScriptStruct FMassClientBubbleInfoData *******************************************

// ********** Begin Class UMassReplicationSubsystem ************************************************
struct Z_Construct_UClass_UMassReplicationSubsystem_Statics;
MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationSubsystem_NoRegister();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassReplicationSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassReplicationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSREPLICATION_API UClass* ::Z_Construct_UClass_UMassReplicationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassReplicationSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassReplication"), Z_Construct_UClass_UMassReplicationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassReplicationSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_98_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassReplicationSubsystem(UMassReplicationSubsystem&&) = delete; \
	UMassReplicationSubsystem(const UMassReplicationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MASSREPLICATION_API, UMassReplicationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassReplicationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassReplicationSubsystem) \
	MASSREPLICATION_API virtual ~UMassReplicationSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_95_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassReplicationSubsystem;

// ********** End Class UMassReplicationSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassReplicationSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
