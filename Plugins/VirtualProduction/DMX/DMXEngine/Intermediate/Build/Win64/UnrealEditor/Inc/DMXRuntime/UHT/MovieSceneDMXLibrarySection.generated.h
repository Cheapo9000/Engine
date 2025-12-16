// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneDMXLibrarySection.h"

#ifdef DMXRUNTIME_MovieSceneDMXLibrarySection_generated_h
#error "MovieSceneDMXLibrarySection.generated.h already included, missing '#pragma once' in MovieSceneDMXLibrarySection.h"
#endif
#define DMXRUNTIME_MovieSceneDMXLibrarySection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityFixturePatch;
struct FDMXEntityFixturePatchRef;

// ********** Begin ScriptStruct FDMXFixtureFunctionChannel ****************************************
struct Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXFixtureFunctionChannel;
// ********** End ScriptStruct FDMXFixtureFunctionChannel ******************************************

// ********** Begin ScriptStruct FDMXFixturePatchChannel *******************************************
struct Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics;
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


struct FDMXFixturePatchChannel;
// ********** End ScriptStruct FDMXFixturePatchChannel *********************************************

// ********** Begin Class UMovieSceneDMXLibrarySection *********************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumPatches); \
	DECLARE_FUNCTION(execGetFixturePatches); \
	DECLARE_FUNCTION(execGetFixturePatchChannelEnabled); \
	DECLARE_FUNCTION(execToggleFixturePatchChannel); \
	DECLARE_FUNCTION(execSetFixturePatchActiveMode); \
	DECLARE_FUNCTION(execContainsFixturePatch); \
	DECLARE_FUNCTION(execRemoveFixturePatch); \
	DECLARE_FUNCTION(execAddFixturePatches); \
	DECLARE_FUNCTION(execAddFixturePatch);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_148_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneDMXLibrarySection, NO_API)


struct Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics;
DMXRUNTIME_API UClass* Z_Construct_UClass_UMovieSceneDMXLibrarySection_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDMXLibrarySection(); \
	friend struct ::Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXRUNTIME_API UClass* ::Z_Construct_UClass_UMovieSceneDMXLibrarySection_NoRegister(); \
public: \
	DECLARE_CLASS2(UMovieSceneDMXLibrarySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), Z_Construct_UClass_UMovieSceneDMXLibrarySection_NoRegister) \
	DECLARE_SERIALIZER(UMovieSceneDMXLibrarySection) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_148_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_148_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMovieSceneDMXLibrarySection(UMovieSceneDMXLibrarySection&&) = delete; \
	UMovieSceneDMXLibrarySection(const UMovieSceneDMXLibrarySection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneDMXLibrarySection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDMXLibrarySection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneDMXLibrarySection) \
	NO_API virtual ~UMovieSceneDMXLibrarySection();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_142_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_148_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMovieSceneDMXLibrarySection;

// ********** End Class UMovieSceneDMXLibrarySection ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
