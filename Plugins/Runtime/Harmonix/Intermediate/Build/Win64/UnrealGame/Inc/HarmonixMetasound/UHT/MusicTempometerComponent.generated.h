// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/Components/MusicTempometerComponent.h"

#ifdef HARMONIXMETASOUND_MusicTempometerComponent_generated_h
#error "MusicTempometerComponent.generated.h already included, missing '#pragma once' in MusicTempometerComponent.h"
#endif
#define HARMONIXMETASOUND_MusicTempometerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialParameterCollection;
class UMusicClockComponent;
struct FMidiSongPos;
struct FMusicTimestamp;

// ********** Begin Class UMusicTempometerComponent ************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicTempometerComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetClockNoMutex); \
	DECLARE_FUNCTION(execGetClock); \
	DECLARE_FUNCTION(execSetClockFromActor); \
	DECLARE_FUNCTION(execSetClock); \
	DECLARE_FUNCTION(execGetMaterialParameterCollection); \
	DECLARE_FUNCTION(execSetMaterialParameterCollection); \
	DECLARE_FUNCTION(execGetTempo); \
	DECLARE_FUNCTION(execGetTimeSignatureDenominator); \
	DECLARE_FUNCTION(execGetTimeSignatureNumerator); \
	DECLARE_FUNCTION(execGetBeatProgress); \
	DECLARE_FUNCTION(execGetBarProgress); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetSecondsFromBarOne); \
	DECLARE_FUNCTION(execGetBeatsIncludingCountIn); \
	DECLARE_FUNCTION(execGetBarsIncludingCountIn); \
	DECLARE_FUNCTION(execGetSecondsIncludingCountIn); \
	DECLARE_FUNCTION(execGetPreviousFrameSongPos); \
	DECLARE_FUNCTION(execGetSongPos);


struct Z_Construct_UClass_UMusicTempometerComponent_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UMusicTempometerComponent_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicTempometerComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusicTempometerComponent(); \
	friend struct ::Z_Construct_UClass_UMusicTempometerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UMusicTempometerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicTempometerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UMusicTempometerComponent_NoRegister) \
	DECLARE_SERIALIZER(UMusicTempometerComponent)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicTempometerComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicTempometerComponent(UMusicTempometerComponent&&) = delete; \
	UMusicTempometerComponent(const UMusicTempometerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMETASOUND_API, UMusicTempometerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicTempometerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMusicTempometerComponent) \
	HARMONIXMETASOUND_API virtual ~UMusicTempometerComponent();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicTempometerComponent_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicTempometerComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicTempometerComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicTempometerComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicTempometerComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicTempometerComponent;

// ********** End Class UMusicTempometerComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_Components_MusicTempometerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
