// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundscapeSettings.h"

#ifdef SOUNDSCAPE_SoundscapeSettings_generated_h
#error "SoundscapeSettings.generated.h already included, missing '#pragma once' in SoundscapeSettings.h"
#endif
#define SOUNDSCAPE_SoundscapeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundscapeSettings ******************************************************
struct Z_Construct_UClass_USoundscapeSettings_Statics;
SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSoundscapeSettings(); \
	friend struct ::Z_Construct_UClass_USoundscapeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDSCAPE_API UClass* ::Z_Construct_UClass_USoundscapeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundscapeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Soundscape"), Z_Construct_UClass_USoundscapeSettings_NoRegister) \
	DECLARE_SERIALIZER(USoundscapeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundscapeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundscapeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundscapeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundscapeSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundscapeSettings(USoundscapeSettings&&) = delete; \
	USoundscapeSettings(const USoundscapeSettings&) = delete; \
	NO_API virtual ~USoundscapeSettings();


#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundscapeSettings;

// ********** End Class USoundscapeSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
