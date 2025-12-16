// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/RemoteControlComponentsSubsystem.h"

#ifdef REMOTECONTROLCOMPONENTS_RemoteControlComponentsSubsystem_generated_h
#error "RemoteControlComponentsSubsystem.generated.h already included, missing '#pragma once' in RemoteControlComponentsSubsystem.h"
#endif
#define REMOTECONTROLCOMPONENTS_RemoteControlComponentsSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URemoteControlComponentsSubsystem ****************************************
struct Z_Construct_UClass_URemoteControlComponentsSubsystem_Statics;
REMOTECONTROLCOMPONENTS_API UClass* Z_Construct_UClass_URemoteControlComponentsSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_RemoteControlComponents_Source_RemoteControlComponents_Public_Subsystems_RemoteControlComponentsSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlComponentsSubsystem(); \
	friend struct ::Z_Construct_UClass_URemoteControlComponentsSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLCOMPONENTS_API UClass* ::Z_Construct_UClass_URemoteControlComponentsSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlComponentsSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlComponents"), Z_Construct_UClass_URemoteControlComponentsSubsystem_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlComponentsSubsystem)


#define FID_Engine_Plugins_Experimental_RemoteControlComponents_Source_RemoteControlComponents_Public_Subsystems_RemoteControlComponentsSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REMOTECONTROLCOMPONENTS_API URemoteControlComponentsSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlComponentsSubsystem(URemoteControlComponentsSubsystem&&) = delete; \
	URemoteControlComponentsSubsystem(const URemoteControlComponentsSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REMOTECONTROLCOMPONENTS_API, URemoteControlComponentsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlComponentsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteControlComponentsSubsystem) \
	REMOTECONTROLCOMPONENTS_API virtual ~URemoteControlComponentsSubsystem();


#define FID_Engine_Plugins_Experimental_RemoteControlComponents_Source_RemoteControlComponents_Public_Subsystems_RemoteControlComponentsSubsystem_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_RemoteControlComponents_Source_RemoteControlComponents_Public_Subsystems_RemoteControlComponentsSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RemoteControlComponents_Source_RemoteControlComponents_Public_Subsystems_RemoteControlComponentsSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RemoteControlComponents_Source_RemoteControlComponents_Public_Subsystems_RemoteControlComponentsSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlComponentsSubsystem;

// ********** End Class URemoteControlComponentsSubsystem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RemoteControlComponents_Source_RemoteControlComponents_Public_Subsystems_RemoteControlComponentsSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
