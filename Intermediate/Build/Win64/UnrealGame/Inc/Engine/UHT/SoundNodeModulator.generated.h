// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeModulator.h"

#ifdef ENGINE_SoundNodeModulator_generated_h
#error "SoundNodeModulator.generated.h already included, missing '#pragma once' in SoundNodeModulator.h"
#endif
#define ENGINE_SoundNodeModulator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundNodeModulator ******************************************************
struct Z_Construct_UClass_USoundNodeModulator_Statics;
ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeModulator(); \
	friend struct ::Z_Construct_UClass_USoundNodeModulator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_USoundNodeModulator_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundNodeModulator, USoundNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_USoundNodeModulator_NoRegister) \
	DECLARE_SERIALIZER(USoundNodeModulator)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeModulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeModulator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeModulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeModulator); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundNodeModulator(USoundNodeModulator&&) = delete; \
	USoundNodeModulator(const USoundNodeModulator&) = delete; \
	ENGINE_API virtual ~USoundNodeModulator();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundNodeModulator;

// ********** End Class USoundNodeModulator ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeModulator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
