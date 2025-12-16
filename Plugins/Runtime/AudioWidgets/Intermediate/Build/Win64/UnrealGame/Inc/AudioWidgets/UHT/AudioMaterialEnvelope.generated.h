// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMaterialSlate/AudioMaterialEnvelope.h"

#ifdef AUDIOWIDGETS_AudioMaterialEnvelope_generated_h
#error "AudioMaterialEnvelope.generated.h already included, missing '#pragma once' in AudioMaterialEnvelope.h"
#endif
#define AUDIOWIDGETS_AudioMaterialEnvelope_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioMaterialEnvelope ***************************************************
struct Z_Construct_UClass_UAudioMaterialEnvelope_Statics;
AUDIOWIDGETS_API UClass* Z_Construct_UClass_UAudioMaterialEnvelope_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMaterialEnvelope(); \
	friend struct ::Z_Construct_UClass_UAudioMaterialEnvelope_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOWIDGETS_API UClass* ::Z_Construct_UClass_UAudioMaterialEnvelope_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioMaterialEnvelope, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), Z_Construct_UClass_UAudioMaterialEnvelope_NoRegister) \
	DECLARE_SERIALIZER(UAudioMaterialEnvelope)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioMaterialEnvelope(UAudioMaterialEnvelope&&) = delete; \
	UAudioMaterialEnvelope(const UAudioMaterialEnvelope&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOWIDGETS_API, UAudioMaterialEnvelope); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMaterialEnvelope); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioMaterialEnvelope) \
	AUDIOWIDGETS_API virtual ~UAudioMaterialEnvelope();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioMaterialEnvelope;

// ********** End Class UAudioMaterialEnvelope *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioMaterialSlate_AudioMaterialEnvelope_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
