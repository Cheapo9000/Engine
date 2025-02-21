// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Nodes/Events/AvaPlaybackNodeFlow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaPlaybackNodeFlow_generated_h
#error "AvaPlaybackNodeFlow.generated.h already included, missing '#pragma once' in AvaPlaybackNodeFlow.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackNodeFlow_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeFlow_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackNodeFlow(); \
	friend struct Z_Construct_UClass_UAvaPlaybackNodeFlow_Statics; \
public: \
	DECLARE_CLASS(UAvaPlaybackNodeFlow, UAvaPlaybackNodeEvent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaPlaybackNodeFlow)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeFlow_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackNodeFlow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaPlaybackNodeFlow(UAvaPlaybackNodeFlow&&); \
	UAvaPlaybackNodeFlow(const UAvaPlaybackNodeFlow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackNodeFlow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackNodeFlow); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackNodeFlow) \
	NO_API virtual ~UAvaPlaybackNodeFlow();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeFlow_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeFlow_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeFlow_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeFlow_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaPlaybackNodeFlow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeFlow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
