// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataRegistrySettings.h"

#ifdef DATAREGISTRY_DataRegistrySettings_generated_h
#error "DataRegistrySettings.generated.h already included, missing '#pragma once' in DataRegistrySettings.h"
#endif
#define DATAREGISTRY_DataRegistrySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataRegistrySettings ****************************************************
struct Z_Construct_UClass_UDataRegistrySettings_Statics;
DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySettings_NoRegister();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataRegistrySettings(); \
	friend struct ::Z_Construct_UClass_UDataRegistrySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DATAREGISTRY_API UClass* ::Z_Construct_UClass_UDataRegistrySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataRegistrySettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataRegistry"), Z_Construct_UClass_UDataRegistrySettings_NoRegister) \
	DECLARE_SERIALIZER(UDataRegistrySettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATAREGISTRY_API UDataRegistrySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataRegistrySettings(UDataRegistrySettings&&) = delete; \
	UDataRegistrySettings(const UDataRegistrySettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATAREGISTRY_API, UDataRegistrySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataRegistrySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataRegistrySettings) \
	DATAREGISTRY_API virtual ~UDataRegistrySettings();


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataRegistrySettings;

// ********** End Class UDataRegistrySettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
