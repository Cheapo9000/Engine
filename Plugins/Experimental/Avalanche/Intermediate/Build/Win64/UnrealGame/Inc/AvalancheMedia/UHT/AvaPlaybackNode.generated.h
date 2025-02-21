// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Nodes/AvaPlaybackNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaPlaybackNode_generated_h
#error "AvaPlaybackNode.generated.h already included, missing '#pragma once' in AvaPlaybackNode.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackNode_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAvaPlaybackNode, NO_API)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackNode(); \
	friend struct Z_Construct_UClass_UAvaPlaybackNode_Statics; \
public: \
	DECLARE_CLASS(UAvaPlaybackNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaPlaybackNode) \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaPlaybackNode(UAvaPlaybackNode&&); \
	UAvaPlaybackNode(const UAvaPlaybackNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackNode) \
	NO_API virtual ~UAvaPlaybackNode();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaPlaybackNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
