// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Graph/AvaPlaybackEditorGraph.h"

#ifdef AVALANCHEMEDIAEDITOR_AvaPlaybackEditorGraph_generated_h
#error "AvaPlaybackEditorGraph.generated.h already included, missing '#pragma once' in AvaPlaybackEditorGraph.h"
#endif
#define AVALANCHEMEDIAEDITOR_AvaPlaybackEditorGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlaybackEditorGraph **************************************************
struct Z_Construct_UClass_UAvaPlaybackEditorGraph_Statics;
AVALANCHEMEDIAEDITOR_API UClass* Z_Construct_UClass_UAvaPlaybackEditorGraph_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Private_Playback_Graph_AvaPlaybackEditorGraph_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackEditorGraph(); \
	friend struct ::Z_Construct_UClass_UAvaPlaybackEditorGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIAEDITOR_API UClass* ::Z_Construct_UClass_UAvaPlaybackEditorGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlaybackEditorGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMediaEditor"), Z_Construct_UClass_UAvaPlaybackEditorGraph_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlaybackEditorGraph)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Private_Playback_Graph_AvaPlaybackEditorGraph_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackEditorGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlaybackEditorGraph(UAvaPlaybackEditorGraph&&) = delete; \
	UAvaPlaybackEditorGraph(const UAvaPlaybackEditorGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackEditorGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackEditorGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackEditorGraph) \
	NO_API virtual ~UAvaPlaybackEditorGraph();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Private_Playback_Graph_AvaPlaybackEditorGraph_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Private_Playback_Graph_AvaPlaybackEditorGraph_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Private_Playback_Graph_AvaPlaybackEditorGraph_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Private_Playback_Graph_AvaPlaybackEditorGraph_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlaybackEditorGraph;

// ********** End Class UAvaPlaybackEditorGraph ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMediaEditor_Private_Playback_Graph_AvaPlaybackEditorGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
