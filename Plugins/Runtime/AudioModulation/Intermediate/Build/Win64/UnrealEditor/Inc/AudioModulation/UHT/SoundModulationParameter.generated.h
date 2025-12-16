// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundModulationParameter.h"

#ifdef AUDIOMODULATION_SoundModulationParameter_generated_h
#error "SoundModulationParameter.generated.h already included, missing '#pragma once' in SoundModulationParameter.h"
#endif
#define AUDIOMODULATION_SoundModulationParameter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSoundModulationParameterSettings *********************************
struct Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics;
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics; \
	AUDIOMODULATION_API static class UScriptStruct* StaticStruct();


struct FSoundModulationParameterSettings;
// ********** End ScriptStruct FSoundModulationParameterSettings ***********************************

// ********** Begin Class USoundModulationParameter ************************************************
struct Z_Construct_UClass_USoundModulationParameter_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameter_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationParameter(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameter_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameter_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameter)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameter(USoundModulationParameter&&) = delete; \
	USoundModulationParameter(const USoundModulationParameter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameter) \
	AUDIOMODULATION_API virtual ~USoundModulationParameter();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_41_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameter;

// ********** End Class USoundModulationParameter **************************************************

// ********** Begin Class USoundModulationParameterScaled ******************************************
struct Z_Construct_UClass_USoundModulationParameterScaled_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterScaled_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_125_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterScaled(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterScaled_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameterScaled_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterScaled, USoundModulationParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameterScaled_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterScaled)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameterScaled(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterScaled(USoundModulationParameterScaled&&) = delete; \
	USoundModulationParameterScaled(const USoundModulationParameterScaled&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameterScaled); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterScaled); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterScaled) \
	AUDIOMODULATION_API virtual ~USoundModulationParameterScaled();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_122_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_125_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterScaled;

// ********** End Class USoundModulationParameterScaled ********************************************

// ********** Begin Class USoundModulationParameterFrequencyBase ***********************************
struct Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterFrequencyBase_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterFrequencyBase(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameterFrequencyBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterFrequencyBase, USoundModulationParameter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameterFrequencyBase_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterFrequencyBase)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameterFrequencyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterFrequencyBase(USoundModulationParameterFrequencyBase&&) = delete; \
	USoundModulationParameterFrequencyBase(const USoundModulationParameterFrequencyBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameterFrequencyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterFrequencyBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterFrequencyBase) \
	AUDIOMODULATION_API virtual ~USoundModulationParameterFrequencyBase();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_144_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterFrequencyBase;

// ********** End Class USoundModulationParameterFrequencyBase *************************************

// ********** Begin Class USoundModulationParameterFrequency ***************************************
struct Z_Construct_UClass_USoundModulationParameterFrequency_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterFrequency_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterFrequency(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterFrequency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameterFrequency_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterFrequency, USoundModulationParameterFrequencyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameterFrequency_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterFrequency)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameterFrequency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterFrequency(USoundModulationParameterFrequency&&) = delete; \
	USoundModulationParameterFrequency(const USoundModulationParameterFrequency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameterFrequency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterFrequency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterFrequency) \
	AUDIOMODULATION_API virtual ~USoundModulationParameterFrequency();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_156_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterFrequency;

// ********** End Class USoundModulationParameterFrequency *****************************************

// ********** Begin Class USoundModulationParameterFilterFrequency *********************************
struct Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterFilterFrequency_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_185_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterFilterFrequency(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameterFilterFrequency_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterFilterFrequency, USoundModulationParameterFrequencyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameterFilterFrequency_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterFilterFrequency)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_185_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameterFilterFrequency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterFilterFrequency(USoundModulationParameterFilterFrequency&&) = delete; \
	USoundModulationParameterFilterFrequency(const USoundModulationParameterFilterFrequency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameterFilterFrequency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterFilterFrequency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterFilterFrequency) \
	AUDIOMODULATION_API virtual ~USoundModulationParameterFilterFrequency();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_182_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_185_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_185_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterFilterFrequency;

// ********** End Class USoundModulationParameterFilterFrequency ***********************************

// ********** Begin Class USoundModulationParameterLPFFrequency ************************************
struct Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterLPFFrequency_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_204_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterLPFFrequency(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameterLPFFrequency_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterLPFFrequency, USoundModulationParameterFilterFrequency, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameterLPFFrequency_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterLPFFrequency)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_204_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameterLPFFrequency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterLPFFrequency(USoundModulationParameterLPFFrequency&&) = delete; \
	USoundModulationParameterLPFFrequency(const USoundModulationParameterLPFFrequency&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameterLPFFrequency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterLPFFrequency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterLPFFrequency) \
	AUDIOMODULATION_API virtual ~USoundModulationParameterLPFFrequency();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_201_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_204_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_204_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_204_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterLPFFrequency;

// ********** End Class USoundModulationParameterLPFFrequency **************************************

// ********** Begin Class USoundModulationParameterHPFFrequency ************************************
struct Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterHPFFrequency_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_216_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterHPFFrequency(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameterHPFFrequency_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterHPFFrequency, USoundModulationParameterFilterFrequency, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameterHPFFrequency_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterHPFFrequency)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_216_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameterHPFFrequency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterHPFFrequency) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameterHPFFrequency); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterHPFFrequency); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterHPFFrequency(USoundModulationParameterHPFFrequency&&) = delete; \
	USoundModulationParameterHPFFrequency(const USoundModulationParameterHPFFrequency&) = delete; \
	AUDIOMODULATION_API virtual ~USoundModulationParameterHPFFrequency();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_213_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_216_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_216_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_216_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterHPFFrequency;

// ********** End Class USoundModulationParameterHPFFrequency **************************************

// ********** Begin Class USoundModulationParameterBipolar *****************************************
struct Z_Construct_UClass_USoundModulationParameterBipolar_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterBipolar_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_227_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterBipolar(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterBipolar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameterBipolar_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterBipolar, USoundModulationParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameterBipolar_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterBipolar)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_227_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameterBipolar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterBipolar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameterBipolar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterBipolar); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterBipolar(USoundModulationParameterBipolar&&) = delete; \
	USoundModulationParameterBipolar(const USoundModulationParameterBipolar&) = delete; \
	AUDIOMODULATION_API virtual ~USoundModulationParameterBipolar();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_224_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_227_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_227_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_227_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterBipolar;

// ********** End Class USoundModulationParameterBipolar *******************************************

// ********** Begin Class USoundModulationParameterVolume ******************************************
struct Z_Construct_UClass_USoundModulationParameterVolume_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterVolume_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterVolume(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameterVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterVolume, USoundModulationParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameterVolume_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterVolume)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameterVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterVolume(USoundModulationParameterVolume&&) = delete; \
	USoundModulationParameterVolume(const USoundModulationParameterVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameterVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterVolume) \
	AUDIOMODULATION_API virtual ~USoundModulationParameterVolume();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_243_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_246_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterVolume;

// ********** End Class USoundModulationParameterVolume ********************************************

// ********** Begin Class USoundModulationParameterAdditive ****************************************
struct Z_Construct_UClass_USoundModulationParameterAdditive_Statics;
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterAdditive_NoRegister();

#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_265_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModulationParameterAdditive(); \
	friend struct ::Z_Construct_UClass_USoundModulationParameterAdditive_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOMODULATION_API UClass* ::Z_Construct_UClass_USoundModulationParameterAdditive_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModulationParameterAdditive, USoundModulationParameter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioModulation"), Z_Construct_UClass_USoundModulationParameterAdditive_NoRegister) \
	DECLARE_SERIALIZER(USoundModulationParameterAdditive)


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_265_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOMODULATION_API USoundModulationParameterAdditive(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModulationParameterAdditive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOMODULATION_API, USoundModulationParameterAdditive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModulationParameterAdditive); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModulationParameterAdditive(USoundModulationParameterAdditive&&) = delete; \
	USoundModulationParameterAdditive(const USoundModulationParameterAdditive&) = delete; \
	AUDIOMODULATION_API virtual ~USoundModulationParameterAdditive();


#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_262_PROLOG
#define FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_265_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_265_INCLASS \
	FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_265_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModulationParameterAdditive;

// ********** End Class USoundModulationParameterAdditive ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
