// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameNetworkManagerSettings.h"

#ifdef ENGINESETTINGS_GameNetworkManagerSettings_generated_h
#error "GameNetworkManagerSettings.generated.h already included, missing '#pragma once' in GameNetworkManagerSettings.h"
#endif
#define ENGINESETTINGS_GameNetworkManagerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGameNetworkManagerSettings **********************************************
struct Z_Construct_UClass_UGameNetworkManagerSettings_Statics;
ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister();

#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGameNetworkManagerSettings(); \
	friend struct ::Z_Construct_UClass_UGameNetworkManagerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINESETTINGS_API UClass* ::Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameNetworkManagerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameNetworkManagerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINESETTINGS_API UGameNetworkManagerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameNetworkManagerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINESETTINGS_API, UGameNetworkManagerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameNetworkManagerSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameNetworkManagerSettings(UGameNetworkManagerSettings&&) = delete; \
	UGameNetworkManagerSettings(const UGameNetworkManagerSettings&) = delete; \
	ENGINESETTINGS_API virtual ~UGameNetworkManagerSettings();


#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_14_PROLOG
#define FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_INCLASS \
	FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameNetworkManagerSettings;

// ********** End Class UGameNetworkManagerSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
