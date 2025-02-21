// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LiveLinkHubSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVELINKHUB_LiveLinkHubSettings_generated_h
#error "LiveLinkHubSettings.generated.h already included, missing '#pragma once' in LiveLinkHubSettings.h"
#endif
#define LIVELINKHUB_LiveLinkHubSettings_generated_h

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubSettings(); \
	friend struct Z_Construct_UClass_ULiveLinkHubSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkHubSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkHub"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkHubSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkHubSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULiveLinkHubSettings(ULiveLinkHubSettings&&); \
	ULiveLinkHubSettings(const ULiveLinkHubSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkHubSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkHubSettings) \
	NO_API virtual ~ULiveLinkHubSettings();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_14_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKHUB_API UClass* StaticClass<class ULiveLinkHubSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
