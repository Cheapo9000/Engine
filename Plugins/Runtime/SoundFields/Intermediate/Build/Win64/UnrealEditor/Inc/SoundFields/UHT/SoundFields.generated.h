// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundFields.h"

#ifdef SOUNDFIELDS_SoundFields_generated_h
#error "SoundFields.generated.h already included, missing '#pragma once' in SoundFields.h"
#endif
#define SOUNDFIELDS_SoundFields_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAmbisonicsEncodingSettings **********************************************
struct Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics;
SOUNDFIELDS_API UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAmbisonicsEncodingSettings(); \
	friend struct ::Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDFIELDS_API UClass* ::Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAmbisonicsEncodingSettings, USoundfieldEncodingSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundFields"), Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister) \
	DECLARE_SERIALIZER(UAmbisonicsEncodingSettings)


#define FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDFIELDS_API UAmbisonicsEncodingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAmbisonicsEncodingSettings(UAmbisonicsEncodingSettings&&) = delete; \
	UAmbisonicsEncodingSettings(const UAmbisonicsEncodingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDFIELDS_API, UAmbisonicsEncodingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmbisonicsEncodingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmbisonicsEncodingSettings) \
	SOUNDFIELDS_API virtual ~UAmbisonicsEncodingSettings();


#define FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAmbisonicsEncodingSettings;

// ********** End Class UAmbisonicsEncodingSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundFields_Source_SoundFields_Public_SoundFields_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
