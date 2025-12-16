// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlPresetActor.h"

#ifdef REMOTECONTROL_RemoteControlPresetActor_generated_h
#error "RemoteControlPresetActor.generated.h already included, missing '#pragma once' in RemoteControlPresetActor.h"
#endif
#define REMOTECONTROL_RemoteControlPresetActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARemoteControlPresetActor ************************************************
struct Z_Construct_UClass_ARemoteControlPresetActor_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_ARemoteControlPresetActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARemoteControlPresetActor(); \
	friend struct ::Z_Construct_UClass_ARemoteControlPresetActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_ARemoteControlPresetActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ARemoteControlPresetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_ARemoteControlPresetActor_NoRegister) \
	DECLARE_SERIALIZER(ARemoteControlPresetActor)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARemoteControlPresetActor(ARemoteControlPresetActor&&) = delete; \
	ARemoteControlPresetActor(const ARemoteControlPresetActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARemoteControlPresetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARemoteControlPresetActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARemoteControlPresetActor) \
	NO_API virtual ~ARemoteControlPresetActor();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARemoteControlPresetActor;

// ********** End Class ARemoteControlPresetActor **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPresetActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
