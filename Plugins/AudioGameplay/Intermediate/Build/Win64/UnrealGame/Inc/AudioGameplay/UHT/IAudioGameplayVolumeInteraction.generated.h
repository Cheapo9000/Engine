// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IAudioGameplayVolumeInteraction.h"

#ifdef AUDIOGAMEPLAY_IAudioGameplayVolumeInteraction_generated_h
#error "IAudioGameplayVolumeInteraction.generated.h already included, missing '#pragma once' in IAudioGameplayVolumeInteraction.h"
#endif
#define AUDIOGAMEPLAY_IAudioGameplayVolumeInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAudioGameplayVolumeInteraction **************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics;
AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioGameplayVolumeInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioGameplayVolumeInteraction(UAudioGameplayVolumeInteraction&&) = delete; \
	UAudioGameplayVolumeInteraction(const UAudioGameplayVolumeInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioGameplayVolumeInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayVolumeInteraction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayVolumeInteraction) \
	virtual ~UAudioGameplayVolumeInteraction() = default;


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioGameplayVolumeInteraction(); \
	friend struct ::Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAY_API UClass* ::Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioGameplayVolumeInteraction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioGameplay"), Z_Construct_UClass_UAudioGameplayVolumeInteraction_NoRegister) \
	DECLARE_SERIALIZER(UAudioGameplayVolumeInteraction)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioGameplayVolumeInteraction() {} \
public: \
	typedef UAudioGameplayVolumeInteraction UClassType; \
	typedef IAudioGameplayVolumeInteraction ThisClass; \
	AUDIOGAMEPLAY_API static void Execute_OnListenerEnter(UObject* O); \
	AUDIOGAMEPLAY_API static void Execute_OnListenerExit(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_20_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioGameplayVolumeInteraction;

// ********** End Interface UAudioGameplayVolumeInteraction ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
