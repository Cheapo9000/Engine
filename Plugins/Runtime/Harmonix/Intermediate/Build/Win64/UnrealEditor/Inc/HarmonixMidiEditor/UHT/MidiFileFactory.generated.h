// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MidiFileFactory.h"

#ifdef HARMONIXMIDIEDITOR_MidiFileFactory_generated_h
#error "MidiFileFactory.generated.h already included, missing '#pragma once' in MidiFileFactory.h"
#endif
#define HARMONIXMIDIEDITOR_MidiFileFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMidiFileFactory *********************************************************
struct Z_Construct_UClass_UMidiFileFactory_Statics;
HARMONIXMIDIEDITOR_API UClass* Z_Construct_UClass_UMidiFileFactory_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidiEditor_Private_MidiFileFactory_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMidiFileFactory(); \
	friend struct ::Z_Construct_UClass_UMidiFileFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMIDIEDITOR_API UClass* ::Z_Construct_UClass_UMidiFileFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UMidiFileFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMidiEditor"), Z_Construct_UClass_UMidiFileFactory_NoRegister) \
	DECLARE_SERIALIZER(UMidiFileFactory)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidiEditor_Private_MidiFileFactory_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMidiFileFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMidiFileFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMidiFileFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMidiFileFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMidiFileFactory(UMidiFileFactory&&) = delete; \
	UMidiFileFactory(const UMidiFileFactory&) = delete; \
	NO_API virtual ~UMidiFileFactory();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidiEditor_Private_MidiFileFactory_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidiEditor_Private_MidiFileFactory_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidiEditor_Private_MidiFileFactory_h_28_INCLASS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidiEditor_Private_MidiFileFactory_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMidiFileFactory;

// ********** End Class UMidiFileFactory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidiEditor_Private_MidiFileFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
