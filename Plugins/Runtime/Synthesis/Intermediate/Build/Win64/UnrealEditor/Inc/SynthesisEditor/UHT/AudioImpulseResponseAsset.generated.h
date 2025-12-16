// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioImpulseResponseAsset.h"

#ifdef SYNTHESISEDITOR_AudioImpulseResponseAsset_generated_h
#error "AudioImpulseResponseAsset.generated.h already included, missing '#pragma once' in AudioImpulseResponseAsset.h"
#endif
#define SYNTHESISEDITOR_AudioImpulseResponseAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioImpulseResponseFactory *********************************************
struct Z_Construct_UClass_UAudioImpulseResponseFactory_Statics;
SYNTHESISEDITOR_API UClass* Z_Construct_UClass_UAudioImpulseResponseFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAudioImpulseResponseFactory(); \
	friend struct ::Z_Construct_UClass_UAudioImpulseResponseFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESISEDITOR_API UClass* ::Z_Construct_UClass_UAudioImpulseResponseFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioImpulseResponseFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SynthesisEditor"), Z_Construct_UClass_UAudioImpulseResponseFactory_NoRegister) \
	DECLARE_SERIALIZER(UAudioImpulseResponseFactory)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESISEDITOR_API UAudioImpulseResponseFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioImpulseResponseFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESISEDITOR_API, UAudioImpulseResponseFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioImpulseResponseFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioImpulseResponseFactory(UAudioImpulseResponseFactory&&) = delete; \
	UAudioImpulseResponseFactory(const UAudioImpulseResponseFactory&) = delete; \
	SYNTHESISEDITOR_API virtual ~UAudioImpulseResponseFactory();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_31_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioImpulseResponseFactory;

// ********** End Class UAudioImpulseResponseFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
