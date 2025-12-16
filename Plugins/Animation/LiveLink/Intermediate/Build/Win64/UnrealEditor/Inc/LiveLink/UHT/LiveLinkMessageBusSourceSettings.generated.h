// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkMessageBusSourceSettings.h"

#ifdef LIVELINK_LiveLinkMessageBusSourceSettings_generated_h
#error "LiveLinkMessageBusSourceSettings.generated.h already included, missing '#pragma once' in LiveLinkMessageBusSourceSettings.h"
#endif
#define LIVELINK_LiveLinkMessageBusSourceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkMessageBusSourceSettings ****************************************
struct Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusSourceSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkMessageBusSourceSettings, ULiveLinkSourceSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkMessageBusSourceSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusSourceSettings)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkMessageBusSourceSettings(ULiveLinkMessageBusSourceSettings&&) = delete; \
	ULiveLinkMessageBusSourceSettings(const ULiveLinkMessageBusSourceSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkMessageBusSourceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusSourceSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkMessageBusSourceSettings) \
	LIVELINK_API virtual ~ULiveLinkMessageBusSourceSettings();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h_18_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkMessageBusSourceSettings;

// ********** End Class ULiveLinkMessageBusSourceSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusSourceSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
