// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/AvaPlaybackGraph.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackGraph_generated_h
#error "AvaPlaybackGraph.generated.h already included, missing '#pragma once' in AvaPlaybackGraph.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaPlaybackStopOptions : uint8;
enum class EAvaPlaybackUnloadOptions : uint8;

// ********** Begin ScriptStruct FAvaPlaybackPlayableGroup *****************************************
struct Z_Construct_UScriptStruct_FAvaPlaybackPlayableGroup_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaPlaybackPlayableGroup_Statics; \
	AVALANCHEMEDIA_API static class UScriptStruct* StaticStruct();


struct FAvaPlaybackPlayableGroup;
// ********** End ScriptStruct FAvaPlaybackPlayableGroup *******************************************

// ********** Begin Class UAvaPlaybackGraph ********************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execUnloadInstances); \
	DECLARE_FUNCTION(execLoadInstances); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


struct Z_Construct_UClass_UAvaPlaybackGraph_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlaybackGraph_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackGraph(); \
	friend struct ::Z_Construct_UClass_UAvaPlaybackGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlaybackGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlaybackGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlaybackGraph_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlaybackGraph)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlaybackGraph(UAvaPlaybackGraph&&) = delete; \
	UAvaPlaybackGraph(const UAvaPlaybackGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackGraph)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h_145_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlaybackGraph;

// ********** End Class UAvaPlaybackGraph **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_AvaPlaybackGraph_h

// ********** Begin Enum EAvaPlaybackStopOptions ***************************************************
#define FOREACH_ENUM_EAVAPLAYBACKSTOPOPTIONS(op) \
	op(EAvaPlaybackStopOptions::None) \
	op(EAvaPlaybackStopOptions::ForceImmediate) \
	op(EAvaPlaybackStopOptions::Unload) \
	op(EAvaPlaybackStopOptions::Default) 

enum class EAvaPlaybackStopOptions : uint8;
template<> struct TIsUEnumClass<EAvaPlaybackStopOptions> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlaybackStopOptions>();
// ********** End Enum EAvaPlaybackStopOptions *****************************************************

// ********** Begin Enum EAvaPlaybackUnloadOptions *************************************************
#define FOREACH_ENUM_EAVAPLAYBACKUNLOADOPTIONS(op) \
	op(EAvaPlaybackUnloadOptions::None) \
	op(EAvaPlaybackUnloadOptions::ForceImmediate) \
	op(EAvaPlaybackUnloadOptions::Default) 

enum class EAvaPlaybackUnloadOptions : uint8;
template<> struct TIsUEnumClass<EAvaPlaybackUnloadOptions> { enum { Value = true }; };
template<> AVALANCHEMEDIA_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaPlaybackUnloadOptions>();
// ********** End Enum EAvaPlaybackUnloadOptions ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
