// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidRuntimeSettings.h"

#ifdef ANDROIDRUNTIMESETTINGS_AndroidRuntimeSettings_generated_h
#error "AndroidRuntimeSettings.generated.h already included, missing '#pragma once' in AndroidRuntimeSettings.h"
#endif
#define ANDROIDRUNTIMESETTINGS_AndroidRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGooglePlayAchievementMapping *************************************
struct Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics;
#define FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_152_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics; \
	ANDROIDRUNTIMESETTINGS_API static class UScriptStruct* StaticStruct();


struct FGooglePlayAchievementMapping;
// ********** End ScriptStruct FGooglePlayAchievementMapping ***************************************

// ********** Begin ScriptStruct FGooglePlayLeaderboardMapping *************************************
struct Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics;
#define FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics; \
	ANDROIDRUNTIMESETTINGS_API static class UScriptStruct* StaticStruct();


struct FGooglePlayLeaderboardMapping;
// ********** End ScriptStruct FGooglePlayLeaderboardMapping ***************************************

// ********** Begin Class UAndroidRuntimeSettings **************************************************
struct Z_Construct_UClass_UAndroidRuntimeSettings_Statics;
ANDROIDRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UAndroidRuntimeSettings_NoRegister();

#define FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_210_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidRuntimeSettings(); \
	friend struct ::Z_Construct_UClass_UAndroidRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANDROIDRUNTIMESETTINGS_API UClass* ::Z_Construct_UClass_UAndroidRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAndroidRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AndroidRuntimeSettings"), Z_Construct_UClass_UAndroidRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UAndroidRuntimeSettings)


#define FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_210_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANDROIDRUNTIMESETTINGS_API UAndroidRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANDROIDRUNTIMESETTINGS_API, UAndroidRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidRuntimeSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAndroidRuntimeSettings(UAndroidRuntimeSettings&&) = delete; \
	UAndroidRuntimeSettings(const UAndroidRuntimeSettings&) = delete; \
	ANDROIDRUNTIMESETTINGS_API virtual ~UAndroidRuntimeSettings();


#define FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_206_PROLOG
#define FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_210_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_210_INCLASS \
	FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_210_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAndroidRuntimeSettings;

// ********** End Class UAndroidRuntimeSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h

// ********** Begin Enum EAndroidScreenOrientation *************************************************
#define FOREACH_ENUM_EANDROIDSCREENORIENTATION(op) \
	op(EAndroidScreenOrientation::Portrait) \
	op(EAndroidScreenOrientation::ReversePortrait) \
	op(EAndroidScreenOrientation::SensorPortrait) \
	op(EAndroidScreenOrientation::Landscape) \
	op(EAndroidScreenOrientation::ReverseLandscape) \
	op(EAndroidScreenOrientation::SensorLandscape) \
	op(EAndroidScreenOrientation::Sensor) \
	op(EAndroidScreenOrientation::FullSensor) 

namespace EAndroidScreenOrientation { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAndroidScreenOrientation::Type>();
// ********** End Enum EAndroidScreenOrientation ***************************************************

// ********** Begin Enum EAndroidRoundedEdgeSafeZoneDirection **************************************
#define FOREACH_ENUM_EANDROIDROUNDEDEDGESAFEZONEDIRECTION(op) \
	op(EAndroidRoundedEdgeSafeZoneDirection::None) \
	op(EAndroidRoundedEdgeSafeZoneDirection::Horizontal) \
	op(EAndroidRoundedEdgeSafeZoneDirection::Vertical) \
	op(EAndroidRoundedEdgeSafeZoneDirection::Both) 

namespace EAndroidRoundedEdgeSafeZoneDirection { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAndroidRoundedEdgeSafeZoneDirection::Type>();
// ********** End Enum EAndroidRoundedEdgeSafeZoneDirection ****************************************

// ********** Begin Enum EAndroidDepthBufferPreference *********************************************
#define FOREACH_ENUM_EANDROIDDEPTHBUFFERPREFERENCE(op) \
	op(EAndroidDepthBufferPreference::Default) \
	op(EAndroidDepthBufferPreference::Bits16) \
	op(EAndroidDepthBufferPreference::Bits24) \
	op(EAndroidDepthBufferPreference::Bits32) 

namespace EAndroidDepthBufferPreference { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAndroidDepthBufferPreference::Type>();
// ********** End Enum EAndroidDepthBufferPreference ***********************************************

// ********** Begin Enum EAndroidInstallLocation ***************************************************
#define FOREACH_ENUM_EANDROIDINSTALLLOCATION(op) \
	op(EAndroidInstallLocation::InternalOnly) \
	op(EAndroidInstallLocation::PreferExternal) \
	op(EAndroidInstallLocation::Auto) 

namespace EAndroidInstallLocation { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAndroidInstallLocation::Type>();
// ********** End Enum EAndroidInstallLocation *****************************************************

// ********** Begin Enum EOculusMobileDevice *******************************************************
#define FOREACH_ENUM_EOCULUSMOBILEDEVICE(op) \
	op(EOculusMobileDevice::Quest) \
	op(EOculusMobileDevice::Quest2) 

namespace EOculusMobileDevice { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EOculusMobileDevice::Type>();
// ********** End Enum EOculusMobileDevice *********************************************************

// ********** Begin Enum ETagForChildDirectedTreatment *********************************************
#define FOREACH_ENUM_ETAGFORCHILDDIRECTEDTREATMENT(op) \
	op(ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED) \
	op(ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE) \
	op(ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE) 

namespace ETagForChildDirectedTreatment { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETagForChildDirectedTreatment::Type>();
// ********** End Enum ETagForChildDirectedTreatment ***********************************************

// ********** Begin Enum ETagForUnderAgeOfConsent **************************************************
#define FOREACH_ENUM_ETAGFORUNDERAGEOFCONSENT(op) \
	op(ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED) \
	op(ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE) \
	op(ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE) 

namespace ETagForUnderAgeOfConsent { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<ETagForUnderAgeOfConsent::Type>();
// ********** End Enum ETagForUnderAgeOfConsent ****************************************************

// ********** Begin Enum EMaxAdContentRating *******************************************************
#define FOREACH_ENUM_EMAXADCONTENTRATING(op) \
	op(EMaxAdContentRating::MAX_AD_CONTENT_RATING_G) \
	op(EMaxAdContentRating::MAX_AD_CONTENT_RATING_PG) \
	op(EMaxAdContentRating::MAX_AD_CONTENT_RATING_T) \
	op(EMaxAdContentRating::MAX_AD_CONTENT_RATING_MA) 

namespace EMaxAdContentRating { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMaxAdContentRating::Type>();
// ********** End Enum EMaxAdContentRating *********************************************************

// ********** Begin Enum EAndroidAudio *************************************************************
#define FOREACH_ENUM_EANDROIDAUDIO(op) \
	op(EAndroidAudio::Default) \
	op(EAndroidAudio::OGG) \
	op(EAndroidAudio::ADPCM) 

namespace EAndroidAudio { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAndroidAudio::Type>();
// ********** End Enum EAndroidAudio ***************************************************************

// ********** Begin Enum EAndroidGraphicsDebugger **************************************************
#define FOREACH_ENUM_EANDROIDGRAPHICSDEBUGGER(op) \
	op(EAndroidGraphicsDebugger::None) \
	op(EAndroidGraphicsDebugger::Mali) \
	op(EAndroidGraphicsDebugger::Adreno) 

namespace EAndroidGraphicsDebugger { enum Type : int; }
template<> ANDROIDRUNTIMESETTINGS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAndroidGraphicsDebugger::Type>();
// ********** End Enum EAndroidGraphicsDebugger ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
