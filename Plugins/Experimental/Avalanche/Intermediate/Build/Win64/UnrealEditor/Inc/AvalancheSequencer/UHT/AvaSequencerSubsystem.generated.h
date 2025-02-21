// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSequencerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESEQUENCER_AvaSequencerSubsystem_generated_h
#error "AvaSequencerSubsystem.generated.h already included, missing '#pragma once' in AvaSequencerSubsystem.h"
#endif
#define AVALANCHESEQUENCER_AvaSequencerSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Public_AvaSequencerSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSequencerSubsystem(); \
	friend struct Z_Construct_UClass_UAvaSequencerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAvaSequencerSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheSequencer"), NO_API) \
	DECLARE_SERIALIZER(UAvaSequencerSubsystem)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Public_AvaSequencerSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaSequencerSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSequencerSubsystem(UAvaSequencerSubsystem&&); \
	UAvaSequencerSubsystem(const UAvaSequencerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaSequencerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequencerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSequencerSubsystem) \
	NO_API virtual ~UAvaSequencerSubsystem();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Public_AvaSequencerSubsystem_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Public_AvaSequencerSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Public_AvaSequencerSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Public_AvaSequencerSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESEQUENCER_API UClass* StaticClass<class UAvaSequencerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequencer_Public_AvaSequencerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
