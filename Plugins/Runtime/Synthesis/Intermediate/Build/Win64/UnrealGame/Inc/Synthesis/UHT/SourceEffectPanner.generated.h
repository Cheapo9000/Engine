// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectPanner.h"

#ifdef SYNTHESIS_SourceEffectPanner_generated_h
#error "SourceEffectPanner.generated.h already included, missing '#pragma once' in SourceEffectPanner.h"
#endif
#define SYNTHESIS_SourceEffectPanner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectPannerSettings;

// ********** Begin ScriptStruct FSourceEffectPannerSettings ***************************************
struct Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectPannerSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectPannerSettings;
// ********** End ScriptStruct FSourceEffectPannerSettings *****************************************

// ********** Begin Class USourceEffectPannerPreset ************************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectPannerPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectPannerPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectPannerPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectPannerPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectPannerPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectPannerPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectPannerPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectPannerPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectPannerPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectPannerPreset(USourceEffectPannerPreset&&) = delete; \
	USourceEffectPannerPreset(const USourceEffectPannerPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectPannerPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectPannerPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectPannerPreset) \
	SYNTHESIS_API virtual ~USourceEffectPannerPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_54_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectPannerPreset;

// ********** End Class USourceEffectPannerPreset **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectPanner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
