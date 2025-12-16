// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/LiveLinkHubSettings.h"

#ifdef LIVELINKHUB_LiveLinkHubSettings_generated_h
#error "LiveLinkHubSettings.generated.h already included, missing '#pragma once' in LiveLinkHubSettings.h"
#endif
#define LIVELINKHUB_LiveLinkHubSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULiveLinkHubSettings *****************************************************
struct Z_Construct_UClass_ULiveLinkHubSettings_Statics;
LIVELINKHUB_API UClass* Z_Construct_UClass_ULiveLinkHubSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKHUB_API UClass* ::Z_Construct_UClass_ULiveLinkHubSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkHub"), Z_Construct_UClass_ULiveLinkHubSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubSettings)


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubSettings(ULiveLinkHubSettings&&) = delete; \
	ULiveLinkHubSettings(const ULiveLinkHubSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKHUB_API, ULiveLinkHubSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkHubSettings) \
	LIVELINKHUB_API virtual ~ULiveLinkHubSettings();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_23_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubSettings;

// ********** End Class ULiveLinkHubSettings *******************************************************

// ********** Begin ScriptStruct FLiveLinkHubClientTextFilter **************************************
struct Z_Construct_UScriptStruct_FLiveLinkHubClientTextFilter_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubClientTextFilter_Statics; \
	LIVELINKHUB_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubClientTextFilter;
// ********** End ScriptStruct FLiveLinkHubClientTextFilter ****************************************

// ********** Begin ScriptStruct FLiveLinkHubClientFilterPreset ************************************
struct Z_Construct_UScriptStruct_FLiveLinkHubClientFilterPreset_Statics;
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_189_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkHubClientFilterPreset_Statics; \
	LIVELINKHUB_API static class UScriptStruct* StaticStruct();


struct FLiveLinkHubClientFilterPreset;
// ********** End ScriptStruct FLiveLinkHubClientFilterPreset **************************************

// ********** Begin Class ULiveLinkHubUserSettings *************************************************
struct Z_Construct_UClass_ULiveLinkHubUserSettings_Statics;
LIVELINKHUB_API UClass* Z_Construct_UClass_ULiveLinkHubUserSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_211_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkHubUserSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkHubUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINKHUB_API UClass* ::Z_Construct_UClass_ULiveLinkHubUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkHubUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkHub"), Z_Construct_UClass_ULiveLinkHubUserSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkHubUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_211_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINKHUB_API ULiveLinkHubUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkHubUserSettings(ULiveLinkHubUserSettings&&) = delete; \
	ULiveLinkHubUserSettings(const ULiveLinkHubUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINKHUB_API, ULiveLinkHubUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkHubUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkHubUserSettings) \
	LIVELINKHUB_API virtual ~ULiveLinkHubUserSettings();


#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_208_PROLOG
#define FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_211_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_211_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h_211_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkHubUserSettings;

// ********** End Class ULiveLinkHubUserSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLinkHub_Source_LiveLinkHub_Private_Settings_LiveLinkHubSettings_h

// ********** Begin Enum ELiveLinkHubClientFilterBehavior ******************************************
#define FOREACH_ENUM_ELIVELINKHUBCLIENTFILTERBEHAVIOR(op) \
	op(ELiveLinkHubClientFilterBehavior::Include) \
	op(ELiveLinkHubClientFilterBehavior::Exclude) 

enum class ELiveLinkHubClientFilterBehavior;
template<> struct TIsUEnumClass<ELiveLinkHubClientFilterBehavior> { enum { Value = true }; };
template<> LIVELINKHUB_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkHubClientFilterBehavior>();
// ********** End Enum ELiveLinkHubClientFilterBehavior ********************************************

// ********** Begin Enum ELiveLinkHubClientFilterType **********************************************
#define FOREACH_ENUM_ELIVELINKHUBCLIENTFILTERTYPE(op) \
	op(ELiveLinkHubClientFilterType::IP) \
	op(ELiveLinkHubClientFilterType::Host) 

enum class ELiveLinkHubClientFilterType;
template<> struct TIsUEnumClass<ELiveLinkHubClientFilterType> { enum { Value = true }; };
template<> LIVELINKHUB_NON_ATTRIBUTED_API UEnum* StaticEnum<ELiveLinkHubClientFilterType>();
// ********** End Enum ELiveLinkHubClientFilterType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
