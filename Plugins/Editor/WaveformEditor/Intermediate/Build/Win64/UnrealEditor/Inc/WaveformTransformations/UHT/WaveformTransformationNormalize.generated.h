// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveformTransformationNormalize.h"

#ifdef WAVEFORMTRANSFORMATIONS_WaveformTransformationNormalize_generated_h
#error "WaveformTransformationNormalize.generated.h already included, missing '#pragma once' in WaveformTransformationNormalize.h"
#endif
#define WAVEFORMTRANSFORMATIONS_WaveformTransformationNormalize_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaveformTransformationNormalize *****************************************
struct Z_Construct_UClass_UWaveformTransformationNormalize_Statics;
WAVEFORMTRANSFORMATIONS_API UClass* Z_Construct_UClass_UWaveformTransformationNormalize_NoRegister();

#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformTransformationNormalize(); \
	friend struct ::Z_Construct_UClass_UWaveformTransformationNormalize_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVEFORMTRANSFORMATIONS_API UClass* ::Z_Construct_UClass_UWaveformTransformationNormalize_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveformTransformationNormalize, UWaveformTransformationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveformTransformations"), Z_Construct_UClass_UWaveformTransformationNormalize_NoRegister) \
	DECLARE_SERIALIZER(UWaveformTransformationNormalize)


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WAVEFORMTRANSFORMATIONS_API UWaveformTransformationNormalize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveformTransformationNormalize(UWaveformTransformationNormalize&&) = delete; \
	UWaveformTransformationNormalize(const UWaveformTransformationNormalize&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WAVEFORMTRANSFORMATIONS_API, UWaveformTransformationNormalize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformTransformationNormalize); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformTransformationNormalize) \
	WAVEFORMTRANSFORMATIONS_API virtual ~UWaveformTransformationNormalize();


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_33_PROLOG
#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveformTransformationNormalize;

// ********** End Class UWaveformTransformationNormalize *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationNormalize_h

// ********** Begin Enum ENormalizationMode ********************************************************
#define FOREACH_ENUM_ENORMALIZATIONMODE(op) \
	op(ENormalizationMode::Peak) \
	op(ENormalizationMode::RMS) \
	op(ENormalizationMode::DWeightedLoudness) \
	op(ENormalizationMode::COUNT) 

enum class ENormalizationMode : uint8;
template<> struct TIsUEnumClass<ENormalizationMode> { enum { Value = true }; };
template<> WAVEFORMTRANSFORMATIONS_NON_ATTRIBUTED_API UEnum* StaticEnum<ENormalizationMode>();
// ********** End Enum ENormalizationMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
