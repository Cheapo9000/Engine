// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectEnvelopeFollower.h"

#ifdef SYNTHESIS_SourceEffectEnvelopeFollower_generated_h
#error "SourceEffectEnvelopeFollower.generated.h already included, missing '#pragma once' in SourceEffectEnvelopeFollower.h"
#endif
#define SYNTHESIS_SourceEffectEnvelopeFollower_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnvelopeFollowerListener;
struct FSourceEffectEnvelopeFollowerSettings;

// ********** Begin ScriptStruct FSourceEffectEnvelopeFollowerSettings *****************************
struct Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectEnvelopeFollowerSettings;
// ********** End ScriptStruct FSourceEffectEnvelopeFollowerSettings *******************************

// ********** Begin Delegate FOnEnvelopeFollowerUpdate *********************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_77_DELEGATE \
SYNTHESIS_API void FOnEnvelopeFollowerUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnEnvelopeFollowerUpdate, float EnvelopeValue);


// ********** End Delegate FOnEnvelopeFollowerUpdate ***********************************************

// ********** Begin Class UEnvelopeFollowerListener ************************************************
struct Z_Construct_UClass_UEnvelopeFollowerListener_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvelopeFollowerListener(); \
	friend struct ::Z_Construct_UClass_UEnvelopeFollowerListener_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvelopeFollowerListener, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_UEnvelopeFollowerListener_NoRegister) \
	DECLARE_SERIALIZER(UEnvelopeFollowerListener)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_88_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvelopeFollowerListener(UEnvelopeFollowerListener&&) = delete; \
	UEnvelopeFollowerListener(const UEnvelopeFollowerListener&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, UEnvelopeFollowerListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvelopeFollowerListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvelopeFollowerListener)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_85_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvelopeFollowerListener;

// ********** End Class UEnvelopeFollowerListener **************************************************

// ********** Begin Class USourceEffectEnvelopeFollowerPreset **************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterEnvelopeFollowerListener); \
	DECLARE_FUNCTION(execRegisterEnvelopeFollowerListener); \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectEnvelopeFollowerPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectEnvelopeFollowerPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_131_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectEnvelopeFollowerPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectEnvelopeFollowerPreset(USourceEffectEnvelopeFollowerPreset&&) = delete; \
	USourceEffectEnvelopeFollowerPreset(const USourceEffectEnvelopeFollowerPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectEnvelopeFollowerPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectEnvelopeFollowerPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectEnvelopeFollowerPreset) \
	SYNTHESIS_API virtual ~USourceEffectEnvelopeFollowerPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_128_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_131_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_131_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectEnvelopeFollowerPreset;

// ********** End Class USourceEffectEnvelopeFollowerPreset ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h

// ********** Begin Enum EEnvelopeFollowerPeakMode *************************************************
#define FOREACH_ENUM_EENVELOPEFOLLOWERPEAKMODE(op) \
	op(EEnvelopeFollowerPeakMode::MeanSquared) \
	op(EEnvelopeFollowerPeakMode::RootMeanSquared) \
	op(EEnvelopeFollowerPeakMode::Peak) \
	op(EEnvelopeFollowerPeakMode::Count) 

enum class EEnvelopeFollowerPeakMode : uint8;
template<> struct TIsUEnumClass<EEnvelopeFollowerPeakMode> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<EEnvelopeFollowerPeakMode>();
// ********** End Enum EEnvelopeFollowerPeakMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
