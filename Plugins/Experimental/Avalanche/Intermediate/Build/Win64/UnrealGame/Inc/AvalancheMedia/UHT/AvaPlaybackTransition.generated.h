// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Playback/Transition/AvaPlaybackTransition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMEDIA_AvaPlaybackTransition_generated_h
#error "AvaPlaybackTransition.generated.h already included, missing '#pragma once' in AvaPlaybackTransition.h"
#endif
#define AVALANCHEMEDIA_AvaPlaybackTransition_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackTransition_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaybackTransition(); \
	friend struct Z_Construct_UClass_UAvaPlaybackTransition_Statics; \
public: \
	DECLARE_CLASS(UAvaPlaybackTransition, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheMedia"), NO_API) \
	DECLARE_SERIALIZER(UAvaPlaybackTransition) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaPlaybackTransition*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackTransition_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPlaybackTransition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaPlaybackTransition(UAvaPlaybackTransition&&); \
	UAvaPlaybackTransition(const UAvaPlaybackTransition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPlaybackTransition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaybackTransition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPlaybackTransition) \
	NO_API virtual ~UAvaPlaybackTransition();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackTransition_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackTransition_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackTransition_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackTransition_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMEDIA_API UClass* StaticClass<class UAvaPlaybackTransition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheMedia_Private_Playback_Transition_AvaPlaybackTransition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
