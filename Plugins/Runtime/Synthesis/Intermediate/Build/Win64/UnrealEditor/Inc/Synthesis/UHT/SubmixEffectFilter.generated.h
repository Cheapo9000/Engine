// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectFilter.h"

#ifdef SYNTHESIS_SubmixEffectFilter_generated_h
#error "SubmixEffectFilter.generated.h already included, missing '#pragma once' in SubmixEffectFilter.h"
#endif
#define SYNTHESIS_SubmixEffectFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESubmixFilterAlgorithm : uint8;
enum class ESubmixFilterType : uint8;
struct FSubmixEffectFilterSettings;

// ********** Begin ScriptStruct FSubmixEffectFilterSettings ***************************************
struct Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSubmixEffectFilterSettings;
// ********** End ScriptStruct FSubmixEffectFilterSettings *****************************************

// ********** Begin Class USubmixEffectFilterPreset ************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequency); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USubmixEffectFilterPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectFilterPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectFilterPreset(); \
	friend struct ::Z_Construct_UClass_USubmixEffectFilterPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USubmixEffectFilterPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USubmixEffectFilterPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USubmixEffectFilterPreset_NoRegister) \
	DECLARE_SERIALIZER(USubmixEffectFilterPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_126_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USubmixEffectFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubmixEffectFilterPreset(USubmixEffectFilterPreset&&) = delete; \
	USubmixEffectFilterPreset(const USubmixEffectFilterPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USubmixEffectFilterPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectFilterPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectFilterPreset) \
	SYNTHESIS_API virtual ~USubmixEffectFilterPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_123_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_126_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubmixEffectFilterPreset;

// ********** End Class USubmixEffectFilterPreset **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h

// ********** Begin Enum ESubmixFilterType *********************************************************
#define FOREACH_ENUM_ESUBMIXFILTERTYPE(op) \
	op(ESubmixFilterType::LowPass) \
	op(ESubmixFilterType::HighPass) \
	op(ESubmixFilterType::BandPass) \
	op(ESubmixFilterType::BandStop) \
	op(ESubmixFilterType::Count) 

enum class ESubmixFilterType : uint8;
template<> struct TIsUEnumClass<ESubmixFilterType> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubmixFilterType>();
// ********** End Enum ESubmixFilterType ***********************************************************

// ********** Begin Enum ESubmixFilterAlgorithm ****************************************************
#define FOREACH_ENUM_ESUBMIXFILTERALGORITHM(op) \
	op(ESubmixFilterAlgorithm::OnePole) \
	op(ESubmixFilterAlgorithm::StateVariable) \
	op(ESubmixFilterAlgorithm::Ladder) \
	op(ESubmixFilterAlgorithm::Count) 

enum class ESubmixFilterAlgorithm : uint8;
template<> struct TIsUEnumClass<ESubmixFilterAlgorithm> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESubmixFilterAlgorithm>();
// ********** End Enum ESubmixFilterAlgorithm ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
