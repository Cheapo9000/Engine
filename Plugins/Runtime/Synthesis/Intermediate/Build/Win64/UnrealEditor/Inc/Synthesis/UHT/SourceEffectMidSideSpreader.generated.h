// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectMidSideSpreader.h"

#ifdef SYNTHESIS_SourceEffectMidSideSpreader_generated_h
#error "SourceEffectMidSideSpreader.generated.h already included, missing '#pragma once' in SourceEffectMidSideSpreader.h"
#endif
#define SYNTHESIS_SourceEffectMidSideSpreader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectMidSideSpreaderSettings;

// ********** Begin ScriptStruct FSourceEffectMidSideSpreaderSettings ******************************
struct Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectMidSideSpreaderSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectMidSideSpreaderSettings;
// ********** End ScriptStruct FSourceEffectMidSideSpreaderSettings ********************************

// ********** Begin Class USourceEffectMidSideSpreaderPreset ***************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectMidSideSpreaderPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectMidSideSpreaderPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectMidSideSpreaderPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectMidSideSpreaderPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectMidSideSpreaderPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectMidSideSpreaderPreset(USourceEffectMidSideSpreaderPreset&&) = delete; \
	USourceEffectMidSideSpreaderPreset(const USourceEffectMidSideSpreaderPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectMidSideSpreaderPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectMidSideSpreaderPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectMidSideSpreaderPreset) \
	SYNTHESIS_API virtual ~USourceEffectMidSideSpreaderPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_82_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectMidSideSpreaderPreset;

// ********** End Class USourceEffectMidSideSpreaderPreset *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMidSideSpreader_h

// ********** Begin Enum EStereoChannelMode ********************************************************
#define FOREACH_ENUM_ESTEREOCHANNELMODE(op) \
	op(EStereoChannelMode::MidSide) \
	op(EStereoChannelMode::LeftRight) \
	op(EStereoChannelMode::count) 

enum class EStereoChannelMode : uint8;
template<> struct TIsUEnumClass<EStereoChannelMode> { enum { Value = true }; };
template<> SYNTHESIS_NON_ATTRIBUTED_API UEnum* StaticEnum<EStereoChannelMode>();
// ********** End Enum EStereoChannelMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
