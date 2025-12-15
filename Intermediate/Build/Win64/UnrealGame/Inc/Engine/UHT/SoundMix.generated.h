// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundMix.h"

#ifdef ENGINE_SoundMix_generated_h
#error "SoundMix.generated.h already included, missing '#pragma once' in SoundMix.h"
#endif
#define ENGINE_SoundMix_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAudioEffectParameters ********************************************
struct Z_Construct_UScriptStruct_FAudioEffectParameters_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioEffectParameters_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FAudioEffectParameters;
// ********** End ScriptStruct FAudioEffectParameters **********************************************

// ********** Begin ScriptStruct FAudioEQEffect ****************************************************
struct Z_Construct_UScriptStruct_FAudioEQEffect_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_45_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAudioEQEffect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAudioEffectParameters Super;


struct FAudioEQEffect;
// ********** End ScriptStruct FAudioEQEffect ******************************************************

// ********** Begin ScriptStruct FSoundClassAdjuster ***********************************************
struct Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_133_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSoundClassAdjuster_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSoundClassAdjuster;
// ********** End ScriptStruct FSoundClassAdjuster *************************************************

// ********** Begin Class USoundMix ****************************************************************
struct Z_Construct_UClass_USoundMix_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_INCLASS \
private: \
	static void StaticRegisterNativesUSoundMix(); \
	friend struct ::Z_Construct_UClass_USoundMix_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundMix_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundMix, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundMix_NoRegister) \
	DECLARE_SERIALIZER(USoundMix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundMix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundMix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMix); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundMix(USoundMix&&) = delete; \
	USoundMix(const USoundMix&) = delete; \
	ENGINE_API virtual ~USoundMix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_171_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h_174_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundMix;

// ********** End Class USoundMix ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundMix_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
