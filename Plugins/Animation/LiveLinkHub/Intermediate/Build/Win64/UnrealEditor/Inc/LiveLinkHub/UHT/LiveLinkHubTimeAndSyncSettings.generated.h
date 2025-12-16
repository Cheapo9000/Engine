// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LiveLinkHubTimeAndSyncSettings.h"

#ifdef LIVELINKHUB_LiveLinkHubTimeAndSyncSettings_generated_h
#error "LiveLinkHubTimeAndSyncSettings.generated.h already included, missing '#pragma once' in LiveLinkHubTimeAndSyncSettings.h"
#endif
#define LIVELINKHUB_LiveLinkHubTimeAndSyncSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkHubTimeAndSyncSettings ******************************************
struct Z_Construct_UClass_ULiveLinkHubTimeAndSyncSettings_Statics;
LIVELINKHUB_API UClass* Z_Construct_UClass_ULiveLinkHubTimeAndSyncSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubTimeAndSyncSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubTimeAndSyncSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubTimeAndSyncSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKHUB_API UClass* ::Z_Construct_UClass_ULiveLinkHubTimeAndSyncSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubTimeAndSyncSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkHub"), Z_Construct_UClass_ULiveLinkHubTimeAndSyncSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubTimeAndSyncSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubTimeAndSyncSettings_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkHubTimeAndSyncSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubTimeAndSyncSettings(ULiveLinkHubTimeAndSyncSettings&&) = delete; \
	ULiveLinkHubTimeAndSyncSettings(const ULiveLinkHubTimeAndSyncSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkHubTimeAndSyncSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubTimeAndSyncSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkHubTimeAndSyncSettings) \
	NO_API virtual ~ULiveLinkHubTimeAndSyncSettings();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubTimeAndSyncSettings_h_26_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubTimeAndSyncSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubTimeAndSyncSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubTimeAndSyncSettings_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubTimeAndSyncSettings;

// ********** End Class ULiveLinkHubTimeAndSyncSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubTimeAndSyncSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
