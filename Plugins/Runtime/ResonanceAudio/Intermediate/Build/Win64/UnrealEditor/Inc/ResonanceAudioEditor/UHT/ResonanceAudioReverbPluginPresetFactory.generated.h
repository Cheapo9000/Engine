// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResonanceAudioReverbPluginPresetFactory.h"

#ifdef RESONANCEAUDIOEDITOR_ResonanceAudioReverbPluginPresetFactory_generated_h
#error "ResonanceAudioReverbPluginPresetFactory.generated.h already included, missing '#pragma once' in ResonanceAudioReverbPluginPresetFactory.h"
#endif
#define RESONANCEAUDIOEDITOR_ResonanceAudioReverbPluginPresetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UResonanceAudioReverbPluginPresetFactory *********************************
struct Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics;
RESONANCEAUDIOEDITOR_API UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUResonanceAudioReverbPluginPresetFactory(); \
	friend struct ::Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RESONANCEAUDIOEDITOR_API UClass* ::Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UResonanceAudioReverbPluginPresetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResonanceAudioEditor"), Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_NoRegister) \
	DECLARE_SERIALIZER(UResonanceAudioReverbPluginPresetFactory)


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RESONANCEAUDIOEDITOR_API UResonanceAudioReverbPluginPresetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResonanceAudioReverbPluginPresetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RESONANCEAUDIOEDITOR_API, UResonanceAudioReverbPluginPresetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResonanceAudioReverbPluginPresetFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UResonanceAudioReverbPluginPresetFactory(UResonanceAudioReverbPluginPresetFactory&&) = delete; \
	UResonanceAudioReverbPluginPresetFactory(const UResonanceAudioReverbPluginPresetFactory&) = delete; \
	RESONANCEAUDIOEDITOR_API virtual ~UResonanceAudioReverbPluginPresetFactory();


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UResonanceAudioReverbPluginPresetFactory;

// ********** End Class UResonanceAudioReverbPluginPresetFactory ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
