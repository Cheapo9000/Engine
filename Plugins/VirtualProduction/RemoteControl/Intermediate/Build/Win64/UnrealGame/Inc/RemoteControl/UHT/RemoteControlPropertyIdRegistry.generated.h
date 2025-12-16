// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlPropertyIdRegistry.h"

#ifdef REMOTECONTROL_RemoteControlPropertyIdRegistry_generated_h
#error "RemoteControlPropertyIdRegistry.generated.h already included, missing '#pragma once' in RemoteControlPropertyIdRegistry.h"
#endif
#define REMOTECONTROL_RemoteControlPropertyIdRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRCPropertyIdWrapper **********************************************
struct Z_Construct_UScriptStruct_FRCPropertyIdWrapper_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPropertyIdRegistry_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRCPropertyIdWrapper_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRCPropertyIdWrapper;
// ********** End ScriptStruct FRCPropertyIdWrapper ************************************************

// ********** Begin Class URemoteControlPropertyIdRegistry *****************************************
struct Z_Construct_UClass_URemoteControlPropertyIdRegistry_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPropertyIdRegistry_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPropertyIdRegistry_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlPropertyIdRegistry(); \
	friend struct ::Z_Construct_UClass_URemoteControlPropertyIdRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URemoteControlPropertyIdRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlPropertyIdRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URemoteControlPropertyIdRegistry_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlPropertyIdRegistry)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPropertyIdRegistry_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlPropertyIdRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlPropertyIdRegistry(URemoteControlPropertyIdRegistry&&) = delete; \
	URemoteControlPropertyIdRegistry(const URemoteControlPropertyIdRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlPropertyIdRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlPropertyIdRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlPropertyIdRegistry) \
	NO_API virtual ~URemoteControlPropertyIdRegistry();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPropertyIdRegistry_h_111_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPropertyIdRegistry_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPropertyIdRegistry_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPropertyIdRegistry_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlPropertyIdRegistry;

// ********** End Class URemoteControlPropertyIdRegistry *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlPropertyIdRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
