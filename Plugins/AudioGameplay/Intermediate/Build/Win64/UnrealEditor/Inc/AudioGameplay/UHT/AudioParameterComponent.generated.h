// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioParameterComponent.h"

#ifdef AUDIOGAMEPLAY_AudioParameterComponent_generated_h
#error "AudioParameterComponent.generated.h already included, missing '#pragma once' in AudioParameterComponent.h"
#endif
#define AUDIOGAMEPLAY_AudioParameterComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioParameter;

// ********** Begin Delegate FOnParameterChanged ***************************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_16_DELEGATE \
AUDIOGAMEPLAY_API void FOnParameterChanged_DelegateWrapper(const FMulticastScriptDelegate& OnParameterChanged, FAudioParameter const& Parameter);


// ********** End Delegate FOnParameterChanged *****************************************************

// ********** Begin Class UAudioParameterComponent *************************************************
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetParameters);


struct Z_Construct_UClass_UAudioParameterComponent_Statics;
AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioParameterComponent_NoRegister();

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioParameterComponent(); \
	friend struct ::Z_Construct_UClass_UAudioParameterComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOGAMEPLAY_API UClass* ::Z_Construct_UClass_UAudioParameterComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioParameterComponent, UAudioGameplayComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplay"), Z_Construct_UClass_UAudioParameterComponent_NoRegister) \
	DECLARE_SERIALIZER(UAudioParameterComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioParameterComponent*>(this); }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioParameterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioParameterComponent(UAudioParameterComponent&&) = delete; \
	UAudioParameterComponent(const UAudioParameterComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioParameterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioParameterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioParameterComponent) \
	AUDIOGAMEPLAY_API virtual ~UAudioParameterComponent();


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioParameterComponent;

// ********** End Class UAudioParameterComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
