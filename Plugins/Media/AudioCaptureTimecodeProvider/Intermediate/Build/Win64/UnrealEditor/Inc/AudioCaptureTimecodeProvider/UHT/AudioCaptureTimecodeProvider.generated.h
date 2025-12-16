// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioCaptureTimecodeProvider.h"

#ifdef AUDIOCAPTURETIMECODEPROVIDER_AudioCaptureTimecodeProvider_generated_h
#error "AudioCaptureTimecodeProvider.generated.h already included, missing '#pragma once' in AudioCaptureTimecodeProvider.h"
#endif
#define AUDIOCAPTURETIMECODEPROVIDER_AudioCaptureTimecodeProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioCaptureTimecodeProvider ********************************************
struct Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics;
AUDIOCAPTURETIMECODEPROVIDER_API UClass* Z_Construct_UClass_UAudioCaptureTimecodeProvider_NoRegister();

#define FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAudioCaptureTimecodeProvider(); \
	friend struct ::Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOCAPTURETIMECODEPROVIDER_API UClass* ::Z_Construct_UClass_UAudioCaptureTimecodeProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioCaptureTimecodeProvider, UGenlockedTimecodeProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioCaptureTimecodeProvider"), Z_Construct_UClass_UAudioCaptureTimecodeProvider_NoRegister) \
	DECLARE_SERIALIZER(UAudioCaptureTimecodeProvider)


#define FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCaptureTimecodeProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCaptureTimecodeProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCaptureTimecodeProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCaptureTimecodeProvider); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioCaptureTimecodeProvider(UAudioCaptureTimecodeProvider&&) = delete; \
	UAudioCaptureTimecodeProvider(const UAudioCaptureTimecodeProvider&) = delete; \
	NO_API virtual ~UAudioCaptureTimecodeProvider();


#define FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_15_PROLOG
#define FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_18_INCLASS \
	FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioCaptureTimecodeProvider;

// ********** End Class UAudioCaptureTimecodeProvider **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
