// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Nodes/AvaPlaybackNodeCombiner.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackNodeCombiner_generated_h
#error "AvaPlaybackNodeCombiner.generated.h already included, missing '#pragma once' in AvaPlaybackNodeCombiner.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackNodeCombiner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlaybackNodeCombiner *************************************************
struct Z_Construct_UClass_UAvaPlaybackNodeCombiner_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlaybackNodeCombiner_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_AvaPlaybackNodeCombiner_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackNodeCombiner(); \
	friend struct ::Z_Construct_UClass_UAvaPlaybackNodeCombiner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlaybackNodeCombiner_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlaybackNodeCombiner, UAvaPlaybackNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlaybackNodeCombiner_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlaybackNodeCombiner)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_AvaPlaybackNodeCombiner_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackNodeCombiner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlaybackNodeCombiner(UAvaPlaybackNodeCombiner&&) = delete; \
	UAvaPlaybackNodeCombiner(const UAvaPlaybackNodeCombiner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackNodeCombiner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackNodeCombiner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackNodeCombiner) \
	NO_API virtual ~UAvaPlaybackNodeCombiner();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_AvaPlaybackNodeCombiner_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_AvaPlaybackNodeCombiner_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_AvaPlaybackNodeCombiner_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_AvaPlaybackNodeCombiner_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlaybackNodeCombiner;

// ********** End Class UAvaPlaybackNodeCombiner ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_AvaPlaybackNodeCombiner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
