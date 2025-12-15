// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeParamCrossFade.h"

#ifdef ENGINE_SoundNodeParamCrossFade_generated_h
#error "SoundNodeParamCrossFade.generated.h already included, missing '#pragma once' in SoundNodeParamCrossFade.h"
#endif
#define ENGINE_SoundNodeParamCrossFade_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeParamCrossFade *************************************************
struct Z_Construct_UClass_USoundNodeParamCrossFade_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeParamCrossFade(); \
	friend struct ::Z_Construct_UClass_USoundNodeParamCrossFade_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeParamCrossFade, USoundNodeDistanceCrossFade, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeParamCrossFade_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeParamCrossFade)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeParamCrossFade(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeParamCrossFade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeParamCrossFade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeParamCrossFade); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeParamCrossFade(USoundNodeParamCrossFade&&) = delete; \
	USoundNodeParamCrossFade(const USoundNodeParamCrossFade&) = delete; \
	ENGINE_API virtual ~USoundNodeParamCrossFade();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeParamCrossFade;

// ********** End Class USoundNodeParamCrossFade ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeParamCrossFade_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
