// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/MidiStepSequence.h"

#ifdef HARMONIXMETASOUND_MidiStepSequence_generated_h
#error "MidiStepSequence.generated.h already included, missing '#pragma once' in MidiStepSequence.h"
#endif
#define HARMONIXMETASOUND_MidiStepSequence_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStepSequenceCell;
struct FStepSequenceTable;

// ********** Begin ScriptStruct FStepSequenceCell *************************************************
struct Z_Construct_UScriptStruct_FStepSequenceCell_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStepSequenceCell_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FStepSequenceCell;
// ********** End ScriptStruct FStepSequenceCell ***************************************************

// ********** Begin ScriptStruct FStepSequenceRow **************************************************
struct Z_Construct_UScriptStruct_FStepSequenceRow_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStepSequenceRow_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FStepSequenceRow;
// ********** End ScriptStruct FStepSequenceRow ****************************************************

// ********** Begin ScriptStruct FStepSequenceNote *************************************************
struct Z_Construct_UScriptStruct_FStepSequenceNote_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStepSequenceNote_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FStepSequenceNote;
// ********** End ScriptStruct FStepSequenceNote ***************************************************

// ********** Begin ScriptStruct FStepSequencePage *************************************************
struct Z_Construct_UScriptStruct_FStepSequencePage_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_98_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStepSequencePage_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FStepSequencePage;
// ********** End ScriptStruct FStepSequencePage ***************************************************

// ********** Begin ScriptStruct FStepSequenceTable ************************************************
struct Z_Construct_UScriptStruct_FStepSequenceTable_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStepSequenceTable_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FStepSequenceTable;
// ********** End ScriptStruct FStepSequenceTable **************************************************

// ********** Begin Class UMidiStepSequence ********************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_213_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStepTable); \
	DECLARE_FUNCTION(execSetStepTable); \
	DECLARE_FUNCTION(execToggleCellOnPage); \
	DECLARE_FUNCTION(execToggleCell); \
	DECLARE_FUNCTION(execGetCellOnPage); \
	DECLARE_FUNCTION(execGetCell); \
	DECLARE_FUNCTION(execSetCellContinuationOnPage); \
	DECLARE_FUNCTION(execSetCellContinuation); \
	DECLARE_FUNCTION(execSetCellOnPage); \
	DECLARE_FUNCTION(execSetCell); \
	DECLARE_FUNCTION(execSetStepSkipIndex); \
	DECLARE_FUNCTION(execSetRowVelocity); \
	DECLARE_FUNCTION(execSetRowNoteNumber); \
	DECLARE_FUNCTION(execDisableRowsAbove); \
	DECLARE_FUNCTION(execSetNumRows); \
	DECLARE_FUNCTION(execSetNumColumns); \
	DECLARE_FUNCTION(execSetNumPages);


struct Z_Construct_UClass_UMidiStepSequence_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UMidiStepSequence_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_213_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMidiStepSequence(); \
	friend struct ::Z_Construct_UClass_UMidiStepSequence_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UMidiStepSequence_NoRegister(); \
public: \
	DECLARE_CLASS2(UMidiStepSequence, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UMidiStepSequence_NoRegister) \
	DECLARE_SERIALIZER(UMidiStepSequence)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_213_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMidiStepSequence(UMidiStepSequence&&) = delete; \
	UMidiStepSequence(const UMidiStepSequence&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMETASOUND_API, UMidiStepSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMidiStepSequence); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMidiStepSequence) \
	HARMONIXMETASOUND_API virtual ~UMidiStepSequence();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_210_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_213_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_213_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMidiStepSequence;

// ********** End Class UMidiStepSequence **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiStepSequence_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
