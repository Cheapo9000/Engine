// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkHubMessagingSettings.h"

#ifdef LIVELINKHUBMESSAGING_LiveLinkHubMessagingSettings_generated_h
#error "LiveLinkHubMessagingSettings.generated.h already included, missing '#pragma once' in LiveLinkHubMessagingSettings.h"
#endif
#define LIVELINKHUBMESSAGING_LiveLinkHubMessagingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkHubMessagingSettings ********************************************
struct Z_Construct_UClass_ULiveLinkHubMessagingSettings_Statics;
LIVELINKHUBMESSAGING_API UClass* Z_Construct_UClass_ULiveLinkHubMessagingSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessagingSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubMessagingSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubMessagingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKHUBMESSAGING_API UClass* ::Z_Construct_UClass_ULiveLinkHubMessagingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubMessagingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkHubMessaging"), Z_Construct_UClass_ULiveLinkHubMessagingSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubMessagingSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessagingSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubMessagingSettings(ULiveLinkHubMessagingSettings&&) = delete; \
	ULiveLinkHubMessagingSettings(const ULiveLinkHubMessagingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKHUBMESSAGING_API, ULiveLinkHubMessagingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubMessagingSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkHubMessagingSettings) \
	LIVELINKHUBMESSAGING_API virtual ~ULiveLinkHubMessagingSettings();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessagingSettings_h_13_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessagingSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessagingSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessagingSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubMessagingSettings;

// ********** End Class ULiveLinkHubMessagingSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHubMessaging_Public_LiveLinkHubMessagingSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
