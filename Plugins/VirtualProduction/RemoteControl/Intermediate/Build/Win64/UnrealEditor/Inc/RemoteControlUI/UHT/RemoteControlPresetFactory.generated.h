// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/RemoteControlPresetFactory.h"

#ifdef REMOTECONTROLUI_RemoteControlPresetFactory_generated_h
#error "RemoteControlPresetFactory.generated.h already included, missing '#pragma once' in RemoteControlPresetFactory.h"
#endif
#define REMOTECONTROLUI_RemoteControlPresetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URemoteControlPresetFactory **********************************************
struct Z_Construct_UClass_URemoteControlPresetFactory_Statics;
REMOTECONTROLUI_API UClass* Z_Construct_UClass_URemoteControlPresetFactory_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlPresetFactory(); \
	friend struct ::Z_Construct_UClass_URemoteControlPresetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLUI_API UClass* ::Z_Construct_UClass_URemoteControlPresetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlPresetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlUI"), Z_Construct_UClass_URemoteControlPresetFactory_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlPresetFactory)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlPresetFactory(URemoteControlPresetFactory&&) = delete; \
	URemoteControlPresetFactory(const URemoteControlPresetFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlPresetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlPresetFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteControlPresetFactory) \
	NO_API virtual ~URemoteControlPresetFactory();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlPresetFactory;

// ********** End Class URemoteControlPresetFactory ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlUI_Private_Factories_RemoteControlPresetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
