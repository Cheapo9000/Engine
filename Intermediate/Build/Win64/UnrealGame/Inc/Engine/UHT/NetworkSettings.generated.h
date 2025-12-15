// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NetworkSettings.h"

#ifdef ENGINE_NetworkSettings_generated_h
#error "NetworkSettings.generated.h already included, missing '#pragma once' in NetworkSettings.h"
#endif
#define ENGINE_NetworkSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetworkEmulationProfileDescription *******************************
struct Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FNetworkEmulationProfileDescription;
// ********** End ScriptStruct FNetworkEmulationProfileDescription *********************************

// ********** Begin Class UNetworkSettings *********************************************************
struct Z_Construct_UClass_UNetworkSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UNetworkSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUNetworkSettings(); \
	friend struct ::Z_Construct_UClass_UNetworkSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UNetworkSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetworkSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UNetworkSettings_NoRegister) \
	DECLARE_SERIALIZER(UNetworkSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNetworkSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetworkSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetworkSettings(UNetworkSettings&&) = delete; \
	UNetworkSettings(const UNetworkSettings&) = delete; \
	ENGINE_API virtual ~UNetworkSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetworkSettings;

// ********** End Class UNetworkSettings ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
