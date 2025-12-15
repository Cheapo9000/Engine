// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISoundWaveCloudStreaming.h"

#ifdef AUDIOEXTENSIONS_ISoundWaveCloudStreaming_generated_h
#error "ISoundWaveCloudStreaming.generated.h already included, missing '#pragma once' in ISoundWaveCloudStreaming.h"
#endif
#define AUDIOEXTENSIONS_ISoundWaveCloudStreaming_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundWaveCloudStreamingPlatformProjectSettings *******************
struct Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics;
#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformProjectSettings_Statics; \
	AUDIOEXTENSIONS_API static class UScriptStruct* StaticStruct();


struct FSoundWaveCloudStreamingPlatformProjectSettings;
// ********** End ScriptStruct FSoundWaveCloudStreamingPlatformProjectSettings *********************

// ********** Begin ScriptStruct FSoundWaveCloudStreamingPlatformSettings **************************
struct Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics;
#define FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundWaveCloudStreamingPlatformSettings_Statics; \
	AUDIOEXTENSIONS_API static class UScriptStruct* StaticStruct();


struct FSoundWaveCloudStreamingPlatformSettings;
// ********** End ScriptStruct FSoundWaveCloudStreamingPlatformSettings ****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_ISoundWaveCloudStreaming_h

// ********** Begin Enum ESoundWaveCloudStreamingPlatformProjectEnableType *************************
#define FOREACH_ENUM_ESOUNDWAVECLOUDSTREAMINGPLATFORMPROJECTENABLETYPE(op) \
	op(ESoundWaveCloudStreamingPlatformProjectEnableType::Enabled) \
	op(ESoundWaveCloudStreamingPlatformProjectEnableType::Disabled) 

enum class ESoundWaveCloudStreamingPlatformProjectEnableType : uint8;
template<> struct TIsUEnumClass<ESoundWaveCloudStreamingPlatformProjectEnableType> { enum { Value = true }; };
template<> AUDIOEXTENSIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundWaveCloudStreamingPlatformProjectEnableType>();
// ********** End Enum ESoundWaveCloudStreamingPlatformProjectEnableType ***************************

// ********** Begin Enum ESoundWaveCloudStreamingPlatformEnableType ********************************
#define FOREACH_ENUM_ESOUNDWAVECLOUDSTREAMINGPLATFORMENABLETYPE(op) \
	op(ESoundWaveCloudStreamingPlatformEnableType::Inherited) \
	op(ESoundWaveCloudStreamingPlatformEnableType::Disabled) \
	op(ESoundWaveCloudStreamingPlatformEnableType::SWC_MultipleValues) 

enum class ESoundWaveCloudStreamingPlatformEnableType : uint8;
template<> struct TIsUEnumClass<ESoundWaveCloudStreamingPlatformEnableType> { enum { Value = true }; };
template<> AUDIOEXTENSIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESoundWaveCloudStreamingPlatformEnableType>();
// ********** End Enum ESoundWaveCloudStreamingPlatformEnableType **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
