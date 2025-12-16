// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundMod.h"

#ifdef SOUNDMOD_SoundMod_generated_h
#error "SoundMod.generated.h already included, missing '#pragma once' in SoundMod.h"
#endif
#define SOUNDMOD_SoundMod_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundMod ****************************************************************
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundMod, SOUNDMOD_API)


struct Z_Construct_UClass_USoundMod_Statics;
SOUNDMOD_API UClass* Z_Construct_UClass_USoundMod_NoRegister();

#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSoundMod(); \
	friend struct ::Z_Construct_UClass_USoundMod_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOUNDMOD_API UClass* ::Z_Construct_UClass_USoundMod_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundMod, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SoundMod"), Z_Construct_UClass_USoundMod_NoRegister) \
	DECLARE_SERIALIZER(USoundMod) \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOUNDMOD_API USoundMod(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundMod) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOUNDMOD_API, USoundMod); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundMod); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundMod(USoundMod&&) = delete; \
	USoundMod(const USoundMod&) = delete; \
	SOUNDMOD_API virtual ~USoundMod();


#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundMod;

// ********** End Class USoundMod ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Classes_SoundMod_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
