// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Nodes/Events/AvaPlaybackNodeAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaPlaybackNodeAction_generated_h
#error "AvaPlaybackNodeAction.generated.h already included, missing '#pragma once' in AvaPlaybackNodeAction.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackNodeAction_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeAction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackNodeAction(); \
	friend struct Z_Construct_UClass_UAvaPlaybackNodeAction_Statics; \
public: \
	DECLARE_CLASS(UAvaPlaybackNodeAction, UAvaPlaybackNodeEvent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaPlaybackNodeAction)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeAction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackNodeAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaPlaybackNodeAction(UAvaPlaybackNodeAction&&); \
	UAvaPlaybackNodeAction(const UAvaPlaybackNodeAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackNodeAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackNodeAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackNodeAction) \
	NO_API virtual ~UAvaPlaybackNodeAction();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeAction_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeAction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeAction_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeAction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaPlaybackNodeAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_Events_AvaPlaybackNodeAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
