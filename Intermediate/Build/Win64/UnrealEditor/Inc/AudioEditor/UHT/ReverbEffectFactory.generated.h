// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReverbEffectFactory.h"

#ifdef AUDIOEDITOR_ReverbEffectFactory_generated_h
#error "ReverbEffectFactory.generated.h already included, missing '#pragma once' in ReverbEffectFactory.h"
#endif
#define AUDIOEDITOR_ReverbEffectFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReverbEffectFactory *****************************************************
struct Z_Construct_UClass_UReverbEffectFactory_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UReverbEffectFactory_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReverbEffectFactory_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUReverbEffectFactory(); \
	friend struct ::Z_Construct_UClass_UReverbEffectFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UReverbEffectFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReverbEffectFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UReverbEffectFactory_NoRegister) \
	DECLARE_SERIALIZER(UReverbEffectFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReverbEffectFactory_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API UReverbEffectFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReverbEffectFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, UReverbEffectFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReverbEffectFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReverbEffectFactory(UReverbEffectFactory&&) = delete; \
	UReverbEffectFactory(const UReverbEffectFactory&) = delete; \
	AUDIOEDITOR_API virtual ~UReverbEffectFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReverbEffectFactory_h_21_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReverbEffectFactory_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReverbEffectFactory_h_24_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReverbEffectFactory_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReverbEffectFactory;

// ********** End Class UReverbEffectFactory *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReverbEffectFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
