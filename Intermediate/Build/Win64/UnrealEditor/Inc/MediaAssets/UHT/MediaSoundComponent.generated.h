// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaSoundComponent.h"

#ifdef MEDIAASSETS_MediaSoundComponent_generated_h
#error "MediaSoundComponent.generated.h already included, missing '#pragma once' in MediaSoundComponent.h"
#endif
#define MEDIAASSETS_MediaSoundComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
enum class EMediaSoundComponentFFTSize : uint8;
struct FMediaSoundComponentSpectralData;
struct FSoundAttenuationSettings;

// ********** Begin ScriptStruct FMediaSoundComponentSpectralData **********************************
struct Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics;
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMediaSoundComponentSpectralData_Statics; \
	MEDIAASSETS_API static class UScriptStruct* StaticStruct();


struct FMediaSoundComponentSpectralData;
// ********** End ScriptStruct FMediaSoundComponentSpectralData ************************************

// ********** Begin Class UMediaSoundComponent *****************************************************
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnvelopeValue); \
	DECLARE_FUNCTION(execSetEnvelopeFollowingsettings); \
	DECLARE_FUNCTION(execSetEnableEnvelopeFollowing); \
	DECLARE_FUNCTION(execGetNormalizedSpectralData); \
	DECLARE_FUNCTION(execGetSpectralData); \
	DECLARE_FUNCTION(execSetSpectralAnalysisSettings); \
	DECLARE_FUNCTION(execSetEnableSpectralAnalysis); \
	DECLARE_FUNCTION(execSetMediaPlayer); \
	DECLARE_FUNCTION(execGetMediaPlayer); \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply);


struct Z_Construct_UClass_UMediaSoundComponent_Statics;
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_155_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSoundComponent(); \
	friend struct ::Z_Construct_UClass_UMediaSoundComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MEDIAASSETS_API UClass* ::Z_Construct_UClass_UMediaSoundComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMediaSoundComponent, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaAssets"), Z_Construct_UClass_UMediaSoundComponent_NoRegister) \
	DECLARE_SERIALIZER(UMediaSoundComponent)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_155_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMediaSoundComponent(UMediaSoundComponent&&) = delete; \
	UMediaSoundComponent(const UMediaSoundComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaSoundComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSoundComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSoundComponent)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_151_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_155_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_155_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h_155_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMediaSoundComponent;

// ********** End Class UMediaSoundComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaSoundComponent_h

// ********** Begin Enum EMediaSoundChannels *******************************************************
#define FOREACH_ENUM_EMEDIASOUNDCHANNELS(op) \
	op(EMediaSoundChannels::Mono) \
	op(EMediaSoundChannels::Stereo) \
	op(EMediaSoundChannels::Surround) 

enum class EMediaSoundChannels;
template<> struct TIsUEnumClass<EMediaSoundChannels> { enum { Value = true }; };
template<> MEDIAASSETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaSoundChannels>();
// ********** End Enum EMediaSoundChannels *********************************************************

// ********** Begin Enum EMediaSoundComponentFFTSize ***********************************************
#define FOREACH_ENUM_EMEDIASOUNDCOMPONENTFFTSIZE(op) \
	op(EMediaSoundComponentFFTSize::Min_64) \
	op(EMediaSoundComponentFFTSize::Small_256) \
	op(EMediaSoundComponentFFTSize::Medium_512) \
	op(EMediaSoundComponentFFTSize::Large_1024) 

enum class EMediaSoundComponentFFTSize : uint8;
template<> struct TIsUEnumClass<EMediaSoundComponentFFTSize> { enum { Value = true }; };
template<> MEDIAASSETS_NON_ATTRIBUTED_API UEnum* StaticEnum<EMediaSoundComponentFFTSize>();
// ********** End Enum EMediaSoundComponentFFTSize *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
