// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixDsp/FusionSampler/FusionPatch.h"

#ifdef HARMONIXDSP_FusionPatch_generated_h
#error "FusionPatch.generated.h already included, missing '#pragma once' in FusionPatch.h"
#endif
#define HARMONIXDSP_FusionPatch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFusionPatch;
enum class EFusionPatchAudioLoadResult : uint8;

// ********** Begin ScriptStruct FFusionPatchData **************************************************
struct Z_Construct_UScriptStruct_FFusionPatchData_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFusionPatchData_Statics; \
	HARMONIXDSP_API static class UScriptStruct* StaticStruct();


struct FFusionPatchData;
// ********** End ScriptStruct FFusionPatchData ****************************************************

// ********** Begin Delegate FOnFusionPatchLoadComplete ********************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_64_DELEGATE \
HARMONIXDSP_API void FOnFusionPatchLoadComplete_DelegateWrapper(const FScriptDelegate& OnFusionPatchLoadComplete, const UFusionPatch* LoadedFusionPatch, EFusionPatchAudioLoadResult LoadResult);


// ********** End Delegate FOnFusionPatchLoadComplete **********************************************

// ********** Begin Class UFusionPatch *************************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_69_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFusionPatch, HARMONIXDSP_API)


struct Z_Construct_UClass_UFusionPatch_Statics;
HARMONIXDSP_API UClass* Z_Construct_UClass_UFusionPatch_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFusionPatch(); \
	friend struct ::Z_Construct_UClass_UFusionPatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXDSP_API UClass* ::Z_Construct_UClass_UFusionPatch_NoRegister(); \
public: \
	DECLARE_CLASS2(UFusionPatch, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixDsp"), Z_Construct_UClass_UFusionPatch_NoRegister) \
	DECLARE_SERIALIZER(UFusionPatch) \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_69_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFusionPatch(UFusionPatch&&) = delete; \
	UFusionPatch(const UFusionPatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXDSP_API, UFusionPatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFusionPatch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFusionPatch) \
	HARMONIXDSP_API virtual ~UFusionPatch();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_66_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFusionPatch;

// ********** End Class UFusionPatch ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixDsp_Public_HarmonixDsp_FusionSampler_FusionPatch_h

// ********** Begin Enum EFusionPatchAudioLoadResult ***********************************************
#define FOREACH_ENUM_EFUSIONPATCHAUDIOLOADRESULT(op) \
	op(EFusionPatchAudioLoadResult::Success) \
	op(EFusionPatchAudioLoadResult::Fail) \
	op(EFusionPatchAudioLoadResult::Cancelled) 

enum class EFusionPatchAudioLoadResult : uint8;
template<> struct TIsUEnumClass<EFusionPatchAudioLoadResult> { enum { Value = true }; };
template<> HARMONIXDSP_NON_ATTRIBUTED_API UEnum* StaticEnum<EFusionPatchAudioLoadResult>();
// ********** End Enum EFusionPatchAudioLoadResult *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
