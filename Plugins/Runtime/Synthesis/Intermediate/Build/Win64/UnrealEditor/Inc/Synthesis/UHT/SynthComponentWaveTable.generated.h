// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SynthComponents/SynthComponentWaveTable.h"

#ifdef SYNTHESIS_SynthComponentWaveTable_generated_h
#error "SynthComponentWaveTable.generated.h already included, missing '#pragma once' in SynthComponentWaveTable.h"
#endif
#define SYNTHESIS_SynthComponentWaveTable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundWave;
enum class ESamplePlayerSeekType : uint8;

// ********** Begin Delegate FOnSampleLoaded *******************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_23_DELEGATE \
SYNTHESIS_API void FOnSampleLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnSampleLoaded);


// ********** End Delegate FOnSampleLoaded *********************************************************

// ********** Begin Delegate FOnSamplePlaybackProgress *********************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_26_DELEGATE \
SYNTHESIS_API void FOnSamplePlaybackProgress_DelegateWrapper(const FMulticastScriptDelegate& OnSamplePlaybackProgress, float ProgressPercent, float ProgressTimeSeconds);


// ********** End Delegate FOnSamplePlaybackProgress ***********************************************

// ********** Begin Class USynthSamplePlayer *******************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressPercent); \
	DECLARE_FUNCTION(execGetCurrentPlaybackProgressTime); \
	DECLARE_FUNCTION(execGetSampleDuration); \
	DECLARE_FUNCTION(execSetScrubTimeWidth); \
	DECLARE_FUNCTION(execSetScrubMode); \
	DECLARE_FUNCTION(execSeekToTime); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetSoundWave);


struct Z_Construct_UClass_USynthSamplePlayer_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USynthSamplePlayer_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSynthSamplePlayer(); \
	friend struct ::Z_Construct_UClass_USynthSamplePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USynthSamplePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(USynthSamplePlayer, USynthComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USynthSamplePlayer_NoRegister) \
	DECLARE_SERIALIZER(USynthSamplePlayer)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USynthSamplePlayer(USynthSamplePlayer&&) = delete; \
	USynthSamplePlayer(const USynthSamplePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USynthSamplePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USynthSamplePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USynthSamplePlayer)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USynthSamplePlayer;

// ********** End Class USynthSamplePlayer *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SynthComponents_SynthComponentWaveTable_h

// ********** Begin Enum ESamplePlayerSeekType *****************************************************
#define FOREACH_ENUM_ESAMPLEPLAYERSEEKTYPE(op) \
	op(ESamplePlayerSeekType::FromBeginning) \
	op(ESamplePlayerSeekType::FromCurrentPosition) \
	op(ESamplePlayerSeekType::FromEnd) \
	op(ESamplePlayerSeekType::Count) 

enum class ESamplePlayerSeekType : uint8;
template<> struct TIsUEnumClass<ESamplePlayerSeekType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESamplePlayerSeekType>();
// ********** End Enum ESamplePlayerSeekType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
