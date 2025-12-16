// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiServerSettings.h"

#ifdef MULTISERVERCONFIGURATION_MultiServerSettings_generated_h
#error "MultiServerSettings.generated.h already included, missing '#pragma once' in MultiServerSettings.h"
#endif
#define MULTISERVERCONFIGURATION_MultiServerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMultiServerSettings *****************************************************
struct Z_Construct_UClass_UMultiServerSettings_Statics;
MULTISERVERCONFIGURATION_API UClass* Z_Construct_UClass_UMultiServerSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerConfiguration_Public_MultiServerSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiServerSettings(); \
	friend struct ::Z_Construct_UClass_UMultiServerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MULTISERVERCONFIGURATION_API UClass* ::Z_Construct_UClass_UMultiServerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiServerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiServerConfiguration"), Z_Construct_UClass_UMultiServerSettings_NoRegister) \
	DECLARE_SERIALIZER(UMultiServerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerConfiguration_Public_MultiServerSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiServerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiServerSettings(UMultiServerSettings&&) = delete; \
	UMultiServerSettings(const UMultiServerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiServerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiServerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiServerSettings) \
	NO_API virtual ~UMultiServerSettings();


#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerConfiguration_Public_MultiServerSettings_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerConfiguration_Public_MultiServerSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerConfiguration_Public_MultiServerSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerConfiguration_Public_MultiServerSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiServerSettings;

// ********** End Class UMultiServerSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MultiServerReplication_Source_MultiServerConfiguration_Public_MultiServerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
