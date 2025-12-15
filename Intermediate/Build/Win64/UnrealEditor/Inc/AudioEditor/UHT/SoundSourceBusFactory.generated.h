// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/SoundSourceBusFactory.h"

#ifdef AUDIOEDITOR_SoundSourceBusFactory_generated_h
#error "SoundSourceBusFactory.generated.h already included, missing '#pragma once' in SoundSourceBusFactory.h"
#endif
#define AUDIOEDITOR_SoundSourceBusFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USoundSourceBusFactory ***************************************************
struct Z_Construct_UClass_USoundSourceBusFactory_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceBusFactory_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSourceBusFactory(); \
	friend struct ::Z_Construct_UClass_USoundSourceBusFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_USoundSourceBusFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USoundSourceBusFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_USoundSourceBusFactory_NoRegister) \
	DECLARE_SERIALIZER(USoundSourceBusFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API USoundSourceBusFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSourceBusFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, USoundSourceBusFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSourceBusFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USoundSourceBusFactory(USoundSourceBusFactory&&) = delete; \
	USoundSourceBusFactory(const USoundSourceBusFactory&) = delete; \
	AUDIOEDITOR_API virtual ~USoundSourceBusFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_19_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USoundSourceBusFactory;

// ********** End Class USoundSourceBusFactory *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
