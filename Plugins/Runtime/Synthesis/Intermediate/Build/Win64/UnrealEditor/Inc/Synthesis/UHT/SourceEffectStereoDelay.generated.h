// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectStereoDelay.h"

#ifdef SYNTHESIS_SourceEffectStereoDelay_generated_h
#error "SourceEffectStereoDelay.generated.h already included, missing '#pragma once' in SourceEffectStereoDelay.h"
#endif
#define SYNTHESIS_SourceEffectStereoDelay_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectStereoDelaySettings;

// ********** Begin ScriptStruct FSourceEffectStereoDelaySettings **********************************
struct Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectStereoDelaySettings;
// ********** End ScriptStruct FSourceEffectStereoDelaySettings ************************************

// ********** Begin Class USourceEffectStereoDelayPreset *******************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectStereoDelayPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectStereoDelayPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectStereoDelayPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectStereoDelayPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectStereoDelayPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectStereoDelayPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectStereoDelayPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectStereoDelayPreset(USourceEffectStereoDelayPreset&&) = delete; \
	USourceEffectStereoDelayPreset(const USourceEffectStereoDelayPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectStereoDelayPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectStereoDelayPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectStereoDelayPreset) \
	SYNTHESIS_API virtual ~USourceEffectStereoDelayPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_103_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectStereoDelayPreset;

// ********** End Class USourceEffectStereoDelayPreset *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h

// ********** Begin Enum EStereoDelaySourceEffect **************************************************
#define FOREACH_ENUM_ESTEREODELAYSOURCEEFFECT(op) \
	op(EStereoDelaySourceEffect::Normal) \
	op(EStereoDelaySourceEffect::Cross) \
	op(EStereoDelaySourceEffect::PingPong) \
	op(EStereoDelaySourceEffect::Count) 

enum class EStereoDelaySourceEffect : uint8;
template<> struct TIsUEnumClass<EStereoDelaySourceEffect> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<EStereoDelaySourceEffect>();
// ********** End Enum EStereoDelaySourceEffect ****************************************************

// ********** Begin Enum EStereoDelayFiltertype ****************************************************
#define FOREACH_ENUM_ESTEREODELAYFILTERTYPE(op) \
	op(EStereoDelayFiltertype::Lowpass) \
	op(EStereoDelayFiltertype::Highpass) \
	op(EStereoDelayFiltertype::Bandpass) \
	op(EStereoDelayFiltertype::Notch) \
	op(EStereoDelayFiltertype::Count) 

enum class EStereoDelayFiltertype : uint8;
template<> struct TIsUEnumClass<EStereoDelayFiltertype> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<EStereoDelayFiltertype>();
// ********** End Enum EStereoDelayFiltertype ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
