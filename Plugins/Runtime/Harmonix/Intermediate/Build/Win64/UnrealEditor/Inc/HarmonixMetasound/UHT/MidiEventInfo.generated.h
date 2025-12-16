// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HarmonixMetasound/DataTypes/MidiEventInfo.h"

#ifdef HARMONIXMETASOUND_MidiEventInfo_generated_h
#error "MidiEventInfo.generated.h already included, missing '#pragma once' in MidiEventInfo.h"
#endif
#define HARMONIXMETASOUND_MidiEventInfo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMetaSoundOutput;
struct FMidiEventInfo;

// ********** Begin ScriptStruct FMidiEventInfo ****************************************************
struct Z_Construct_UScriptStruct_FMidiEventInfo_Statics;
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMidiEventInfo_Statics; \
	HARMONIXMETASOUND_API static class UScriptStruct* StaticStruct();


struct FMidiEventInfo;
// ********** End ScriptStruct FMidiEventInfo ******************************************************

// ********** Begin Class UMidiEventInfoBlueprintLibrary *******************************************
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execGetNoteNumber); \
	DECLARE_FUNCTION(execIsNoteOff); \
	DECLARE_FUNCTION(execIsNoteOn); \
	DECLARE_FUNCTION(execIsNote); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetMidiEventInfo); \
	DECLARE_FUNCTION(execIsMidiEventInfo);


struct Z_Construct_UClass_UMidiEventInfoBlueprintLibrary_Statics;
HARMONIXMETASOUND_API UClass* Z_Construct_UClass_UMidiEventInfoBlueprintLibrary_NoRegister();

#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMidiEventInfoBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UMidiEventInfoBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HARMONIXMETASOUND_API UClass* ::Z_Construct_UClass_UMidiEventInfoBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMidiEventInfoBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HarmonixMetasound"), Z_Construct_UClass_UMidiEventInfoBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMidiEventInfoBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMidiEventInfoBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMidiEventInfoBlueprintLibrary(UMidiEventInfoBlueprintLibrary&&) = delete; \
	UMidiEventInfoBlueprintLibrary(const UMidiEventInfoBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMidiEventInfoBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMidiEventInfoBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMidiEventInfoBlueprintLibrary) \
	NO_API virtual ~UMidiEventInfoBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h_43_PROLOG
#define FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMidiEventInfoBlueprintLibrary;

// ********** End Class UMidiEventInfoBlueprintLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Harmonix_Source_HarmonixMetasound_Public_HarmonixMetasound_DataTypes_MidiEventInfo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
