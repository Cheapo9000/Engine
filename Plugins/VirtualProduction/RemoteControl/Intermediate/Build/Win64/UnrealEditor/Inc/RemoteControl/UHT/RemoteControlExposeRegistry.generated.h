// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlExposeRegistry.h"

#ifdef REMOTECONTROL_RemoteControlExposeRegistry_generated_h
#error "RemoteControlExposeRegistry.generated.h already included, missing '#pragma once' in RemoteControlExposeRegistry.h"
#endif
#define REMOTECONTROL_RemoteControlExposeRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRCEntityWrapper **************************************************
struct Z_Construct_UScriptStruct_FRCEntityWrapper_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCEntityWrapper_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRCEntityWrapper;
// ********** End ScriptStruct FRCEntityWrapper ****************************************************

// ********** Begin Class URemoteControlExposeRegistry *********************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_65_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URemoteControlExposeRegistry, NO_API)


struct Z_Construct_UClass_URemoteControlExposeRegistry_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlExposeRegistry_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlExposeRegistry(); \
	friend struct ::Z_Construct_UClass_URemoteControlExposeRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URemoteControlExposeRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlExposeRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URemoteControlExposeRegistry_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlExposeRegistry) \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_65_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlExposeRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlExposeRegistry(URemoteControlExposeRegistry&&) = delete; \
	URemoteControlExposeRegistry(const URemoteControlExposeRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlExposeRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlExposeRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlExposeRegistry) \
	NO_API virtual ~URemoteControlExposeRegistry();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_61_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h_65_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlExposeRegistry;

// ********** End Class URemoteControlExposeRegistry ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_RemoteControlExposeRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
