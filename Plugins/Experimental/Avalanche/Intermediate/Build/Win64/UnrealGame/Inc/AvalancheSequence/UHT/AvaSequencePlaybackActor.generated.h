// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AvaSequencePlaybackActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHESEQUENCE_AvaSequencePlaybackActor_generated_h
#error "AvaSequencePlaybackActor.generated.h already included, missing '#pragma once' in AvaSequencePlaybackActor.h"
#endif
#define AVALANCHESEQUENCE_AvaSequencePlaybackActor_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Private_AvaSequencePlaybackActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_PlayScheduledSequences);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Private_AvaSequencePlaybackActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvaSequencePlaybackActor(); \
	friend struct Z_Construct_UClass_AAvaSequencePlaybackActor_Statics; \
public: \
	DECLARE_CLASS(AAvaSequencePlaybackActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AvalancheSequence"), NO_API) \
	DECLARE_SERIALIZER(AAvaSequencePlaybackActor) \
	virtual UObject* _getUObject() const override { return const_cast<AAvaSequencePlaybackActor*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Private_AvaSequencePlaybackActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAvaSequencePlaybackActor(AAvaSequencePlaybackActor&&); \
	AAvaSequencePlaybackActor(const AAvaSequencePlaybackActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvaSequencePlaybackActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvaSequencePlaybackActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAvaSequencePlaybackActor) \
	NO_API virtual ~AAvaSequencePlaybackActor();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Private_AvaSequencePlaybackActor_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Private_AvaSequencePlaybackActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Private_AvaSequencePlaybackActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Private_AvaSequencePlaybackActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Private_AvaSequencePlaybackActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHESEQUENCE_API UClass* StaticClass<class AAvaSequencePlaybackActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheSequence_Private_AvaSequencePlaybackActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
