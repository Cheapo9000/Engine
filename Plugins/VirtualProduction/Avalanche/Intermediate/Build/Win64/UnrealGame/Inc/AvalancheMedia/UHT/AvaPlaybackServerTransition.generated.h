// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Transition/AvaPlaybackServerTransition.h"

#ifdef AVALANCHEMEDIA_AvaPlaybackServerTransition_generated_h
#error "AvaPlaybackServerTransition.generated.h already included, missing '#pragma once' in AvaPlaybackServerTransition.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackServerTransition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAvaPlaybackServerTransition *********************************************
struct Z_Construct_UClass_UAvaPlaybackServerTransition_Statics;
AVALANCHEMEDIA_API UClass* Z_Construct_UClass_UAvaPlaybackServerTransition_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackServerTransition_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackServerTransition(); \
	friend struct ::Z_Construct_UClass_UAvaPlaybackServerTransition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMEDIA_API UClass* ::Z_Construct_UClass_UAvaPlaybackServerTransition_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPlaybackServerTransition, UAvaPlaybackTransition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), Z_Construct_UClass_UAvaPlaybackServerTransition_NoRegister) \
	DECLARE_SERIALIZER(UAvaPlaybackServerTransition)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackServerTransition_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackServerTransition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPlaybackServerTransition(UAvaPlaybackServerTransition&&) = delete; \
	UAvaPlaybackServerTransition(const UAvaPlaybackServerTransition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackServerTransition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackServerTransition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackServerTransition) \
	NO_API virtual ~UAvaPlaybackServerTransition();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackServerTransition_h_28_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackServerTransition_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackServerTransition_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackServerTransition_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPlaybackServerTransition;

// ********** End Class UAvaPlaybackServerTransition ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackServerTransition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
