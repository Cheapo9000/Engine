// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Nodes/Events/Actions/AvaPlaybackNode_PlayAnim.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackNode_PlayAnim_generated_h
#error "AvaPlaybackNode_PlayAnim.generated.h already included, missing '#pragma once' in AvaPlaybackNode_PlayAnim.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackNode_PlayAnim_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlaybackNode_PlayAnim ************************************************
struct Z_Construct_UClass_UAvaPlaybackNode_PlayAnim_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlaybackNode_PlayAnim_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_Events_Actions_AvaPlaybackNode_PlayAnim_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackNode_PlayAnim(); \
	friend struct ::Z_Construct_UClass_UAvaPlaybackNode_PlayAnim_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlaybackNode_PlayAnim_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlaybackNode_PlayAnim, UAvaPlaybackNodeAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlaybackNode_PlayAnim_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlaybackNode_PlayAnim)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_Events_Actions_AvaPlaybackNode_PlayAnim_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackNode_PlayAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlaybackNode_PlayAnim(UAvaPlaybackNode_PlayAnim&&) = delete; \
	UAvaPlaybackNode_PlayAnim(const UAvaPlaybackNode_PlayAnim&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackNode_PlayAnim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackNode_PlayAnim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackNode_PlayAnim) \
	NO_API virtual ~UAvaPlaybackNode_PlayAnim();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_Events_Actions_AvaPlaybackNode_PlayAnim_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_Events_Actions_AvaPlaybackNode_PlayAnim_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_Events_Actions_AvaPlaybackNode_PlayAnim_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_Events_Actions_AvaPlaybackNode_PlayAnim_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlaybackNode_PlayAnim;

// ********** End Class UAvaPlaybackNode_PlayAnim **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Nodes_Events_Actions_AvaPlaybackNode_PlayAnim_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
