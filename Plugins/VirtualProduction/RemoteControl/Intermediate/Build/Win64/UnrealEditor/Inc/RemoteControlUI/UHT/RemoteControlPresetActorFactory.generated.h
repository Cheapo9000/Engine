// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/RemoteControlPresetActorFactory.h"

#ifdef REMOTECONTROLUI_RemoteControlPresetActorFactory_generated_h
#error "RemoteControlPresetActorFactory.generated.h already included, missing '#pragma once' in RemoteControlPresetActorFactory.h"
#endif
#define REMOTECONTROLUI_RemoteControlPresetActorFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URemoteControlPresetActorFactory *****************************************
struct Z_Construct_UClass_URemoteControlPresetActorFactory_Statics;
REMOTECONTROLUI_API UClass* Z_Construct_UClass_URemoteControlPresetActorFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlPresetActorFactory(); \
	friend struct ::Z_Construct_UClass_URemoteControlPresetActorFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLUI_API UClass* ::Z_Construct_UClass_URemoteControlPresetActorFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlPresetActorFactory, UActorFactory, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteControlUI"), Z_Construct_UClass_URemoteControlPresetActorFactory_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlPresetActorFactory)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlPresetActorFactory(URemoteControlPresetActorFactory&&) = delete; \
	URemoteControlPresetActorFactory(const URemoteControlPresetActorFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlPresetActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlPresetActorFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteControlPresetActorFactory) \
	NO_API virtual ~URemoteControlPresetActorFactory();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlPresetActorFactory;

// ********** End Class URemoteControlPresetActorFactory *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetActorFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
