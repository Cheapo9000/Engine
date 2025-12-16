// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Nodes/AvaPlaybackNode.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackNode_generated_h
#error "AvaPlaybackNode.generated.h already included, missing '#pragma once' in AvaPlaybackNode.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlaybackNode *********************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAvaPlaybackNode, NO_API)


struct Z_Construct_UClass_UAvaPlaybackNode_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlaybackNode_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackNode(); \
	friend struct ::Z_Construct_UClass_UAvaPlaybackNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlaybackNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlaybackNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlaybackNode_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlaybackNode) \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlaybackNode(UAvaPlaybackNode&&) = delete; \
	UAvaPlaybackNode(const UAvaPlaybackNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackNode) \
	NO_API virtual ~UAvaPlaybackNode();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_22_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlaybackNode;

// ********** End Class UAvaPlaybackNode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Public_Playback_Nodes_AvaPlaybackNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
