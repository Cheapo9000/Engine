// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recording/LiveLinkHubPlaybackSourceSettings.h"

#ifdef LIVELINKHUB_LiveLinkHubPlaybackSourceSettings_generated_h
#error "LiveLinkHubPlaybackSourceSettings.generated.h already included, missing '#pragma once' in LiveLinkHubPlaybackSourceSettings.h"
#endif
#define LIVELINKHUB_LiveLinkHubPlaybackSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkHubPlaybackSourceSettings ***************************************
struct Z_Construct_UClass_ULiveLinkHubPlaybackSourceSettings_Statics;
LIVELINKHUB_API UClass* Z_Construct_UClass_ULiveLinkHubPlaybackSourceSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubPlaybackSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubPlaybackSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKHUB_API UClass* ::Z_Construct_UClass_ULiveLinkHubPlaybackSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubPlaybackSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLinkHub"), Z_Construct_UClass_ULiveLinkHubPlaybackSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubPlaybackSourceSettings)


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubPlaybackSourceSettings(ULiveLinkHubPlaybackSourceSettings&&) = delete; \
	ULiveLinkHubPlaybackSourceSettings(const ULiveLinkHubPlaybackSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkHubPlaybackSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubPlaybackSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkHubPlaybackSourceSettings) \
	NO_API virtual ~ULiveLinkHubPlaybackSourceSettings();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceSettings_h_10_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceSettings_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubPlaybackSourceSettings;

// ********** End Class ULiveLinkHubPlaybackSourceSettings *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Recording_LiveLinkHubPlaybackSourceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
