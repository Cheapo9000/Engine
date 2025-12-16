// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkSettings.h"

#ifdef LIVELINK_LiveLinkSettings_generated_h
#error "LiveLinkSettings.generated.h already included, missing '#pragma once' in LiveLinkSettings.h"
#endif
#define LIVELINK_LiveLinkSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLiveLinkRoleProjectSetting ***************************************
struct Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics;
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics; \
	LIVELINK_API static class UScriptStruct* StaticStruct();


struct FLiveLinkRoleProjectSetting;
// ********** End ScriptStruct FLiveLinkRoleProjectSetting *****************************************

// ********** Begin Class ULiveLinkUserSettings ****************************************************
struct Z_Construct_UClass_ULiveLinkUserSettings_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkUserSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkUserSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkUserSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LIVELINK_API ULiveLinkUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkUserSettings(ULiveLinkUserSettings&&) = delete; \
	ULiveLinkUserSettings(const ULiveLinkUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkUserSettings) \
	LIVELINK_API virtual ~ULiveLinkUserSettings();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_51_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkUserSettings;

// ********** End Class ULiveLinkUserSettings ******************************************************

// ********** Begin Class ULiveLinkSettings ********************************************************
struct Z_Construct_UClass_ULiveLinkSettings_Statics;
LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSettings_NoRegister();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkSettings(); \
	friend struct ::Z_Construct_UClass_ULiveLinkSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIVELINK_API UClass* ::Z_Construct_UClass_ULiveLinkSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(ULiveLinkSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), Z_Construct_UClass_ULiveLinkSettings_NoRegister) \
	DECLARE_SERIALIZER(ULiveLinkSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_71_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULiveLinkSettings(ULiveLinkSettings&&) = delete; \
	ULiveLinkSettings(const ULiveLinkSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LIVELINK_API, ULiveLinkSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkSettings) \
	LIVELINK_API virtual ~ULiveLinkSettings();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_68_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULiveLinkSettings;

// ********** End Class ULiveLinkSettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
