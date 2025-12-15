// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/AudioBusFactory.h"

#ifdef AUDIOEDITOR_AudioBusFactory_generated_h
#error "AudioBusFactory.generated.h already included, missing '#pragma once' in AudioBusFactory.h"
#endif
#define AUDIOEDITOR_AudioBusFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAudioBusFactory *********************************************************
struct Z_Construct_UClass_UAudioBusFactory_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UAudioBusFactory_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAudioBusFactory(); \
	friend struct ::Z_Construct_UClass_UAudioBusFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UAudioBusFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UAudioBusFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UAudioBusFactory_NoRegister) \
	DECLARE_SERIALIZER(UAudioBusFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEDITOR_API UAudioBusFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioBusFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEDITOR_API, UAudioBusFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioBusFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAudioBusFactory(UAudioBusFactory&&) = delete; \
	UAudioBusFactory(const UAudioBusFactory&) = delete; \
	AUDIOEDITOR_API virtual ~UAudioBusFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_19_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAudioBusFactory;

// ********** End Class UAudioBusFactory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
