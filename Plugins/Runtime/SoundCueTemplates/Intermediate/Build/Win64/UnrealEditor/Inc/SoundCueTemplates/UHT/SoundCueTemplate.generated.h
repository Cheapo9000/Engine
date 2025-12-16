// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundCueTemplate.h"

#ifdef SOUNDCUETEMPLATES_SoundCueTemplate_generated_h
#error "SoundCueTemplate.generated.h already included, missing '#pragma once' in SoundCueTemplate.h"
#endif
#define SOUNDCUETEMPLATES_SoundCueTemplate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class USoundCueTemplate ********************************************************
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execAddSoundWavesToTemplate);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_USoundCueTemplate_Statics;
SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueTemplate_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCueTemplate(); \
	friend struct ::Z_Construct_UClass_USoundCueTemplate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDCUETEMPLATES_API UClass* ::Z_Construct_UClass_USoundCueTemplate_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundCueTemplate, USoundCue, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SoundCueTemplates"), Z_Construct_UClass_USoundCueTemplate_NoRegister) \
	DECLARE_SERIALIZER(USoundCueTemplate)


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDCUETEMPLATES_API USoundCueTemplate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCueTemplate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDCUETEMPLATES_API, USoundCueTemplate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCueTemplate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundCueTemplate(USoundCueTemplate&&) = delete; \
	USoundCueTemplate(const USoundCueTemplate&) = delete; \
	SOUNDCUETEMPLATES_API virtual ~USoundCueTemplate();


#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_RPC_WRAPPERS_EOD \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundCueTemplate;

// ********** End Class USoundCueTemplate **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
