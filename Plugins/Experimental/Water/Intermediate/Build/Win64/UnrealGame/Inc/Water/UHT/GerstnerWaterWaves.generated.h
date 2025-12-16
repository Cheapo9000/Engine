// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GerstnerWaterWaves.h"

#ifdef WATER_GerstnerWaterWaves_generated_h
#error "GerstnerWaterWaves.generated.h already included, missing '#pragma once' in GerstnerWaterWaves.h"
#endif
#define WATER_GerstnerWaterWaves_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGerstnerWave;

// ********** Begin ScriptStruct FGerstnerWave *****************************************************
struct Z_Construct_UScriptStruct_FGerstnerWave_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGerstnerWave_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


struct FGerstnerWave;
// ********** End ScriptStruct FGerstnerWave *******************************************************

// ********** Begin ScriptStruct FGerstnerWaveOctave ***********************************************
struct Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics;
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


struct FGerstnerWaveOctave;
// ********** End ScriptStruct FGerstnerWaveOctave *************************************************

// ********** Begin Class UGerstnerWaterWaveGeneratorBase ******************************************
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateGerstnerWaves);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics;
WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorBase(); \
	friend struct ::Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UGerstnerWaterWaveGeneratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_NoRegister) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorBase)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGerstnerWaterWaveGeneratorBase(UGerstnerWaterWaveGeneratorBase&&) = delete; \
	UGerstnerWaterWaveGeneratorBase(const UGerstnerWaterWaveGeneratorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorBase) \
	WATER_API virtual ~UGerstnerWaterWaveGeneratorBase();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_80_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGerstnerWaterWaveGeneratorBase;

// ********** End Class UGerstnerWaterWaveGeneratorBase ********************************************

// ********** Begin Class UGerstnerWaterWaveGeneratorSimple ****************************************
struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics;
WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSimple(); \
	friend struct ::Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_NoRegister(); \
public: \
	DECLARE_CLASS2(UGerstnerWaterWaveGeneratorSimple, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_NoRegister) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSimple)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSimple(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGerstnerWaterWaveGeneratorSimple(UGerstnerWaterWaveGeneratorSimple&&) = delete; \
	UGerstnerWaterWaveGeneratorSimple(const UGerstnerWaterWaveGeneratorSimple&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSimple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSimple); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSimple) \
	WATER_API virtual ~UGerstnerWaterWaveGeneratorSimple();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_95_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGerstnerWaterWaveGeneratorSimple;

// ********** End Class UGerstnerWaterWaveGeneratorSimple ******************************************

// ********** Begin Class UGerstnerWaterWaveGeneratorSpectrum **************************************
struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics;
WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSpectrum(); \
	friend struct ::Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_NoRegister(); \
public: \
	DECLARE_CLASS2(UGerstnerWaterWaveGeneratorSpectrum, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_NoRegister) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSpectrum)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGerstnerWaterWaveGeneratorSpectrum(UGerstnerWaterWaveGeneratorSpectrum&&) = delete; \
	UGerstnerWaterWaveGeneratorSpectrum(const UGerstnerWaterWaveGeneratorSpectrum&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSpectrum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSpectrum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSpectrum) \
	WATER_API virtual ~UGerstnerWaterWaveGeneratorSpectrum();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_150_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGerstnerWaterWaveGeneratorSpectrum;

// ********** End Class UGerstnerWaterWaveGeneratorSpectrum ****************************************

// ********** Begin Class UGerstnerWaterWaves ******************************************************
struct Z_Construct_UClass_UGerstnerWaterWaves_Statics;
WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaves_NoRegister();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaves(); \
	friend struct ::Z_Construct_UClass_UGerstnerWaterWaves_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WATER_API UClass* ::Z_Construct_UClass_UGerstnerWaterWaves_NoRegister(); \
public: \
	DECLARE_CLASS2(UGerstnerWaterWaves, UWaterWaves, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), Z_Construct_UClass_UGerstnerWaterWaves_NoRegister) \
	DECLARE_SERIALIZER(UGerstnerWaterWaves)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_172_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGerstnerWaterWaves(UGerstnerWaterWaves&&) = delete; \
	UGerstnerWaterWaves(const UGerstnerWaterWaves&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaves); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaves); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGerstnerWaterWaves) \
	WATER_API virtual ~UGerstnerWaterWaves();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_169_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_172_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGerstnerWaterWaves;

// ********** End Class UGerstnerWaterWaves ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h

// ********** Begin Enum EWaveSpectrumType *********************************************************
#define FOREACH_ENUM_EWAVESPECTRUMTYPE(op) \
	op(EWaveSpectrumType::Phillips) \
	op(EWaveSpectrumType::PiersonMoskowitz) \
	op(EWaveSpectrumType::JONSWAP) 

enum class EWaveSpectrumType : uint8;
template<> struct TIsUEnumClass<EWaveSpectrumType> { enum { Value = true }; };
template<> WATER_NON_ATTRIBUTED_API UEnum* StaticEnum<EWaveSpectrumType>();
// ********** End Enum EWaveSpectrumType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
