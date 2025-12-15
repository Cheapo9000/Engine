// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWaveformTransformation.h"

#ifdef AUDIOEXTENSIONS_IWaveformTransformation_generated_h
#error "IWaveformTransformation.generated.h already included, missing '#pragma once' in IWaveformTransformation.h"
#endif
#define AUDIOEXTENSIONS_IWaveformTransformation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundWaveCuePoint ************************************************
struct Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics;
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_65_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics; \
	AUDIOEXTENSIONS_API static class UScriptStruct* StaticStruct();


struct FSoundWaveCuePoint;
// ********** End ScriptStruct FSoundWaveCuePoint **************************************************

// ********** Begin Class UWaveformTransformationBase **********************************************
struct Z_Construct_UClass_UWaveformTransformationBase_Statics;
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase_NoRegister();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformTransformationBase(); \
	friend struct ::Z_Construct_UClass_UWaveformTransformationBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEXTENSIONS_API UClass* ::Z_Construct_UClass_UWaveformTransformationBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveformTransformationBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), Z_Construct_UClass_UWaveformTransformationBase_NoRegister) \
	DECLARE_SERIALIZER(UWaveformTransformationBase)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API UWaveformTransformationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveformTransformationBase(UWaveformTransformationBase&&) = delete; \
	UWaveformTransformationBase(const UWaveformTransformationBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, UWaveformTransformationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformTransformationBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformTransformationBase) \
	AUDIOEXTENSIONS_API virtual ~UWaveformTransformationBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_126_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveformTransformationBase;

// ********** End Class UWaveformTransformationBase ************************************************

// ********** Begin Class UWaveformTransformationChain *********************************************
struct Z_Construct_UClass_UWaveformTransformationChain_Statics;
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationChain_NoRegister();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformTransformationChain(); \
	friend struct ::Z_Construct_UClass_UWaveformTransformationChain_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEXTENSIONS_API UClass* ::Z_Construct_UClass_UWaveformTransformationChain_NoRegister(); \
public: \
	DECLARE_CLASS2(UWaveformTransformationChain, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioExtensions"), Z_Construct_UClass_UWaveformTransformationChain_NoRegister) \
	DECLARE_SERIALIZER(UWaveformTransformationChain)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API UWaveformTransformationChain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWaveformTransformationChain(UWaveformTransformationChain&&) = delete; \
	UWaveformTransformationChain(const UWaveformTransformationChain&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, UWaveformTransformationChain); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformTransformationChain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformTransformationChain) \
	AUDIOEXTENSIONS_API virtual ~UWaveformTransformationChain();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_178_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_181_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWaveformTransformationChain;

// ********** End Class UWaveformTransformationChain ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
