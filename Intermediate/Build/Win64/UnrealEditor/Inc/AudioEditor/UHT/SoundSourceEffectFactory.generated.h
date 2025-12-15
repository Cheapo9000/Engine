// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundSourceEffectFactory.h"

#ifdef AUDIOEDITOR_SoundSourceEffectFactory_generated_h
#error "SoundSourceEffectFactory.generated.h already included, missing '#pragma once' in SoundSourceEffectFactory.h"
#endif
#define AUDIOEDITOR_SoundSourceEffectFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundSourceEffectFactory ************************************************
struct Z_Construct_UClass_USoundSourceEffectFactory_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectFactory_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSourceEffectFactory(); \
	friend struct ::Z_Construct_UClass_USoundSourceEffectFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundSourceEffectFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSourceEffectFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundSourceEffectFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundSourceEffectFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSourceEffectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceEffectFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSourceEffectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceEffectFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSourceEffectFactory(USoundSourceEffectFactory&&) = delete; \
	USoundSourceEffectFactory(const USoundSourceEffectFactory&) = delete; \
	AUDIOEDITOR_API virtual ~USoundSourceEffectFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_19_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_22_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSourceEffectFactory;

// ********** End Class USoundSourceEffectFactory **************************************************

// ********** Begin Class USoundSourceEffectChainFactory *******************************************
struct Z_Construct_UClass_USoundSourceEffectChainFactory_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceEffectChainFactory_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSourceEffectChainFactory(); \
	friend struct ::Z_Construct_UClass_USoundSourceEffectChainFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundSourceEffectChainFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSourceEffectChainFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundSourceEffectChainFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundSourceEffectChainFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSourceEffectChainFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceEffectChainFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSourceEffectChainFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceEffectChainFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSourceEffectChainFactory(USoundSourceEffectChainFactory&&) = delete; \
	USoundSourceEffectChainFactory(const USoundSourceEffectChainFactory&) = delete; \
	AUDIOEDITOR_API virtual ~USoundSourceEffectChainFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_35_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_38_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSourceEffectChainFactory;

// ********** End Class USoundSourceEffectChainFactory *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceEffectFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
