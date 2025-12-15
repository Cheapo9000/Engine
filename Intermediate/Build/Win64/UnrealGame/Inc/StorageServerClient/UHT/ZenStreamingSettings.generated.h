// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZenStreamingSettings.h"

#ifdef STORAGESERVERCLIENT_ZenStreamingSettings_generated_h
#error "ZenStreamingSettings.generated.h already included, missing '#pragma once' in ZenStreamingSettings.h"
#endif
#define STORAGESERVERCLIENT_ZenStreamingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UZenStreamingSettings ****************************************************
struct Z_Construct_UClass_UZenStreamingSettings_Statics;
STORAGESERVERCLIENT_API UClass* Z_Construct_UClass_UZenStreamingSettings_NoRegister();

#define FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZenStreamingSettings(); \
	friend struct ::Z_Construct_UClass_UZenStreamingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend STORAGESERVERCLIENT_API UClass* ::Z_Construct_UClass_UZenStreamingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UZenStreamingSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/StorageServerClient"), Z_Construct_UClass_UZenStreamingSettings_NoRegister) \
	DECLARE_SERIALIZER(UZenStreamingSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STORAGESERVERCLIENT_API UZenStreamingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UZenStreamingSettings(UZenStreamingSettings&&) = delete; \
	UZenStreamingSettings(const UZenStreamingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STORAGESERVERCLIENT_API, UZenStreamingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZenStreamingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZenStreamingSettings) \
	STORAGESERVERCLIENT_API virtual ~UZenStreamingSettings();


#define FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h_10_PROLOG
#define FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UZenStreamingSettings;

// ********** End Class UZenStreamingSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_StorageServerClient_Private_ZenStreamingSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
