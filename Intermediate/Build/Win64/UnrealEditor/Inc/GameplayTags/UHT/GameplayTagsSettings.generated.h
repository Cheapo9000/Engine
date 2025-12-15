// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagsSettings.h"

#ifdef GAMEPLAYTAGS_GameplayTagsSettings_generated_h
#error "GameplayTagsSettings.generated.h already included, missing '#pragma once' in GameplayTagsSettings.h"
#endif
#define GAMEPLAYTAGS_GameplayTagsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayTagCategoryRemap *****************************************
struct Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


struct FGameplayTagCategoryRemap;
// ********** End ScriptStruct FGameplayTagCategoryRemap *******************************************

// ********** Begin Class UGameplayTagsList ********************************************************
struct Z_Construct_UClass_UGameplayTagsList_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsList(); \
	friend struct ::Z_Construct_UClass_UGameplayTagsList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UGameplayTagsList_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UGameplayTagsList_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTagsList) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("GameplayTagsList");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UGameplayTagsList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsList); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTagsList(UGameplayTagsList&&) = delete; \
	UGameplayTagsList(const UGameplayTagsList&) = delete; \
	GAMEPLAYTAGS_API virtual ~UGameplayTagsList();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_33_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTagsList;

// ********** End Class UGameplayTagsList **********************************************************

// ********** Begin Class URestrictedGameplayTagsList **********************************************
struct Z_Construct_UClass_URestrictedGameplayTagsList_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_INCLASS \
private: \
	static void StaticRegisterNativesURestrictedGameplayTagsList(); \
	friend struct ::Z_Construct_UClass_URestrictedGameplayTagsList_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister(); \
public: \
	DECLARE_CLASS2(URestrictedGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister) \
	DECLARE_SERIALIZER(URestrictedGameplayTagsList) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API URestrictedGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestrictedGameplayTagsList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, URestrictedGameplayTagsList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestrictedGameplayTagsList); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URestrictedGameplayTagsList(URestrictedGameplayTagsList&&) = delete; \
	URestrictedGameplayTagsList(const URestrictedGameplayTagsList&) = delete; \
	GAMEPLAYTAGS_API virtual ~URestrictedGameplayTagsList();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_55_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URestrictedGameplayTagsList;

// ********** End Class URestrictedGameplayTagsList ************************************************

// ********** Begin ScriptStruct FRestrictedConfigInfo *********************************************
struct Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics;
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


struct FRestrictedConfigInfo;
// ********** End ScriptStruct FRestrictedConfigInfo ***********************************************

// ********** Begin Class UGameplayTagsSettings ****************************************************
struct Z_Construct_UClass_UGameplayTagsSettings_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsSettings_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsSettings(); \
	friend struct ::Z_Construct_UClass_UGameplayTagsSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UGameplayTagsSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTagsSettings, UGameplayTagsList, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UGameplayTagsSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTagsSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UGameplayTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UGameplayTagsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTagsSettings(UGameplayTagsSettings&&) = delete; \
	UGameplayTagsSettings(const UGameplayTagsSettings&) = delete; \
	GAMEPLAYTAGS_API virtual ~UGameplayTagsSettings();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_102_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_105_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTagsSettings;

// ********** End Class UGameplayTagsSettings ******************************************************

// ********** Begin Class UGameplayTagsDeveloperSettings *******************************************
struct Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics;
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_195_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYTAGS_API UClass* ::Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameplayTagsDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UGameplayTagsDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_195_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UGameplayTagsDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsDeveloperSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UGameplayTagsDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsDeveloperSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameplayTagsDeveloperSettings(UGameplayTagsDeveloperSettings&&) = delete; \
	UGameplayTagsDeveloperSettings(const UGameplayTagsDeveloperSettings&) = delete; \
	GAMEPLAYTAGS_API virtual ~UGameplayTagsDeveloperSettings();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_192_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_195_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_195_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_195_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameplayTagsDeveloperSettings;

// ********** End Class UGameplayTagsDeveloperSettings *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
