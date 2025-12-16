// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/MidiStutterSequence.h"

#ifdef HARMONIXMETASOUND_MidiStutterSequence_generated_h
#error "MidiStutterSequence.generated.h already included, missing '#pragma once' in MidiStutterSequence.h"
#endif
#define HARMONIXMETASOUND_MidiStutterSequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStutterSequenceEntry *********************************************
struct Z_Construct_UScriptStruct_FStutterSequenceEntry_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStutterSequence_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStutterSequenceEntry_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FStutterSequenceEntry;
// ********** End ScriptStruct FStutterSequenceEntry ***********************************************

// ********** Begin ScriptStruct FStutterSequenceTable *********************************************
struct Z_Construct_UScriptStruct_FStutterSequenceTable_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStutterSequence_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStutterSequenceTable_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FStutterSequenceTable;
// ********** End ScriptStruct FStutterSequenceTable ***********************************************

// ********** Begin Class UMidiStutterSequence *****************************************************
struct Z_Construct_UClass_UMidiStutterSequence_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UMidiStutterSequence_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStutterSequence_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMidiStutterSequence(); \
	friend struct ::Z_Construct_UClass_UMidiStutterSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UMidiStutterSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UMidiStutterSequence, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UMidiStutterSequence_NoRegister) \
	DECLARE_SERIALIZER(UMidiStutterSequence)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStutterSequence_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIXMETASOUND_API UMidiStutterSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMidiStutterSequence(UMidiStutterSequence&&) = delete; \
	UMidiStutterSequence(const UMidiStutterSequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMETASOUND_API, UMidiStutterSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMidiStutterSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMidiStutterSequence) \
	HARMONIXMETASOUND_API virtual ~UMidiStutterSequence();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStutterSequence_h_124_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStutterSequence_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStutterSequence_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStutterSequence_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMidiStutterSequence;

// ********** End Class UMidiStutterSequence *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStutterSequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
