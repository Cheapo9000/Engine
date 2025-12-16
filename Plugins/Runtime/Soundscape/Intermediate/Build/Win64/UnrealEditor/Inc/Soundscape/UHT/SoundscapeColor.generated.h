// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundscapeColor.h"

#ifdef SOUNDSCAPE_SoundscapeColor_generated_h
#error "SoundscapeColor.generated.h already included, missing '#pragma once' in SoundscapeColor.h"
#endif
#define SOUNDSCAPE_SoundscapeColor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundscapeColor;

// ********** Begin Delegate FOnSoundscapeColorParameterChanges ************************************
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_18_DELEGATE \
SOUNDSCAPE_API void FOnSoundscapeColorParameterChanges_DelegateWrapper(const FMulticastScriptDelegate& OnSoundscapeColorParameterChanges, const USoundscapeColor* SoundscapeColor);


// ********** End Delegate FOnSoundscapeColorParameterChanges **************************************

// ********** Begin ScriptStruct FSoundscapeColorSpawnSettings *************************************
struct Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics;
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundscapeColorSpawnSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSoundscapeColorSpawnSettings;
// ********** End ScriptStruct FSoundscapeColorSpawnSettings ***************************************

// ********** Begin ScriptStruct FSoundscapeColorModulationSettings ********************************
struct Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics;
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_160_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundscapeColorModulationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSoundscapeColorModulationSettings;
// ********** End ScriptStruct FSoundscapeColorModulationSettings **********************************

// ********** Begin ScriptStruct FSoundscapeColorPlaybackSettings **********************************
struct Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics;
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_216_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundscapeColorPlaybackSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSoundscapeColorPlaybackSettings;
// ********** End ScriptStruct FSoundscapeColorPlaybackSettings ************************************

// ********** Begin ScriptStruct FSoundscapeColorVoiceParams ***************************************
struct Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics;
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_240_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundscapeColorVoiceParams_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSoundscapeColorVoiceParams;
// ********** End ScriptStruct FSoundscapeColorVoiceParams *****************************************

// ********** Begin Class USoundscapeColor *********************************************************
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_256_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundscapeColor, NO_API)


struct Z_Construct_UClass_USoundscapeColor_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColor_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_256_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundscapeColor(); \
	friend struct ::Z_Construct_UClass_USoundscapeColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_USoundscapeColor_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapeColor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_USoundscapeColor_NoRegister) \
	DECLARE_SERIALIZER(USoundscapeColor) \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_256_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_256_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapeColor(USoundscapeColor&&) = delete; \
	USoundscapeColor(const USoundscapeColor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeColor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundscapeColor) \
	NO_API virtual ~USoundscapeColor();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_253_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_256_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_256_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_256_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapeColor;

// ********** End Class USoundscapeColor ***********************************************************

// ********** Begin Class UActiveSoundscapeColorVoice **********************************************
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_304_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopLimitedDurationVoice);


struct Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapeColorVoice_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_304_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActiveSoundscapeColorVoice(); \
	friend struct ::Z_Construct_UClass_UActiveSoundscapeColorVoice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_UActiveSoundscapeColorVoice_NoRegister(); \
public: \
	DECLARE_CLASS2(UActiveSoundscapeColorVoice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_UActiveSoundscapeColorVoice_NoRegister) \
	DECLARE_SERIALIZER(UActiveSoundscapeColorVoice)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_304_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundscapeColorVoice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActiveSoundscapeColorVoice(UActiveSoundscapeColorVoice&&) = delete; \
	UActiveSoundscapeColorVoice(const UActiveSoundscapeColorVoice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundscapeColorVoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundscapeColorVoice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundscapeColorVoice) \
	NO_API virtual ~UActiveSoundscapeColorVoice();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_301_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_304_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_304_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_304_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_304_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActiveSoundscapeColorVoice;

// ********** End Class UActiveSoundscapeColorVoice ************************************************

// ********** Begin Class UActiveSoundscapeColor ***************************************************
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateSoundscapeColor); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execOnSoundscapeColorParameterChange);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UActiveSoundscapeColor_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_UActiveSoundscapeColor_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActiveSoundscapeColor(); \
	friend struct ::Z_Construct_UClass_UActiveSoundscapeColor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_UActiveSoundscapeColor_NoRegister(); \
public: \
	DECLARE_CLASS2(UActiveSoundscapeColor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_UActiveSoundscapeColor_NoRegister) \
	DECLARE_SERIALIZER(UActiveSoundscapeColor)


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundscapeColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActiveSoundscapeColor(UActiveSoundscapeColor&&) = delete; \
	UActiveSoundscapeColor(const UActiveSoundscapeColor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundscapeColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundscapeColor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundscapeColor) \
	NO_API virtual ~UActiveSoundscapeColor();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_325_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h_328_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActiveSoundscapeColor;

// ********** End Class UActiveSoundscapeColor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColor_h

// ********** Begin Enum ESoundscapeColorAltitudeClampMode *****************************************
#define FOREACH_ENUM_ESOUNDSCAPECOLORALTITUDECLAMPMODE(op) \
	op(ESoundscapeColorAltitudeClampMode::Relative) \
	op(ESoundscapeColorAltitudeClampMode::Absolute) 

enum class ESoundscapeColorAltitudeClampMode : uint8;
template<> struct TIsUEnumClass<ESoundscapeColorAltitudeClampMode> { enum { Value = true }; };
template<> SOUNDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundscapeColorAltitudeClampMode>();
// ********** End Enum ESoundscapeColorAltitudeClampMode *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
