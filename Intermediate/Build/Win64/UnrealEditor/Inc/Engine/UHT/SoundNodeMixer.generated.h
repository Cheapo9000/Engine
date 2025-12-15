// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeMixer.h"

#ifdef ENGINE_SoundNodeMixer_generated_h
#error "SoundNodeMixer.generated.h already included, missing '#pragma once' in SoundNodeMixer.h"
#endif
#define ENGINE_SoundNodeMixer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeMixer **********************************************************
struct Z_Construct_UClass_USoundNodeMixer_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeMixer_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeMixer(); \
	friend struct ::Z_Construct_UClass_USoundNodeMixer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeMixer_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeMixer, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeMixer_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeMixer)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeMixer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeMixer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeMixer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeMixer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeMixer(USoundNodeMixer&&) = delete; \
	USoundNodeMixer(const USoundNodeMixer&) = delete; \
	ENGINE_API virtual ~USoundNodeMixer();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeMixer;

// ********** End Class USoundNodeMixer ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeMixer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
