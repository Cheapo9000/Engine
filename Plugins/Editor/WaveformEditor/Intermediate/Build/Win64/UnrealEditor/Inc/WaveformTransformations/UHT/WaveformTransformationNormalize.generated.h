// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveformTransformationNormalize.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WAVEFORMTRANSFORMATIONS_WaveformTransformationNormalize_generated_h
#error "WaveformTransformationNormalize.generated.h already included, missing '#pragma once' in WaveformTransformationNormalize.h"
#endif
#define WAVEFORMTRANSFORMATIONS_WaveformTransformationNormalize_generated_h

#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformTransformationNormalize(); \
	friend struct Z_Construct_UClass_UWaveformTransformationNormalize_Statics; \
public: \
	DECLARE_CLASS(UWaveformTransformationNormalize, UWaveformTransformationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveformTransformations"), NO_API) \
	DECLARE_SERIALIZER(UWaveformTransformationNormalize)


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaveformTransformationNormalize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveformTransformationNormalize(UWaveformTransformationNormalize&&); \
	UWaveformTransformationNormalize(const UWaveformTransformationNormalize&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaveformTransformationNormalize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformTransformationNormalize); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformTransformationNormalize) \
	NO_API virtual ~UWaveformTransformationNormalize();


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_31_PROLOG
#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WAVEFORMTRANSFORMATIONS_API UClass* StaticClass<class UWaveformTransformationNormalize>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h


#define FOREACH_ENUM_ENORMALIZATIONMODE(op) \
	op(ENormalizationMode::Peak) \
	op(ENormalizationMode::RMS) \
	op(ENormalizationMode::DWeightedLoudness) \
	op(ENormalizationMode::COUNT) 

enum class ENormalizationMode : uint8;
template<> struct TIsUEnumClass<ENormalizationMode> { enum { Value = true }; };
template<> WAVEFORMTRANSFORMATIONS_API UEnum* StaticEnum<ENormalizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
