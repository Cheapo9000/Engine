// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAudioEndpoint.h"

#ifdef AUDIOEXTENSIONS_IAudioEndpoint_generated_h
#error "IAudioEndpoint.generated.h already included, missing '#pragma once' in IAudioEndpoint.h"
#endif
#define AUDIOEXTENSIONS_IAudioEndpoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioEndpointSettingsBase ***********************************************
struct Z_Construct_UClass_UAudioEndpointSettingsBase_Statics;
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioEndpointSettingsBase(); \
	friend struct ::Z_Construct_UClass_UAudioEndpointSettingsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEXTENSIONS_API UClass* ::Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioEndpointSettingsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister) \
	DECLARE_SERIALIZER(UAudioEndpointSettingsBase)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API UAudioEndpointSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioEndpointSettingsBase(UAudioEndpointSettingsBase&&) = delete; \
	UAudioEndpointSettingsBase(const UAudioEndpointSettingsBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, UAudioEndpointSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioEndpointSettingsBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioEndpointSettingsBase) \
	AUDIOEXTENSIONS_API virtual ~UAudioEndpointSettingsBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_52_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioEndpointSettingsBase;

// ********** End Class UAudioEndpointSettingsBase *************************************************

// ********** Begin Class UDummyEndpointSettings ***************************************************
struct Z_Construct_UClass_UDummyEndpointSettings_Statics;
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UDummyEndpointSettings_NoRegister();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDummyEndpointSettings(); \
	friend struct ::Z_Construct_UClass_UDummyEndpointSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEXTENSIONS_API UClass* ::Z_Construct_UClass_UDummyEndpointSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDummyEndpointSettings, UAudioEndpointSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioExtensions"), Z_Construct_UClass_UDummyEndpointSettings_NoRegister) \
	DECLARE_SERIALIZER(UDummyEndpointSettings)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDummyEndpointSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDummyEndpointSettings(UDummyEndpointSettings&&) = delete; \
	UDummyEndpointSettings(const UDummyEndpointSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDummyEndpointSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDummyEndpointSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDummyEndpointSettings) \
	NO_API virtual ~UDummyEndpointSettings();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_66_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDummyEndpointSettings;

// ********** End Class UDummyEndpointSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
