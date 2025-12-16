// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlLogicConfig.h"

#ifdef REMOTECONTROLLOGIC_RemoteControlLogicConfig_generated_h
#error "RemoteControlLogicConfig.generated.h already included, missing '#pragma once' in RemoteControlLogicConfig.h"
#endif
#define REMOTECONTROLLOGIC_RemoteControlLogicConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URemoteControlLogicConfig ************************************************
struct Z_Construct_UClass_URemoteControlLogicConfig_Statics;
REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URemoteControlLogicConfig_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlLogicConfig(); \
	friend struct ::Z_Construct_UClass_URemoteControlLogicConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROLLOGIC_API UClass* ::Z_Construct_UClass_URemoteControlLogicConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlLogicConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), Z_Construct_UClass_URemoteControlLogicConfig_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlLogicConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("RemoteControl");} \



#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlLogicConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlLogicConfig(URemoteControlLogicConfig&&) = delete; \
	URemoteControlLogicConfig(const URemoteControlLogicConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlLogicConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlLogicConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlLogicConfig) \
	NO_API virtual ~URemoteControlLogicConfig();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlLogicConfig;

// ********** End Class URemoteControlLogicConfig **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_RemoteControlLogicConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
