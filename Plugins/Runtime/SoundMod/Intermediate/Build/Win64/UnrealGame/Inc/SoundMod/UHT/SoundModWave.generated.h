// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundModWave.h"

#ifdef SOUNDMOD_SoundModWave_generated_h
#error "SoundModWave.generated.h already included, missing '#pragma once' in SoundModWave.h"
#endif
#define SOUNDMOD_SoundModWave_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundModWave ************************************************************
struct Z_Construct_UClass_USoundModWave_Statics;
SOUNDMOD_API UClass* Z_Construct_UClass_USoundModWave_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSoundModWave(); \
	friend struct ::Z_Construct_UClass_USoundModWave_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDMOD_API UClass* ::Z_Construct_UClass_USoundModWave_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundModWave, USoundWaveProcedural, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoundMod"), Z_Construct_UClass_USoundModWave_NoRegister) \
	DECLARE_SERIALIZER(USoundModWave)


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundModWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundModWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundModWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundModWave); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundModWave(USoundModWave&&) = delete; \
	USoundModWave(const USoundModWave&) = delete; \
	NO_API virtual ~USoundModWave();


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundModWave;

// ********** End Class USoundModWave **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundModWave_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
