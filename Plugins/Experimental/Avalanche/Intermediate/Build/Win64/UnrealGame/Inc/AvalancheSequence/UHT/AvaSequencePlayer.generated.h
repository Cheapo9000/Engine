// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSequencePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESEQUENCE_AvaSequencePlayer_generated_h
#error "AvaSequencePlayer.generated.h already included, missing '#pragma once' in AvaSequencePlayer.h"
#endif
#define AVALANCHESEQUENCE_AvaSequencePlayer_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifySequencePaused);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlayer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSequencePlayer(); \
	friend struct Z_Construct_UClass_UAvaSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UAvaSequencePlayer, ULevelSequencePlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AvalancheSequence"), NO_API) \
	DECLARE_SERIALIZER(UAvaSequencePlayer)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSequencePlayer(UAvaSequencePlayer&&); \
	UAvaSequencePlayer(const UAvaSequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaSequencePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSequencePlayer) \
	NO_API virtual ~UAvaSequencePlayer();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlayer_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlayer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlayer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlayer_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlayer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESEQUENCE_API UClass* StaticClass<class UAvaSequencePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Public_AvaSequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
