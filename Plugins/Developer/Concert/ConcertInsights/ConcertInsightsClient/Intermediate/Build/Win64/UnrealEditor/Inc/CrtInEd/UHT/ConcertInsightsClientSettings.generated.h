// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertInsightsClientSettings.h"

#ifdef CONCERTINSIGHTSCLIENT_ConcertInsightsClientSettings_generated_h
#error "ConcertInsightsClientSettings.generated.h already included, missing '#pragma once' in ConcertInsightsClientSettings.h"
#endif
#define CONCERTINSIGHTSCLIENT_ConcertInsightsClientSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConcertInsightsClientSettings *******************************************
struct Z_Construct_UClass_UConcertInsightsClientSettings_Statics;
CONCERTINSIGHTSCLIENT_API UClass* Z_Construct_UClass_UConcertInsightsClientSettings_NoRegister();

#define FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsClient_Source_ConcertInsightsClient_Private_ConcertInsightsClientSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConcertInsightsClientSettings(); \
	friend struct ::Z_Construct_UClass_UConcertInsightsClientSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONCERTINSIGHTSCLIENT_API UClass* ::Z_Construct_UClass_UConcertInsightsClientSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UConcertInsightsClientSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConcertInsightsClient"), Z_Construct_UClass_UConcertInsightsClientSettings_NoRegister) \
	DECLARE_SERIALIZER(UConcertInsightsClientSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsClient_Source_ConcertInsightsClient_Private_ConcertInsightsClientSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConcertInsightsClientSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConcertInsightsClientSettings(UConcertInsightsClientSettings&&) = delete; \
	UConcertInsightsClientSettings(const UConcertInsightsClientSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConcertInsightsClientSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConcertInsightsClientSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConcertInsightsClientSettings) \
	NO_API virtual ~UConcertInsightsClientSettings();


#define FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsClient_Source_ConcertInsightsClient_Private_ConcertInsightsClientSettings_h_8_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsClient_Source_ConcertInsightsClient_Private_ConcertInsightsClientSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsClient_Source_ConcertInsightsClient_Private_ConcertInsightsClientSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsClient_Source_ConcertInsightsClient_Private_ConcertInsightsClientSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConcertInsightsClientSettings;

// ********** End Class UConcertInsightsClientSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertInsights_ConcertInsightsClient_Source_ConcertInsightsClient_Private_ConcertInsightsClientSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
