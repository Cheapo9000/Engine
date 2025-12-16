// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectFoldbackDistortion.h"

#ifdef SYNTHESIS_SourceEffectFoldbackDistortion_generated_h
#error "SourceEffectFoldbackDistortion.generated.h already included, missing '#pragma once' in SourceEffectFoldbackDistortion.h"
#endif
#define SYNTHESIS_SourceEffectFoldbackDistortion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectFoldbackDistortionSettings;

// ********** Begin ScriptStruct FSourceEffectFoldbackDistortionSettings ***************************
struct Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics;
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSourceEffectFoldbackDistortionSettings_Statics; \
	SYNTHESIS_API static class UScriptStruct* StaticStruct();


struct FSourceEffectFoldbackDistortionSettings;
// ********** End ScriptStruct FSourceEffectFoldbackDistortionSettings *****************************

// ********** Begin Class USourceEffectFoldbackDistortionPreset ************************************
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


struct Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics;
SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_NoRegister();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectFoldbackDistortionPreset(); \
	friend struct ::Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SYNTHESIS_API UClass* ::Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USourceEffectFoldbackDistortionPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_NoRegister) \
	DECLARE_SERIALIZER(USourceEffectFoldbackDistortionPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SYNTHESIS_API USourceEffectFoldbackDistortionPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USourceEffectFoldbackDistortionPreset(USourceEffectFoldbackDistortionPreset&&) = delete; \
	USourceEffectFoldbackDistortionPreset(const USourceEffectFoldbackDistortionPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SYNTHESIS_API, USourceEffectFoldbackDistortionPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectFoldbackDistortionPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectFoldbackDistortionPreset) \
	SYNTHESIS_API virtual ~USourceEffectFoldbackDistortionPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_45_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USourceEffectFoldbackDistortionPreset;

// ********** End Class USourceEffectFoldbackDistortionPreset **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFoldbackDistortion_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
