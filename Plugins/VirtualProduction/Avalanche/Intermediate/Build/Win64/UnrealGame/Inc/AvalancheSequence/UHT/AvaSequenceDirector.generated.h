// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Director/AvaSequenceDirector.h"

#ifdef AVALANCHESEQUENCE_AvaSequenceDirector_generated_h
#error "AvaSequenceDirector.generated.h already included, missing '#pragma once' in AvaSequenceDirector.h"
#endif
#define AVALANCHESEQUENCE_AvaSequenceDirector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAvaSequencePlaybackObject;
struct FAvaSequencePlayParams;

// ********** Begin Class UAvaSequenceDirector *****************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Director_AvaSequenceDirector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlaybackObject); \
	DECLARE_FUNCTION(execPlaySequencesByLabel); \
	DECLARE_FUNCTION(execPlayScheduledSequences);


struct Z_Construct_UClass_UAvaSequenceDirector_Statics;
AVALANCHESEQUENCE_API UClass* Z_Construct_UClass_UAvaSequenceDirector_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Director_AvaSequenceDirector_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSequenceDirector(); \
	friend struct ::Z_Construct_UClass_UAvaSequenceDirector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHESEQUENCE_API UClass* ::Z_Construct_UClass_UAvaSequenceDirector_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSequenceDirector, ULevelSequenceDirector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheSequence"), Z_Construct_UClass_UAvaSequenceDirector_NoRegister) \
	DECLARE_SERIALIZER(UAvaSequenceDirector)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Director_AvaSequenceDirector_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHESEQUENCE_API UAvaSequenceDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSequenceDirector(UAvaSequenceDirector&&) = delete; \
	UAvaSequenceDirector(const UAvaSequenceDirector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHESEQUENCE_API, UAvaSequenceDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSequenceDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaSequenceDirector) \
	AVALANCHESEQUENCE_API virtual ~UAvaSequenceDirector();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Director_AvaSequenceDirector_h_15_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Director_AvaSequenceDirector_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Director_AvaSequenceDirector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Director_AvaSequenceDirector_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Director_AvaSequenceDirector_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSequenceDirector;

// ********** End Class UAvaSequenceDirector *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheSequence_Public_Director_AvaSequenceDirector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
