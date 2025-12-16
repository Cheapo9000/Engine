// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Nodes/AvaPlaybackNodePlayer.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackNodePlayer_generated_h
#error "AvaPlaybackNodePlayer.generated.h already included, missing '#pragma once' in AvaPlaybackNodePlayer.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackNodePlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlaybackNodePlayer ***************************************************
struct Z_Construct_UClass_UAvaPlaybackNodePlayer_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlaybackNodePlayer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNodePlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackNodePlayer(); \
	friend struct ::Z_Construct_UClass_UAvaPlaybackNodePlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlaybackNodePlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlaybackNodePlayer, UAvaPlaybackNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlaybackNodePlayer_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlaybackNodePlayer)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNodePlayer_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlaybackNodePlayer(UAvaPlaybackNodePlayer&&) = delete; \
	UAvaPlaybackNodePlayer(const UAvaPlaybackNodePlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackNodePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackNodePlayer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAvaPlaybackNodePlayer) \
	NO_API virtual ~UAvaPlaybackNodePlayer();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNodePlayer_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNodePlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNodePlayer_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNodePlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlaybackNodePlayer;

// ********** End Class UAvaPlaybackNodePlayer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNodePlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
