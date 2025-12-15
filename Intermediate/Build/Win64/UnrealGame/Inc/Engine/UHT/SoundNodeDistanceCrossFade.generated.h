// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeDistanceCrossFade.h"

#ifdef ENGINE_SoundNodeDistanceCrossFade_generated_h
#error "SoundNodeDistanceCrossFade.generated.h already included, missing '#pragma once' in SoundNodeDistanceCrossFade.h"
#endif
#define ENGINE_SoundNodeDistanceCrossFade_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDistanceDatum ****************************************************
struct Z_Construct_UScriptStruct_FDistanceDatum_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDistanceDatum_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FDistanceDatum;
// ********** End ScriptStruct FDistanceDatum ******************************************************

// ********** Begin Class USoundNodeDistanceCrossFade **********************************************
struct Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeDistanceCrossFade(); \
	friend struct ::Z_Construct_UClass_USoundNodeDistanceCrossFade_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeDistanceCrossFade, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeDistanceCrossFade_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeDistanceCrossFade)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeDistanceCrossFade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeDistanceCrossFade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeDistanceCrossFade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeDistanceCrossFade); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeDistanceCrossFade(USoundNodeDistanceCrossFade&&) = delete; \
	USoundNodeDistanceCrossFade(const USoundNodeDistanceCrossFade&) = delete; \
	ENGINE_API virtual ~USoundNodeDistanceCrossFade();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_81_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeDistanceCrossFade;

// ********** End Class USoundNodeDistanceCrossFade ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeDistanceCrossFade_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
