// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveformTransformationEffectChain.h"

#ifdef WAVEFORMTRANSFORMATIONS_WaveformTransformationEffectChain_generated_h
#error "WaveformTransformationEffectChain.generated.h already included, missing '#pragma once' in WaveformTransformationEffectChain.h"
#endif
#define WAVEFORMTRANSFORMATIONS_WaveformTransformationEffectChain_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWaveformTransformationEffectChain ***************************************
struct Z_Construct_UClass_UWaveformTransformationEffectChain_Statics;
WAVEFORMTRANSFORMATIONS_API UClass* Z_Construct_UClass_UWaveformTransformationEffectChain_NoRegister();

#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformTransformationEffectChain(); \
	friend struct ::Z_Construct_UClass_UWaveformTransformationEffectChain_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WAVEFORMTRANSFORMATIONS_API UClass* ::Z_Construct_UClass_UWaveformTransformationEffectChain_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveformTransformationEffectChain, UWaveformTransformationBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WaveformTransformations"), Z_Construct_UClass_UWaveformTransformationEffectChain_NoRegister) \
	DECLARE_SERIALIZER(UWaveformTransformationEffectChain)


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WAVEFORMTRANSFORMATIONS_API UWaveformTransformationEffectChain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveformTransformationEffectChain(UWaveformTransformationEffectChain&&) = delete; \
	UWaveformTransformationEffectChain(const UWaveformTransformationEffectChain&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WAVEFORMTRANSFORMATIONS_API, UWaveformTransformationEffectChain); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformTransformationEffectChain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformTransformationEffectChain) \
	WAVEFORMTRANSFORMATIONS_API virtual ~UWaveformTransformationEffectChain();


#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_27_PROLOG
#define FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveformTransformationEffectChain;

// ********** End Class UWaveformTransformationEffectChain *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
