// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMidi/Blueprint/MidiFunctionLibrary.h"

#ifdef HARMONIXMIDI_MidiFunctionLibrary_generated_h
#error "MidiFunctionLibrary.generated.h already included, missing '#pragma once' in MidiFunctionLibrary.h"
#endif
#define HARMONIXMIDI_MidiFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMidiNote;
struct FMidiSongPos;

// ********** Begin Class UMidiNoteFunctionLibrary *************************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMaxNoteVelocity); \
	DECLARE_FUNCTION(execGetMinNoteVelocity); \
	DECLARE_FUNCTION(execGetMaxNumNotes); \
	DECLARE_FUNCTION(execGetMaxNoteNumber); \
	DECLARE_FUNCTION(execGetMinNoteNumber); \
	DECLARE_FUNCTION(execGetMaxMidiNote); \
	DECLARE_FUNCTION(execGetMinMidiNote); \
	DECLARE_FUNCTION(execMakeLiteralMidiNote); \
	DECLARE_FUNCTION(execByteToMidiNote); \
	DECLARE_FUNCTION(execMidiNoteToByte); \
	DECLARE_FUNCTION(execIntToMidiNote); \
	DECLARE_FUNCTION(execMidiNoteToInt);


struct Z_Construct_UClass_UMidiNoteFunctionLibrary_Statics;
HARMONIXMIDI_API UClass* Z_Construct_UClass_UMidiNoteFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMidiNoteFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMidiNoteFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMIDI_API UClass* ::Z_Construct_UClass_UMidiNoteFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMidiNoteFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMidi"), Z_Construct_UClass_UMidiNoteFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMidiNoteFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIXMIDI_API UMidiNoteFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMidiNoteFunctionLibrary(UMidiNoteFunctionLibrary&&) = delete; \
	UMidiNoteFunctionLibrary(const UMidiNoteFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMIDI_API, UMidiNoteFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMidiNoteFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMidiNoteFunctionLibrary) \
	HARMONIXMIDI_API virtual ~UMidiNoteFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMidiNoteFunctionLibrary;

// ********** End Class UMidiNoteFunctionLibrary ***************************************************

// ********** Begin Class UMusicalTickFunctionLibrary **********************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuarterNoteToTick); \
	DECLARE_FUNCTION(execTickToQuarterNote); \
	DECLARE_FUNCTION(execGetQuarterNotesPerTick); \
	DECLARE_FUNCTION(execGetTicksPerQuarterNoteInt); \
	DECLARE_FUNCTION(execGetTicksPerQuarterNote);


struct Z_Construct_UClass_UMusicalTickFunctionLibrary_Statics;
HARMONIXMIDI_API UClass* Z_Construct_UClass_UMusicalTickFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMusicalTickFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMusicalTickFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMIDI_API UClass* ::Z_Construct_UClass_UMusicalTickFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMusicalTickFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMidi"), Z_Construct_UClass_UMusicalTickFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMusicalTickFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIXMIDI_API UMusicalTickFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMusicalTickFunctionLibrary(UMusicalTickFunctionLibrary&&) = delete; \
	UMusicalTickFunctionLibrary(const UMusicalTickFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMIDI_API, UMusicalTickFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMusicalTickFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMusicalTickFunctionLibrary) \
	HARMONIXMIDI_API virtual ~UMusicalTickFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_65_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMusicalTickFunctionLibrary;

// ********** End Class UMusicalTickFunctionLibrary ************************************************

// ********** Begin Class UMidiSongPosFunctionLibrary **********************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeSongPosFromTime); \
	DECLARE_FUNCTION(execLerpSongPos); \
	DECLARE_FUNCTION(execIsSongPosValid);


struct Z_Construct_UClass_UMidiSongPosFunctionLibrary_Statics;
HARMONIXMIDI_API UClass* Z_Construct_UClass_UMidiSongPosFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMidiSongPosFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMidiSongPosFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMIDI_API UClass* ::Z_Construct_UClass_UMidiSongPosFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMidiSongPosFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMidi"), Z_Construct_UClass_UMidiSongPosFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMidiSongPosFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HARMONIXMIDI_API UMidiSongPosFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMidiSongPosFunctionLibrary(UMidiSongPosFunctionLibrary&&) = delete; \
	UMidiSongPosFunctionLibrary(const UMidiSongPosFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HARMONIXMIDI_API, UMidiSongPosFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMidiSongPosFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMidiSongPosFunctionLibrary) \
	HARMONIXMIDI_API virtual ~UMidiSongPosFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_91_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMidiSongPosFunctionLibrary;

// ********** End Class UMidiSongPosFunctionLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMidi_Private_HarmonixMidi_Blueprint_MidiFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
