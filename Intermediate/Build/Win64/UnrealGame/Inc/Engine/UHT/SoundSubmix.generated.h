// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundSubmix.h"

#ifdef ENGINE_SoundSubmix_generated_h
#error "SoundSubmix.generated.h already included, missing '#pragma once' in SoundSubmix.h"
#endif
#define ENGINE_SoundSubmix_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USoundSubmixBase;
class USoundWave;
enum class EAudioRecordingExportType : uint8;
enum class EAudioSpectrumType : uint8;
enum class EFFTPeakInterpolationMethod : uint8;
enum class EFFTSize : uint8;
enum class EFFTWindowType : uint8;
struct FSoundModulationDestinationSettings;
struct FSoundSubmixSpectralAnalysisBandSettings;

// ********** Begin Delegate FOnSubmixRecordedFileDone *********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_34_DELEGATE \
ENGINE_API void FOnSubmixRecordedFileDone_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixRecordedFileDone, const USoundWave* ResultingSoundWave);


// ********** End Delegate FOnSubmixRecordedFileDone ***********************************************

// ********** Begin Delegate FOnSubmixEnvelope *****************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_39_DELEGATE \
ENGINE_API void FOnSubmixEnvelope_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixEnvelope, TArray<float> const& Envelope);


// ********** End Delegate FOnSubmixEnvelope *******************************************************

// ********** Begin Delegate FOnSubmixSpectralAnalysis *********************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_41_DELEGATE \
ENGINE_API void FOnSubmixSpectralAnalysis_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixSpectralAnalysis, TArray<float> const& Magnitudes);


// ********** End Delegate FOnSubmixSpectralAnalysis ***********************************************

// ********** Begin ScriptStruct FDynamicChildSubmix ***********************************************
struct Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDynamicChildSubmix;
// ********** End ScriptStruct FDynamicChildSubmix *************************************************

// ********** Begin Class USoundSubmixBase *********************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFindDynamicAncestor); \
	DECLARE_FUNCTION(execDynamicDisconnect); \
	DECLARE_FUNCTION(execDynamicConnect);


struct Z_Construct_UClass_USoundSubmixBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixBase(); \
	friend struct ::Z_Construct_UClass_USoundSubmixBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundSubmixBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSubmixBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundSubmixBase_NoRegister) \
	DECLARE_SERIALIZER(USoundSubmixBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundSubmixBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundSubmixBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSubmixBase(USoundSubmixBase&&) = delete; \
	USoundSubmixBase(const USoundSubmixBase&) = delete; \
	ENGINE_API virtual ~USoundSubmixBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_172_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSubmixBase;

// ********** End Class USoundSubmixBase ***********************************************************

// ********** Begin Class USoundSubmixWithParentBase ***********************************************
struct Z_Construct_UClass_USoundSubmixWithParentBase_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixWithParentBase(); \
	friend struct ::Z_Construct_UClass_USoundSubmixWithParentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSubmixWithParentBase, USoundSubmixBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundSubmixWithParentBase_NoRegister) \
	DECLARE_SERIALIZER(USoundSubmixWithParentBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundSubmixWithParentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixWithParentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundSubmixWithParentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixWithParentBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSubmixWithParentBase(USoundSubmixWithParentBase&&) = delete; \
	USoundSubmixWithParentBase(const USoundSubmixWithParentBase&) = delete; \
	ENGINE_API virtual ~USoundSubmixWithParentBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_271_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSubmixWithParentBase;

// ********** End Class USoundSubmixWithParentBase *************************************************

// ********** Begin Class USoundSubmix *************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetDryVolumeModulation); \
	DECLARE_FUNCTION(execSetWetVolumeModulation); \
	DECLARE_FUNCTION(execSetOutputVolumeModulation); \
	DECLARE_FUNCTION(execSetSubmixDryLevel); \
	DECLARE_FUNCTION(execSetSubmixWetLevel); \
	DECLARE_FUNCTION(execSetSubmixOutputVolume); \
	DECLARE_FUNCTION(execStopSpectralAnalysis); \
	DECLARE_FUNCTION(execStartSpectralAnalysis); \
	DECLARE_FUNCTION(execRemoveSpectralAnalysisDelegate); \
	DECLARE_FUNCTION(execAddSpectralAnalysisDelegate); \
	DECLARE_FUNCTION(execRemoveEnvelopeFollowerDelegate); \
	DECLARE_FUNCTION(execAddEnvelopeFollowerDelegate); \
	DECLARE_FUNCTION(execStopEnvelopeFollowing); \
	DECLARE_FUNCTION(execStartEnvelopeFollowing); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundSubmix, ENGINE_API)


struct Z_Construct_UClass_USoundSubmix_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmix(); \
	friend struct ::Z_Construct_UClass_USoundSubmix_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundSubmix_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundSubmix_NoRegister) \
	DECLARE_SERIALIZER(USoundSubmix) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmix); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSubmix(USoundSubmix&&) = delete; \
	USoundSubmix(const USoundSubmix&) = delete; \
	ENGINE_API virtual ~USoundSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_332_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSubmix;

// ********** End Class USoundSubmix ***************************************************************

// ********** Begin Class USoundfieldSubmix ********************************************************
struct Z_Construct_UClass_USoundfieldSubmix_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundfieldSubmix_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_522_INCLASS \
private: \
	static void StaticRegisterNativesUSoundfieldSubmix(); \
	friend struct ::Z_Construct_UClass_USoundfieldSubmix_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundfieldSubmix_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundfieldSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundfieldSubmix_NoRegister) \
	DECLARE_SERIALIZER(USoundfieldSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_522_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundfieldSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundfieldSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldSubmix); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundfieldSubmix(USoundfieldSubmix&&) = delete; \
	USoundfieldSubmix(const USoundfieldSubmix&) = delete; \
	ENGINE_API virtual ~USoundfieldSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_519_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_522_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_522_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_522_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundfieldSubmix;

// ********** End Class USoundfieldSubmix **********************************************************

// ********** Begin Class UEndpointSubmix **********************************************************
struct Z_Construct_UClass_UEndpointSubmix_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEndpointSubmix_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_569_INCLASS \
private: \
	static void StaticRegisterNativesUEndpointSubmix(); \
	friend struct ::Z_Construct_UClass_UEndpointSubmix_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEndpointSubmix_NoRegister(); \
public: \
	DECLARE_CLASS2(UEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEndpointSubmix_NoRegister) \
	DECLARE_SERIALIZER(UEndpointSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_569_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndpointSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEndpointSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndpointSubmix); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEndpointSubmix(UEndpointSubmix&&) = delete; \
	UEndpointSubmix(const UEndpointSubmix&) = delete; \
	ENGINE_API virtual ~UEndpointSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_566_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_569_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_569_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_569_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEndpointSubmix;

// ********** End Class UEndpointSubmix ************************************************************

// ********** Begin Class USoundfieldEndpointSubmix ************************************************
struct Z_Construct_UClass_USoundfieldEndpointSubmix_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_600_INCLASS \
private: \
	static void StaticRegisterNativesUSoundfieldEndpointSubmix(); \
	friend struct ::Z_Construct_UClass_USoundfieldEndpointSubmix_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundfieldEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundfieldEndpointSubmix_NoRegister) \
	DECLARE_SERIALIZER(USoundfieldEndpointSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_600_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundfieldEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldEndpointSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundfieldEndpointSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldEndpointSubmix); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundfieldEndpointSubmix(USoundfieldEndpointSubmix&&) = delete; \
	USoundfieldEndpointSubmix(const USoundfieldEndpointSubmix&) = delete; \
	ENGINE_API virtual ~USoundfieldEndpointSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_597_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_600_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_600_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_600_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundfieldEndpointSubmix;

// ********** End Class USoundfieldEndpointSubmix **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h

// ********** Begin Enum EFFTSize ******************************************************************
#define FOREACH_ENUM_EFFTSIZE(op) \
	op(EFFTSize::DefaultSize) \
	op(EFFTSize::Min) \
	op(EFFTSize::Small) \
	op(EFFTSize::Medium) \
	op(EFFTSize::Large) \
	op(EFFTSize::VeryLarge) \
	op(EFFTSize::Max) 

enum class EFFTSize : uint8;
template<> struct TIsUEnumClass<EFFTSize> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFFTSize>();
// ********** End Enum EFFTSize ********************************************************************

// ********** Begin Enum EFFTPeakInterpolationMethod ***********************************************
#define FOREACH_ENUM_EFFTPEAKINTERPOLATIONMETHOD(op) \
	op(EFFTPeakInterpolationMethod::NearestNeighbor) \
	op(EFFTPeakInterpolationMethod::Linear) \
	op(EFFTPeakInterpolationMethod::Quadratic) \
	op(EFFTPeakInterpolationMethod::ConstantQ) 

enum class EFFTPeakInterpolationMethod : uint8;
template<> struct TIsUEnumClass<EFFTPeakInterpolationMethod> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFFTPeakInterpolationMethod>();
// ********** End Enum EFFTPeakInterpolationMethod *************************************************

// ********** Begin Enum EFFTWindowType ************************************************************
#define FOREACH_ENUM_EFFTWINDOWTYPE(op) \
	op(EFFTWindowType::None) \
	op(EFFTWindowType::Hamming) \
	op(EFFTWindowType::Hann) \
	op(EFFTWindowType::Blackman) 

enum class EFFTWindowType : uint8;
template<> struct TIsUEnumClass<EFFTWindowType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EFFTWindowType>();
// ********** End Enum EFFTWindowType **************************************************************

// ********** Begin Enum EAudioSpectrumType ********************************************************
#define FOREACH_ENUM_EAUDIOSPECTRUMTYPE(op) \
	op(EAudioSpectrumType::MagnitudeSpectrum) \
	op(EAudioSpectrumType::PowerSpectrum) \
	op(EAudioSpectrumType::Decibel) 

enum class EAudioSpectrumType : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EAudioSpectrumType>();
// ********** End Enum EAudioSpectrumType **********************************************************

// ********** Begin Enum EGainParamMode ************************************************************
#define FOREACH_ENUM_EGAINPARAMMODE(op) \
	op(EGainParamMode::Linear) \
	op(EGainParamMode::Decibels) 

enum class EGainParamMode : uint8;
template<> struct TIsUEnumClass<EGainParamMode> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGainParamMode>();
// ********** End Enum EGainParamMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
