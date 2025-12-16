// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMidi/MidiFile.h"

#ifdef HARMONIXMIDI_MidiFile_generated_h
#error "MidiFile.generated.h already included, missing '#pragma once' in MidiFile.h"
#endif
#define HARMONIXMIDI_MidiFile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMidiFileData *****************************************************
struct Z_Construct_UScriptStruct_FMidiFileData_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MidiFile_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMidiFileData_Statics; \
	HARMONIXMIDI_API static class UScriptStruct* StaticStruct();


struct FMidiFileData;
// ********** End ScriptStruct FMidiFileData *******************************************************

// ********** Begin Class UMidiFile ****************************************************************
struct Z_Construct_UClass_UMidiFile_Statics;
HARMONIXMIDI_API UClass* Z_Construct_UClass_UMidiFile_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MidiFile_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMidiFile(); \
	friend struct ::Z_Construct_UClass_UMidiFile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMIDI_API UClass* ::Z_Construct_UClass_UMidiFile_NoRegister(); \
public: \
	DECLARE_CLASS2(UMidiFile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMidi"), Z_Construct_UClass_UMidiFile_NoRegister) \
	DECLARE_SERIALIZER(UMidiFile) \
	virtual UObject* _getUObject() const override { return const_cast<UMidiFile*>(this); }


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MidiFile_h_121_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMidiFile(UMidiFile&&) = delete; \
	UMidiFile(const UMidiFile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMIDI_API, UMidiFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMidiFile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMidiFile) \
	HARMONIXMIDI_API virtual ~UMidiFile();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MidiFile_h_118_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MidiFile_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MidiFile_h_121_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MidiFile_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMidiFile;

// ********** End Class UMidiFile ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Public_HarmonixMidi_MidiFile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
