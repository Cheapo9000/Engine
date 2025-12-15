// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ReimportSoundFactory.h"

#ifdef AUDIOEDITOR_ReimportSoundFactory_generated_h
#error "ReimportSoundFactory.generated.h already included, missing '#pragma once' in ReimportSoundFactory.h"
#endif
#define AUDIOEDITOR_ReimportSoundFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReimportSoundFactory ****************************************************
struct Z_Construct_UClass_UReimportSoundFactory_Statics;
AUDIOEDITOR_API UClass* Z_Construct_UClass_UReimportSoundFactory_NoRegister();

#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUReimportSoundFactory(); \
	friend struct ::Z_Construct_UClass_UReimportSoundFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUDIOEDITOR_API UClass* ::Z_Construct_UClass_UReimportSoundFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UReimportSoundFactory, USoundFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioEditor"), Z_Construct_UClass_UReimportSoundFactory_NoRegister) \
	DECLARE_SERIALIZER(UReimportSoundFactory)


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReimportSoundFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReimportSoundFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReimportSoundFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReimportSoundFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReimportSoundFactory(UReimportSoundFactory&&) = delete; \
	UReimportSoundFactory(const UReimportSoundFactory&) = delete; \
	NO_API virtual ~UReimportSoundFactory();


#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_22_PROLOG
#define FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_25_INCLASS \
	FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReimportSoundFactory;

// ********** End Class UReimportSoundFactory ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
