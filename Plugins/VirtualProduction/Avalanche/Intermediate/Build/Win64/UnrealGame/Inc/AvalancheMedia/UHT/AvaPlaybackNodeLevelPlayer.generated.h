// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Nodes/AvaPlaybackNodeLevelPlayer.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackNodeLevelPlayer_generated_h
#error "AvaPlaybackNodeLevelPlayer.generated.h already included, missing '#pragma once' in AvaPlaybackNodeLevelPlayer.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackNodeLevelPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlaybackNodeLevelPlayer **********************************************
struct Z_Construct_UClass_UAvaPlaybackNodeLevelPlayer_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlaybackNodeLevelPlayer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Internal_Playback_Nodes_AvaPlaybackNodeLevelPlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackNodeLevelPlayer(); \
	friend struct ::Z_Construct_UClass_UAvaPlaybackNodeLevelPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlaybackNodeLevelPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlaybackNodeLevelPlayer, UAvaPlaybackNodePlayer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlaybackNodeLevelPlayer_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlaybackNodeLevelPlayer)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Internal_Playback_Nodes_AvaPlaybackNodeLevelPlayer_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlaybackNodeLevelPlayer(UAvaPlaybackNodeLevelPlayer&&) = delete; \
	UAvaPlaybackNodeLevelPlayer(const UAvaPlaybackNodeLevelPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMEDIA_API, UAvaPlaybackNodeLevelPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackNodeLevelPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaPlaybackNodeLevelPlayer) \
	AVALANCHEMEDIA_API virtual ~UAvaPlaybackNodeLevelPlayer();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Internal_Playback_Nodes_AvaPlaybackNodeLevelPlayer_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Internal_Playback_Nodes_AvaPlaybackNodeLevelPlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Internal_Playback_Nodes_AvaPlaybackNodeLevelPlayer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Internal_Playback_Nodes_AvaPlaybackNodeLevelPlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlaybackNodeLevelPlayer;

// ********** End Class UAvaPlaybackNodeLevelPlayer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Internal_Playback_Nodes_AvaPlaybackNodeLevelPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
