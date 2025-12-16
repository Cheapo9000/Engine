// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocialSettings.h"

#ifdef PARTY_SocialSettings_generated_h
#error "SocialSettings.generated.h already included, missing '#pragma once' in SocialSettings.h"
#endif
#define PARTY_SocialSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSocialPlatformDescription ****************************************
struct Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics;
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


struct FSocialPlatformDescription;
// ********** End ScriptStruct FSocialPlatformDescription ******************************************

// ********** Begin Class USocialSettings **********************************************************
struct Z_Construct_UClass_USocialSettings_Statics;
PARTY_API UClass* Z_Construct_UClass_USocialSettings_NoRegister();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSocialSettings(); \
	friend struct ::Z_Construct_UClass_USocialSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PARTY_API UClass* ::Z_Construct_UClass_USocialSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USocialSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Party"), Z_Construct_UClass_USocialSettings_NoRegister) \
	DECLARE_SERIALIZER(USocialSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USocialSettings(USocialSettings&&) = delete; \
	USocialSettings(const USocialSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PARTY_API, USocialSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USocialSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USocialSettings) \
	PARTY_API virtual ~USocialSettings();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_51_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USocialSettings;

// ********** End Class USocialSettings ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
