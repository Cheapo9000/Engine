// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Nodes/Events/AvaPlaybackNodeEvent.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackNodeEvent_generated_h
#error "AvaPlaybackNodeEvent.generated.h already included, missing '#pragma once' in AvaPlaybackNodeEvent.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackNodeEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlaybackNodeEvent ****************************************************
struct Z_Construct_UClass_UAvaPlaybackNodeEvent_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlaybackNodeEvent_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeEvent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackNodeEvent(); \
	friend struct ::Z_Construct_UClass_UAvaPlaybackNodeEvent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlaybackNodeEvent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlaybackNodeEvent, UAvaPlaybackNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlaybackNodeEvent_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlaybackNodeEvent)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeEvent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackNodeEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlaybackNodeEvent(UAvaPlaybackNodeEvent&&) = delete; \
	UAvaPlaybackNodeEvent(const UAvaPlaybackNodeEvent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackNodeEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackNodeEvent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackNodeEvent) \
	NO_API virtual ~UAvaPlaybackNodeEvent();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeEvent_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeEvent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeEvent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeEvent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlaybackNodeEvent;

// ********** End Class UAvaPlaybackNodeEvent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
