// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserSettings/EnhancedInputUserSettings.h"

#ifdef ENHANCEDINPUT_EnhancedInputUserSettings_generated_h
#error "EnhancedInputUserSettings.generated.h already included, missing '#pragma once' in EnhancedInputUserSettings.h"
#endif
#define ENHANCEDINPUT_EnhancedInputUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnhancedInputUserSettings;
class UEnhancedPlayerMappableKeyProfile;
class UInputMappingContext;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FKey;
struct FKeyMappingRow;
struct FMapPlayerKeyArgs;
struct FPlayerKeyMapping;
struct FPlayerMappableKeyProfileCreationArgs;
struct FPlayerMappableKeyQueryOptions;

// ********** Begin ScriptStruct FMapPlayerKeyArgs *************************************************
struct Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FMapPlayerKeyArgs;
// ********** End ScriptStruct FMapPlayerKeyArgs ***************************************************

// ********** Begin ScriptStruct FPlayerKeyMapping *************************************************
struct Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FPlayerKeyMapping;
// ********** End ScriptStruct FPlayerKeyMapping ***************************************************

// ********** Begin ScriptStruct FKeyMappingRow ****************************************************
struct Z_Construct_UScriptStruct_FKeyMappingRow_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_255_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FKeyMappingRow_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FKeyMappingRow;
// ********** End ScriptStruct FKeyMappingRow ******************************************************

// ********** Begin ScriptStruct FPlayerMappableKeyQueryOptions ************************************
struct Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_271_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FPlayerMappableKeyQueryOptions;
// ********** End ScriptStruct FPlayerMappableKeyQueryOptions **************************************

// ********** Begin Class UEnhancedPlayerMappableKeyProfile ****************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_308_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoesMappingPassQueryOptions); \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execK2_FindKeyMapping); \
	DECLARE_FUNCTION(execGetMappingNamesForKey); \
	DECLARE_FUNCTION(execQueryPlayerMappedKeys); \
	DECLARE_FUNCTION(execGetMappedKeysInRow); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execDumpProfileToLog); \
	DECLARE_FUNCTION(execResetMappingToDefault); \
	DECLARE_FUNCTION(execGetPlayerMappingRows); \
	DECLARE_FUNCTION(execGetProfileDisplayName); \
	DECLARE_FUNCTION(execGetProfileIdString); \
	DECLARE_FUNCTION(execSetDisplayName);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_308_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEnhancedPlayerMappableKeyProfile, ENHANCEDINPUT_API)


struct Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_308_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedPlayerMappableKeyProfile(); \
	friend struct ::Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedPlayerMappableKeyProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedPlayerMappableKeyProfile) \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_308_ARCHIVESERIALIZER


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_308_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedPlayerMappableKeyProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedPlayerMappableKeyProfile(UEnhancedPlayerMappableKeyProfile&&) = delete; \
	UEnhancedPlayerMappableKeyProfile(const UEnhancedPlayerMappableKeyProfile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedPlayerMappableKeyProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedPlayerMappableKeyProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedPlayerMappableKeyProfile) \
	ENHANCEDINPUT_API virtual ~UEnhancedPlayerMappableKeyProfile();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_305_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_308_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_308_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_308_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_308_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedPlayerMappableKeyProfile;

// ********** End Class UEnhancedPlayerMappableKeyProfile ******************************************

// ********** Begin ScriptStruct FPlayerMappableKeyProfileCreationArgs *****************************
struct Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_466_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FPlayerMappableKeyProfileCreationArgs;
// ********** End ScriptStruct FPlayerMappableKeyProfileCreationArgs *******************************

// ********** Begin Delegate FEnhancedInputUserSettingsChanged *************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_634_DELEGATE \
static ENHANCEDINPUT_API void FEnhancedInputUserSettingsChanged_DelegateWrapper(const FMulticastScriptDelegate& EnhancedInputUserSettingsChanged, UEnhancedInputUserSettings* Settings);


// ********** End Delegate FEnhancedInputUserSettingsChanged ***************************************

// ********** Begin Delegate FEnhancedInputUserSettingsApplied *************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_639_DELEGATE \
static ENHANCEDINPUT_API void FEnhancedInputUserSettingsApplied_DelegateWrapper(const FMulticastScriptDelegate& EnhancedInputUserSettingsApplied);


// ********** End Delegate FEnhancedInputUserSettingsApplied ***************************************

// ********** Begin Delegate FMappableKeyProfileChanged ********************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_699_DELEGATE \
static ENHANCEDINPUT_API void FMappableKeyProfileChanged_DelegateWrapper(const FMulticastScriptDelegate& MappableKeyProfileChanged, const UEnhancedPlayerMappableKeyProfile* NewProfile);


// ********** End Delegate FMappableKeyProfileChanged **********************************************

// ********** Begin Delegate FMappingContextRegisteredWithSettings *********************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_797_DELEGATE \
static ENHANCEDINPUT_API void FMappingContextRegisteredWithSettings_DelegateWrapper(const FMulticastScriptDelegate& MappingContextRegisteredWithSettings, const UInputMappingContext* IMC);


// ********** End Delegate FMappingContextRegisteredWithSettings ***********************************

// ********** Begin Class UEnhancedInputUserSettings ***********************************************
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_518_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsMappingContextRegistered); \
	DECLARE_FUNCTION(execUnregisterInputMappingContexts); \
	DECLARE_FUNCTION(execUnregisterInputMappingContext); \
	DECLARE_FUNCTION(execRegisterInputMappingContexts); \
	DECLARE_FUNCTION(execRegisterInputMappingContext); \
	DECLARE_FUNCTION(execGetKeyProfileWithId); \
	DECLARE_FUNCTION(execCreateNewKeyProfile); \
	DECLARE_FUNCTION(execGetActiveKeyProfile); \
	DECLARE_FUNCTION(execGetActiveKeyProfileId); \
	DECLARE_FUNCTION(execSetActiveKeyProfile); \
	DECLARE_FUNCTION(execFindMappingsInRow); \
	DECLARE_FUNCTION(execResetKeyProfileIdToDefault); \
	DECLARE_FUNCTION(execResetKeyProfileToDefault); \
	DECLARE_FUNCTION(execResetAllPlayerKeysInRow); \
	DECLARE_FUNCTION(execUnMapPlayerKey); \
	DECLARE_FUNCTION(execMapPlayerKey); \
	DECLARE_FUNCTION(execAsyncSaveSettings); \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execApplySettings);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_518_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEnhancedInputUserSettings, ENHANCEDINPUT_API)


struct Z_Construct_UClass_UEnhancedInputUserSettings_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_518_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputUserSettings(); \
	friend struct ::Z_Construct_UClass_UEnhancedInputUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputUserSettings, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedInputUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputUserSettings) \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_518_ARCHIVESERIALIZER \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("GameUserSettings");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_518_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputUserSettings(UEnhancedInputUserSettings&&) = delete; \
	UEnhancedInputUserSettings(const UEnhancedInputUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputUserSettings) \
	ENHANCEDINPUT_API virtual ~UEnhancedInputUserSettings();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_515_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_518_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_518_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_518_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_518_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputUserSettings;

// ********** End Class UEnhancedInputUserSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h

// ********** Begin Enum EPlayerMappableKeySlot ****************************************************
#define FOREACH_ENUM_EPLAYERMAPPABLEKEYSLOT(op) \
	op(EPlayerMappableKeySlot::First) \
	op(EPlayerMappableKeySlot::Second) \
	op(EPlayerMappableKeySlot::Third) \
	op(EPlayerMappableKeySlot::Fourth) \
	op(EPlayerMappableKeySlot::Fifth) \
	op(EPlayerMappableKeySlot::Sixth) \
	op(EPlayerMappableKeySlot::Seventh) \
	op(EPlayerMappableKeySlot::Unspecified) \
	op(EPlayerMappableKeySlot::Max) 

enum class EPlayerMappableKeySlot : uint8;
template<> struct TIsUEnumClass<EPlayerMappableKeySlot> { enum { Value = true }; };
template<> ENHANCEDINPUT_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayerMappableKeySlot>();
// ********** End Enum EPlayerMappableKeySlot ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
