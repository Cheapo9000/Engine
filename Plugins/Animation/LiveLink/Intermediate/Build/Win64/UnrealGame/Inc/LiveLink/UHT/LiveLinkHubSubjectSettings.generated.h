// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkHubSubjectSettings.h"

#ifdef LIVELINK_LiveLinkHubSubjectSettings_generated_h
#error "LiveLinkHubSubjectSettings.generated.h already included, missing '#pragma once' in LiveLinkHubSubjectSettings.h"
#endif
#define LIVELINK_LiveLinkHubSubjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkHubSubjectSettings **********************************************
struct Z_Construct_UClass_ULiveLinkHubSubjectSettings_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkHubSubjectSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubSubjectSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubSubjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkHubSubjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubSubjectSettings, ULiveLinkSubjectSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkHubSubjectSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubSubjectSettings)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkHubSubjectSettings(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubSubjectSettings(ULiveLinkHubSubjectSettings&&) = delete; \
	ULiveLinkHubSubjectSettings(const ULiveLinkHubSubjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkHubSubjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubSubjectSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkHubSubjectSettings) \
	LIVELINK_API virtual ~ULiveLinkHubSubjectSettings();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h_15_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubSubjectSettings;

// ********** End Class ULiveLinkHubSubjectSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkHubSubjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
