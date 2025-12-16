// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResonanceAudioReverb.h"

#ifdef RESONANCEAUDIO_ResonanceAudioReverb_generated_h
#error "ResonanceAudioReverb.generated.h already included, missing '#pragma once' in ResonanceAudioReverb.h"
#endif
#define RESONANCEAUDIO_ResonanceAudioReverb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERaMaterialName : uint8;

// ********** Begin ScriptStruct FResonanceAudioReverbPluginSettings *******************************
struct Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics;
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings_Statics; \
	RESONANCEAUDIO_API static class UScriptStruct* StaticStruct();


struct FResonanceAudioReverbPluginSettings;
// ********** End ScriptStruct FResonanceAudioReverbPluginSettings *********************************

// ********** Begin Class UResonanceAudioReverbPluginPreset ****************************************
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetReverbBrightness); \
	DECLARE_FUNCTION(execSetReverbTimeModifier); \
	DECLARE_FUNCTION(execSetReverbGain); \
	DECLARE_FUNCTION(execSetReflectionScalar); \
	DECLARE_FUNCTION(execSetRoomMaterials); \
	DECLARE_FUNCTION(execSetRoomDimensions); \
	DECLARE_FUNCTION(execSetRoomRotation); \
	DECLARE_FUNCTION(execSetRoomPosition); \
	DECLARE_FUNCTION(execSetEnableRoomEffects);


struct Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics;
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResonanceAudioReverbPluginPreset(); \
	friend struct ::Z_Construct_UClass_UResonanceAudioReverbPluginPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RESONANCEAUDIO_API UClass* ::Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(UResonanceAudioReverbPluginPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResonanceAudio"), Z_Construct_UClass_UResonanceAudioReverbPluginPreset_NoRegister) \
	DECLARE_SERIALIZER(UResonanceAudioReverbPluginPreset)


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RESONANCEAUDIO_API UResonanceAudioReverbPluginPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UResonanceAudioReverbPluginPreset(UResonanceAudioReverbPluginPreset&&) = delete; \
	UResonanceAudioReverbPluginPreset(const UResonanceAudioReverbPluginPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RESONANCEAUDIO_API, UResonanceAudioReverbPluginPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResonanceAudioReverbPluginPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResonanceAudioReverbPluginPreset) \
	RESONANCEAUDIO_API virtual ~UResonanceAudioReverbPluginPreset();


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_179_PROLOG
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UResonanceAudioReverbPluginPreset;

// ********** End Class UResonanceAudioReverbPluginPreset ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Private_ResonanceAudioReverb_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
