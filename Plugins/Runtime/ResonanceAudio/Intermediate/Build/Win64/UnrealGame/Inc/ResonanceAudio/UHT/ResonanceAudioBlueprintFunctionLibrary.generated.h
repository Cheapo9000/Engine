// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResonanceAudioBlueprintFunctionLibrary.h"

#ifdef RESONANCEAUDIO_ResonanceAudioBlueprintFunctionLibrary_generated_h
#error "ResonanceAudioBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in ResonanceAudioBlueprintFunctionLibrary.h"
#endif
#define RESONANCEAUDIO_ResonanceAudioBlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UResonanceAudioReverbPluginPreset;

// ********** Begin Class UResonanceAudioBlueprintFunctionLibrary **********************************
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGlobalReverbPreset); \
	DECLARE_FUNCTION(execSetGlobalReverbPreset);


struct Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics;
RESONANCEAUDIO_API UClass* Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResonanceAudioBlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RESONANCEAUDIO_API UClass* ::Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UResonanceAudioBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ResonanceAudio"), Z_Construct_UClass_UResonanceAudioBlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UResonanceAudioBlueprintFunctionLibrary)


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RESONANCEAUDIO_API UResonanceAudioBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UResonanceAudioBlueprintFunctionLibrary(UResonanceAudioBlueprintFunctionLibrary&&) = delete; \
	UResonanceAudioBlueprintFunctionLibrary(const UResonanceAudioBlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RESONANCEAUDIO_API, UResonanceAudioBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResonanceAudioBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResonanceAudioBlueprintFunctionLibrary) \
	RESONANCEAUDIO_API virtual ~UResonanceAudioBlueprintFunctionLibrary();


#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UResonanceAudioBlueprintFunctionLibrary;

// ********** End Class UResonanceAudioBlueprintFunctionLibrary ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioBlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
