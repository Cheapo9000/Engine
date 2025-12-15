// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeRandom.h"

#ifdef ENGINE_SoundNodeRandom_generated_h
#error "SoundNodeRandom.generated.h already included, missing '#pragma once' in SoundNodeRandom.h"
#endif
#define ENGINE_SoundNodeRandom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeRandom *********************************************************
struct Z_Construct_UClass_USoundNodeRandom_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeRandom_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeRandom(); \
	friend struct ::Z_Construct_UClass_USoundNodeRandom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeRandom_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeRandom, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeRandom_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeRandom)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeRandom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeRandom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeRandom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeRandom); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeRandom(USoundNodeRandom&&) = delete; \
	USoundNodeRandom(const USoundNodeRandom&) = delete; \
	ENGINE_API virtual ~USoundNodeRandom();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeRandom;

// ********** End Class USoundNodeRandom ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeRandom_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
