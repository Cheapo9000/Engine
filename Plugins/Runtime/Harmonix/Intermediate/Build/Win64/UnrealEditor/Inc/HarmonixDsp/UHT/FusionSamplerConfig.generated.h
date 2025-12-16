// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/FusionSampler/FusionSamplerConfig.h"

#ifdef HARMONIXDSP_FusionSamplerConfig_generated_h
#error "FusionSamplerConfig.generated.h already included, missing '#pragma once' in FusionSamplerConfig.h"
#endif
#define HARMONIXDSP_FusionSamplerConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFusionSamplerConfig *****************************************************
struct Z_Construct_UClass_UFusionSamplerConfig_Statics;
HARMONIXDSP_API UClass* Z_Construct_UClass_UFusionSamplerConfig_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionSamplerConfig_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFusionSamplerConfig(); \
	friend struct ::Z_Construct_UClass_UFusionSamplerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXDSP_API UClass* ::Z_Construct_UClass_UFusionSamplerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UFusionSamplerConfig, UHarmonixDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HarmonixDsp"), Z_Construct_UClass_UFusionSamplerConfig_NoRegister) \
	DECLARE_SERIALIZER(UFusionSamplerConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionSamplerConfig_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIXDSP_API UFusionSamplerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFusionSamplerConfig(UFusionSamplerConfig&&) = delete; \
	UFusionSamplerConfig(const UFusionSamplerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXDSP_API, UFusionSamplerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFusionSamplerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFusionSamplerConfig) \
	HARMONIXDSP_API virtual ~UFusionSamplerConfig();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionSamplerConfig_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionSamplerConfig_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionSamplerConfig_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionSamplerConfig_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFusionSamplerConfig;

// ********** End Class UFusionSamplerConfig *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionSamplerConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
